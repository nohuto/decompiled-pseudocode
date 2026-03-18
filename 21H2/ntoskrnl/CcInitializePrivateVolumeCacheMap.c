/*
 * XREFs of CcInitializePrivateVolumeCacheMap @ 0x14053C908
 * Callers:
 *     CcCreatePrivateVolumeCacheMap @ 0x14053BE0C (CcCreatePrivateVolumeCacheMap.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     CcInitializeAsyncRead @ 0x1403D1458 (CcInitializeAsyncRead.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CcInitializeNumaNodeForVolume @ 0x14053C5FC (CcInitializeNumaNodeForVolume.c)
 *     CcInitializeQuickLWSThreadItem @ 0x14053CF1C (CcInitializeQuickLWSThreadItem.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     MmGetNumberOfPhysicalPagesForPartitionObject @ 0x14084D678 (MmGetNumberOfPhysicalPagesForPartitionObject.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char __fastcall CcInitializePrivateVolumeCacheMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  __int64 v6; // rax
  const void *v9; // r12
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int64 NumberOfPhysicalPagesForPartitionObject; // rax
  bool v18; // cf
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // rbx
  ULONG v27; // edx
  __int64 v28; // rax
  void *v29; // r9
  __int64 v30; // r8
  unsigned int v31; // ebx
  PVOID PoolWithTag; // rax
  const char *v33; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-1h] BYREF

  v5 = 0;
  v6 = *(_QWORD *)(a4 + 504);
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = *(const void **)(v6 + 8);
  memset((void *)a2, 0, 0x640uLL);
  *(_DWORD *)a2 = 104858357;
  *(_QWORD *)(a2 + 16) = v9;
  *(_QWORD *)(a2 + 32) = a1;
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(*(_QWORD *)(a4 + 504) + 204LL);
  *(_DWORD *)(a2 + 1536) = 20;
  *(_DWORD *)(a2 + 1540) = 10;
  *(_QWORD *)(a2 + 8) = 1LL;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1232)) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a4 + 504);
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  ++*(_DWORD *)(*(_QWORD *)(a2 + 40) + 4LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  *(_DWORD *)(a2 + 656) = 2048;
  *(_QWORD *)(a2 + 56) = a2 + 48;
  *(_QWORD *)(a2 + 48) = a2 + 48;
  *(_QWORD *)(a2 + 584) = a2 + 576;
  *(_QWORD *)(a2 + 576) = a2 + 576;
  *(_QWORD *)(a2 + 600) = a2 + 592;
  *(_QWORD *)(a2 + 592) = a2 + 592;
  *(_QWORD *)(a2 + 632) = a2 + 624;
  *(_QWORD *)(a2 + 624) = a2 + 624;
  *(_QWORD *)(a2 + 616) = a2 + 608;
  *(_QWORD *)(a2 + 608) = a2 + 608;
  *(_QWORD *)(a2 + 696) = a2 + 688;
  *(_QWORD *)(a2 + 688) = a2 + 688;
  *(_QWORD *)(a2 + 664) = a2 + 640;
  *(_QWORD *)(a2 + 672) = a2 + 640;
  *(_QWORD *)(a2 + 640) = a2 + 664;
  *(_QWORD *)(a2 + 648) = a2 + 664;
  *(_DWORD *)(a2 + 680) = 2048;
  *(_QWORD *)(a2 + 768) = 0LL;
  *(_QWORD *)(a2 + 792) = a2 + 784;
  *(_QWORD *)(a2 + 784) = a2 + 784;
  *(_QWORD *)(a2 + 1256) = a2 + 1248;
  *(_QWORD *)(a2 + 1248) = a2 + 1248;
  *(_QWORD *)(a2 + 1552) = a2 + 1544;
  *(_QWORD *)(a2 + 1544) = a2 + 1544;
  *(_QWORD *)(a2 + 832) = a2 + 824;
  *(_QWORD *)(a2 + 824) = a2 + 824;
  *(_WORD *)(a2 + 816) = 1;
  *(_BYTE *)(a2 + 818) = 6;
  *(_DWORD *)(a2 + 820) = 0;
  *(_QWORD *)(a2 + 856) = a2 + 848;
  *(_QWORD *)(a2 + 848) = a2 + 848;
  *(_WORD *)(a2 + 840) = 1;
  *(_BYTE *)(a2 + 842) = 6;
  *(_DWORD *)(a2 + 844) = 0;
  *(_QWORD *)(a2 + 880) = a2 + 872;
  *(_QWORD *)(a2 + 872) = a2 + 872;
  *(_WORD *)(a2 + 864) = 1;
  *(_BYTE *)(a2 + 866) = 6;
  *(_DWORD *)(a2 + 868) = 0;
  *(_QWORD *)(a2 + 904) = a2 + 896;
  *(_QWORD *)(a2 + 896) = a2 + 896;
  *(_WORD *)(a2 + 888) = 1;
  *(_BYTE *)(a2 + 890) = 6;
  *(_DWORD *)(a2 + 892) = 0;
  *(_QWORD *)(a2 + 1192) = a2 + 1184;
  *(_QWORD *)(a2 + 1184) = a2 + 1184;
  *(_WORD *)(a2 + 1176) = 0;
  *(_BYTE *)(a2 + 1178) = 6;
  *(_DWORD *)(a2 + 1180) = 0;
  *(_QWORD *)(a2 + 1216) = a2 + 1208;
  *(_QWORD *)(a2 + 1208) = a2 + 1208;
  *(_WORD *)(a2 + 1200) = 0;
  *(_BYTE *)(a2 + 1202) = 6;
  *(_DWORD *)(a2 + 1204) = 0;
  *(_QWORD *)(a2 + 1576) = a2 + 1568;
  *(_QWORD *)(a2 + 1568) = a2 + 1568;
  *(_WORD *)(a2 + 1560) = 1;
  *(_BYTE *)(a2 + 1562) = 6;
  *(_DWORD *)(a2 + 1564) = 0;
  *(_OWORD *)(a2 + 992) = 0LL;
  *(_QWORD *)(a2 + 1008) = 0LL;
  *(_OWORD *)(a2 + 1016) = 0LL;
  *(_OWORD *)(a2 + 1032) = 0LL;
  *(_OWORD *)(a2 + 1048) = 0LL;
  *(_QWORD *)(a2 + 1064) = 0LL;
  *(_OWORD *)(a2 + 1232) = 0LL;
  *(_DWORD *)(a2 + 1232) = 2;
  *(_QWORD *)(a2 + 1240) = a2;
  memset((void *)(a2 + 920), 0, 0x48uLL);
  *(_BYTE *)(a2 + 920) = 9;
  *(_QWORD *)(a2 + 936) = a2 + 928;
  *(_QWORD *)(a2 + 928) = a2 + 928;
  *(_DWORD *)(a2 + 924) = 0;
  *(_QWORD *)(a2 + 944) = 0LL;
  *(_DWORD *)(a2 + 980) = 0;
  *(_WORD *)(a2 + 976) = 0;
  *(_BYTE *)(a2 + 984) = 1;
  NumberOfPhysicalPagesForPartitionObject = MmGetNumberOfPhysicalPagesForPartitionObject(*(_QWORD *)(a1 + 8));
  if ( (_BYTE)dword_140D051DC )
  {
    v18 = (unsigned int)CcAzure_TopBottomDPTEqual < 2;
    *(_QWORD *)(a2 + 1024) = NumberOfPhysicalPagesForPartitionObject >> 1;
    v19 = *(_QWORD *)(a1 + 8);
    if ( v18 )
      v20 = (unsigned __int64)MmGetNumberOfPhysicalPagesForPartitionObject(v19) >> 1;
    else
      v20 = (unsigned __int64)MmGetNumberOfPhysicalPagesForPartitionObject(v19) >> 3;
    *(_QWORD *)(a2 + 1032) = v20;
    *(_QWORD *)(a2 + 1016) = v21;
    v22 = ExCriticalWorkerThreads - 1;
  }
  else
  {
    v23 = NumberOfPhysicalPagesForPartitionObject >> 3;
    *(_QWORD *)(a2 + 1032) = v23;
    *(_QWORD *)(a2 + 1024) = v23;
    *(_QWORD *)(a2 + 1016) = v23;
    v22 = 1;
  }
  *(_DWORD *)(a2 + 800) = v22;
  *(_DWORD *)(a2 + 1064) = 10;
  *(_QWORD *)(a2 + 1056) = 0LL;
  v24 = 10 * MmGetNumberOfPhysicalPagesForPartitionObject(*(_QWORD *)(a1 + 8));
  v25 = ExCriticalWorkerThreads - 1;
  *(_QWORD *)(a2 + 1048) = v24;
  *(_DWORD *)(a2 + 776) = v25;
  *(_DWORD *)(a2 + 804) = CcMaxCachemapUninitWorkerThreads;
  v26 = (*(_QWORD *)(a2 + 1016) >> 1) + (*(_QWORD *)(a2 + 1016) >> 2);
  if ( CcAzure_LazyWriterPercentageOfNumProcs )
  {
    v27 = KeQueryActiveProcessorCountEx(0xFFFFu) * CcAzure_LazyWriterPercentageOfNumProcs / 0x64;
    if ( *(_DWORD *)(a2 + 776) < v27 )
      *(_DWORD *)(a2 + 776) = v27;
  }
  *(_DWORD *)(a2 + 704) = 0;
  *(_BYTE *)(a2 + 708) = 0;
  *(_QWORD *)(a2 + 1152) = 0LL;
  *(_DWORD *)(a2 + 1168) = -1;
  if ( v26 > 0xFFFFFFFF )
    LODWORD(v26) = -1;
  ObjectAttributes.Length = 48;
  *(_DWORD *)(a2 + 1040) = v26;
  *(_QWORD *)(a2 + 1112) = a2 + 1104;
  *(_QWORD *)(a2 + 1104) = a2 + 1104;
  v28 = *(_QWORD *)(a1 + 8);
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  v29 = *(void **)(v28 + 112);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( PsCreateSystemThread(
         (PHANDLE)(a2 + 1224),
         0x1FFFFFu,
         &ObjectAttributes,
         v29,
         0LL,
         CcQueueLazyWriteScanThreadForVolume,
         (PVOID)a2) < 0 )
    goto LABEL_29;
  v31 = 0;
  if ( CcNumberNumaNodes )
  {
    while ( CcInitializeNumaNodeForVolume(a2, (_DWORD *)(a3 + 288LL * v31), v30, v31) )
    {
      if ( ++v31 >= CcNumberNumaNodes )
        goto LABEL_25;
    }
    goto LABEL_29;
  }
LABEL_25:
  if ( !(unsigned __int8)CcInitializeQuickLWSThreadItem(a2)
    || (PoolWithTag = ExAllocatePoolWithTag(
                        (POOL_TYPE)1536,
                        8LL * (unsigned int)(*(_DWORD *)(a2 + 800) + 1),
                        0x70546343u)) == 0LL
    || (*(_QWORD *)(a2 + 1072) = PoolWithTag, !CcInitializeAsyncRead(a1, a2)) )
  {
LABEL_29:
    v33 = "NO";
    goto LABEL_30;
  }
  ++*(_DWORD *)(a2 + 4);
  v5 = 1;
  *(_BYTE *)(a2 + 1236) = 1;
  v33 = "YES";
LABEL_30:
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcInitializePrivateVolumeCacheMap: VCM:%p(vid:%2lx), DO:%p, PVCM:%p(vid:%2lx), Success:%s -> DONE\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    *(const void **)(a4 + 504),
    *(_DWORD *)(*(_QWORD *)(a4 + 504) + 204LL),
    v9,
    (const void *)a2,
    *(_DWORD *)(a2 + 24),
    v33);
  return v5;
}
