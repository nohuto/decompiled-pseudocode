/*
 * XREFs of NtQueryKey @ 0x14070F950
 * Callers:
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140770ECC (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A5F64 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408A7CA4 (PiDevCfgQueryPolicyStringList.c)
 *     ExpWatchLicenseInfoWork @ 0x14094C1A0 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140A42C04 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402129F0 (EtwGetKernelTraceTimestamp.c)
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14064A4D0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpBounceContextStart @ 0x1406E3F10 (CmpBounceContextStart.c)
 *     CmQueryKey @ 0x1406E4F70 (CmQueryKey.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x14070A820 (CmpCallCallBacksEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1409562C0 (ExRaiseAccessViolation.c)
 */

NTSTATUS __cdecl NtQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  __int64 v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  KPROCESSOR_MODE v13; // cl
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  BOOL v18; // r12d
  _QWORD *v19; // rax
  struct _KTHREAD *v20; // rax
  ULONG IsResourceAcquiredSharedLite; // eax
  unsigned __int16 *v22; // r15
  int v23; // eax
  struct _KTHREAD *v24; // rcx
  bool v25; // zf
  void *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v31; // r15d
  unsigned int v32; // eax
  NTSTATUS Key; // ebx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v35; // [rsp+40h] [rbp-198h]
  signed __int8 v36; // [rsp+44h] [rbp-194h]
  char v37; // [rsp+45h] [rbp-193h]
  char v38; // [rsp+46h] [rbp-192h]
  BOOLEAN v39; // [rsp+47h] [rbp-191h]
  size_t Size; // [rsp+50h] [rbp-188h] BYREF
  PVOID Object; // [rsp+58h] [rbp-180h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-178h] BYREF
  PADAPTER_OBJECT v43; // [rsp+68h] [rbp-170h] BYREF
  __int64 v44; // [rsp+70h] [rbp-168h]
  _QWORD v45[2]; // [rsp+78h] [rbp-160h] BYREF
  PVOID v46; // [rsp+88h] [rbp-150h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp-148h] BYREF
  PADAPTER_OBJECT v48; // [rsp+98h] [rbp-140h] BYREF
  NTSTATUS v49; // [rsp+A0h] [rbp-138h]
  int v50; // [rsp+A4h] [rbp-134h]
  _QWORD *v51; // [rsp+A8h] [rbp-130h]
  NTSTATUS v52; // [rsp+B0h] [rbp-128h]
  __int128 v53; // [rsp+B4h] [rbp-124h]
  __int64 v54; // [rsp+C4h] [rbp-114h]
  int v55; // [rsp+CCh] [rbp-10Ch]
  _QWORD v56[8]; // [rsp+D0h] [rbp-108h] BYREF
  void *Src[2]; // [rsp+110h] [rbp-C8h] BYREF
  char v58; // [rsp+120h] [rbp-B8h]
  _BYTE v59[71]; // [rsp+121h] [rbp-B7h] BYREF
  _OWORD v60[2]; // [rsp+170h] [rbp-68h] BYREF

  v5 = Length;
  Size = Length;
  HandleInformation = 0LL;
  memset(v59, 0, sizeof(v59));
  memset(v60, 0, sizeof(v60));
  v44 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v60, 0x20000u);
  v37 = 0;
  v38 = 0;
  DmaAdapter = 0LL;
  memset(v56, 0, sizeof(v56));
  *(_OWORD *)Src = 0LL;
  v58 = 0;
  v45[1] = v45;
  v45[0] = v45;
  v43 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v39 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v39 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
    Key = -1073741431;
