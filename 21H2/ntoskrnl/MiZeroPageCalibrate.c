/*
 * XREFs of MiZeroPageCalibrate @ 0x1403AFF94
 * Callers:
 *     MiZeroNodePages @ 0x1403B0390 (MiZeroNodePages.c)
 *     MiZeroBootLargePages @ 0x1403CAD94 (MiZeroBootLargePages.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x140346100 (ExAllocatePoolMm.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeIpiGenericCall @ 0x1403A4C70 (KeIpiGenericCall.c)
 *     MiComputeRunTimeZeroComparisons @ 0x1403B01C8 (MiComputeRunTimeZeroComparisons.c)
 *     MiAllocateCalibrationResultsMemory @ 0x1403B02F0 (MiAllocateCalibrationResultsMemory.c)
 *     MiTimeSingleLargePageZero @ 0x1403B0680 (MiTimeSingleLargePageZero.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroPageCalibrate(ULONG_PTR a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned int v5; // r9d
  __int64 v6; // rsi
  ULONG_PTR v7; // r15
  SIZE_T v8; // r14
  PVOID PoolMm; // rax
  SIZE_T v10; // r14
  PVOID v11; // rax
  PVOID v12; // rbx
  void *v13; // rcx
  unsigned __int8 CalibrationResultsMemory; // al
  unsigned __int64 v15; // rbx
  char v16; // al
  void *v17; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v20; // eax
  _DWORD *SchedulerAssist; // r8
  bool v22; // zf
  ULONG_PTR Context[10]; // [rsp+30h] [rbp-88h] BYREF

  memset(Context, 0, sizeof(Context));
  if ( a2 )
  {
    v4 = *(unsigned int *)(a2 + 80);
    v5 = *(_DWORD *)(a2 + 80);
    v6 = *(_QWORD *)(a1 + 16) + 4544 * v4;
    *(_QWORD *)(v6 + 4432) = a2;
    v7 = MmPerProcessorZeroCalibrationBytes;
    if ( !MmPerProcessorZeroCalibrationBytes )
      v7 = 0x800000LL;
    v8 = v7 * *(int *)(a2 + 128);
    PoolMm = ExAllocatePoolMm(64, v8, 0x655A694Du, v5);
    *(_QWORD *)(v6 + 4408) = PoolMm;
    if ( PoolMm )
      *(_QWORD *)(v6 + 4416) = v8;
    else
      *(_BYTE *)(a1 + 6400) = 1;
    v10 = 16LL * *(int *)(a2 + 128);
    v11 = ExAllocatePoolMm(64, v10, 0x655A694Du, v4);
    v12 = v11;
    if ( v11 )
    {
      memset(v11, 0, v10);
      v13 = *(void **)(v6 + 4384);
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      *(_QWORD *)(v6 + 4384) = v12;
      *(_DWORD *)(v6 + 4360) = *(_DWORD *)(a2 + 128);
      *(_QWORD *)(v6 + 4368) = v7;
    }
    else
    {
      *(_BYTE *)(a1 + 6400) = 1;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 6404), *(_DWORD *)(a2 + 128));
  }
  else
  {
    v6 = 0LL;
    v7 = 0LL;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 6408), 0xFFFFFFFF) == 1 )
  {
    if ( *(_BYTE *)(a1 + 6400) != 1 )
    {
      Context[9] = a1;
      MiTimeSingleLargePageZero(a1);
      CalibrationResultsMemory = MiAllocateCalibrationResultsMemory(Context);
      v15 = CalibrationResultsMemory;
      if ( CalibrationResultsMemory == 17 )
      {
        *(_BYTE *)(a1 + 6400) = 1;
        v16 = 1;
      }
      else
      {
        LODWORD(Context[1]) = *(_DWORD *)(a1 + 6404);
        v16 = *(_BYTE *)(a1 + 6400);
        Context[2] = v7;
      }
      if ( v16 )
      {
        *(_BYTE *)(a1 + 6400) = 0;
      }
      else
      {
        LODWORD(Context[5]) = *(_DWORD *)(a1 + 6404);
        KeIpiGenericCall(MiZeroPageCalibrateIsr, (ULONG_PTR)Context);
      }
      if ( (_BYTE)v15 != 17 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v22 = (v20 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v20;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v15);
      }
      if ( Context[8] )
        ExFreePoolWithTag((PVOID)Context[8], 0);
      MiComputeRunTimeZeroComparisons(a1);
    }
    *(_DWORD *)(a1 + 6408) = (unsigned __int16)KeNumberNodes;
    KeSetEvent((PRKEVENT)(a1 + 6416), 0, 0);
  }
  else if ( a2 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 6416), Executive, 0, 0, 0LL);
  }
  if ( v6 )
  {
    v17 = *(void **)(v6 + 4408);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0);
      *(_QWORD *)(v6 + 4408) = 0LL;
    }
  }
}
