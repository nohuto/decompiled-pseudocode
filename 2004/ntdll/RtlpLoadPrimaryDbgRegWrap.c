/*
 * XREFs of RtlpLoadPrimaryDbgRegWrap @ 0x1800A1F00
 * Callers:
 *     RtlpUmsExecuteYieldThreadEnd @ 0x1800A1E76 (RtlpUmsExecuteYieldThreadEnd.c)
 * Callees:
 *     RtlpLoadUmsDebugRegisterState @ 0x18010D8A0 (RtlpLoadUmsDebugRegisterState.c)
 */

__int64 __fastcall RtlpLoadPrimaryDbgRegWrap()
{
  __int64 v0; // r10

  return RtlpLoadUmsDebugRegisterState(v0);
}
