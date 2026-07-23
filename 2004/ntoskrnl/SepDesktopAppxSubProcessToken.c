/*
 * XREFs of SepDesktopAppxSubProcessToken @ 0x140269A78
 * Callers:
 *     SeSubProcessToken @ 0x140613E54 (SeSubProcessToken.c)
 * Callees:
 *     SepVerifyDesktopAppxImage @ 0x140201394 (SepVerifyDesktopAppxImage.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140268590 (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlQueryPackageClaims @ 0x14026A160 (RtlQueryPackageClaims.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1403F6020 (ZwQueryLicenseValue.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x140590EF4 (SepDesktopAppModifyTokenBreakaway.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140590F80 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     PsReferenceEffectiveToken @ 0x140681A50 (PsReferenceEffectiveToken.c)
 */

__int64 __fastcall SepDesktopAppxSubProcessToken(__int64 TokenHandle, __int64 a2, char a3, _BYTE *a4, _BYTE *a5)
{
  char v8; // r14
  NTSTATUS PackageClaims; // eax
  __int64 v10; // r8
  int v11; // ebx
  ULONG Flags; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v14; // rsi
  _KPROCESS *Process; // rdx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  signed __int32 v19[8]; // [rsp+0h] [rbp-100h] BYREF
  PSIZE_T AppIdSize; // [rsp+20h] [rbp-E0h]
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
  _DWORD v33[2]; // [rsp+70h] [rbp-90h] BYREF
  int *v34; // [rsp+78h] [rbp-88h]
  int v35[4]; // [rsp+80h] [rbp-80h] BYREF
  int v36; // [rsp+90h] [rbp-70h] BYREF
  const WCHAR *v37; // [rsp+98h] [rbp-68h]
  __int128 v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+B0h] [rbp-50h]
  int v40; // [rsp+B8h] [rbp-48h]
  const wchar_t *v41; // [rsp+C0h] [rbp-40h]
  __int128 v42; // [rsp+C8h] [rbp-38h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+E0h] [rbp-20h]
  const wchar_t *v45; // [rsp+E8h] [rbp-18h]
  __int128 v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+100h] [rbp+0h]

  v37 = L"WIN://SYSAPPID";
  AttributesPresent = 0LL;
  v39 = 0LL;
  *a4 = 0;
  v41 = L"WIN://PKG";
  v31 = a2;
  v43 = 0LL;
  v26 = 0LL;
  v45 = L"WIN://PKGHOSTID";
  v32 = 0LL;
  v47 = 0LL;
  v24 = 0;
  PkgClaim = &v26;
  DynamicId = 0LL;
  AppIdSize = 0LL;
  v8 = 0;
  v36 = 1966108;
  v38 = 0LL;
  v40 = 1310738;
  v42 = 0LL;
  v44 = 2097182;
  v46 = 0LL;
  Type = 0;
  ResultDataSize = 0;
  Data = 0;
  v30 = 0;
  v25 = 0;
  *a5 = 0;
  PackageClaims = RtlQueryPackageClaims(
                    (HANDLE)TokenHandle,
                    0LL,
                    0LL,
                    0LL,
                    AppIdSize,
                    DynamicId,
                    PkgClaim,
                    AttributesPresent);
  v11 = PackageClaims;
  if ( PackageClaims < 0 )
  {
    if ( PackageClaims != -1073741275 )
      return (unsigned int)v11;
    v11 = 0;
  }
  Flags = v26.Flags;
  if ( (v26.Flags & 4) == 0 )
  {
    if ( (v26.Flags & 0x10000) != 0 )
      goto LABEL_17;
    v14 = PsReferenceEffectiveToken(
            (unsigned int)KeGetCurrentThread(),
            (unsigned int)&v30,
            (unsigned int)&v25,
            (unsigned int)&v31,
            0LL);
    v11 = RtlQueryPackageClaims((HANDLE)v14, 0LL, 0LL, 0LL, 0LL, 0LL, &v32, 0LL);
    if ( v11 < 0 )
    {
      if ( v11 != -1073741275 )
        goto LABEL_34;
      v11 = 0;
    }
    if ( (v32.Flags & 0x10004) != 0 )
      *a4 = 1;
LABEL_34:
    if ( v14 )
    {
      if ( v30 == 1 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        _m_prefetchw(&Process[1].Affinity.Bitmap[5]);
        v16 = Process[1].Affinity.Bitmap[5];
        while ( (v14 ^ v16) < 0xF )
        {
          v17 = v16;
          v16 = _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[5], v16 + 1, v16);
          if ( v17 == v16 )
            return (unsigned int)v11;
        }
        HalPutDmaAdapter((PADAPTER_OBJECT)v14);
      }
      else
      {
        ObfDereferenceObjectWithTag((PVOID)v14, 0x746C6644u);
      }
    }
    return (unsigned int)v11;
  }
  if ( (a3 & 3) == 3 )
    return (unsigned int)-1073741811;
  if ( (a3 & 1) != 0 && (v26.Flags & 0x20) != 0 )
  {
    v11 = SepDesktopAppModifyTokenBreakaway(TokenHandle, &v26, 0LL);
    if ( v11 < 0 )
      return (unsigned int)v11;
    Flags = v26.Flags;
  }
  if ( (a3 & 6) != 0 || (Flags & 0x20) != 0 )
  {
    if ( (a3 & 2) != 0 && (Flags & 0x20) == 0 )
    {
      LOBYTE(v10) = 1;
      v11 = SepDesktopAppModifyTokenBreakaway(TokenHandle, &v26, v10);
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
    if ( (unsigned __int8)SepVerifyDesktopAppPolicyOverrideCaller((HANDLE)TokenHandle) )
    {
LABEL_17:
      *a5 = 1;
      return (unsigned int)v11;
    }
    Flags = v26.Flags;
  }
  if ( LOBYTE(v26.Origin) == 3 && (Flags & 0x22000) == 0 )
  {
    v8 = 1;
    if ( ZwQueryLicenseValue(&ValueName, &Type, &Data, 4u, &ResultDataSize) >= 0 && Type == 4 && ResultDataSize == 4 )
      v8 = Data != 1;
  }
  v11 = SepVerifyDesktopAppxImage(v31, TokenHandle, v8, &v24);
  if ( v11 >= 0 )
  {
    if ( !v24 )
    {
      DWORD2(v38) = 0;
      LOWORD(v38) = 3;
      v35[0] = 3;
      v35[1] = 3;
      v35[2] = 3;
      v33[1] = 3;
      LOWORD(v42) = 2;
      DWORD2(v42) = 0;
      LOWORD(v46) = 2;
      DWORD2(v46) = 0;
      v34 = &v36;
      CurrentThread = KeGetCurrentThread();
      v33[0] = 1;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(TokenHandle + 48), 1u);
      _InterlockedOr(v19, 0);
      v11 = AuthzBasepSetSecurityAttributesToken(*(_QWORD *)(TokenHandle + 776), v35, (__int64)v33);
      *(_QWORD *)(TokenHandle + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v19, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(TokenHandle + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      *a4 = 1;
      return (unsigned int)v11;
    }
    goto LABEL_17;
  }
  return (unsigned int)v11;
}
