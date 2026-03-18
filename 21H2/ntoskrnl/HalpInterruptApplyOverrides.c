/*
 * XREFs of HalpInterruptApplyOverrides @ 0x140252258
 * Callers:
 *     HalpInterruptSetDestinationInternal @ 0x140251EA0 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptRestoreClock @ 0x1403915EC (HalpInterruptRestoreClock.c)
 *     HalDisableInterrupt @ 0x140396C30 (HalDisableInterrupt.c)
 *     HalpTimerConfigureInterrupt @ 0x1403AEA08 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptSetLineState @ 0x1403B07C8 (HalpInterruptSetLineState.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403BACF8 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptRemap @ 0x1403D57DC (HalpInterruptRemap.c)
 *     HalpInterruptConnect @ 0x140507ED8 (HalpInterruptConnect.c)
 *     ExtEnvSetVpptTarget @ 0x14050C264 (ExtEnvSetVpptTarget.c)
 *     HalpTimerUnmapInterrupt @ 0x14050D048 (HalpTimerUnmapInterrupt.c)
 *     HalpInterruptMaskAcpi @ 0x140A521EC (HalpInterruptMaskAcpi.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140252344 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x1402523CC (HalpInterruptFindLinesForGsiRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpInterruptApplyOverrides(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  char v6; // r14
  unsigned __int8 v7; // al
  __int64 *v8; // r9
  unsigned __int64 v9; // rbp
  __int64 *v10; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf
  unsigned int v15; // edi

  v6 = 0;
  v7 = HalpAcquireHighLevelLock(&HalpInterruptOverridesLock);
  v8 = (__int64 *)HalpInterruptOverrides;
  v9 = v7;
  if ( (__int64 *)HalpInterruptOverrides != &HalpInterruptOverrides )
  {
    while ( 1 )
    {
      v10 = v8;
      v8 = (__int64 *)*v8;
      if ( *((_DWORD *)v10 + 4) == *a1 && *((_DWORD *)v10 + 5) == a1[1] )
        break;
      if ( v8 == &HalpInterruptOverrides )
        goto LABEL_4;
    }
    *(_QWORD *)a1 = v10[3];
    if ( a2 )
      *a2 = *((_DWORD *)v10 + 9);
    if ( a3 )
      *a3 = *((_DWORD *)v10 + 8);
    v6 = 1;
  }
LABEL_4:
  KxReleaseSpinLock(&HalpInterruptOverridesLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v14 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  if ( !v6 )
  {
    result = HalpInterruptController;
    if ( *(_DWORD *)(HalpInterruptController + 224) == 2 )
    {
      result = (unsigned int)(*a1 - 45056);
      if ( (unsigned int)result <= 1 )
      {
        v15 = a1[1] + 8;
        if ( *a1 != 45057 )
          v15 = a1[1];
        result = HalpInterruptFindLinesForGsiRange(v15, v15 + 1);
        if ( result )
        {
          a1[1] = v15 + *(_DWORD *)(result + 20) - *(_DWORD *)(result + 28);
          result = *(unsigned int *)(result + 16);
          *a1 = result;
        }
      }
    }
  }
  return result;
}
