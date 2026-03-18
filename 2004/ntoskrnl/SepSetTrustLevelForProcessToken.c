/*
 * XREFs of SepSetTrustLevelForProcessToken @ 0x140269868
 * Callers:
 *     SeSubProcessToken @ 0x140613E54 (SeSubProcessToken.c)
 *     SeExchangePrimaryToken @ 0x1407A5F18 (SeExchangePrimaryToken.c)
 * Callees:
 *     SepSidFromProcessProtection @ 0x140296140 (SepSidFromProcessProtection.c)
 *     RtlEqualSid @ 0x140298E50 (RtlEqualSid.c)
 *     SepSetTokenTrust @ 0x140667740 (SepSetTokenTrust.c)
 */

__int64 __fastcall SepSetTrustLevelForProcessToken(__int64 a1, __int64 a2, _BYTE *a3)
{
  void *v5; // rax
  void *v6; // rcx
  void *v7; // rbx
  __int64 result; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = *(_BYTE *)(a2 + 2170);
  *a3 = 0;
  v5 = (void *)SepSidFromProcessProtection(&v9);
  v6 = *(void **)(a1 + 1104);
  v7 = v5;
  if ( v6 )
  {
    if ( v5 && RtlEqualSid(v6, v5) )
      return 0LL;
  }
  else if ( !v5 )
  {
    return 0LL;
  }
  result = SepSetTokenTrust(a1, v7);
  if ( (int)result >= 0 )
    *a3 = 1;
  return result;
}
