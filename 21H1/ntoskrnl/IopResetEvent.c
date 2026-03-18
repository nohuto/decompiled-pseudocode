/*
 * XREFs of IopResetEvent @ 0x140253320
 * Callers:
 *     NtSetInformationFile @ 0x140253490 (NtSetInformationFile.c)
 *     NtWriteFile @ 0x1405E3F90 (NtWriteFile.c)
 *     NtReadFile @ 0x1405E54D0 (NtReadFile.c)
 *     NtQueryVolumeInformationFile @ 0x1405F5260 (NtQueryVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x1405FCC10 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x1405FDC00 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x140600000 (NtQueryInformationFile.c)
 *     NtLockFile @ 0x140699320 (NtLockFile.c)
 *     NtUnlockFile @ 0x1406BEC50 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406C76A0 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406C9520 (NtQueryEaFile.c)
 *     NtReadFileScatter @ 0x1406CACB0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406CB2C0 (NtWriteFileGather.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406D9E90 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x14071CE70 (NtSetEaFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14088E00C (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x1408915D0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall IopResetEvent(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf
  int v11; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 80) & 0x4000000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    v11 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 152), 7u) )
    {
      do
        KeYieldProcessorEx(&v11, a2, a3, (__int64)SchedulerAssist);
      while ( (*(_DWORD *)(a1 + 152) & 0x80u) != 0 );
    }
    *(_DWORD *)(a1 + 156) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 152), 0xFFFFFF7F);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v6 = KeGetCurrentIrql();
        if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = CurrentPrcb->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v10 = (v9 & v8[5]) == 0;
          v8[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
}
