/*
 * XREFs of RtlpLoadPrimaryDbgRegWrap @ 0x1800A21A0
 * Callers:
 *     RtlpUmsExecuteYieldThreadEnd @ 0x1800A2116 (RtlpUmsExecuteYieldThreadEnd.c)
 * Callees:
 *     RtlpLoadUmsDebugRegisterState @ 0x18010DDB0 (RtlpLoadUmsDebugRegisterState.c)
 */

__int64 __fastcall RtlpLoadPrimaryDbgRegWrap()
{
  __int64 v0; // r10

  return RtlpLoadUmsDebugRegisterState(v0);
}
