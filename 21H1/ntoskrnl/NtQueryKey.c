/*
 * XREFs of NtQueryKey @ 0x1405EBF30
 * Callers:
 *     IopLoadDriver @ 0x140725EF8 (IopLoadDriver.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14075BE9C (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A19E4 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408A3724 (PiDevCfgQueryPolicyStringList.c)
 *     ExpWatchLicenseInfoWork @ 0x1409476A0 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140A3E1A4 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402090D0 (ExIsResourceAcquiredSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405EACD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpBounceContextStart @ 0x14061E2E0 (CmpBounceContextStart.c)
 *     CmQueryKey @ 0x14061F340 (CmQueryKey.c)
 *     CmpCallCallBacksEx @ 0x140626B30 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1409517C0 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall NtQueryKey(HANDLE Handle, unsigned int a2, unsigned __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // r15
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *v14; // r9
  KPROCESSOR_MODE v15; // cl
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  BOOL v20; // r12d
  _QWORD *v21; // rax
  struct _KTHREAD *v22; // rax
  ULONG IsResourceAcquiredSharedLite; // eax
  unsigned __int16 *v24; // r15
  int v25; // eax
  struct _KTHREAD *v26; // rcx
  bool v27; // zf
  void *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v33; // r15d
  unsigned int v34; // eax
  int Key; // ebx
  KPROCESSOR_MODE PreviousMode; // r9
  unsigned int v37; // [rsp+40h] [rbp-198h]
  char v38; // [rsp+44h] [rbp-194h]
  char v39; // [rsp+45h] [rbp-193h]
  char v40; // [rsp+46h] [rbp-192h]
  BOOLEAN v41; // [rsp+47h] [rbp-191h]
  size_t Size; // [rsp+50h] [rbp-188h] BYREF
  PVOID Object; // [rsp+58h] [rbp-180h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-178h] BYREF
  PADAPTER_OBJECT v45; // [rsp+68h] [rbp-170h] BYREF
  __int64 v46; // [rsp+70h] [rbp-168h]
  _QWORD v47[2]; // [rsp+78h] [rbp-160h] BYREF
  PVOID v48; // [rsp+88h] [rbp-150h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp-148h] BYREF
  PADAPTER_OBJECT v50; // [rsp+98h] [rbp-140h] BYREF
  int v51; // [rsp+A0h] [rbp-138h]
  int v52; // [rsp+A4h] [rbp-134h]
  _QWORD *v53; // [rsp+A8h] [rbp-130h]
  int v54; // [rsp+B0h] [rbp-128h]
  __int128 v55; // [rsp+B4h] [rbp-124h]
  __int64 v56; // [rsp+C4h] [rbp-114h]
  int v57; // [rsp+CCh] [rbp-10Ch]
  _QWORD v58[8]; // [rsp+D0h] [rbp-108h] BYREF
  void *Src[2]; // [rsp+110h] [rbp-C8h] BYREF
  char v60; // [rsp+120h] [rbp-B8h]
  _BYTE v61[71]; // [rsp+121h] [rbp-B7h] BYREF
  _OWORD v62[2]; // [rsp+170h] [rbp-68h] BYREF

  v5 = a4;
  Size = a4;
  HandleInformation = 0LL;
  memset(v61, 0, sizeof(v61));
  memset(v62, 0, sizeof(v62));
  v46 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v62, 0x20000LL, v9, v10);
  v39 = 0;
  v40 = 0;
  DmaAdapter = 0LL;
  memset(v58, 0, sizeof(v58));
  *(_OWORD *)Src = 0LL;
  v60 = 0;
  v47[1] = v47;
  v47[0] = v47;
  v45 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v41 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v41 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, (__int64)v14);
    Key = -1073741431;
LABEL_34:
    v37 = Key;
    goto LABEL_35;
  }
  if ( a2 > 8 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    {
      if ( Handle )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        v48 = 0LL;
        if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v48, 0LL) >= 0 )
        {
          v46 = *((_QWORD *)v48 + 1);
          HalPutDmaAdapter((PADAPTER_OBJECT)v48);
        }
      }
    }
    Key = -1073741811;
    goto LABEL_34;
  }
  v15 = KeGetCurrentThread()->PreviousMode;
  v38 = v15;
  if ( v15 == 1 )
  {
    if ( (_DWORD)v5 )
    {
      v16 = a3;
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = a3 + v5 - 1;
      if ( a3 > v17 || v17 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v18 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v16 = *(_BYTE *)v16;
        v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v16 != v18 );
    }
    v19 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v19 = *(_DWORD *)v19;
    v15 = 1;
  }
  v20 = ((a2 - 3) & 0xFFFFFFFB) != 0;
  Object = 0LL;
  Key = ObReferenceObjectByHandle(Handle, v20, (POBJECT_TYPE)CmKeyObjectType, v15, &Object, &HandleInformation);
  v21 = Object;
  DmaAdapter = (PADAPTER_OBJECT)Object;
  v37 = Key;
  if ( Key < 0 )
    goto LABEL_35;
  if ( *(_DWORD *)Object != 1803104306 )
  {
    if ( a2 != 4 )
    {
      Key = -1073741816;
      goto LABEL_34;
    }
    *a5 = 40;
    if ( (unsigned int)v5 < 0x28 )
    {
      Key = -1073741789;
      v37 = -1073741789;
      goto LABEL_35;
    }
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 32) = 0LL;
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(v21[1] + 96LL);
    goto LABEL_33;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    v46 = *((_QWORD *)Object + 1);
  if ( ((a2 - 3) & 0xFFFFFFFB) == 0 && !HandleInformation.GrantedAccess )
  {
    Key = -1073741790;
    goto LABEL_34;
  }
  v22 = KeGetCurrentThread();
  --v22->KernelApcDisable;
  v40 = 1;
  if ( !CmpCallBackCount )
  {
    v24 = (unsigned __int16 *)Object;
    goto LABEL_29;
  }
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock);
  v24 = (unsigned __int16 *)Object;
  if ( !IsResourceAcquiredSharedLite )
  {
    v58[0] = Object;
    LODWORD(v58[1]) = a2;
    v58[2] = a3;
    LODWORD(v58[3]) = Size;
    v58[4] = a5;
    LOBYTE(v14) = 1;
    v25 = CmpCallCallBacksEx(7, (unsigned int)v58, 0, (_DWORD)v14, 22, (__int64)Object, (__int64)v47);
    Key = v25;
    v37 = v25;
    if ( v25 >= 0 )
    {
      v39 = 1;
      goto LABEL_29;
    }
    if ( v25 != -1073740541 )
      goto LABEL_35;
LABEL_33:
    Key = 0;
    goto LABEL_34;
  }
LABEL_29:
  if ( a2 == 7 )
  {
    *a5 = 4;
    if ( (unsigned int)Size < 4 )
    {
      Key = -1073741789;
      v37 = -1073741789;
      goto LABEL_35;
    }
    *(_DWORD *)a3 = v24[25];
    goto LABEL_33;
  }
  Key = CmKeyBodyRemapToVirtualForEnum((__int64 *)&DmaAdapter, v38, v20, &v45);
  v37 = Key;
  if ( Key >= 0 )
  {
    v33 = Size;
    Key = CmpBounceContextStart(Src, a3, (unsigned int)Size, (unsigned int)v38, 2);
    v37 = Key;
    if ( Key >= 0 )
    {
      Key = CmQueryKey((_DWORD)DmaAdapter, (_DWORD)v45, Size, (__int64)&Size + 4);
      v37 = Key;
      if ( Key >= 0 || Key == -2147483643 || Key == -1073741789 )
      {
        v34 = HIDWORD(Size);
        *a5 = HIDWORD(Size);
        if ( Key != -1073741789 )
        {
          if ( (unsigned int)Size >= v34 )
            v33 = v34;
          if ( Src[0] != Src[1] )
            memmove(Src[0], Src[1], v33);
        }
      }
    }
  }
LABEL_35:
  if ( v45 )
    HalPutDmaAdapter(v45);
  if ( v39 )
  {
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)v47[0] != v47 )
    {
      v52 = 0;
      v55 = 0LL;
      v56 = 0LL;
      v57 = 0;
      v50 = DmaAdapter;
      v51 = Key;
      v54 = Key;
      v53 = v58;
      CmpCallCallBacksEx(22, (unsigned int)&v50, 0, 0, 22, (__int64)DmaAdapter, (__int64)v47);
      Key = v54;
    }
    v37 = Key;
  }
  if ( v40 )
  {
    v26 = KeGetCurrentThread();
    v27 = v26->KernelApcDisable++ == -1;
    if ( v27
      && ($C774EFD68449142D8271B1EC1EB7FB26 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
      && !v26->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v26, v12, v13, v14);
    }
    Key = v37;
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  v28 = Src[1];
  if ( Src[1] && Src[1] != Src[0] && Src[1] != v61 )
  {
    if ( (v60 & 1) != 0 )
    {
      ++dword_140CDB69C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_140CDB690 )
      {
        ++dword_140CDB6A0;
        ((void (__fastcall *)(void *, union _SLIST_HEADER *))qword_140CDB6B8)(Src[1], &CmpBounceBufferLookaside);
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
    LOBYTE(v28) = 13;
    (*(void (__fastcall **)(void *, _OWORD *, _QWORD, _QWORD, __int64, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v28,
      v62,
      (unsigned int)Key,
      a2,
      v46,
      0LL);
  }
  if ( v41 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v29, v30, v31);
    return v37;
  }
  return (unsigned int)Key;
}
