/*
 * XREFs of SepDesktopAppxSubProcessToken @ 0x140339778
 * Callers:
 *     SeSubProcessToken @ 0x1406F7240 (SeSubProcessToken.c)
 * Callees:
 *     SepVerifyDesktopAppxImage @ 0x140201394 (SepVerifyDesktopAppxImage.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     RtlQueryPackageClaims @ 0x1402E65A0 (RtlQueryPackageClaims.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140338294 (AuthzBasepSetSecurityAttributesToken.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     Feature_Servicing_2102c_29269619__private_IsEnabled @ 0x1403F15F0 (Feature_Servicing_2102c_29269619__private_IsEnabled.c)
 *     ZwQueryLicenseValue @ 0x1403F4D90 (ZwQueryLicenseValue.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x140590804 (SepDesktopAppModifyTokenBreakaway.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140590890 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     PsReferenceEffectiveToken @ 0x140609900 (PsReferenceEffectiveToken.c)
 */

__int64 __fastcall SepDesktopAppxSubProcessToken(PERESOURCE *TokenHandle, __int64 a2, char a3, _BYTE *a4, _BYTE *a5)
{
  char v7; // r15
  int PackageClaims; // ebx
  __int64 v9; // r8
  ULONG Flags; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rsi
  _KPROCESS *Process; // rdx
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  signed __int32 v20[8]; // [rsp+0h] [rbp-100h] BYREF
  PGUID DynamicId; // [rsp+28h] [rbp-D8h]
  PPS_PKG_CLAIM PkgClaim; // [rsp+30h] [rbp-D0h]
  PULONG64 AttributesPresent; // [rsp+38h] [rbp-C8h]
  char v24; // [rsp+40h] [rbp-C0h] BYREF
  char v25; // [rsp+41h] [rbp-BFh] BYREF
  _PS_PKG_CLAIM v26; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Type; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultDataSize; // [rsp+54h] [rbp-ACh] BYREF
  int Data; // [rsp+58h] [rbp-A8h] BYREF
  int v30; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  _PS_PKG_CLAIM v32; // [rsp+68h] [rbp-98h] BYREF
  _BYTE *v33; // [rsp+70h] [rbp-90h]
  _DWORD v34[2]; // [rsp+78h] [rbp-88h] BYREF
  int *v35; // [rsp+80h] [rbp-80h]
  int v36[6]; // [rsp+88h] [rbp-78h] BYREF
  int v37; // [rsp+A0h] [rbp-60h] BYREF
  const WCHAR *v38; // [rsp+A8h] [rbp-58h]
  __int128 v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C8h] [rbp-38h]
  const wchar_t *v42; // [rsp+D0h] [rbp-30h]
  __int128 v43; // [rsp+D8h] [rbp-28h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  int v45; // [rsp+F0h] [rbp-10h]
  const wchar_t *v46; // [rsp+F8h] [rbp-8h]
  __int128 v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+110h] [rbp+10h]

  v33 = a4;
  AttributesPresent = 0LL;
  *a4 = 0;
  PkgClaim = &v26;
  v38 = L"WIN://SYSAPPID";
  v31 = a2;
  v40 = 0LL;
  DynamicId = 0LL;
  v42 = L"WIN://PKG";
  v26 = 0LL;
  v44 = 0LL;
  v32 = 0LL;
  v46 = L"WIN://PKGHOSTID";
  v7 = 0;
  v24 = 0;
  v48 = 0LL;
  v37 = 1966108;
  v39 = 0LL;
  v41 = 1310738;
  v43 = 0LL;
  v45 = 2097182;
  v47 = 0LL;
  Type = 0;
  ResultDataSize = 0;
  Data = 0;
  v30 = 0;
  v25 = 0;
  *a5 = 0;
  PackageClaims = RtlQueryPackageClaims(TokenHandle, 0LL, 0LL, 0LL, 0LL, DynamicId, PkgClaim, AttributesPresent);
  if ( PackageClaims < 0 )
  {
    if ( !(unsigned int)Feature_Servicing_2102c_29269619__private_IsEnabled() )
    {
      if ( PackageClaims == -1073741275 )
        return 0;
      return (unsigned int)PackageClaims;
    }
    if ( PackageClaims != -1073741275 )
      return (unsigned int)PackageClaims;
    PackageClaims = 0;
  }
  Flags = v26.Flags;
  if ( (v26.Flags & 4) == 0 )
  {
    if ( (v26.Flags & 0x10000) != 0 )
      goto LABEL_20;
    v15 = PsReferenceEffectiveToken(
            (unsigned int)KeGetCurrentThread(),
            (unsigned int)&v30,
            (unsigned int)&v25,
            (unsigned int)&v31,
            0LL);
    PackageClaims = RtlQueryPackageClaims((HANDLE)v15, 0LL, 0LL, 0LL, 0LL, 0LL, &v32, 0LL);
    if ( PackageClaims < 0 )
    {
      if ( !(unsigned int)Feature_Servicing_2102c_29269619__private_IsEnabled() )
      {
        if ( PackageClaims == -1073741275 )
          PackageClaims = 0;
LABEL_38:
        if ( v15 )
        {
          if ( v30 == 1 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            _m_prefetchw(&Process[1].Affinity.Bitmap[5]);
            v17 = Process[1].Affinity.Bitmap[5];
            while ( (v15 ^ v17) < 0xF )
            {
              v18 = v17;
              v17 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)&Process[1].Affinity.Bitmap[5],
                      v17 + 1,
                      v17);
              if ( v18 == v17 )
                return (unsigned int)PackageClaims;
            }
            HalPutDmaAdapter((PADAPTER_OBJECT)v15);
          }
          else
          {
            ObfDereferenceObjectWithTag((PVOID)v15, 0x746C6644u);
          }
        }
        return (unsigned int)PackageClaims;
      }
      if ( PackageClaims != -1073741275 )
        goto LABEL_38;
      PackageClaims = 0;
    }
    if ( (v32.Flags & 0x10004) != 0 )
      *v33 = 1;
    goto LABEL_38;
  }
  if ( (a3 & 3) == 3 )
    return (unsigned int)-1073741811;
  if ( (a3 & 1) != 0 && (v26.Flags & 0x20) != 0 )
  {
    PackageClaims = SepDesktopAppModifyTokenBreakaway(TokenHandle, &v26, 0LL);
    if ( PackageClaims < 0 )
      return (unsigned int)PackageClaims;
    Flags = v26.Flags;
  }
  if ( (a3 & 6) != 0 || (Flags & 0x20) != 0 )
  {
    if ( (a3 & 2) != 0 && (Flags & 0x20) == 0 )
    {
      LOBYTE(v9) = 1;
      PackageClaims = SepDesktopAppModifyTokenBreakaway(TokenHandle, &v26, v9);
      if ( PackageClaims < 0 )
        return (unsigned int)PackageClaims;
    }
    if ( (unsigned __int8)SepVerifyDesktopAppPolicyOverrideCaller(TokenHandle) )
    {
LABEL_20:
      *a5 = 1;
      return (unsigned int)PackageClaims;
    }
    Flags = v26.Flags;
  }
  if ( LOBYTE(v26.Origin) == 3 && (Flags & 0x22000) == 0 )
  {
    v7 = 1;
    if ( ZwQueryLicenseValue(&stru_140C01AE8, &Type, &Data, 4u, &ResultDataSize) >= 0
      && Type == 4
      && ResultDataSize == 4 )
    {
      v7 = Data != 1;
    }
  }
  PackageClaims = SepVerifyDesktopAppxImage(v31, (__int64)TokenHandle, v7, &v24);
  if ( PackageClaims >= 0 )
  {
    if ( !v24 )
    {
      LOWORD(v39) = 3;
      LOWORD(v43) = 2;
      LOWORD(v47) = 2;
      DWORD2(v39) = 0;
      DWORD2(v43) = 0;
      DWORD2(v47) = 0;
      v35 = &v37;
      CurrentThread = KeGetCurrentThread();
      v36[0] = 3;
      v36[1] = 3;
      v36[2] = 3;
      --CurrentThread->KernelApcDisable;
      v34[0] = 1;
      v34[1] = 3;
      ExAcquireResourceExclusiveLite(TokenHandle[6], 1u);
      _InterlockedOr(v20, 0);
      PackageClaims = AuthzBasepSetSecurityAttributesToken(TokenHandle[97], v36, (__int64)v34);
      TokenHandle[7] = (PERESOURCE)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
      _InterlockedOr(v20, 0);
      ExReleaseResourceLite(TokenHandle[6]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
      *v33 = 1;
      return (unsigned int)PackageClaims;
    }
    goto LABEL_20;
  }
  return (unsigned int)PackageClaims;
}
