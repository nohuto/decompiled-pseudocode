/*
 * XREFs of NtCreateLowBoxToken @ 0x1406FB890
 * Callers:
 *     <none>
 * Callees:
 *     SepLocateTokenIntegrity @ 0x14020F958 (SepLocateTokenIntegrity.c)
 *     RtlEqualSid @ 0x140210C40 (RtlEqualSid.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     KeEnterCriticalRegion @ 0x140227360 (KeEnterCriticalRegion.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140327F54 (SepAppendAceToTokenDefaultDacl.c)
 *     SepCaptureHandles @ 0x14032D7BC (SepCaptureHandles.c)
 *     RtlSubAuthoritySid @ 0x140340E50 (RtlSubAuthoritySid.c)
 *     Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled @ 0x1403F6F10 (Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled.c)
 *     SepFinalizeTokenAcls @ 0x1405CDDB0 (SepFinalizeTokenAcls.c)
 *     RtlIsPackageSid @ 0x1405D7EF0 (RtlIsPackageSid.c)
 *     SeCaptureSid @ 0x1405E5438 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x1405E553C (SeReleaseSid.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405F56A0 (SepAppendAceToTokenObjectAcl.c)
 *     SepDuplicateToken @ 0x140601150 (SepDuplicateToken.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1406311E0 (SeReleaseLuidAndAttributesArray.c)
 *     SepSetTokenPackage @ 0x140655738 (SepSetTokenPackage.c)
 *     SepSetTokenCachedHandles @ 0x14068DC14 (SepSetTokenCachedHandles.c)
 *     SepSetTokenLowboxNumber @ 0x14068DF6C (SepSetTokenLowboxNumber.c)
 *     SepAppendAdminAceToTokenAcl @ 0x1406A83BC (SepAppendAdminAceToTokenAcl.c)
 *     SepSetTokenCapabilities @ 0x1406A97C8 (SepSetTokenCapabilities.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406A99F0 (SeCaptureSidAndAttributesArray.c)
 *     SeSetMandatoryPolicyToken @ 0x1406AA8C8 (SeSetMandatoryPolicyToken.c)
 *     SepCheckCapabilities @ 0x1406CAEC0 (SepCheckCapabilities.c)
 *     SepCheckCreateLowBox @ 0x1406DF534 (SepCheckCreateLowBox.c)
 *     RtlGetAppContainerSidType @ 0x1406FB810 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x1406FBF2C (RtlIsCapabilitySid.c)
 *     ObInsertObject @ 0x1407096B0 (ObInsertObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

int __fastcall NtCreateLowBoxToken(
        HANDLE *a1,
        void *a2,
        ACCESS_MASK a3,
        int a4,
        char *Src,
        unsigned int a6,
        char *a7,
        unsigned int a8,
        unsigned __int64 a9)
{
  int v9; // r14d
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  int result; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rdi
  int AppContainerSidType; // ebx
  ACCESS_MASK GrantedAccess; // r13d
  unsigned int v23; // ebx
  _QWORD *v24; // rsi
  unsigned int v25; // r14d
  void *v26; // r15
  __int64 v27; // r9
  char v28; // si
  __int64 TokenIntegrity; // rax
  void *v30; // rcx
  int v31; // eax
  signed __int32 v32[8]; // [rsp+0h] [rbp-E8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-C8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-C0h]
  __int64 v35; // [rsp+30h] [rbp-B8h]
  char v36; // [rsp+50h] [rbp-98h]
  char v37; // [rsp+51h] [rbp-97h]
  PVOID v38; // [rsp+58h] [rbp-90h] BYREF
  __int64 v39; // [rsp+60h] [rbp-88h] BYREF
  PSID Sid; // [rsp+68h] [rbp-80h] BYREF
  __int64 v41; // [rsp+70h] [rbp-78h] BYREF
  int v42; // [rsp+78h] [rbp-70h] BYREF
  PVOID Token; // [rsp+80h] [rbp-68h] BYREF
  __int64 v44; // [rsp+88h] [rbp-60h] BYREF
  PVOID P; // [rsp+90h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-50h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v47; // [rsp+A0h] [rbp-48h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-40h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-30h]

  v9 = a4;
  v41 = 0LL;
  v44 = 0x100000000LL;
  P = 0LL;
  Sid = 0LL;
  v47 = 0LL;
  Handle = 0LL;
  v38 = 0LL;
  v37 = 0;
  v36 = 0;
  v42 = 0;
  LOBYTE(v39) = 0;
  v48 = 0LL;
  v49 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a1;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = 8LL * a8;
    if ( v15 )
    {
      if ( (a9 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = a9 + v15;
      if ( v16 > 0x7FFFFFFF0000LL || v16 < a9 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( !Src )
    return -1073741811;
  if ( !a8 )
  {
    if ( !a9 )
      goto LABEL_16;
    return -1073741776;
  }
  if ( !a9 )
    return -1073741776;
LABEL_16:
  Token = 0LL;
  result = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, &v47);
  if ( result < 0 )
    return result;
  result = SeCaptureSid(Src, PreviousMode, v18, v19, (int)Object, 1, &Sid);
  if ( result < 0 )
    return result;
  v20 = (char *)Sid;
  result = SepCheckCreateLowBox(Sid);
  AppContainerSidType = result;
  if ( result < 0 )
    return result;
  if ( *((_DWORD *)Token + 48) != 1 && *((int *)Token + 49) < 2 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)Token);
    return -1073741659;
  }
  GrantedAccess = v47.GrantedAccess;
  if ( a3 )
    GrantedAccess = a3;
  if ( a7 )
    AppContainerSidType = SeCaptureSidAndAttributesArray(
                            a7,
                            a6,
                            PreviousMode,
                            0LL,
                            0,
                            (int)HandleInformation,
                            v35,
                            (PVOID *)&v41,
                            (unsigned int *)&v44);
  if ( AppContainerSidType < 0 )
    goto LABEL_67;
  AppContainerSidType = SepCaptureHandles(a8, a9, &P);
  if ( AppContainerSidType < 0 )
    goto LABEL_67;
  if ( !RtlIsPackageSid((__int64)v20) )
    goto LABEL_29;
  if ( ((v20[1] - 8) & 0xFB) != 0 )
  {
    AppContainerSidType = -1073700350;
    goto LABEL_67;
  }
  v23 = 0;
  if ( a6 )
  {
    v24 = (_QWORD *)v41;
    while ( (unsigned __int8)RtlIsCapabilitySid(*v24) )
    {
      v25 = 0;
      if ( v23 )
      {
        v26 = (void *)*v24;
        while ( !RtlEqualSid(v26, *(PSID *)(v41 + 16LL * v25)) )
        {
          if ( ++v25 >= v23 )
            goto LABEL_39;
        }
        AppContainerSidType = -1073741811;
        goto LABEL_67;
      }
LABEL_39:
      ++v23;
      v24 += 2;
      if ( v23 >= a6 )
      {
        v9 = a4;
        goto LABEL_41;
      }
    }
LABEL_29:
    AppContainerSidType = -1073741811;
LABEL_67:
    v28 = v36;
    goto LABEL_68;
  }
LABEL_41:
  AppContainerSidType = RtlGetAppContainerSidType(v20, &v42);
  if ( AppContainerSidType < 0 )
    goto LABEL_67;
  if ( v42 == 1 )
  {
    AppContainerSidType = SepCheckCapabilities(Token, a6, (PSID *)v41, v27, (char *)&v39);
    if ( !(_BYTE)v39 )
    {
      AppContainerSidType = -1073741790;
      goto LABEL_67;
    }
  }
  if ( AppContainerSidType < 0 )
    goto LABEL_67;
  AppContainerSidType = SepDuplicateToken((__int64)Token, v9, 0, 1, 0, PreviousMode, 0, &v38);
  if ( AppContainerSidType < 0 )
    goto LABEL_67;
  v28 = 1;
  AppContainerSidType = SeSetMandatoryPolicyToken((__int64)v38, (_DWORD *)&v44 + 1);
  if ( AppContainerSidType < 0 )
    goto LABEL_68;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v38 + 6), 1u);
  _InterlockedOr(v32, 0);
  v37 = 1;
  TokenIntegrity = SepLocateTokenIntegrity((__int64)v38);
  if ( TokenIntegrity )
  {
    v30 = *(void **)TokenIntegrity;
    v31 = *(unsigned __int8 *)(*(_QWORD *)TokenIntegrity + 1LL);
    if ( (_BYTE)v31 )
      *RtlSubAuthoritySid(v30, v31 - 1) = 4096;
    *((_QWORD *)v38 + 9) &= 0x200800000uLL;
    *((_QWORD *)v38 + 10) &= 0x200800000uLL;
    *((_QWORD *)v38 + 8) &= 0x200800000uLL;
    *((_DWORD *)v38 + 50) &= ~0x2000u;
    *((_DWORD *)v38 + 50) |= 0x4000u;
  }
  else
  {
    AppContainerSidType = -1073740730;
  }
  v20 = (char *)Sid;
  if ( AppContainerSidType < 0 )
    goto LABEL_68;
  AppContainerSidType = SepSetTokenCapabilities((__int64)v38, Sid, (void *)v41, a6);
  if ( AppContainerSidType < 0 )
    goto LABEL_68;
  AppContainerSidType = SepSetTokenLowboxNumber((__int64)v38, (__int64)v20);
  if ( AppContainerSidType < 0 )
    goto LABEL_68;
  *((_QWORD *)&v48 + 1) = v20;
  AppContainerSidType = SepSetTokenCachedHandles(v38, &v48, a8, (HANDLE *)P);
  if ( AppContainerSidType < 0 )
    goto LABEL_68;
  AppContainerSidType = SepSetTokenPackage((__int64)v38, (unsigned __int8 *)v20);
  if ( AppContainerSidType < 0 )
    goto LABEL_68;
  AppContainerSidType = SepAppendAceToTokenDefaultDacl((__int64)v38, (__int64)v20);
  if ( AppContainerSidType < 0 )
    goto LABEL_68;
  *((_QWORD *)v38 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v32, 0);
  ExReleaseResourceLite(*((PERESOURCE *)v38 + 6));
  KeLeaveCriticalRegion();
  v37 = 0;
  AppContainerSidType = ObInsertObject(v38, 0LL, GrantedAccess, 1u, 0LL, &Handle);
  v20 = (char *)Sid;
  if ( AppContainerSidType >= 0 )
  {
    AppContainerSidType = SepAppendAceToTokenObjectAcl((__int64)v38, 983551, Sid);
    if ( AppContainerSidType < 0 )
      goto LABEL_68;
    if ( (unsigned int)Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled() )
      SepFinalizeTokenAcls(v38);
    else
      SepAppendAdminAceToTokenAcl((__int64)v38);
    HalPutDmaAdapter((PADAPTER_OBJECT)v38);
  }
  v28 = 0;
LABEL_68:
  if ( v37 )
  {
    if ( AppContainerSidType >= 0 )
      *((_QWORD *)v38 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v32, 0);
    ExReleaseResourceLite(*((PERESOURCE *)v38 + 6));
    KeLeaveCriticalRegion();
    v20 = (char *)Sid;
  }
  if ( AppContainerSidType < 0 )
  {
    if ( v28 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v38);
    if ( Handle )
      ObCloseHandle(Handle, PreviousMode);
  }
  if ( v41 )
    SeReleaseLuidAndAttributesArray((void *)v41, PreviousMode);
  if ( v20 )
    SeReleaseSid(v20, PreviousMode, 1);
  HalPutDmaAdapter((PADAPTER_OBJECT)Token);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( AppContainerSidType >= 0 )
    *a1 = Handle;
  return AppContainerSidType;
}
