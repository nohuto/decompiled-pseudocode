/*
 * XREFs of KiGetRecoveryInformation @ 0x140525320
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x140524FC4 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14023A8A0 (ObGetCurrentIrql.c)
 */

struct _KPRCB *__fastcall KiGetRecoveryInformation(__int64 a1)
{
  struct _KPRCB *result; // rax

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 2;
  *(_BYTE *)(a1 + 5) = KeGetCurrentPrcb()->DebuggerSavedIRQL;
  *(_BYTE *)(a1 + 6) = ObGetCurrentIrql();
  *(_QWORD *)(a1 + 8) = KiBugCheckDriver;
  *(_DWORD *)(a1 + 16) = KiClockTimerOwner;
  *(_BYTE *)(a1 + 20) = KeGetCurrentPrcb()->NmiActive != 0;
  result = KeGetCurrentPrcb();
  *(_BYTE *)(a1 + 22) = result->NestingLevel;
  return result;
}
