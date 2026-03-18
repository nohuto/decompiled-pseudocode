/*
 * XREFs of MiTrimAllSystemPagableMemory @ 0x140536520
 * Callers:
 *     MmTrimAllSystemPagableMemory @ 0x140536E70 (MmTrimAllSystemPagableMemory.c)
 *     MmVerifierTrimMemory @ 0x1409C2BE4 (MmVerifierTrimMemory.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140208590 (KeAreInterruptsEnabled.c)
 *     MiGetSessionVm @ 0x14022B5AC (MiGetSessionVm.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiPurgePartitionStandby @ 0x140381D04 (MiPurgePartitionStandby.c)
 *     MiEmptyTargetedWorkingSet @ 0x140535708 (MiEmptyTargetedWorkingSet.c)
 */

__int64 __fastcall MiTrimAllSystemPagableMemory(int a1, _DWORD *a2, __int64 a3, _DWORD *a4)
{
  _DWORD *v4; // r14
  unsigned __int64 SessionVm; // rbx
  _DWORD *v6; // rsi
  __int64 v8; // r12
  _DWORD *v9; // rcx
  unsigned int v11; // edi
  struct _KTHREAD *CurrentThread; // rbp
  int v13; // r13d
  __int64 v14; // rcx
  ULONG_PTR *v15; // rcx
  int v16; // [rsp+58h] [rbp+10h]

  v16 = (int)a2;
  v4 = &unk_140C4EDA8;
  SessionVm = 1LL;
  v6 = &unk_140C4EF40;
  v8 = 3LL;
  if ( !a1 )
  {
    a3 = 0LL;
    a2 = &unk_140C4EDA8;
    v9 = &unk_140C4EF40;
    do
    {
      SessionVm = (unsigned __int64)v9;
      if ( v9 && *a2 != v9[1] )
        break;
      a3 = (unsigned int)(a3 + 1);
      v9 += 80;
      ++a2;
    }
    while ( (unsigned int)a3 < 3 );
    if ( (_DWORD)a3 == 6 )
      return 0LL;
  }
  if ( KeGetCurrentIrql() > 1u )
    return 0LL;
  v11 = 0;
  CurrentThread = 0LL;
  v13 = 0;
  if ( _InterlockedIncrement(&dword_140C4ED88) <= 1 && KeAreInterruptsEnabled() )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = 1;
    --CurrentThread->SpecialApcDisable;
    if ( !a1 )
    {
      do
      {
        SessionVm = (unsigned __int64)v6;
        if ( v6 && *v4 != v6[1] )
        {
          v11 = 1;
          MiEmptyTargetedWorkingSet((__int64)v6);
          *v4 = v6[1];
        }
        v6 += 80;
        ++v4;
        --v8;
      }
      while ( v8 );
      goto LABEL_22;
    }
    if ( a1 == 1 )
    {
      SessionVm = (unsigned __int64)&CurrentThread->ApcState.Process[1].ActiveProcessorsPadding[6];
      v14 = SessionVm;
    }
    else
    {
      if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
      {
LABEL_22:
        if ( v16 == 1 && v11 == 1 )
        {
          if ( a1 == 1 )
            v15 = *(ULONG_PTR **)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
          else
            v15 = &MiSystemPartition;
          MiPurgePartitionStandby((__int64)v15, 8u, a3, a4);
        }
        goto LABEL_28;
      }
      SessionVm = MiGetSessionVm();
      v14 = SessionVm;
    }
    MiEmptyTargetedWorkingSet(v14);
    v11 = 1;
    goto LABEL_22;
  }
LABEL_28:
  _InterlockedAdd(&dword_140C4ED88, 0xFFFFFFFF);
  if ( v13 == 1 )
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, (__int64)a2, a3, (__int64)a4);
  return v11;
}
