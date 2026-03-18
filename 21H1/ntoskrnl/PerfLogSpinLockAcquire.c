/*
 * XREFs of PerfLogSpinLockAcquire @ 0x1405A5838
 * Callers:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x140510A48 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x140510DCC (KiAcquireSpinLockInstrumented.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x140510F04 (KiTryToAcquireSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405AFFD4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0158 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B01E4 (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x1405B026C (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 * Callees:
 *     <none>
 */

char __fastcall PerfLogSpinLockAcquire(__int64 a1, __int64 a2, int a3, int a4, int a5, char a6)
{
  struct _KPRCB *CurrentPrcb; // rax
  _BYTE *EtwSupport; // r10
  __int64 v9; // r11
  __int64 v10; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  EtwSupport = CurrentPrcb->EtwSupport;
  v9 = (unsigned __int8)EtwSupport[272];
  if ( (unsigned __int8)v9 < 8u )
  {
    EtwSupport[272] = v9 + 1;
    v10 = 32 * v9;
    *(_DWORD *)&EtwSupport[v10 + 40] = a5;
    LOBYTE(CurrentPrcb) = a6;
    EtwSupport[v10 + 44] = a6;
    *(_QWORD *)&EtwSupport[v10 + 16] = a2;
    *(_DWORD *)&EtwSupport[v10 + 36] = a4;
    *(_QWORD *)&EtwSupport[v10 + 24] = a1;
    *(_DWORD *)&EtwSupport[v10 + 32] = a3;
  }
  else
  {
    ++*((_DWORD *)EtwSupport + 69);
  }
  return (char)CurrentPrcb;
}
