/*
 * XREFs of NtCreateLowBoxToken @ 0x1406BAFC0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     SepLocateTokenIntegrity @ 0x140294828 (SepLocateTokenIntegrity.c)
 *     RtlEqualSid @ 0x140298E50 (RtlEqualSid.c)
 *     RtlSubAuthoritySid @ 0x1402FE9C0 (RtlSubAuthoritySid.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1403577F4 (SepAppendAceToTokenDefaultDacl.c)
 *     SepCaptureHandles @ 0x14035CE34 (SepCaptureHandles.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     ObInsertObject @ 0x14060D6D0 (ObInsertObject.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140618FC0 (SeReleaseLuidAndAttributesArray.c)
 *     SepSetTokenPackage @ 0x14062462C (SepSetTokenPackage.c)
 *     SeCaptureSid @ 0x1406289EC (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140628AF0 (SeReleaseSid.c)
 *     SepSetTokenCapabilities @ 0x140630388 (SepSetTokenCapabilities.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406305B0 (SeCaptureSidAndAttributesArray.c)
 *     SepSetTokenCachedHandles @ 0x140631758 (SepSetTokenCachedHandles.c)
 *     SepSetTokenLowboxNumber @ 0x140631AB0 (SepSetTokenLowboxNumber.c)
 *     RtlIsPackageSid @ 0x140633BF0 (RtlIsPackageSid.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140668DA0 (SepAppendAceToTokenObjectAcl.c)
 *     SepDuplicateToken @ 0x1406795C0 (SepDuplicateToken.c)
 *     SeSetMandatoryPolicyToken @ 0x1406BAEA8 (SeSetMandatoryPolicyToken.c)
 *     RtlGetAppContainerSidType @ 0x1406BAF40 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x1406BB5D0 (RtlIsCapabilitySid.c)
 *     SepCheckCapabilities @ 0x1406F7DD0 (SepCheckCapabilities.c)
 *     SepCheckCreateLowBox @ 0x14070D104 (SepCheckCreateLowBox.c)
 *     SepAppendAdminAceToTokenAcl @ 0x140710958 (SepAppendAdminAceToTokenAcl.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  char v27; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 TokenIntegrity; // rax
  void *v30; // rcx
  int v31; // eax
  signed __int32 v32[8]; // [rsp+0h] [rbp-E8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-C8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-C0h]
  __int64 v35; // [rsp+30h] [rbp-B8h]
  char v36; // [rsp+50h] [rbp-98h]
  char v37; // [rsp+51h] [rbp-97h]
  _WORD v38[7]; // [rsp+52h] [rbp-96h] BYREF
  PSID Sid; // [rsp+60h] [rbp-88h] BYREF
  __int64 v40; // [rsp+68h] [rbp-80h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+70h] [rbp-78h] BYREF
  PVOID Token; // [rsp+78h] [rbp-70h] BYREF
  __int64 v43; // [rsp+80h] [rbp-68h] BYREF
  PVOID P; // [rsp+88h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-58h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v46; // [rsp+98h] [rbp-50h] BYREF
  __int128 v47; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-38h]
  int v50; // [rsp+108h] [rbp+20h]

  v50 = (int)ObjectAttributes;
  v9 = (int)ObjectAttributes;
  v40 = 0LL;
  v43 = 0x100000000LL;
  P = 0LL;
  Sid = 0LL;
  v46 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&v38[3] = 0LL;
  v37 = 0;
  v36 = 0;
  AppContainerSidType = NotAppContainerSidType;
  LOBYTE(v38[0]) = 0;
  v47 = 0LL;
  v48 = 0LL;
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
             &v46);
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
  GrantedAccess = v46.GrantedAccess;
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
                 v35,
                 (PVOID *)&v40,
                 (unsigned int *)&v43);
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
    v24 = (PSID *)v40;
    while ( RtlIsCapabilitySid(*v24) )
    {
      v25 = 0;
      if ( v23 )
      {
        v26 = *v24;
        while ( !RtlEqualSid(v26, *(PSID *)(v40 + 16LL * v25)) )
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
        v9 = v50;
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
    v27 = v36;
    goto LABEL_53;
  }
  if ( AppContainerSidType == ChildAppContainerSidType )
  {
    appended = SepCheckCapabilities(Token, (__int64)v38);
    if ( !LOBYTE(v38[0]) )
    {
      appended = -1073741790;
      goto LABEL_73;
    }
  }
  if ( appended < 0 )
    goto LABEL_73;
  appended = SepDuplicateToken((__int64)Token, v9, 0, 1, 0, PreviousMode, 0, &v38[3]);
  if ( appended < 0 )
    goto LABEL_73;
  v27 = 1;
  appended = SeSetMandatoryPolicyToken(*(__int64 *)&v38[3], (_DWORD *)&v43 + 1);
  if ( appended < 0 )
    goto LABEL_53;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(*(_QWORD *)&v38[3] + 48LL), 1u);
  _InterlockedOr(v32, 0);
  v37 = 1;
  TokenIntegrity = SepLocateTokenIntegrity(*(__int64 *)&v38[3]);
  if ( TokenIntegrity )
  {
    v30 = *(void **)TokenIntegrity;
    v31 = *(unsigned __int8 *)(*(_QWORD *)TokenIntegrity + 1LL);
    if ( (_BYTE)v31 )
      *RtlSubAuthoritySid(v30, v31 - 1) = 4096;
    *(_QWORD *)(*(_QWORD *)&v38[3] + 72LL) &= 0x200800000uLL;
    *(_QWORD *)(*(_QWORD *)&v38[3] + 80LL) &= 0x200800000uLL;
    *(_QWORD *)(*(_QWORD *)&v38[3] + 64LL) &= 0x200800000uLL;
    *(_DWORD *)(*(_QWORD *)&v38[3] + 200LL) &= ~0x2000u;
    *(_DWORD *)(*(_QWORD *)&v38[3] + 200LL) |= 0x4000u;
  }
  else
  {
    appended = -1073740730;
  }
  v20 = Sid;
  if ( appended < 0 )
    goto LABEL_53;
  appended = SepSetTokenCapabilities(*(__int64 *)&v38[3], Sid, (void *)v40, CapabilityCount);
  if ( appended < 0 )
    goto LABEL_53;
  appended = SepSetTokenLowboxNumber(*(__int64 *)&v38[3], (__int64)v20);
  if ( appended < 0 )
    goto LABEL_53;
  *((_QWORD *)&v47 + 1) = v20;
  appended = SepSetTokenCachedHandles(*(_QWORD **)&v38[3], &v47, HandleCount, (HANDLE *)P);
  if ( appended < 0 )
    goto LABEL_53;
  appended = SepSetTokenPackage(*(__int64 *)&v38[3], v20);
  if ( appended < 0 )
    goto LABEL_53;
  appended = SepAppendAceToTokenDefaultDacl(*(__int64 *)&v38[3], (__int64)v20);
  if ( appended < 0 )
    goto LABEL_53;
  *(_QWORD *)(*(_QWORD *)&v38[3] + 56LL) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v32, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v38[3] + 48LL));
  KeLeaveCriticalRegion();
  v37 = 0;
  appended = ObInsertObject(*(PVOID *)&v38[3], 0LL, GrantedAccess, 1u, 0LL, &Handle);
  v20 = Sid;
  if ( appended < 0 )
    goto LABEL_52;
  appended = SepAppendAceToTokenObjectAcl(*(__int64 *)&v38[3], 0xF01FFu, Sid);
  if ( appended >= 0 )
  {
    SepAppendAdminAceToTokenAcl(*(_QWORD *)&v38[3]);
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)&v38[3]);
LABEL_52:
    v27 = 0;
  }
LABEL_53:
  if ( v37 )
  {
    if ( appended >= 0 )
      *(_QWORD *)(*(_QWORD *)&v38[3] + 56LL) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v32, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v38[3] + 48LL));
    KeLeaveCriticalRegion();
    v20 = Sid;
  }
  if ( appended < 0 )
  {
    if ( v27 )
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)&v38[3]);
    if ( Handle )
      ObCloseHandle(Handle, PreviousMode);
  }
  if ( v40 )
    SeReleaseLuidAndAttributesArray((void *)v40, PreviousMode);
  if ( v20 )
    SeReleaseSid(v20, PreviousMode, 1);
  HalPutDmaAdapter((PADAPTER_OBJECT)Token);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( appended >= 0 )
    *TokenHandle = Handle;
  return appended;
}
