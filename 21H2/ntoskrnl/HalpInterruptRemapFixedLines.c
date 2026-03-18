/*
 * XREFs of HalpInterruptRemapFixedLines @ 0x1403B9214
 * Callers:
 *     HalpInitializeInterruptsBspLate @ 0x1403B91D4 (HalpInitializeInterruptsBspLate.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     HalpInterruptSetLineStateInternal @ 0x140251FD8 (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x140252344 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     HalpIommuUpdateRemappingTableEntry @ 0x140510F68 (HalpIommuUpdateRemappingTableEntry.c)
 *     HalpInterruptSetProblemEx @ 0x14051E038 (HalpInterruptSetProblemEx.c)
 *     HalpIrtAllocateIndex @ 0x140909B14 (HalpIrtAllocateIndex.c)
 *     HalpHvMapDeviceInterrupt @ 0x140A61798 (HalpHvMapDeviceInterrupt.c)
 */

__int64 HalpInterruptRemapFixedLines()
{
  unsigned int v0; // ebx
  ULONG_PTR *v2; // rsi
  __int64 v3; // rdi
  _QWORD *v4; // r15
  _QWORD *v5; // r14
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r13
  int v11; // eax
  int v12; // eax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v14; // r13
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  bool v19; // cc
  __int64 v20; // [rsp+40h] [rbp-28h]
  __int64 v21; // [rsp+48h] [rbp-20h]
  int v22; // [rsp+50h] [rbp-18h]
  unsigned __int8 v23; // [rsp+B0h] [rbp+48h]
  int v24; // [rsp+B8h] [rbp+50h] BYREF
  int v25; // [rsp+C0h] [rbp+58h]
  __int64 v26; // [rsp+C8h] [rbp+60h] BYREF

  v0 = 0;
  v24 = 0;
  v26 = 0LL;
  if ( HalpInterruptFixedLines && ((*(_DWORD *)(HalpInterruptController + 228) & 0x100) != 0 || qword_140C4C4A8) )
  {
    v2 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
    v22 = 0;
    while ( v2 != &HalpRegisteredInterruptControllers )
    {
      v3 = (__int64)v2;
      v2 = (ULONG_PTR *)*v2;
      if ( *(_DWORD *)(v3 + 224) == 2 )
      {
        v4 = *(_QWORD **)(v3 + 248);
        while ( v4 != (_QWORD *)(v3 + 248) )
        {
          v5 = v4;
          v4 = (_QWORD *)*v4;
          if ( *((_DWORD *)v5 + 8) == 2 )
          {
            v6 = 0LL;
            v7 = *((_DWORD *)v5 + 6) - *((_DWORD *)v5 + 5);
            v25 = 0;
            if ( v7 > 0 )
            {
              v8 = 0LL;
              v21 = 0LL;
              v20 = 0LL;
              v9 = 0LL;
              do
              {
                if ( *(_BYTE *)(v8 + v5[6]) )
                {
                  LODWORD(v26) = *(_DWORD *)(v3 + 240);
                  HIDWORD(v26) = v6 + *((_DWORD *)v5 + 5);
                  v10 = v9 + v5[5];
                  if ( (*(_DWORD *)(HalpInterruptController + 228) & 0x100) != 0 )
                  {
                    v11 = HalpIrtAllocateIndex(&v24, 1LL, 0LL);
                    v0 = v11;
                    if ( v11 < 0 )
                    {
                      HalpInterruptSetProblemEx(
                        v3,
                        31,
                        v11,
                        (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
                        1790);
                      return v0;
                    }
                    v22 ^= (v24 ^ v22) & 0x3FFFFFFF;
                    HalpIommuUpdateRemappingTableEntry(0LL, v22 & 0x3FFFFFFF, v10);
                    *(_DWORD *)(v10 + 24) = 7;
                    *(_DWORD *)(v10 + 32) = v22 & 0x3FFFFFFF;
                  }
                  if ( qword_140C4C4A8 )
                  {
                    v12 = HalpHvMapDeviceInterrupt(*(unsigned int *)(v3 + 240), v6, v10, 0LL);
                    v0 = v12;
                    if ( v12 < 0 )
                    {
                      HalpInterruptSetProblemEx(
                        v3,
                        31,
                        v12,
                        (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
                        1819);
                      return v0;
                    }
                  }
                  v23 = HalpAcquireHighLevelLock(&HalpInterruptLock);
                  v0 = HalpInterruptSetLineStateInternal(v3, (__int64)&v26, v10);
                  KxReleaseSpinLock(&HalpInterruptLock);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
                  {
                    v14 = v23;
                    if ( v23 <= 0xFu && CurrentIrql >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      SchedulerAssist = CurrentPrcb->SchedulerAssist;
                      v17 = ~(unsigned __int16)(-1LL << (v23 + 1));
                      v18 = (v17 & SchedulerAssist[5]) == 0;
                      SchedulerAssist[5] &= v17;
                      if ( v18 )
                        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                    }
                  }
                  else
                  {
                    v14 = v23;
                  }
                  __writecr8(v14);
                  if ( (v0 & 0x80000000) != 0 )
                    return v0;
                  LODWORD(v6) = v25;
                  v8 = v20;
                  v9 = v21;
                }
                v6 = (unsigned int)(v6 + 1);
                v20 = v8 + 16;
                v9 += 56LL;
                v19 = (int)v6 < *((_DWORD *)v5 + 6) - *((_DWORD *)v5 + 5);
                v25 = v6;
                v8 += 16LL;
                v21 = v9;
              }
              while ( v19 );
            }
          }
        }
      }
    }
  }
  return v0;
}
