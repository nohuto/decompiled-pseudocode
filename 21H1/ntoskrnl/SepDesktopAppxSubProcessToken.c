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

__int64 __fastcall SepDesktopAppxSubProcessToken(__int64 a1, __int64 a2, char a3, _BYTE *a4, _BYTE *a5)
{
  char v7; // r15
  int PackageClaims; // ebx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rsi
  _KPROCESS *Process; // rdx
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  signed __int32 v21[8]; // [rsp+0h] [rbp-100h] BYREF
  GUID *v22; // [rsp+28h] [rbp-D8h]
  __int64 *v23; // [rsp+30h] [rbp-D0h]
  __int64 v24; // [rsp+38h] [rbp-C8h]
  char v25; // [rsp+40h] [rbp-C0h] BYREF
  char v26; // [rsp+41h] [rbp-BFh] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+54h] [rbp-ACh] BYREF
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  int v31; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  _BYTE *v34; // [rsp+70h] [rbp-90h]
  _DWORD v35[2]; // [rsp+78h] [rbp-88h] BYREF
  int *v36; // [rsp+80h] [rbp-80h]
  int v37[6]; // [rsp+88h] [rbp-78h] BYREF
  int v38; // [rsp+A0h] [rbp-60h] BYREF
  const WCHAR *v39; // [rsp+A8h] [rbp-58h]
  __int128 v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+C0h] [rbp-40h]
  int v42; // [rsp+C8h] [rbp-38h]
  const wchar_t *v43; // [rsp+D0h] [rbp-30h]
  __int128 v44; // [rsp+D8h] [rbp-28h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  int v46; // [rsp+F0h] [rbp-10h]
  const wchar_t *v47; // [rsp+F8h] [rbp-8h]
  __int128 v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+110h] [rbp+10h]

  v34 = a4;
  v24 = 0LL;
  *a4 = 0;
  v23 = &v27;
  v39 = L"WIN://SYSAPPID";
  v32 = a2;
  v41 = 0LL;
  v22 = 0LL;
  v43 = L"WIN://PKG";
  v27 = 0LL;
  v45 = 0LL;
  v33 = 0LL;
  v47 = L"WIN://PKGHOSTID";
  v7 = 0;
  v25 = 0;
  v49 = 0LL;
  v38 = 1966108;
  v40 = 0LL;
  v42 = 1310738;
  v44 = 0LL;
  v46 = 2097182;
  v48 = 0LL;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v26 = 0;
  *a5 = 0;
  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, v22, (int)v23, v24);
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
  v10 = v27;
  if ( (v27 & 4) == 0 )
  {
    if ( (v27 & 0x10000) != 0 )
      goto LABEL_20;
    v16 = PsReferenceEffectiveToken(
            (unsigned int)KeGetCurrentThread(),
            (unsigned int)&v31,
            (unsigned int)&v26,
            (unsigned int)&v32,
            0LL);
    PackageClaims = RtlQueryPackageClaims(v16, 0LL, 0LL, 0LL, 0LL, 0LL, (int)&v33, 0LL);
    if ( PackageClaims < 0 )
    {
      if ( !(unsigned int)Feature_Servicing_2102c_29269619__private_IsEnabled() )
      {
        if ( PackageClaims == -1073741275 )
          PackageClaims = 0;
LABEL_38:
        if ( v16 )
        {
          if ( v31 == 1 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            _m_prefetchw(&Process[1].Affinity.Bitmap[5]);
            v18 = Process[1].Affinity.Bitmap[5];
            while ( (v16 ^ v18) < 0xF )
            {
              v19 = v18;
              v18 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)&Process[1].Affinity.Bitmap[5],
                      v18 + 1,
                      v18);
              if ( v19 == v18 )
                return (unsigned int)PackageClaims;
            }
            HalPutDmaAdapter((PADAPTER_OBJECT)v16);
          }
          else
          {
            ObfDereferenceObjectWithTag((PVOID)v16, 0x746C6644u);
          }
        }
        return (unsigned int)PackageClaims;
      }
      if ( PackageClaims != -1073741275 )
        goto LABEL_38;
      PackageClaims = 0;
    }
    if ( (v33 & 0x10004) != 0 )
      *v34 = 1;
    goto LABEL_38;
  }
  if ( (a3 & 3) == 3 )
    return (unsigned int)-1073741811;
  if ( (a3 & 1) != 0 && (v27 & 0x20) != 0 )
  {
    PackageClaims = SepDesktopAppModifyTokenBreakaway(a1, &v27, 0LL);
    if ( PackageClaims < 0 )
      return (unsigned int)PackageClaims;
    v10 = v27;
  }
  v11 = 2LL;
  if ( (a3 & 6) != 0 || (v10 & 0x20) != 0 )
  {
    if ( (a3 & 2) != 0 && (v10 & 0x20) == 0 )
    {
      LOBYTE(v9) = 1;
      PackageClaims = SepDesktopAppModifyTokenBreakaway(a1, &v27, v9);
      if ( PackageClaims < 0 )
        return (unsigned int)PackageClaims;
    }
    if ( (unsigned __int8)SepVerifyDesktopAppPolicyOverrideCaller(a1, v11) )
    {
LABEL_20:
      *a5 = 1;
      return (unsigned int)PackageClaims;
    }
    v10 = v27;
  }
  if ( BYTE4(v27) == 3 && (v10 & 0x22000) == 0 )
  {
    v7 = 1;
    if ( (int)ZwQueryLicenseValue(a02, &v28, &v30, 4LL, &v29) >= 0 && v28 == 4 && v29 == 4 )
      v7 = v30 != 1;
  }
  PackageClaims = SepVerifyDesktopAppxImage(v32, a1, v7, &v25);
  if ( PackageClaims >= 0 )
  {
    if ( !v25 )
    {
      LOWORD(v40) = 3;
      LOWORD(v44) = 2;
      LOWORD(v48) = 2;
      DWORD2(v40) = 0;
      DWORD2(v44) = 0;
      DWORD2(v48) = 0;
      v36 = &v38;
      CurrentThread = KeGetCurrentThread();
      v37[0] = 3;
      v37[1] = 3;
      v37[2] = 3;
      --CurrentThread->KernelApcDisable;
      v35[0] = 1;
      v35[1] = 3;
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
      _InterlockedOr(v21, 0);
      PackageClaims = AuthzBasepSetSecurityAttributesToken(*(_DWORD **)(a1 + 776), v37, (__int64)v35);
      *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v21, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
      *v34 = 1;
      return (unsigned int)PackageClaims;
    }
    goto LABEL_20;
  }
  return (unsigned int)PackageClaims;
}
