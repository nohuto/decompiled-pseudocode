/*
 * XREFs of PsDispatchIumService @ 0x14057D274
 * Callers:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 * Callees:
 *     KeAlertThreadByThreadId @ 0x140204570 (KeAlertThreadByThreadId.c)
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     KeWaitForAlertByThreadId @ 0x1402FC418 (KeWaitForAlertByThreadId.c)
 *     MmLockLoadedModuleListExclusive @ 0x14036F1EC (MmLockLoadedModuleListExclusive.c)
 *     DbgPrintEx @ 0x14037C640 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwTerminateProcess @ 0x1403F28B0 (ZwTerminateProcess.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     DbgkPostModuleMessage @ 0x1404E87CC (DbgkPostModuleMessage.c)
 *     HvlpDepositPages @ 0x1404ED1A8 (HvlpDepositPages.c)
 *     VslAllocatePool @ 0x1404F6458 (VslAllocatePool.c)
 *     VslFreePoolTransferObject @ 0x1404F6A90 (VslFreePoolTransferObject.c)
 *     VslHandleKsrCall @ 0x1404F6D90 (VslHandleKsrCall.c)
 *     MmMapHotPatchTablePage @ 0x140539990 (MmMapHotPatchTablePage.c)
 *     MmFreeSecurePoolMemory @ 0x14053F3E4 (MmFreeSecurePoolMemory.c)
 *     PspIumAllocatePartitionState @ 0x14057DC74 (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x14057DDD4 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x14057DEFC (PspIumAllocateSecurePool.c)
 *     PspIumFreePartitionState @ 0x14057E270 (PspIumFreePartitionState.c)
 *     PspIumFreePhysicalPages @ 0x14057E34C (PspIumFreePhysicalPages.c)
 *     PspIumReplenishPartitionPages @ 0x14057E4F8 (PspIumReplenishPartitionPages.c)
 *     PspMapView @ 0x14057E75C (PspMapView.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x14057E954 (PsAdjustBasicEnclaveThreadList.c)
 *     MmProtectVirtualMemory @ 0x14062CEF0 (MmProtectVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x14062E1C0 (MmFreeVirtualMemory.c)
 *     MmAllocateVirtualMemory @ 0x14064DB20 (MmAllocateVirtualMemory.c)
 *     DbgkMapViewOfSection @ 0x14064E6A0 (DbgkMapViewOfSection.c)
 *     MmUnmapViewOfSection @ 0x1406D9510 (MmUnmapViewOfSection.c)
 *     MmMapViewOfSection @ 0x1406FA5A0 (MmMapViewOfSection.c)
 *     PspTerminateThreadByPointer @ 0x140709890 (PspTerminateThreadByPointer.c)
 *     DbgkForwardException @ 0x14071E1F0 (DbgkForwardException.c)
 *     EtwUnregister @ 0x140748B40 (EtwUnregister.c)
 *     EtwRegister @ 0x14074B4C0 (EtwRegister.c)
 *     EtwSetInformation @ 0x14076A1A0 (EtwSetInformation.c)
 *     DbgkpSendErrorMessage @ 0x140882F60 (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x140883768 (DbgkpResumeProcess.c)
 *     DbgkpSuspendProcess @ 0x1408838D0 (DbgkpSuspendProcess.c)
 *     MmChangeKernelCfgBitmap @ 0x1408D3008 (MmChangeKernelCfgBitmap.c)
 *     MmGetSectionStrongImageReference @ 0x1408D35D8 (MmGetSectionStrongImageReference.c)
 *     PspIumGetPhysicalPage @ 0x1409084BC (PspIumGetPhysicalPage.c)
 *     PspIumGetSystemData @ 0x1409085F8 (PspIumGetSystemData.c)
 *     PspIumVerifyParentSd @ 0x140908634 (PspIumVerifyParentSd.c)
 *     PsTerminateVsmEnclave @ 0x140909B88 (PsTerminateVsmEnclave.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     MmUpdateSlabRangeProtection @ 0x140A90848 (MmUpdateSlabRangeProtection.c)
 */

