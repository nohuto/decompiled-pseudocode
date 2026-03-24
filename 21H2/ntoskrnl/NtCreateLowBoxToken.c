/*
 * XREFs of NtCreateLowBoxToken @ 0x140676580
 * Callers:
 *     <none>
 * Callees:
 *     SepLocateTokenIntegrity @ 0x1402529CC (SepLocateTokenIntegrity.c)
 *     RtlEqualSid @ 0x14027C9E0 (RtlEqualSid.c)
 *     RtlSubAuthoritySid @ 0x14027F290 (RtlSubAuthoritySid.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1402C91B4 (SepAppendAceToTokenDefaultDacl.c)
 *     SepCaptureHandles @ 0x1402CF2CC (SepCaptureHandles.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     SepFinalizeTokenAcls @ 0x1405D00A0 (SepFinalizeTokenAcls.c)
 *     RtlIsPackageSid @ 0x1405DAD60 (RtlIsPackageSid.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1405DD318 (SeReleaseLuidAndAttributesArray.c)
 *     SepSetTokenCapabilities @ 0x1405DD33C (SepSetTokenCapabilities.c)
 *     SeCaptureSidAndAttributesArray @ 0x1405DD560 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x1405DE46C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x1405DE570 (SeReleaseSid.c)
 *     ObCloseHandle @ 0x14061AB80 (ObCloseHandle.c)
 *     SepAppendAceToTokenObjectAcl @ 0x14065F440 (SepAppendAceToTokenObjectAcl.c)
 *     SeSetMandatoryPolicyToken @ 0x140676460 (SeSetMandatoryPolicyToken.c)
 *     RtlGetAppContainerSidType @ 0x140676500 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x140676B90 (RtlIsCapabilitySid.c)
 *     SepCheckCapabilities @ 0x1406A7AE0 (SepCheckCapabilities.c)
 *     SepCheckCreateLowBox @ 0x1406BF634 (SepCheckCreateLowBox.c)
 *     ObInsertObject @ 0x1406D41C0 (ObInsertObject.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     SepDuplicateToken @ 0x140703E00 (SepDuplicateToken.c)
 *     SepSetTokenCachedHandles @ 0x140717C04 (SepSetTokenCachedHandles.c)
 *     SepSetTokenLowboxNumber @ 0x140717F5C (SepSetTokenLowboxNumber.c)
 *     SepSetTokenPackage @ 0x1407197A0 (SepSetTokenPackage.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

int __fastcall NtCreateLowBoxToken(
        HANDLE *a1,
        void *a2,
        ACCESS_MASK a3,
        int a4,
        char *a5,
        unsigned int a6,
        char *Src,
        unsigned int a8,
        unsigned __int64 a9)
{
  int v9; // r14d
  char PreviousMode; // r15
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
  void *v26; // r12
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
  int v41; // [rsp+70h] [rbp-78h] BYREF
  PVOID Token; // [rsp+78h] [rbp-70h] BYREF
  __int64 v43; // [rsp+80h] [rbp-68h] BYREF
  PVOID P; // [rsp+88h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-58h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v46; // [rsp+98h] [rbp-50h] BYREF
  __int128 v47; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-38h]

  v9 = a4;
  v40 = 0LL;
  v43 = 0x100000000LL;
  P = 0LL;
  Sid = 0LL;
  v46 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&v38[3] = 0LL;
  v37 = 0;
  v36 = 0;
  v41 = 0;
  LOBYTE(v38[0]) = 0;
  v47 = 0LL;
  v48 = 0LL;
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
  if ( !a5 )
    return -1073741811;
  if ( !a8 )
  {
    if ( !a9 )
      goto LABEL_13;
    return -1073741776;
  }
  if ( !a9 )
    return -1073741776;
LABEL_13:
  Token = 0LL;
  result = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, &v46);
  if ( result < 0 )
    return result;
  result = SeCaptureSid(a5, PreviousMode, v18, v19, (int)Object, 1, &Sid);
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
  GrantedAccess = v46.GrantedAccess;
  if ( a3 )
    GrantedAccess = a3;
  if ( Src )
    AppContainerSidType = SeCaptureSidAndAttributesArray(
                            Src,
                            a6,
                            PreviousMode,
                            0LL,
                            0,
                            (int)HandleInformation,
                            v35,
                            (PVOID *)&v40,
                            (unsigned int *)&v43);
  if ( AppContainerSidType < 0 )
    goto LABEL_73;
  AppContainerSidType = SepCaptureHandles(a8, a9, &P);
  if ( AppContainerSidType < 0 )
    goto LABEL_73;
  if ( !RtlIsPackageSid((__int64)v20) )
    goto LABEL_72;
  if ( ((v20[1] - 8) & 0xFB) != 0 )
  {
    AppContainerSidType = -1073700350;
    goto LABEL_73;
  }
  v23 = 0;
  if ( a6 )
  {
    v24 = (_QWORD *)v40;
    while ( (unsigned __int8)RtlIsCapabilitySid(*v24) )
    {
      v25 = 0;
      if ( v23 )
      {
        v26 = (void *)*v24;
        while ( !RtlEqualSid(v26, *(PSID *)(v40 + 16LL * v25)) )
        {
          if ( ++v25 >= v23 )
            goto LABEL_32;
        }
        AppContainerSidType = -1073741811;
        goto LABEL_73;
      }
LABEL_32:
      ++v23;
      v24 += 2;
      if ( v23 >= a6 )
      {
        v9 = a4;
        goto LABEL_34;
      }
    }
LABEL_72:
    AppContainerSidType = -1073741811;
    goto LABEL_73;
  }
LABEL_34:
  AppContainerSidType = RtlGetAppContainerSidType(v20, &v41);
  if ( AppContainerSidType < 0 )
  {
LABEL_73:
    v27 = v36;
    goto LABEL_53;
  }
  if ( v41 == 1 )
  {
    AppContainerSidType = SepCheckCapabilities(Token, (__int64)v38);
    if ( !LOBYTE(v38[0]) )
    {
      AppContainerSidType = -1073741790;
      goto LABEL_73;
    }
  }
  if ( AppContainerSidType < 0 )
    goto LABEL_73;
  AppContainerSidType = SepDuplicateToken((_DWORD)Token, v9, 0, 1, 0, PreviousMode, 0, (__int64)&v38[3]);
  if ( AppContainerSidType < 0 )
    goto LABEL_73;
  v27 = 1;
  AppContainerSidType = SeSetMandatoryPolicyToken(*(__int64 *)&v38[3], (_DWORD *)&v43 + 1);
  if ( AppContainerSidType < 0 )
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
    AppContainerSidType = -1073740730;
  }
  v20 = (char *)Sid;
  if ( AppContainerSidType < 0 )
    goto LABEL_53;
  AppContainerSidType = SepSetTokenCapabilities(*(__int64 *)&v38[3], Sid, (void *)v40, a6);
  if ( AppContainerSidType < 0 )
    goto LABEL_53;
  AppContainerSidType = SepSetTokenLowboxNumber(*(_QWORD *)&v38[3], v20);
  if ( AppContainerSidType < 0 )
    goto LABEL_53;
  *((_QWORD *)&v47 + 1) = v20;
  AppContainerSidType = SepSetTokenCachedHandles(*(_QWORD *)&v38[3], &v47, a8, P, Object, HandleInformation, v35);
  if ( AppContainerSidType < 0 )
    goto LABEL_53;
  AppContainerSidType = SepSetTokenPackage(*(_QWORD *)&v38[3], v20);
  if ( AppContainerSidType < 0 )
    goto LABEL_53;
  AppContainerSidType = SepAppendAceToTokenDefaultDacl(*(__int64 *)&v38[3], (__int64)v20);
  if ( AppContainerSidType < 0 )
    goto LABEL_53;
  *(_QWORD *)(*(_QWORD *)&v38[3] + 56LL) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v32, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v38[3] + 48LL));
  KeLeaveCriticalRegion();
  v37 = 0;
  AppContainerSidType = ObInsertObject(*(PVOID *)&v38[3], 0LL, GrantedAccess, 1u, 0LL, &Handle);
  v20 = (char *)Sid;
  if ( AppContainerSidType < 0 )
    goto LABEL_52;
  AppContainerSidType = SepAppendAceToTokenObjectAcl(*(__int64 *)&v38[3], 983551, Sid);
  if ( AppContainerSidType >= 0 )
  {
    SepFinalizeTokenAcls(*(_QWORD **)&v38[3]);
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)&v38[3]);
LABEL_52:
    v27 = 0;
  }
LABEL_53:
  if ( v37 )
  {
    if ( AppContainerSidType >= 0 )
      *(_QWORD *)(*(_QWORD *)&v38[3] + 56LL) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v32, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v38[3] + 48LL));
    KeLeaveCriticalRegion();
    v20 = (char *)Sid;
  }
  if ( AppContainerSidType < 0 )
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
  if ( AppContainerSidType >= 0 )
    *a1 = Handle;
  return AppContainerSidType;
}
