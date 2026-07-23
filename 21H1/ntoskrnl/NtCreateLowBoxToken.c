/*
 * XREFs of NtCreateLowBoxToken @ 0x14070D200
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x140206340 (RtlEqualSid.c)
 *     SepLocateTokenIntegrity @ 0x140257FA8 (SepLocateTokenIntegrity.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140319CA4 (SepAppendAceToTokenDefaultDacl.c)
 *     SepCaptureHandles @ 0x14031F324 (SepCaptureHandles.c)
 *     RtlSubAuthoritySid @ 0x14035C480 (RtlSubAuthoritySid.c)
 *     SepDuplicateToken @ 0x1406014E0 (SepDuplicateToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140613AC0 (SepAppendAceToTokenObjectAcl.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     ObInsertObject @ 0x140642820 (ObInsertObject.c)
 *     SeCaptureSid @ 0x1406465B0 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x1406466B4 (SeReleaseSid.c)
 *     SepSetTokenPackage @ 0x140669D4C (SepSetTokenPackage.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1406706E0 (SeReleaseLuidAndAttributesArray.c)
 *     SepSetTokenCapabilities @ 0x140673878 (SepSetTokenCapabilities.c)
 *     SeCaptureSidAndAttributesArray @ 0x140673AA0 (SeCaptureSidAndAttributesArray.c)
 *     SepSetTokenCachedHandles @ 0x140677FE4 (SepSetTokenCachedHandles.c)
 *     SepSetTokenLowboxNumber @ 0x14067833C (SepSetTokenLowboxNumber.c)
 *     SepCheckCapabilities @ 0x1406D4A94 (SepCheckCapabilities.c)
 *     SeSetMandatoryPolicyToken @ 0x1406DDA84 (SeSetMandatoryPolicyToken.c)
 *     SepCheckCreateLowBox @ 0x1406E92A4 (SepCheckCreateLowBox.c)
 *     SepAppendAdminAceToTokenAcl @ 0x1406ECE78 (SepAppendAdminAceToTokenAcl.c)
 *     RtlIsPackageSid @ 0x140703E30 (RtlIsPackageSid.c)
 *     RtlGetAppContainerSidType @ 0x14070D180 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x14070D810 (RtlIsCapabilitySid.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreateLowBoxToken(
        PHANDLE TokenHandle,
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PSID PackageSid,
        ULONG CapabilityCount,
        PSID_AND_ATTRIBUTES Capabilities,
        ULONG HandleCount,
        HANDLE *Handles)
{
  int v9; // r14d
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  HANDLE *v16; // rcx
  NTSTATUS result; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE *v20; // rdi
  NTSTATUS appended; // ebx
  ACCESS_MASK GrantedAccess; // r13d
  ULONG v23; // ebx
  PSID *v24; // rsi
  unsigned int v25; // r14d
  PSID v26; // r12
  __int64 v27; // r9
  char v28; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 TokenIntegrity; // rax
  void *v31; // rcx
  int v32; // eax
  signed __int32 v33[8]; // [rsp+0h] [rbp-E8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-C8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-C0h]
  __int64 v36; // [rsp+30h] [rbp-B8h]
  char v37; // [rsp+50h] [rbp-98h]
  char v38; // [rsp+51h] [rbp-97h]
  _WORD v39[7]; // [rsp+52h] [rbp-96h] BYREF
  PSID Sid; // [rsp+60h] [rbp-88h] BYREF
  __int64 v41; // [rsp+68h] [rbp-80h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+70h] [rbp-78h] BYREF
  PVOID Token; // [rsp+78h] [rbp-70h] BYREF
  __int64 v44; // [rsp+80h] [rbp-68h] BYREF
  PVOID P; // [rsp+88h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-58h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v47; // [rsp+98h] [rbp-50h] BYREF
  __int128 v48; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-38h]
  int v51; // [rsp+108h] [rbp+20h]

  v51 = (int)ObjectAttributes;
  v9 = (int)ObjectAttributes;
  v41 = 0LL;
  v44 = 0x100000000LL;
  P = 0LL;
  Sid = 0LL;
  v47 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&v39[3] = 0LL;
  v38 = 0;
  v37 = 0;
  AppContainerSidType = NotAppContainerSidType;
  LOBYTE(v39[0]) = 0;
  v48 = 0LL;
  v49 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)TokenHandle < 0x7FFFFFFF0000LL )
      v14 = (__int64)TokenHandle;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = HandleCount;
    if ( v15 * 8 )
    {
      if ( ((unsigned __int8)Handles & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = &Handles[v15];
      if ( (unsigned __int64)v16 > 0x7FFFFFFF0000LL || v16 < Handles )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( !PackageSid )
    return -1073741811;
  if ( !HandleCount )
  {
    if ( !Handles )
      goto LABEL_13;
    return -1073741776;
  }
  if ( !Handles )
    return -1073741776;
LABEL_13:
  Token = 0LL;
  result = ObReferenceObjectByHandle(
             ExistingTokenHandle,
             2u,
             (POBJECT_TYPE)SeTokenObjectType,
             PreviousMode,
             &Token,
             &v47);
  if ( result < 0 )
    return result;
  result = SeCaptureSid((char *)PackageSid, PreviousMode, v18, v19, (int)Object, 1, &Sid);
  if ( result < 0 )
    return result;
  v20 = Sid;
  result = SepCheckCreateLowBox(Sid);
  appended = result;
  if ( result < 0 )
    return result;
  if ( *((_DWORD *)Token + 48) != 1 && *((int *)Token + 49) < 2 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)Token);
    return -1073741659;
  }
  GrantedAccess = v47.GrantedAccess;
  if ( DesiredAccess )
    GrantedAccess = DesiredAccess;
  if ( Capabilities )
    appended = SeCaptureSidAndAttributesArray(
                 (char *)Capabilities,
                 CapabilityCount,
                 PreviousMode,
                 0LL,
                 0,
                 (int)HandleInformation,
                 v36,
                 (PVOID *)&v41,
                 (unsigned int *)&v44);
  if ( appended < 0 )
    goto LABEL_73;
  appended = SepCaptureHandles(HandleCount, (__int64)Handles, &P);
  if ( appended < 0 )
    goto LABEL_73;
  if ( !RtlIsPackageSid(v20) )
    goto LABEL_72;
  if ( ((v20[1] - 8) & 0xFB) != 0 )
  {
    appended = -1073700350;
    goto LABEL_73;
  }
  v23 = 0;
  if ( CapabilityCount )
  {
    v24 = (PSID *)v41;
    while ( RtlIsCapabilitySid(*v24) )
    {
      v25 = 0;
      if ( v23 )
      {
        v26 = *v24;
        while ( !RtlEqualSid(v26, *(PSID *)(v41 + 16LL * v25)) )
        {
          if ( ++v25 >= v23 )
            goto LABEL_32;
        }
        appended = -1073741811;
        goto LABEL_73;
      }
LABEL_32:
      ++v23;
      v24 += 2;
      if ( v23 >= CapabilityCount )
      {
        v9 = v51;
        goto LABEL_34;
      }
    }
LABEL_72:
    appended = -1073741811;
    goto LABEL_73;
  }
LABEL_34:
  appended = RtlGetAppContainerSidType(v20, &AppContainerSidType);
  if ( appended < 0 )
  {
LABEL_73:
    v28 = v37;
    goto LABEL_53;
  }
  if ( AppContainerSidType == ChildAppContainerSidType )
  {
    appended = SepCheckCapabilities(Token, CapabilityCount, (PSID *)v41, v27, (char *)v39);
    if ( !LOBYTE(v39[0]) )
    {
      appended = -1073741790;
      goto LABEL_73;
    }
  }
  if ( appended < 0 )
    goto LABEL_73;
  appended = SepDuplicateToken((__int64)Token, v9, 0, 1, 0, PreviousMode, 0, &v39[3]);
  if ( appended < 0 )
    goto LABEL_73;
  v28 = 1;
  appended = SeSetMandatoryPolicyToken(*(__int64 *)&v39[3], (_DWORD *)&v44 + 1);
  if ( appended < 0 )
    goto LABEL_53;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(*(_QWORD *)&v39[3] + 48LL), 1u);
  _InterlockedOr(v33, 0);
  v38 = 1;
  TokenIntegrity = SepLocateTokenIntegrity(*(__int64 *)&v39[3]);
  if ( TokenIntegrity )
  {
    v31 = *(void **)TokenIntegrity;
    v32 = *(unsigned __int8 *)(*(_QWORD *)TokenIntegrity + 1LL);
    if ( (_BYTE)v32 )
      *RtlSubAuthoritySid(v31, v32 - 1) = 4096;
    *(_QWORD *)(*(_QWORD *)&v39[3] + 72LL) &= 0x200800000uLL;
    *(_QWORD *)(*(_QWORD *)&v39[3] + 80LL) &= 0x200800000uLL;
    *(_QWORD *)(*(_QWORD *)&v39[3] + 64LL) &= 0x200800000uLL;
    *(_DWORD *)(*(_QWORD *)&v39[3] + 200LL) &= ~0x2000u;
    *(_DWORD *)(*(_QWORD *)&v39[3] + 200LL) |= 0x4000u;
  }
  else
  {
    appended = -1073740730;
  }
  v20 = Sid;
  if ( appended < 0 )
    goto LABEL_53;
  appended = SepSetTokenCapabilities(*(__int64 *)&v39[3], Sid, (void *)v41, CapabilityCount);
  if ( appended < 0 )
    goto LABEL_53;
  appended = SepSetTokenLowboxNumber(*(__int64 *)&v39[3], (__int64)v20);
  if ( appended < 0 )
    goto LABEL_53;
  *((_QWORD *)&v48 + 1) = v20;
  appended = SepSetTokenCachedHandles(*(_QWORD **)&v39[3], &v48, HandleCount, (HANDLE *)P);
  if ( appended < 0 )
    goto LABEL_53;
  appended = SepSetTokenPackage(*(__int64 *)&v39[3], v20);
  if ( appended < 0 )
    goto LABEL_53;
  appended = SepAppendAceToTokenDefaultDacl(*(__int64 *)&v39[3], (__int64)v20);
  if ( appended < 0 )
    goto LABEL_53;
  *(_QWORD *)(*(_QWORD *)&v39[3] + 56LL) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v33, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v39[3] + 48LL));
  KeLeaveCriticalRegion();
  v38 = 0;
  appended = ObInsertObject(*(PVOID *)&v39[3], 0LL, GrantedAccess, 1u, 0LL, &Handle);
  v20 = Sid;
  if ( appended < 0 )
    goto LABEL_52;
  appended = SepAppendAceToTokenObjectAcl(*(__int64 *)&v39[3], 983551, Sid);
  if ( appended >= 0 )
  {
    SepAppendAdminAceToTokenAcl(*(__int64 *)&v39[3]);
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)&v39[3]);
LABEL_52:
    v28 = 0;
  }
LABEL_53:
  if ( v38 )
  {
    if ( appended >= 0 )
      *(_QWORD *)(*(_QWORD *)&v39[3] + 56LL) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v33, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v39[3] + 48LL));
    KeLeaveCriticalRegion();
    v20 = Sid;
  }
  if ( appended < 0 )
  {
    if ( v28 )
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)&v39[3]);
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
  if ( appended >= 0 )
    *TokenHandle = Handle;
  return appended;
}