LABEL_34:
    v35 = Key;
    goto LABEL_35;
  }
  if ( (unsigned int)KeyInformationClass > KeyTrustInformation )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    {
      if ( KeyHandle )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        v46 = 0LL;
        if ( ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v46, 0LL) >= 0 )
        {
          v44 = *((_QWORD *)v46 + 1);
          HalPutDmaAdapter((PADAPTER_OBJECT)v46);
        }
      }
    }
    Key = -1073741811;
    goto LABEL_34;
  }
  v13 = KeGetCurrentThread()->PreviousMode;
  v36 = v13;
  if ( v13 == 1 )
  {
    if ( (_DWORD)v5 )
    {
      v14 = (unsigned __int64)KeyInformation;
      if ( ((unsigned __int8)KeyInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = (unsigned __int64)KeyInformation + v5 - 1;
      if ( (unsigned __int64)KeyInformation > v15 || v15 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v16 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v14 = *(_BYTE *)v14;
        v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v14 != v16 );
    }
    v17 = (__int64)ResultLength;
    if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v17 = *(_DWORD *)v17;
    v13 = 1;
  }
  v18 = ((KeyInformationClass - 3) & 0xFFFFFFFB) != 0;
  Object = 0LL;
  Key = ObReferenceObjectByHandle(KeyHandle, v18, (POBJECT_TYPE)CmKeyObjectType, v13, &Object, &HandleInformation);
  v19 = Object;
  DmaAdapter = (PADAPTER_OBJECT)Object;
  v35 = Key;
  if ( Key < 0 )
    goto LABEL_35;
  if ( *(_DWORD *)Object != 1803104306 )
  {
    if ( KeyInformationClass != KeyCachedInformation )
    {
      Key = -1073741816;
      goto LABEL_34;
    }
    *ResultLength = 40;
    if ( (unsigned int)v5 < 0x28 )
    {
      Key = -1073741789;
      v35 = -1073741789;
      goto LABEL_35;
    }
    *(_OWORD *)KeyInformation = 0LL;
    *((_OWORD *)KeyInformation + 1) = 0LL;
    *((_QWORD *)KeyInformation + 4) = 0LL;
    *((_DWORD *)KeyInformation + 5) = *(_DWORD *)(v19[1] + 96LL);
    goto LABEL_33;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    v44 = *((_QWORD *)Object + 1);
  if ( ((KeyInformationClass - 3) & 0xFFFFFFFB) == 0 && !HandleInformation.GrantedAccess )
  {
    Key = -1073741790;
    goto LABEL_34;
  }
  v20 = KeGetCurrentThread();
  --v20->KernelApcDisable;
  v38 = 1;
  if ( !CmpCallBackCount )
  {
    v22 = (unsigned __int16 *)Object;
    goto LABEL_29;
  }
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock);
  v22 = (unsigned __int16 *)Object;
  if ( !IsResourceAcquiredSharedLite )
  {
    v56[0] = Object;
    LODWORD(v56[1]) = KeyInformationClass;
    v56[2] = KeyInformation;
    LODWORD(v56[3]) = Size;
    v56[4] = ResultLength;
    v23 = CmpCallCallBacksEx(7u, (__int64)v56, 0LL, 1, 0x16u, (__int64)Object, (__int64)v45);
    Key = v23;
    v35 = v23;
    if ( v23 >= 0 )
    {
      v37 = 1;
      goto LABEL_29;
    }
    if ( v23 != -1073740541 )
      goto LABEL_35;
LABEL_33:
    Key = 0;
    goto LABEL_34;
  }
LABEL_29:
  if ( KeyInformationClass == KeyHandleTagsInformation )
  {
    *ResultLength = 4;
    if ( (unsigned int)Size < 4 )
    {
      Key = -1073741789;
      v35 = -1073741789;
      goto LABEL_35;
    }
    *(_DWORD *)KeyInformation = v22[25];
    goto LABEL_33;
  }
  Key = CmKeyBodyRemapToVirtualForEnum(&DmaAdapter, v36, v18, &v43);
  v35 = Key;
  if ( Key >= 0 )
  {
    v31 = Size;
    Key = CmpBounceContextStart((__int64)Src, (unsigned __int64)KeyInformation, (unsigned int)Size, v36, 2);
    v35 = Key;
    if ( Key >= 0 )
    {
      Key = CmQueryKey(
              (__int64)DmaAdapter,
              (__int64)v43,
              KeyInformationClass,
              (unsigned int *)Src[1],
              Size,
              (unsigned int *)&Size + 1);
      v35 = Key;
      if ( Key >= 0 || Key == -2147483643 || Key == -1073741789 )
      {
        v32 = HIDWORD(Size);
        *ResultLength = HIDWORD(Size);
        if ( Key != -1073741789 )
        {
          if ( (unsigned int)Size >= v32 )
            v31 = v32;
          if ( Src[0] != Src[1] )
            memmove(Src[0], Src[1], v31);
        }
      }
    }
  }
LABEL_35:
  if ( v43 )
    HalPutDmaAdapter(v43);
  if ( v37 )
  {
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)v45[0] != v45 )
    {
      v50 = 0;
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0;
      v48 = DmaAdapter;
      v49 = Key;
      v52 = Key;
      v51 = v56;
      CmpCallCallBacksEx(0x16u, (__int64)&v48, 0LL, 0, 0x16u, (__int64)DmaAdapter, (__int64)v45);
      Key = v52;
    }
    v35 = Key;
  }
  if ( v38 )
  {
    v24 = KeGetCurrentThread();
    v25 = v24->KernelApcDisable++ == -1;
    if ( v25
      && ($C459BD0D405E8E46662177FB3D0A143F *)v24->ApcState.ApcListHead[0].Flink != &v24->152
      && !v24->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    Key = v35;
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  v26 = Src[1];
  if ( Src[1] && Src[1] != Src[0] && Src[1] != v59 )
  {
    if ( (v58 & 1) != 0 )
    {
      ++dword_140CDB95C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_140CDB950 )
      {
        ++dword_140CDB960;
        ((void (__fastcall *)(void *, _SLIST_HEADER *))qword_140CDB978)(Src[1], &CmpBounceBufferLookaside);
      }
      else
      {
        RtlpInterlockedPushEntrySList(&CmpBounceBufferLookaside, (PSLIST_ENTRY)Src[1]);
      }
    }
    else
    {
      CmSiFreeMemory((PPRIVILEGE_SET)Src[1]);
    }
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v26) = 13;
    (*(void (__fastcall **)(void *, _OWORD *, _QWORD, _QWORD, __int64, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v26,
      v60,
      (unsigned int)Key,
      (unsigned int)KeyInformationClass,
      v44,
      0LL);
  }
  if ( v39 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v27, v28, v29);
    return v35;
  }
  return Key;
}
