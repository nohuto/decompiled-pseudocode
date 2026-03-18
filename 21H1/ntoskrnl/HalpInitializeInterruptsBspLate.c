/*
 * XREFs of HalpInitializeInterruptsBspLate @ 0x1403C974C
 * Callers:
 *     HalpInterruptInitSystem @ 0x140996F00 (HalpInterruptInitSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     HalpInterruptSetLineStateInternal @ 0x14037597C (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x140375CF0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptModel @ 0x140378614 (HalpInterruptModel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     HalpIommuUpdateRemappingTableEntry @ 0x1404C0020 (HalpIommuUpdateRemappingTableEntry.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x140860E00 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpIrtAllocateIndex @ 0x140861054 (HalpIrtAllocateIndex.c)
 *     HalpHvMapDeviceInterrupt @ 0x1409A34F8 (HalpHvMapDeviceInterrupt.c)
 *     HalpUpdatePerDeviceMsiLimitInformation @ 0x140A6E1AC (HalpUpdatePerDeviceMsiLimitInformation.c)
 */

void HalpInitializeInterruptsBspLate()
{
  ULONG_PTR *v0; // rsi
  __int64 v1; // rdi
  _QWORD *v2; // r15
  _QWORD *v3; // r14
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r13
  int v9; // ecx
  unsigned __int64 v10; // rbx
  int v11; // r13d
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  bool v17; // cc
  __int64 v18; // [rsp+30h] [rbp-28h]
  int v19; // [rsp+38h] [rbp-20h]
  int v20; // [rsp+A0h] [rbp+48h] BYREF
  int v21; // [rsp+A8h] [rbp+50h]
  __int64 v22; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+60h]

  if ( (*(_DWORD *)(HalpInterruptController + 220) & 0x100) != 0 && (int)HalpInitializeInterruptRemappingBspLate() < 0 )
    KeBugCheckEx(0x5Cu, 0x7000uLL, 3uLL, 1uLL, 0LL);
  HalpUpdatePerDeviceMsiLimitInformation();
  if ( (unsigned int)HalpInterruptModel() != 1
    && (unsigned int)HalpInterruptModel() != 2
    && (unsigned int)HalpInterruptModel() != 3 )
  {
    return;
  }
  v20 = 0;
  v22 = 0LL;
  if ( !HalpInterruptFixedLines || (*(_DWORD *)(HalpInterruptController + 220) & 0x100) == 0 && !qword_140C4A388 )
    return;
  v0 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  v19 = 0;
  while ( 1 )
  {
LABEL_36:
    if ( v0 == &HalpRegisteredInterruptControllers )
      return;
    v1 = (__int64)v0;
    v0 = (ULONG_PTR *)*v0;
    if ( *(_DWORD *)(v1 + 216) == 2 )
    {
      v2 = *(_QWORD **)(v1 + 240);
      if ( v2 != (_QWORD *)(v1 + 240) )
        break;
    }
  }
  while ( 1 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    if ( *((_DWORD *)v3 + 8) == 2 )
    {
      v4 = 0LL;
      v5 = *((_DWORD *)v3 + 6) - *((_DWORD *)v3 + 5);
      v21 = 0;
      if ( v5 > 0 )
        break;
    }
LABEL_35:
    if ( v2 == (_QWORD *)(v1 + 240) )
      goto LABEL_36;
  }
  v6 = 0LL;
  v18 = 0LL;
  v7 = 0LL;
  v23 = 0LL;
  while ( 1 )
  {
    if ( !*(_BYTE *)(v7 + v3[6]) )
      goto LABEL_34;
    LODWORD(v22) = *(_DWORD *)(v1 + 232);
    HIDWORD(v22) = v4 + *((_DWORD *)v3 + 5);
    v8 = v6 + v3[5];
    if ( (*(_DWORD *)(HalpInterruptController + 220) & 0x100) != 0 )
      break;
LABEL_22:
    if ( qword_140C4A388 )
    {
      v9 = HalpHvMapDeviceInterrupt(*(unsigned int *)(v1 + 232), v4, v8, 0LL);
      if ( v9 < 0 )
      {
        *(_DWORD *)(v1 + 312) = 1823;
        goto LABEL_39;
      }
    }
    v10 = HalpAcquireHighLevelLock(&HalpInterruptLock);
    v11 = HalpInterruptSetLineStateInternal(v1, (__int64)&v22, v8);
    KxReleaseSpinLock(&HalpInterruptLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
    if ( v11 < 0 )
      return;
    LODWORD(v4) = v21;
    v7 = v23;
    v6 = v18;
LABEL_34:
    v4 = (unsigned int)(v4 + 1);
    v23 = v7 + 16;
    v6 += 56LL;
    v17 = (int)v4 < *((_DWORD *)v3 + 6) - *((_DWORD *)v3 + 5);
    v21 = v4;
    v7 += 16LL;
    v18 = v6;
    if ( !v17 )
      goto LABEL_35;
  }
  v9 = HalpIrtAllocateIndex(&v20, 1LL, 0LL, 0LL, 0LL);
  if ( v9 >= 0 )
  {
    v19 ^= (v20 ^ v19) & 0x3FFFFFFF;
    HalpIommuUpdateRemappingTableEntry(0LL, v19 & 0x3FFFFFFF, v8);
    *(_DWORD *)(v8 + 32) = v19 & 0x3FFFFFFF;
    *(_DWORD *)(v8 + 24) = 7;
    goto LABEL_22;
  }
  *(_DWORD *)(v1 + 312) = 1794;
LABEL_39:
  *(_DWORD *)(v1 + 296) = v9;
  HalpInterruptLastProblem = 31;
  *(_DWORD *)(v1 + 292) = 31;
  *(_QWORD *)(v1 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\intrupt.c";
}