void __fastcall PsDispatchIumService(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  ETWENABLECALLBACK *RelatedActivityId; // rsi
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  int PartitionState; // eax
  __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *v18; // r14
  _KPROCESS *v19; // rcx
  int v20; // ecx
  __int128 *v21; // r9
  unsigned __int64 v22; // rax
  int VirtualMemory; // eax
  __int64 v24; // r8
  _DWORD *v25; // r9
  int v26; // ebx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  _KPROCESS *Process; // rbx
  _KPROCESS *v32; // rcx
  int v33; // esi
  __int64 v34; // r8
  _DWORD *v35; // r9
  _KPROCESS *v36; // rcx
  void *v37; // r8
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  const GUID *ActivityId; // rcx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  struct _MDL *v46; // rbx
  void *v47; // rcx
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v49; // rbx
  CSHORT MdlFlags; // ax
  int SecurePool; // eax
  __int64 v52; // r8
  __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  unsigned __int64 v59; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v63; // eax
  bool v64; // zf
  unsigned int v65; // ecx
  unsigned int v66; // ecx
  unsigned int v67; // ecx
  unsigned int v68; // ecx
  unsigned int v69; // ecx
  unsigned int v70; // ecx
  unsigned int v71; // ecx
  ULONG UserDataCount[2]; // [rsp+30h] [rbp-228h]
  unsigned __int8 v73[8]; // [rsp+60h] [rbp-1F8h] BYREF
  ULONGLONG RegHandle[2]; // [rsp+68h] [rbp-1F0h] BYREF
  __int128 v75; // [rsp+78h] [rbp-1E0h] BYREF
  __int128 v76; // [rsp+88h] [rbp-1D0h] BYREF
  __int64 v77; // [rsp+98h] [rbp-1C0h]
  _OWORD v78[3]; // [rsp+A0h] [rbp-1B8h] BYREF
  _BYTE v79[272]; // [rsp+D0h] [rbp-188h] BYREF
  _OWORD v80[5]; // [rsp+1E0h] [rbp-78h] BYREF
  __int64 v81; // [rsp+230h] [rbp-28h]
  int v82; // [rsp+238h] [rbp-20h]
  __int16 v83; // [rsp+23Ch] [rbp-1Ch]
  char v84; // [rsp+23Eh] [rbp-1Ah]

  RegHandle[1] = a1;
  memset(v78, 0, sizeof(v78));
  RelatedActivityId = 0LL;
  v73[0] = 0;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  if ( *(_BYTE *)(a1 + 1) == 5 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(_DWORD *)(a1 + 16));
    }
    else
    {
      LOBYTE(a3) = 1;
      PspTerminateThreadByPointer(KeGetCurrentThread(), 0LL, a3);
    }
  }
  v6 = *(unsigned __int16 *)(a1 + 2);
  if ( v6 > 0x17 )
  {
    if ( v6 > 0x23 )
    {
      if ( v6 <= 0x29 )
      {
        if ( v6 == 41 )
        {
          MmUpdateSlabRangeProtection(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 24));
          return;
        }
        v65 = v6 - 36;
        if ( !v65 )
        {
          HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 8));
          return;
        }
        v66 = v65 - 1;
        if ( !v66 )
        {
          KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
          return;
        }
        v67 = v66 - 1;
        if ( v67 )
        {
          v68 = v67 - 1;
          if ( v68 )
          {
            if ( v68 == 1 )
            {
              PsTerminateVsmEnclave(*(_QWORD *)(a1 + 8), 0x80000000LL);
              return;
            }
            goto LABEL_146;
          }
          *(_QWORD *)(a1 + 24) = 0LL;
          if ( (unsigned __int8)PspIumReplenishPartitionPages(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16)) )
            *(_QWORD *)(a1 + 24) = 1LL;
          return;
        }
        if ( !*(_QWORD *)(a1 + 8) )
        {
          PspIumFreePartitionState(*(PVOID *)(a1 + 16));
          return;
        }
        PartitionState = PspIumAllocatePartitionState(a1);
        goto LABEL_22;
      }
      v69 = v6 - 42;
      if ( !v69 )
      {
        ExQueueWorkItem(&PspIumWorkItem, DelayedWorkQueue);
        return;
      }
      v70 = v69 - 1;
      if ( !v70 )
      {
        PartitionState = PsAdjustBasicEnclaveThreadList(
                           *(_QWORD *)(a1 + 8),
                           *(_QWORD *)(a1 + 16),
                           *(unsigned int *)(a1 + 24));
        goto LABEL_22;
      }
      v71 = v70 - 1;
      if ( v71 )
      {
        if ( v71 == 1 )
        {
          MmFreeSecurePoolMemory(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40));
          return;
        }
        goto LABEL_146;
      }
      SecurePool = PspIumAllocateSecurePool(a1);
    }
    else
    {
      if ( v6 == 35 )
      {
        PartitionState = PspMapView(a1);
        goto LABEL_22;
      }
      if ( v6 > 0x1D )
      {
        v55 = v6 - 30;
        if ( v55 )
        {
          v56 = v55 - 1;
          if ( v56 )
          {
            v57 = v56 - 1;
            if ( v57 )
            {
              v58 = v57 - 1;
              if ( !v58 )
              {
                DbgkPostModuleMessage(
                  *(PVOID *)(a1 + 8),
                  *(PVOID *)(a1 + 16),
                  *(void **)(a1 + 24),
                  *(_DWORD *)(a1 + 32),
                  *(_DWORD *)(a1 + 40),
                  *(PRKEVENT *)(a1 + 48));
                return;
              }
              if ( v58 == 1 )
              {
                DbgkMapViewOfSection(*(PVOID *)(a1 + 8));
                return;
              }
              goto LABEL_146;
            }
            if ( *(_QWORD *)(a1 + 8) )
            {
              MmLockLoadedModuleListExclusive(v73);
            }
            else
            {
              v59 = *(unsigned __int8 *)(a1 + 16);
              ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  if ( CurrentIrql <= 0xFu && (unsigned __int8)v59 <= 0xFu && CurrentIrql >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    SchedulerAssist = CurrentPrcb->SchedulerAssist;
                    v63 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v59 + 1));
                    v64 = (v63 & SchedulerAssist[5]) == 0;
                    SchedulerAssist[5] &= v63;
                    if ( v64 )
                      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                  }
                }
              }
              __writecr8(v59);
            }
            return;
          }
          PartitionState = MmUnmapViewOfSection(PsSecureSystemProcess, *(_QWORD *)(a1 + 8));
        }
        else
        {
          PartitionState = MmMapViewOfSection(
                             *(_QWORD *)(a1 + 8),
                             PsSecureSystemProcess,
                             a1 + 16,
                             0LL,
                             0LL,
                             a1 + 24,
                             a1 + 32,
                             2,
                             0x40000,
                             2);
        }
        goto LABEL_22;
      }
      if ( v6 == 29 )
      {
        v52 = *(_QWORD *)(a1 + 24);
        v53 = *(_QWORD *)(a1 + 16);
        v54 = *(_QWORD *)(a1 + 8);
        if ( v52 )
          MmMapHotPatchTablePage(v54, v53, v52);
        else
          MmChangeKernelCfgBitmap(v54, v53, *(unsigned __int8 *)(a1 + 32));
        return;
      }
      v42 = v6 - 24;
      if ( !v42 )
      {
        PartitionState = HvlpDepositPages(0, a2, *(_QWORD *)(a1 + 8) != 0LL);
        goto LABEL_22;
      }
      v43 = v42 - 1;
      if ( v43 )
      {
        v44 = v43 - 1;
        if ( v44 )
        {
          v45 = v44 - 1;
          if ( !v45 )
          {
            PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x646C6D4Du);
            v49 = PoolWithTag;
            if ( PoolWithTag )
            {
              PoolWithTag->Next = 0LL;
              *(_DWORD *)&PoolWithTag->Size = 56;
              PoolWithTag->StartVa = 0LL;
              *(_QWORD *)&PoolWithTag->ByteCount = 4096LL;
              PoolWithTag[1].Next = *(struct _MDL **)(a1 + 8);
              PoolWithTag->MdlFlags |= 2u;
              MdlFlags = PoolWithTag->MdlFlags;
              if ( (MdlFlags & 5) == 0 )
              {
                MmMapLockedPagesSpecifyCache(v49, 0, MmCached, 0LL, 0, 0x40000010u);
                MdlFlags = v49->MdlFlags;
              }
              if ( (MdlFlags & 1) != 0 )
              {
                *(_QWORD *)(a1 + 8) = 0LL;
                *(_QWORD *)(a1 + 16) = v49;
                *(_QWORD *)(a1 + 24) = v49->MappedSystemVa;
                return;
              }
              ExFreePoolWithTag(v49, 0);
            }
            v12 = 3221225626LL;
LABEL_25:
            *(_QWORD *)(a1 + 8) = v12;
            return;
          }
          if ( v45 != 1 )
            goto LABEL_146;
          v46 = *(struct _MDL **)(a1 + 8);
          MmUnmapLockedPages(v46->MappedSystemVa, v46);
          v47 = v46;
        }
        else
        {
          v47 = (void *)VslFreePoolTransferObject(*(__int64 ***)(a1 + 8), 0LL);
        }
        ExFreePoolWithTag(v47, 0);
        return;
      }
      SecurePool = VslAllocatePool(
                     *(_QWORD *)(a1 + 8),
                     *(_DWORD *)(a1 + 16),
                     (_QWORD *)(a1 + 16),
                     (_QWORD *)(a1 + 24),
                     (_QWORD *)(a1 + 32));
    }
    *(_DWORD *)(a1 + 8) = SecurePool;
    return;
  }
  if ( v6 == 23 )
  {
    VslHandleKsrCall(a1);
    return;
  }
  if ( v6 > 0xC )
  {
    if ( v6 <= 0x12 )
    {
      if ( v6 == 18 )
      {
        RegHandle[0] = 0LL;
        v37 = *(void **)(a1 + 24);
        if ( v37 )
          RelatedActivityId = VslIumEtwEnableCallback;
        *(_QWORD *)(a1 + 8) = EtwRegister((LPCGUID)(a1 + 8), RelatedActivityId, v37, RegHandle);
        *(_QWORD *)(a1 + 16) = RegHandle[0];
        return;
      }
      v27 = v6 - 13;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( !v28 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v32 = *(_KPROCESS **)(a1 + 8);
          if ( Process != v32 )
          {
            KiStackAttachProcess(v32, 0LL, (__int64)v78, a4);
            v32 = *(_KPROCESS **)(a1 + 8);
          }
          v33 = MmProtectVirtualMemory(
                  *(_QWORD *)(a1 + 16),
                  (_DWORD)v32,
                  (int)a1 + 24,
                  (int)a1 + 32,
                  *(_DWORD *)(a1 + 40),
                  a1 + 40);
          if ( Process != *(_KPROCESS **)(a1 + 8) )
            KiUnstackDetachProcess((__int64)v78, 0LL, v34, v35);
          *(_DWORD *)(a1 + 8) = v33;
          return;
        }
        v29 = v28 - 1;
        if ( !v29 )
        {
          LOBYTE(v12) = DbgkpSuspendProcess(*(_QWORD *)(a1 + 8));
          goto LABEL_24;
        }
        v30 = v29 - 1;
        if ( !v30 )
        {
          DbgkpResumeProcess(*(_QWORD *)(a1 + 8));
          return;
        }
        if ( v30 != 1 )
          goto LABEL_146;
        memset(v79, 0, sizeof(v79));
        PartitionState = DbgkpSendErrorMessage(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16), v79);
        goto LABEL_22;
      }
      v18 = KeGetCurrentThread()->ApcState.Process;
      v36 = *(_KPROCESS **)(a1 + 8);
      if ( v18 != v36 )
        KiStackAttachProcess(v36, 0LL, (__int64)v78, a4);
      VirtualMemory = MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 0, 0x10000000);
