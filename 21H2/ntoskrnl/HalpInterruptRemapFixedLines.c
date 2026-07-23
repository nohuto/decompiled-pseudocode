/*
 * XREFs of HalpInterruptRemapFixedLines @ 0x1403CDCDC
 * Callers:
 *     HalpInitializeInterruptsBspLate @ 0x1403CDC9C (HalpInitializeInterruptsBspLate.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403786FC (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpIommuUpdateRemappingTableEntry @ 0x1404C5874 (HalpIommuUpdateRemappingTableEntry.c)
 *     HalpIrtAllocateIndex @ 0x140865AE4 (HalpIrtAllocateIndex.c)
 *     HalpHvMapDeviceInterrupt @ 0x1409A8098 (HalpHvMapDeviceInterrupt.c)
 */

__int64 HalpInterruptRemapFixedLines()
{
  int v0; // ebx
  ULONG_PTR *v2; // rsi
  __int64 v3; // rdi
  _QWORD *v4; // r15
  _QWORD *v5; // r14
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r13
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v12; // r13
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  bool v17; // cc
  int v18; // [rsp+28h] [rbp-40h]
  __int64 v19; // [rsp+40h] [rbp-28h]
  __int64 v20; // [rsp+48h] [rbp-20h]
  int v21; // [rsp+50h] [rbp-18h]
  unsigned __int8 v22; // [rsp+B0h] [rbp+48h]
  int v23; // [rsp+B8h] [rbp+50h] BYREF
  int v24; // [rsp+C0h] [rbp+58h]
  __int64 v25; // [rsp+C8h] [rbp+60h] BYREF

  v0 = 0;
  v23 = 0;
  v25 = 0LL;
  if ( !HalpInterruptFixedLines || (*(_DWORD *)(HalpInterruptController + 220) & 0x100) == 0 && !qword_140C4A1E8 )
    return (unsigned int)v0;
  v2 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  v21 = 0;
  while ( 1 )
  {
LABEL_30:
    if ( v2 == &HalpRegisteredInterruptControllers )
      return (unsigned int)v0;
    v3 = (__int64)v2;
    v2 = (ULONG_PTR *)*v2;
    if ( *(_DWORD *)(v3 + 216) == 2 )
    {
      v4 = *(_QWORD **)(v3 + 240);
      if ( v4 != (_QWORD *)(v3 + 240) )
        break;
    }
  }
  while ( 1 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    if ( *((_DWORD *)v5 + 8) == 2 )
    {
      v6 = 0LL;
      v7 = *((_DWORD *)v5 + 6) - *((_DWORD *)v5 + 5);
      v24 = 0;
      if ( v7 > 0 )
        break;
    }
LABEL_29:
    if ( v4 == (_QWORD *)(v3 + 240) )
      goto LABEL_30;
  }
  v8 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v9 = 0LL;
  while ( 1 )
  {
    if ( !*(_BYTE *)(v8 + v5[6]) )
      goto LABEL_28;
    LODWORD(v25) = *(_DWORD *)(v3 + 232);
    HIDWORD(v25) = v6 + *((_DWORD *)v5 + 5);
    v10 = v9 + v5[5];
    if ( (*(_DWORD *)(HalpInterruptController + 220) & 0x100) != 0 )
      break;
LABEL_15:
    if ( qword_140C4A1E8 )
    {
      v0 = HalpHvMapDeviceInterrupt(*(unsigned int *)(v3 + 232), v6, v10, 0LL);
      if ( v0 < 0 )
      {
        *(_DWORD *)(v3 + 312) = 1825;
        goto LABEL_33;
      }
    }
    v22 = HalpAcquireHighLevelLock(&HalpInterruptLock);
    v0 = HalpInterruptSetLineStateInternal(v3, (__int64)&v25, v10);
    KxReleaseSpinLock(&HalpInterruptLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v12 = v22;
      if ( v22 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (v22 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v12 = v22;
    }
    __writecr8(v12);
    if ( v0 < 0 )
      return (unsigned int)v0;
    LODWORD(v6) = v24;
    v8 = v19;
    v9 = v20;
LABEL_28:
    v6 = (unsigned int)(v6 + 1);
    v19 = v8 + 16;
    v9 += 56LL;
    v17 = (int)v6 < *((_DWORD *)v5 + 6) - *((_DWORD *)v5 + 5);
    v24 = v6;
    v8 += 16LL;
    v20 = v9;
    if ( !v17 )
      goto LABEL_29;
  }
  LOBYTE(v18) = 0;
  v0 = HalpIrtAllocateIndex(&v23, 1LL, 0LL, 0LL, 0LL, v18, 0LL);
  if ( v0 >= 0 )
  {
    v21 ^= (v23 ^ v21) & 0x3FFFFFFF;
    HalpIommuUpdateRemappingTableEntry(0LL, v21 & 0x3FFFFFFF, v10);
    *(_DWORD *)(v10 + 24) = 7;
    *(_DWORD *)(v10 + 32) = v21 & 0x3FFFFFFF;
    goto LABEL_15;
  }
  *(_DWORD *)(v3 + 312) = 1796;
LABEL_33:
  *(_DWORD *)(v3 + 296) = v0;
  HalpInterruptLastProblem = 31;
  *(_DWORD *)(v3 + 292) = 31;
  *(_QWORD *)(v3 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\intrupt.c";
  return (unsigned int)v0;
}
