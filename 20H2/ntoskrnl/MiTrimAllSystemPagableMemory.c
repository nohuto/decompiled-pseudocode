/*
 * XREFs of MiTrimAllSystemPagableMemory @ 0x14053A540
 * Callers:
 *     MmTrimAllSystemPagableMemory @ 0x14053AE90 (MmTrimAllSystemPagableMemory.c)
 *     MmVerifierTrimMemory @ 0x1409C8C14 (MmVerifierTrimMemory.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAreInterruptsEnabled @ 0x140226820 (KeAreInterruptsEnabled.c)
 *     MiGetSessionVm @ 0x14029977C (MiGetSessionVm.c)
 *     MiPurgePartitionStandby @ 0x140384224 (MiPurgePartitionStandby.c)
 *     MiEmptyTargetedWorkingSet @ 0x140539728 (MiEmptyTargetedWorkingSet.c)
 */

__int64 __fastcall MiTrimAllSystemPagableMemory(int a1, int a2)
{
  _DWORD *v2; // r14
  unsigned __int64 SessionVm; // rbx
  _DWORD *v4; // rsi
  __int64 v6; // r12
  unsigned int v7; // r8d
  _DWORD *v8; // rdx
  _DWORD *v9; // rcx
  unsigned int v11; // edi
  struct _KTHREAD *CurrentThread; // rbp
  int v13; // r13d
  __int64 v14; // r8
  _DWORD *v15; // r9
  __int64 v16; // rcx
  ULONG_PTR *v17; // rcx

  v2 = &unk_140C4ECE8;
  SessionVm = 1LL;
  v4 = &unk_140C4EE80;
  v6 = 3LL;
  if ( !a1 )
  {
    v7 = 0;
    v8 = &unk_140C4ECE8;
    v9 = &unk_140C4EE80;
    do
    {
      SessionVm = (unsigned __int64)v9;
      if ( v9 && *v8 != v9[1] )
        break;
      ++v7;
      v9 += 80;
      ++v8;
    }
    while ( v7 < 3 );
    if ( v7 == 6 )
      return 0LL;
  }
  if ( KeGetCurrentIrql() > 1u )
    return 0LL;
  v11 = 0;
  CurrentThread = 0LL;
  v13 = 0;
  if ( _InterlockedIncrement(&dword_140C4ECC8) <= 1 && KeAreInterruptsEnabled() )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = 1;
    --CurrentThread->SpecialApcDisable;
    if ( !a1 )
    {
      do
      {
        SessionVm = (unsigned __int64)v4;
        if ( v4 && *v2 != v4[1] )
        {
          v11 = 1;
          MiEmptyTargetedWorkingSet((__int64)v4);
          *v2 = v4[1];
        }
        v4 += 80;
        ++v2;
        --v6;
      }
      while ( v6 );
      goto LABEL_22;
    }
    if ( a1 == 1 )
    {
      SessionVm = (unsigned __int64)&CurrentThread->ApcState.Process[1].ActiveProcessorsPadding[6];
      v16 = SessionVm;
    }
    else
    {
      if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
      {
LABEL_22:
        if ( a2 == 1 && v11 == 1 )
        {
          if ( a1 == 1 )
            v17 = *(ULONG_PTR **)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
          else
            v17 = &MiSystemPartition;
          MiPurgePartitionStandby((__int64)v17, 8u, v14, v15);
        }
        goto LABEL_28;
      }
      SessionVm = MiGetSessionVm();
      v16 = SessionVm;
    }
    MiEmptyTargetedWorkingSet(v16);
    v11 = 1;
    goto LABEL_22;
  }
LABEL_28:
  _InterlockedAdd(&dword_140C4ECC8, 0xFFFFFFFF);
  if ( v13 == 1 )
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v11;
}