LABEL_42:
      v26 = VirtualMemory;
      if ( v18 != *(_KPROCESS **)(a1 + 8) )
        KiUnstackDetachProcess((__int64)v78, 0LL, v24, v25);
      *(_DWORD *)(a1 + 8) = v26;
      return;
    }
    v38 = v6 - 19;
    if ( !v38 )
    {
      PartitionState = EtwUnregister(*(_QWORD *)(a1 + 8));
      goto LABEL_22;
    }
    v39 = v38 - 1;
    if ( !v39 )
    {
      PartitionState = EtwSetInformation(
                         *(_QWORD *)(a1 + 8),
                         *(EVENT_INFO_CLASS *)(a1 + 16),
                         *(PVOID *)(a1 + 24),
                         *(_DWORD *)(a1 + 32));
      goto LABEL_22;
    }
    v40 = v39 - 1;
    if ( !v40 )
    {
      ActivityId = (const GUID *)(a1 + 32);
      if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) )
        ActivityId = 0LL;
      if ( *(_QWORD *)(a1 + 48) || *(_QWORD *)(a1 + 56) )
        RelatedActivityId = (ETWENABLECALLBACK *)(a1 + 48);
      PartitionState = EtwWriteEx(
                         *(_QWORD *)(a1 + 8),
                         (PCEVENT_DESCRIPTOR)(a1 + 16),
                         0LL,
                         0,
                         ActivityId,
                         (LPCGUID)RelatedActivityId,
                         *(_DWORD *)(a1 + 64),
                         *(PEVENT_DATA_DESCRIPTOR *)(a1 + 72));
      goto LABEL_22;
    }
    if ( v40 == 1 )
    {
      PartitionState = PspIumVerifyParentSd(*(unsigned int *)(a1 + 8), a2, *(_QWORD *)(a1 + 24));
      goto LABEL_22;
    }
