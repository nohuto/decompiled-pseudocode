/*
 * XREFs of HalpInterruptEnablePerformanceEvents @ 0x1403A3AF0
 * Callers:
 *     EmonPreOverflowHandler @ 0x1404D4320 (EmonPreOverflowHandler.c)
 *     HalpPostSleepMP @ 0x140996864 (HalpPostSleepMP.c)
 *     HalpInterruptInitSystem @ 0x14099C890 (HalpInterruptInitSystem.c)
 *     HalpDpPostReplaceInitialization @ 0x1409A9408 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403786FC (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptFindLines @ 0x1403787F0 (HalpInterruptFindLines.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptGsiToLine @ 0x140378AAC (HalpInterruptGsiToLine.c)
 *     HalpInterruptSetLineState @ 0x1403A3C48 (HalpInterruptSetLineState.c)
 *     HalpInterruptGetPriority @ 0x1403A41CC (HalpInterruptGetPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpInterruptEnablePerformanceEvents(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 v2; // di
  bool v4; // zf
  int v5; // ecx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  unsigned int Number; // edi
  ULONG_PTR v12; // rbx
  __int64 v13; // rcx
  char v14; // bl
  unsigned __int64 v15; // rdi
  __int64 v16; // r8
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  __int128 v19; // [rsp+40h] [rbp-19h] BYREF
  __int64 v20; // [rsp+50h] [rbp-9h]
  _OWORD v21[3]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v22; // [rsp+88h] [rbp+2Fh]
  __int64 v23; // [rsp+C0h] [rbp+67h] BYREF
  int v24; // [rsp+C8h] [rbp+6Fh] BYREF
  int v25; // [rsp+CCh] [rbp+73h]

  v1 = HalpInterruptController;
  v23 = 0LL;
  v2 = 0;
  v22 = 0LL;
  v4 = *(_DWORD *)(HalpInterruptController + 216) == 2;
  memset(v21, 0, sizeof(v21));
  if ( v4 )
  {
    LODWORD(v23) = *(_DWORD *)(HalpInterruptController + 232);
    HIDWORD(v23) = -3;
    if ( !HalpInterruptPerfLinesFound )
    {
      result = (__int64)HalpInterruptFindLines((unsigned int *)&v23);
      if ( !result )
        return result;
      HalpInterruptPerfLinesFound = 1;
    }
    *(_QWORD *)&v21[1] = 0x1FFFFFFFFLL;
    memset((char *)&v21[1] + 12, 0, 20);
    *(_QWORD *)&v21[0] = 1LL;
    *((_QWORD *)&v21[0] + 1) = 0x1000000001LL;
    DWORD2(v21[1]) = 3;
    LODWORD(v22) = 254;
    HIDWORD(v22) = HalpInterruptGetPriority(v1, 254LL);
    if ( !a1 )
      v2 = HalpAcquireHighLevelLock(&HalpInterruptLock);
    HalpInterruptSetLineStateInternal(v1, (__int64)&v23, (__int64)v21);
    if ( !a1 )
    {
      KxReleaseSpinLock(&HalpInterruptLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v2 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v10 = ~(unsigned __int16)(-1LL << (v2 + 1));
            v4 = (v10 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v10;
            if ( v4 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v2);
    }
  }
  v5 = *(_DWORD *)(v1 + 216);
  result = (unsigned int)(v5 - 3);
  if ( (result & 0xFFFFFFFC) == 0 && v5 != 5 )
  {
    Number = KeGetPcr()->Prcb.Number;
    v12 = HalpInterruptProcessorState + ((unsigned __int64)Number << 6);
    v13 = *(unsigned int *)(v12 + 40);
    if ( (_DWORD)v13 )
    {
      result = HalpInterruptGsiToLine(v13, &v23);
      if ( (int)result >= 0 )
      {
        v24 = -1;
        v14 = *(_BYTE *)(v12 + 14);
        v19 = 0LL;
        LODWORD(v19) = 6;
        DWORD2(v19) = Number;
        v20 = 0LL;
        v25 = 1;
        v15 = HalpAcquireHighLevelLock(&HalpInterruptLock);
        LOBYTE(v16) = 15;
        HalpInterruptSetLineState(&v23, 254LL, v16, v14 != 0, 1, &v19, &v24);
        KxReleaseSpinLock(&HalpInterruptLock);
        result = (unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v15 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              v17 = KeGetCurrentPrcb();
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
              v18 = v17->SchedulerAssist;
              v4 = ((unsigned int)result & v18[5]) == 0;
              v18[5] &= result;
              if ( v4 )
                result = KiRemoveSystemWorkPriorityKick(v17);
            }
          }
        }
        __writecr8(v15);
      }
    }
  }
  return result;
}
