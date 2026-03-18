/*
 * XREFs of KiGetRecoveryInformation @ 0x14051FC30
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x14051F8D4 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x1402C8F70 (ObGetCurrentIrql.c)
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