LABEL_146:
    LOBYTE(a3) = 1;
    PspTerminateThreadByPointer(KeGetCurrentThread(), 3221225477LL, a3);
    return;
  }
  if ( v6 == 12 )
  {
    v18 = KeGetCurrentThread()->ApcState.Process;
    v19 = *(_KPROCESS **)(a1 + 8);
    if ( v18 != v19 )
      KiStackAttachProcess(v19, 0LL, (__int64)v78, a4);
    v20 = 0;
    v21 = 0LL;
    v22 = *(_QWORD *)(a1 + 48);
    if ( v22 || *(_QWORD *)(a1 + 56) )
    {
      *(_QWORD *)&v75 = 1LL;
      *((_QWORD *)&v75 + 1) = &v76;
      v76 = v22;
      v77 = *(_QWORD *)(a1 + 56);
      v20 = 1;
      v21 = &v75;
    }
    UserDataCount[0] = v20;
    VirtualMemory = MmAllocateVirtualMemory(
                      -1,
                      (int)a1 + 24,
                      (int)a1 + 32,
                      *(_DWORD *)(a1 + 40),
                      4,
                      v21,
                      *(ULONGLONG *)UserDataCount,
                      0,
                      0x10000000,
                      0,
                      0LL);
    goto LABEL_42;
  }
  if ( v6 > 6 )
  {
    v13 = v6 - 7;
    if ( !v13 )
    {
      LOBYTE(v12) = KeAlertThreadByThreadId(*(_QWORD *)(a1 + 8));
      goto LABEL_24;
    }
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        KeLeaveCriticalRegion();
        return;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        memmove(*(void **)(a1 + 8), *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
        *(_QWORD *)(a1 + 8) = 0LL;
        return;
      }
      if ( v16 != 1 )
        goto LABEL_146;
      LOBYTE(a2) = *(_BYTE *)(a1 + 24);
      PartitionState = MmGetSectionStrongImageReference(*(_QWORD *)(a1 + 8), a2, 0LL, a1 + 16);
    }
    else
    {
      PartitionState = KeWaitForAlertByThreadId(
                         *(_BYTE *)(a1 + 8),
                         (_QWORD *)((a1 + 24) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 16) >> 64)),
                         0LL);
    }
