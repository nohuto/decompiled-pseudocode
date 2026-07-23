/*
 * XREFs of MiApplyCommitDelay @ 0x140550470
 * Callers:
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiApplyCommitDelay(__int64 a1, char a2, __int64 a3)
{
  volatile LONG *v4; // rbp
  KIRQL v5; // al
  int v6; // ecx
  unsigned __int64 v7; // r14
  int v8; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  KIRQL v14; // al
  unsigned __int64 v15; // rdi
  unsigned __int8 v16; // cl
  struct _KPRCB *v17; // r9
  int v18; // eax
  _DWORD *v19; // r8
  LARGE_INTEGER Timeout; // [rsp+68h] [rbp+20h] BYREF

  if ( (a2 & 4) == 0
    && (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
    && KeGetCurrentIrql() < 2u
    && a3 != *(_QWORD *)(a1 + 6216)
    && *(_DWORD *)(a1 + 1868) )
  {
    v4 = (volatile LONG *)(a1 + 1344);
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
    v6 = *(_DWORD *)(a1 + 1864);
    v7 = v5;
    if ( v6 )
    {
      v8 = v6 + 1;
    }
    else
    {
      *(_WORD *)(a1 + 1872) = 0;
      *(_DWORD *)(a1 + 1876) = 0;
      *(_QWORD *)(a1 + 1888) = a1 + 1880;
      *(_QWORD *)(a1 + 1880) = a1 + 1880;
      v8 = 1;
      *(_BYTE *)(a1 + 1874) = 6;
    }
    *(_DWORD *)(a1 + 1864) = v8;
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v13 = (v12 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    Timeout = Mi10Milliseconds;
    KeWaitForSingleObject((PVOID)(a1 + 1872), Executive, 0, 0, &Timeout);
    v14 = ExAcquireSpinLockExclusive(v4);
    --*(_DWORD *)(a1 + 1864);
    v15 = v14;
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v19 = v17->SchedulerAssist;
          v13 = (v18 & v19[5]) == 0;
          v19[5] &= v18;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)v17);
        }
      }
    }
    __writecr8(v15);
  }
}
