/*
 * XREFs of PfTAccessTracingCheck @ 0x14038BAF0
 * Callers:
 *     PfpLogScenarioEvent @ 0x140986F94 (PfpLogScenarioEvent.c)
 *     PfPowerActionNotify @ 0x140A49250 (PfPowerActionNotify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfTAccessTracingCheck(__int64 a1)
{
  return *(_DWORD *)(a1 + 12) & 1;
}
