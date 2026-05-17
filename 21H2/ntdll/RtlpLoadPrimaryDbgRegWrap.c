/*
 * XREFs of RtlpLoadPrimaryDbgRegWrap @ 0x1800A27A0
 * Callers:
 *     RtlpUmsExecuteYieldThreadEnd @ 0x1800A2716 (RtlpUmsExecuteYieldThreadEnd.c)
 * Callees:
 *     RtlpLoadUmsDebugRegisterState @ 0x18010DC50 (RtlpLoadUmsDebugRegisterState.c)
 */

__int64 __fastcall RtlpLoadPrimaryDbgRegWrap()
{
  __int64 v0; // r10

  return RtlpLoadUmsDebugRegisterState(v0);
}
