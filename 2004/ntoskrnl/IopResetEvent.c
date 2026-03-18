/*
 * XREFs of IopResetEvent @ 0x14028FBA0
 * Callers:
 *     NtSetInformationFile @ 0x14028FD10 (NtSetInformationFile.c)
 *     IopXxxControlFile @ 0x140674CF0 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x140675CE0 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x1406780E0 (NtQueryInformationFile.c)
 *     NtWriteFile @ 0x14068B600 (NtWriteFile.c)
 *     NtReadFile @ 0x14068C230 (NtReadFile.c)
 *     NtQueryVolumeInformationFile @ 0x14068EAF0 (NtQueryVolumeInformationFile.c)
 *     NtLockFile @ 0x14069F3F0 (NtLockFile.c)
 *     NtUnlockFile @ 0x1406DF1B0 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406E7FA0 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406EA6D0 (NtQueryEaFile.c)
 *     NtReadFileScatter @ 0x1406EBFB0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406EC5C0 (NtWriteFileGather.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406FCF10 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x14071EAF0 (NtSetEaFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14088F32C (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x1408928F0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
