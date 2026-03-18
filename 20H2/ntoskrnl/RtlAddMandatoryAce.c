/*
 * XREFs of RtlAddMandatoryAce @ 0x1406053F0
 * Callers:
 *     ObpVerifyAccessToBoundaryEntry @ 0x1405D7CC0 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1405D9708 (IopCreateSecurityDescriptorPerType.c)
 *     RtlpNewSecurityObject @ 0x140602BE0 (RtlpNewSecurityObject.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140774FD8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     SepInitSystemDacls @ 0x140A684D0 (SepInitSystemDacls.c)
 *     ExpKeyedEventInitialization @ 0x140A7236C (ExpKeyedEventInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     RtlFirstFreeAce @ 0x140605550 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x140606290 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1406063F0 (RtlValidSid.c)
 */

__int64 __fastcall RtlAddMandatoryAce(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  int v9; // eax
  char v10; // di
  __int64 v11; // r9
  unsigned __int16 v12; // dx
  __int64 result; // rax
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+28h] [rbp-30h]
  unsigned __int16 v16; // [rsp+2Ch] [rbp-2Ch]

  v14 = 0LL;
  v15 = 0;
  v16 = 4096;
  if ( !a1 )
    return 3221225591LL;
  if ( !RtlValidSid((PSID)a4) )
    return 3221225592LL;
  v9 = *(_DWORD *)(a4 + 2) - v15;
  if ( !v9 )
    v9 = *(unsigned __int16 *)(a4 + 6) - v16;
  if ( v9 )
    return 3221225485LL;
  v10 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 > 4u )
    return 3221225561LL;
  if ( (unsigned __int8)v10 <= 2u )
    v10 = 2;
  if ( (a3 & 0xFFFFFFE0) != 0 || (a6 & 0xFFFFFFF8) != 0 )
    return 3221225485LL;
  if ( !(unsigned __int8)RtlValidAcl(a1) || !(unsigned __int8)RtlFirstFreeAce(a1, &v14) )
    return 3221225591LL;
  v11 = v14;
  v12 = 4 * (*(unsigned __int8 *)(a4 + 1) + 4);
  if ( !v14 || v14 + (unsigned __int64)v12 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_WORD *)(v14 + 2) = v12;
  *(_BYTE *)(v11 + 1) = a3;
  *(_BYTE *)v11 = 17;
  *(_DWORD *)(v11 + 4) = a6;
  memmove((void *)(v11 + 8), (const void *)a4, 4LL * *(unsigned __int8 *)(a4 + 1) + 8);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = v10;
  return result;
}
