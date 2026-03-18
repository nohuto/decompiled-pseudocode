/*
 * XREFs of MiTrimAllSystemPagableMemory @ 0x1405970A0
 * Callers:
 *     MmTrimAllSystemPagableMemory @ 0x1405976F0 (MmTrimAllSystemPagableMemory.c)
 *     MmVerifierTrimMemory @ 0x140A81364 (MmVerifierTrimMemory.c)
 * Callees:
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     KeAreInterruptsEnabled @ 0x1402ABBD0 (KeAreInterruptsEnabled.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiPurgePartitionStandby @ 0x14038E4BC (MiPurgePartitionStandby.c)
 *     MiEmptyTargetedWorkingSet @ 0x14059676C (MiEmptyTargetedWorkingSet.c)
 */

__int64 __fastcall MiTrimAllSystemPagableMemory(int a1, int a2)
{
  _DWORD *v2; // r14
  _DWORD *v3; // rsi
  unsigned __int64 SessionVm; // rdi
  __int64 v6; // r12
  unsigned int v7; // r8d
  _DWORD *v8; // rdx
  _DWORD *v9; // rcx
  unsigned int v11; // ebp
  struct _KTHREAD *CurrentThread; // rbx
  int v13; // r13d
  __int64 v14; // rcx
  ULONG_PTR *v15; // rcx

  v2 = &unk_140C53368;
  v3 = &unk_140C53580;
  SessionVm = 1LL;
  v6 = 3LL;
  if ( !a1 )
  {
    v7 = 0;
    v8 = &unk_140C53368;
    v9 = &unk_140C53580;
    while ( 1 )
    {
      SessionVm = (unsigned __int64)v9;
      if ( v9 )
      {
        if ( *v8 != v9[1] )
          break;
      }
      ++v7;
      v9 += 80;
      ++v8;
      if ( v7 >= 3 )
      {
        if ( v7 == 6 )
          return 0LL;
        break;
      }
    }
  }
  if ( KeGetCurrentIrql() > 1u )
    return 0LL;
  v11 = 0;
  CurrentThread = 0LL;
  v13 = 0;
  if ( _InterlockedIncrement(&dword_140C53348) <= 1 && KeAreInterruptsEnabled() )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = 1;
    --CurrentThread->SpecialApcDisable;
    if ( !a1 )
    {
      do
      {
        SessionVm = (unsigned __int64)v3;
        if ( v3 && *v2 != v3[1] )
        {
          v11 = 1;
          MiEmptyTargetedWorkingSet((__int64)v3);
          *v2 = v3[1];
        }
        v3 += 80;
        ++v2;
        --v6;
      }
      while ( v6 );
      goto LABEL_22;
    }
    if ( a1 == 1 )
    {
      SessionVm = (unsigned __int64)&CurrentThread->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
      v14 = SessionVm;
    }
    else
    {
      if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
      {
LABEL_22:
        if ( a2 && v11 )
        {
          if ( a1 == 1 )
            v15 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
          else
            v15 = &MiSystemPartition;
          MiPurgePartitionStandby((__int64)v15, 8u);
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
  _InterlockedAdd(&dword_140C53348, 0xFFFFFFFF);
  if ( v13 )
  {
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v11;
}
