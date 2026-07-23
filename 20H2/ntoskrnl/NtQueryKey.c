/*
 * XREFs of NtQueryKey @ 0x140618FF0
 * Callers:
 *     IopLoadDriver @ 0x140737DD0 (IopLoadDriver.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14076C9EC (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A8834 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408AA574 (PiDevCfgQueryPolicyStringList.c)
 *     ExpWatchLicenseInfoWork @ 0x14094E800 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140A49CA8 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140225FD0 (ExIsResourceAcquiredSharedLite.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402FB2A0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14060C6A0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140614140 (CmpCallCallBacksEx.c)
 *     CmpBounceContextStart @ 0x140677470 (CmpBounceContextStart.c)
 *     CmQueryKey @ 0x1406784D0 (CmQueryKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x140958920 (ExRaiseAccessViolation.c)
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
  KPROCESSOR_MODE v10; // cl
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  BOOL v15; // r12d
  _QWORD *v16; // rax
  struct _KTHREAD *v17; // rax
  ULONG IsResourceAcquiredSharedLite; // eax
  unsigned __int16 *v19; // r15
  int v20; // eax
  struct _KTHREAD *v21; // rcx
  bool v22; // zf
  void *v23; // rcx
  unsigned int v25; // r15d
  unsigned int v26; // eax
  NTSTATUS Key; // ebx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v29; // [rsp+40h] [rbp-198h]
  signed __int8 v30; // [rsp+44h] [rbp-194h]
  char v31; // [rsp+45h] [rbp-193h]
  char v32; // [rsp+46h] [rbp-192h]
  BOOLEAN v33; // [rsp+47h] [rbp-191h]
  size_t Size; // [rsp+50h] [rbp-188h] BYREF
  PVOID Object; // [rsp+58h] [rbp-180h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-178h] BYREF
  PADAPTER_OBJECT v37; // [rsp+68h] [rbp-170h] BYREF
  __int64 v38; // [rsp+70h] [rbp-168h]
  _QWORD v39[2]; // [rsp+78h] [rbp-160h] BYREF
  PVOID v40; // [rsp+88h] [rbp-150h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp-148h] BYREF
  PADAPTER_OBJECT v42; // [rsp+98h] [rbp-140h] BYREF
  NTSTATUS v43; // [rsp+A0h] [rbp-138h]
  int v44; // [rsp+A4h] [rbp-134h]
  _QWORD *v45; // [rsp+A8h] [rbp-130h]
  NTSTATUS v46; // [rsp+B0h] [rbp-128h]
  __int128 v47; // [rsp+B4h] [rbp-124h]
  __int64 v48; // [rsp+C4h] [rbp-114h]
  int v49; // [rsp+CCh] [rbp-10Ch]
  _QWORD v50[8]; // [rsp+D0h] [rbp-108h] BYREF
  void *Src[2]; // [rsp+110h] [rbp-C8h] BYREF
  char v52; // [rsp+120h] [rbp-B8h]
  _BYTE v53[71]; // [rsp+121h] [rbp-B7h] BYREF
  _OWORD v54[2]; // [rsp+170h] [rbp-68h] BYREF

  v5 = Length;
  Size = Length;
  HandleInformation = 0LL;
  memset(v53, 0, sizeof(v53));
  memset(v54, 0, sizeof(v54));
  v38 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v54, 0x20000u);
  v31 = 0;
  v32 = 0;
  DmaAdapter = 0LL;
  memset(v50, 0, sizeof(v50));
  *(_OWORD *)Src = 0LL;
  v52 = 0;
  v39[1] = v39;
  v39[0] = v39;
  v37 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v33 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v33 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    Key = -1073741431;
LABEL_34:
    v29 = Key;
    goto LABEL_35;
  }
  if ( (unsigned int)KeyInformationClass > KeyTrustInformation )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    {
      if ( KeyHandle )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        v40 = 0LL;
        if ( ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v40, 0LL) >= 0 )
        {
          v38 = *((_QWORD *)v40 + 1);
          HalPutDmaAdapter((PADAPTER_OBJECT)v40);
        }
      }
    }
    Key = -1073741811;
    goto LABEL_34;
  }
  v10 = KeGetCurrentThread()->PreviousMode;
  v30 = v10;
  if ( v10 == 1 )
  {
    if ( (_DWORD)v5 )
    {
      v11 = (unsigned __int64)KeyInformation;
      if ( ((unsigned __int8)KeyInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (unsigned __int64)KeyInformation + v5 - 1;
      if ( (unsigned __int64)KeyInformation > v12 || v12 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v13 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v11 = *(_BYTE *)v11;
        v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v11 != v13 );
    }
    v14 = (__int64)ResultLength;
    if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v10 = 1;
  }
  v15 = ((KeyInformationClass - 3) & 0xFFFFFFFB) != 0;
  Object = 0LL;
  Key = ObReferenceObjectByHandle(KeyHandle, v15, (POBJECT_TYPE)CmKeyObjectType, v10, &Object, &HandleInformation);
  v16 = Object;
  DmaAdapter = (PADAPTER_OBJECT)Object;
  v29 = Key;
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
      v29 = -1073741789;
      goto LABEL_35;
    }
    *(_OWORD *)KeyInformation = 0LL;
    *((_OWORD *)KeyInformation + 1) = 0LL;
    *((_QWORD *)KeyInformation + 4) = 0LL;
    *((_DWORD *)KeyInformation + 5) = *(_DWORD *)(v16[1] + 96LL);
    goto LABEL_33;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    v38 = *((_QWORD *)Object + 1);
  if ( ((KeyInformationClass - 3) & 0xFFFFFFFB) == 0 && !HandleInformation.GrantedAccess )
  {
    Key = -1073741790;
    goto LABEL_34;
  }
  v17 = KeGetCurrentThread();
  --v17->KernelApcDisable;
  v32 = 1;
  if ( !CmpCallBackCount )
  {
    v19 = (unsigned __int16 *)Object;
    goto LABEL_29;
  }
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock);
  v19 = (unsigned __int16 *)Object;
  if ( !IsResourceAcquiredSharedLite )
  {
    v50[0] = Object;
    LODWORD(v50[1]) = KeyInformationClass;
    v50[2] = KeyInformation;
    LODWORD(v50[3]) = Size;
    v50[4] = ResultLength;
    v20 = CmpCallCallBacksEx(7u, (__int64)v50, 0LL, 1, 0x16u, (__int64)Object, (__int64)v39);
    Key = v20;
    v29 = v20;
    if ( v20 >= 0 )
    {
      v31 = 1;
      goto LABEL_29;
    }
    if ( v20 != -1073740541 )
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
      v29 = -1073741789;
      goto LABEL_35;
    }
    *(_DWORD *)KeyInformation = v19[25];
    goto LABEL_33;
  }
  Key = CmKeyBodyRemapToVirtualForEnum((__int64 *)&DmaAdapter, v30, v15, &v37);
  v29 = Key;
  if ( Key >= 0 )
  {
    v25 = Size;
    Key = CmpBounceContextStart(Src, KeyInformation, (unsigned int)Size, (unsigned int)v30, 2);
    v29 = Key;
    if ( Key >= 0 )
    {
      Key = CmQueryKey((_DWORD)DmaAdapter, (_DWORD)v37, Size, (__int64)&Size + 4);
      v29 = Key;
      if ( Key >= 0 || Key == -2147483643 || Key == -1073741789 )
      {
        v26 = HIDWORD(Size);
        *ResultLength = HIDWORD(Size);
        if ( Key != -1073741789 )
        {
          if ( (unsigned int)Size >= v26 )
            v25 = v26;
          if ( Src[0] != Src[1] )
            memmove(Src[0], Src[1], v25);
        }
      }
    }
  }
LABEL_35:
  if ( v37 )
    HalPutDmaAdapter(v37);
  if ( v31 )
  {
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)v39[0] != v39 )
    {
      v44 = 0;
      v47 = 0LL;
      v48 = 0LL;
      v49 = 0;
      v42 = DmaAdapter;
      v43 = Key;
      v46 = Key;
      v45 = v50;
      CmpCallCallBacksEx(0x16u, (__int64)&v42, 0LL, 0, 0x16u, (__int64)DmaAdapter, (__int64)v39);
      Key = v46;
    }
    v29 = Key;
  }
  if ( v32 )
  {
    v21 = KeGetCurrentThread();
    v22 = v21->KernelApcDisable++ == -1;
    if ( v22
      && ($C774EFD68449142D8271B1EC1EB7FB26 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
      && !v21->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v21);
    }
    Key = v29;
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  v23 = Src[1];
  if ( Src[1] && Src[1] != Src[0] && Src[1] != v53 )
  {
    if ( (v52 & 1) != 0 )
    {
      ++dword_140CDB61C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_140CDB610 )
      {
        ++dword_140CDB620;
        ((void (__fastcall *)(void *, _SLIST_HEADER *))qword_140CDB638)(Src[1], &CmpBounceBufferLookaside);
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
    LOBYTE(v23) = 13;
    (*(void (__fastcall **)(void *, _OWORD *, _QWORD, _QWORD, __int64, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v23,
      v54,
      (unsigned int)Key,
      (unsigned int)KeyInformationClass,
      v38,
      0LL);
  }
  if ( v33 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v29;
  }
  return Key;
}