LABEL_22:
    *(_QWORD *)(a1 + 8) = PartitionState;
    return;
  }
  if ( v6 == 6 )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 16);
    LOBYTE(v12) = DbgkForwardException(*(_QWORD *)(a1 + 8), a2);
LABEL_24:
    v12 = (unsigned __int8)v12;
    goto LABEL_25;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    PartitionState = PspIumAllocatePhysicalPages(
                       *(_DWORD *)(a1 + 8),
                       *(_QWORD *)(a1 + 16),
                       *(_DWORD *)(a1 + 24),
                       (int)a1 + 16,
                       a1 + 24);
    goto LABEL_22;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    PspIumFreePhysicalPages(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 8));
    return;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
    {
      PspIumGetPhysicalPage(a1);
      return;
    }
    if ( v10 == 1 )
    {
      PspIumGetSystemData(a1);
      return;
    }
    goto LABEL_146;
  }
  v80[0] = *(_OWORD *)(a1 + 10);
  v80[1] = *(_OWORD *)(a1 + 26);
  v80[2] = *(_OWORD *)(a1 + 42);
  v80[3] = *(_OWORD *)(a1 + 58);
  v80[4] = *(_OWORD *)(a1 + 74);
  v81 = *(_QWORD *)(a1 + 90);
  v82 = *(_DWORD *)(a1 + 98);
  v83 = *(_WORD *)(a1 + 102);
  v84 = 0;
  DbgPrintEx(
    0,
    0,
    "IUM [VP:%u,TK:%#02x,LN:%04u] %s\n",
    *(unsigned __int16 *)(a1 + 8) >> 13,
    *(_DWORD *)(a1 + 4),
    (*(unsigned __int16 *)(a1 + 8) >> 1) & 0xFFF,
    (const char *)v80);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    __debugbreak();
}
