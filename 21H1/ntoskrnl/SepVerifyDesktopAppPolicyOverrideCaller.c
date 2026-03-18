/*
 * XREFs of SepVerifyDesktopAppPolicyOverrideCaller @ 0x140590890
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140339778 (SepDesktopAppxSubProcessToken.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     RtlQueryPackageClaims @ 0x1402E65A0 (RtlQueryPackageClaims.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     PsReferenceEffectiveToken @ 0x140609900 (PsReferenceEffectiveToken.c)
 *     RtlCompareUnicodeString @ 0x14061BCF0 (RtlCompareUnicodeString.c)
 */

char __fastcall SepVerifyDesktopAppPolicyOverrideCaller(int a1)
{
  bool v2; // si
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned __int64 v4; // rbx
  _KPROCESS *Process; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  char v9; // [rsp+48h] [rbp-C0h] BYREF
  int v10; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v11; // [rsp+50h] [rbp-B8h] BYREF
  size_t v12; // [rsp+58h] [rbp-B0h] BYREF
  size_t String2; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING String2_8; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING String1_8; // [rsp+78h] [rbp-90h] BYREF
  char v16; // [rsp+88h] [rbp-80h] BYREF
  wchar_t v17[128]; // [rsp+98h] [rbp-70h] BYREF
  wchar_t v18[128]; // [rsp+198h] [rbp+90h] BYREF

  v11 = 0LL;
  v10 = 0;
  String2 = 256LL;
  v12 = 256LL;
  v2 = 0;
  v9 = 0;
  String2_8 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  String1_8 = 0LL;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return 1;
  if ( RtlQueryPackageClaims(a1, v17, &v12, 0LL, 0LL, 0LL, 0, 0LL) >= 0 )
  {
    v4 = PsReferenceEffectiveToken(
           (unsigned int)KeGetCurrentThread(),
           (unsigned int)&v10,
           (unsigned int)&v9,
           (unsigned int)&v16,
           0LL);
    if ( RtlQueryPackageClaims(v4, v18, &String2, 0LL, 0LL, 0LL, (int)&v11, 0LL) >= 0 && (v11 & 4) != 0 )
    {
      String1_8.Length = v12 - 2;
      String1_8.MaximumLength = v12 - 2;
      String1_8.Buffer = v17;
      String2_8.Length = String2 - 2;
      String2_8.MaximumLength = String2 - 2;
      String2_8.Buffer = v18;
      v2 = RtlCompareUnicodeString(&String1_8, &String2_8, 0) == 0;
    }
    if ( v4 )
    {
      if ( v10 == 1 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        _m_prefetchw(&Process[1].Affinity.Bitmap[5]);
        v6 = Process[1].Affinity.Bitmap[5];
        while ( (v4 ^ v6) < 0xF )
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[5], v6 + 1, v6);
          if ( v7 == v6 )
            return v2;
        }
        HalPutDmaAdapter((PADAPTER_OBJECT)v4);
      }
      else
      {
        ObfDereferenceObjectWithTag((PVOID)v4, 0x746C6644u);
      }
    }
  }
  return v2;
}
