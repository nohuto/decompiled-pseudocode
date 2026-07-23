/*
 * XREFs of IopReleaseFileObjectLock @ 0x14025EEC0
 * Callers:
 *     NtSetInformationFile @ 0x140253490 (NtSetInformationFile.c)
 *     IopGetSetSecurityObject @ 0x1405E3500 (IopGetSetSecurityObject.c)
 *     NtWriteFile @ 0x1405E3F90 (NtWriteFile.c)
 *     NtReadFile @ 0x1405E54D0 (NtReadFile.c)
 *     NtQueryVolumeInformationFile @ 0x1405F5260 (NtQueryVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x1405FCC10 (IopXxxControlFile.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 *     IopCloseFile @ 0x1405FDC00 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x140600000 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x14063AACC (IopQueryXxxInformation.c)
 *     NtReadFileScatter @ 0x1406CACB0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406CB2C0 (NtWriteFileGather.c)
 *     IoSetInformation @ 0x140767730 (IoSetInformation.c)
 *     IopAllocateIrpCleanup @ 0x14088CA14 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088D1F8 (IopExceptionCleanup.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     KeSetEventBoostPriorityEx @ 0x14035A898 (KeSetEventBoostPriorityEx.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

void __fastcall IopReleaseFileObjectLock(PADAPTER_OBJECT DmaAdapter)
{
  ULONG_PTR v1; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v5; // r15
  unsigned int v6; // edx
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int Priority; // [rsp+80h] [rbp+18h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  v1 = (ULONG_PTR)&DmaAdapter[8];
  v17 = 0LL;
  Priority = KeGetCurrentThread()->Priority;
  _InterlockedExchange((volatile __int32 *)(&DmaAdapter[7].Size + 1), 0);
  if ( *(_DWORD *)&DmaAdapter[7].Version )
    KeSetEventBoostPriorityEx(
      (_DWORD)DmaAdapter + 128,
      (unsigned int)&v17,
      (unsigned int)&Priority,
      (_DWORD)DmaAdapter + 128,
      0,
      1);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v1) == 1 )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v5 = ++CurrentThread->AbAllocationRegionCount;
  v6 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  v7 = !_BitScanReverse((unsigned int *)&v8, v6);
  if ( v7 )
    goto LABEL_21;
  while ( 1 )
  {
    v9 = (__int64)&CurrentThread->LockEntries[v8];
    v6 &= ~(1 << v8);
    if ( (*(_BYTE *)(v9 + 26) & 1) != 0
      && (*(_DWORD *)(v9 + 32) & 1) == 0
      && (*(_QWORD *)(v9 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v1 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v9 + 40) == SessionId )
    {
      *(_BYTE *)(v9 + 26) &= ~1u;
      if ( *(_QWORD *)(v9 + 32) )
        break;
    }
    v7 = !_BitScanReverse((unsigned int *)&v8, v6);
    if ( v7 )
      goto LABEL_21;
  }
  if ( !v9 )
  {
LABEL_21:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, SessionId, 0LL);
  }
  else
  {
    *(_BYTE *)(v9 + 32) |= 2u;
    if ( *(__int64 *)(v9 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v9);
    v10 = *(_DWORD *)(v9 + 88) & 0xFFFE0000;
    *(_BYTE *)(v9 + 25) &= ~1u;
    *(_DWORD *)(v9 + 88) = v10;
    *(_QWORD *)(v9 + 32) = 0LL;
    v11 = (signed __int64)(v9 - (unsigned __int64)CurrentThread->LockEntries) / 96;
    if ( v5 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v11;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v11);
  }
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v13, v12, v14, v15);
  HalPutDmaAdapter(DmaAdapter);
  KeLeaveCriticalRegion();
}
