/*
 * XREFs of RtlpLoadPrimaryDbgRegWrap @ 0x1800A2760
 * Callers:
 *     RtlpUmsExecuteYieldThreadEnd @ 0x1800A26D6 (RtlpUmsExecuteYieldThreadEnd.c)
 * Callees:
 *     RtlpLoadUmsDebugRegisterState @ 0x18010DC10 (RtlpLoadUmsDebugRegisterState.c)
 */

__int64 __fastcall RtlpLoadPrimaryDbgRegWrap()
{
  __int64 v0; // r10

  return RtlpLoadUmsDebugRegisterState(v0);
}
