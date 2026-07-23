/*
 * XREFs of SepVerifyDesktopAppPolicyOverrideCaller @ 0x140590F80
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140269A78 (SepDesktopAppxSubProcessToken.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     RtlQueryPackageClaims @ 0x14026A160 (RtlQueryPackageClaims.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     RtlCompareUnicodeString @ 0x1405E66D0 (RtlCompareUnicodeString.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     PsReferenceEffectiveToken @ 0x140681A50 (PsReferenceEffectiveToken.c)
 */

char __fastcall SepVerifyDesktopAppPolicyOverrideCaller(HANDLE TokenHandle)
{
  bool v2; // si
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned __int64 v4; // rbx
  _KPROCESS *Process; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  char v9; // [rsp+48h] [rbp-C0h] BYREF
  int v10; // [rsp+4Ch] [rbp-BCh] BYREF
  _PS_PKG_CLAIM PkgClaim; // [rsp+50h] [rbp-B8h] BYREF
  ULONG_PTR PackageSize; // [rsp+58h] [rbp-B0h] BYREF
  ULONG_PTR v13; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING v14; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING String1_8; // [rsp+78h] [rbp-90h] BYREF
  char v16; // [rsp+88h] [rbp-80h] BYREF
  WCHAR PackageFullName[128]; // [rsp+98h] [rbp-70h] BYREF
  WCHAR v18[128]; // [rsp+198h] [rbp+90h] BYREF

  PkgClaim = 0LL;
  v10 = 0;
  v13 = 256LL;
  PackageSize = 256LL;
  v2 = 0;
  v9 = 0;
  v14 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  String1_8 = 0LL;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return 1;
  if ( RtlQueryPackageClaims(TokenHandle, PackageFullName, &PackageSize, 0LL, 0LL, 0LL, 0LL, 0LL) >= 0 )
  {
    v4 = PsReferenceEffectiveToken(
           (unsigned int)KeGetCurrentThread(),
           (unsigned int)&v10,
           (unsigned int)&v9,
           (unsigned int)&v16,
           0LL);
    if ( RtlQueryPackageClaims((HANDLE)v4, v18, &v13, 0LL, 0LL, 0LL, &PkgClaim, 0LL) >= 0 && (PkgClaim.Flags & 4) != 0 )
    {
      String1_8.Length = PackageSize - 2;
      String1_8.MaximumLength = PackageSize - 2;
      String1_8.Buffer = PackageFullName;
      v14.Length = v13 - 2;
      v14.MaximumLength = v13 - 2;
      v14.Buffer = v18;
      v2 = RtlCompareUnicodeString(&String1_8, &v14, 0) == 0;
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
