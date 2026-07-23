/*
 * XREFs of KseDsCompletionHookForPowerDevice @ 0x140527900
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDevicePowerCompleted @ 0x140527E80 (KsepDsEventDevicePowerCompleted.c)
 */

__int64 __fastcall KseDsCompletionHookForPowerDevice(__int64 a1, __int64 a2)
{
  return KsepDsEventDevicePowerCompleted(*(_QWORD *)(a1 + 8), a1, a2, *(unsigned int *)(a2 + 48));
}
