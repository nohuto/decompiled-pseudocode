/*
 * XREFs of ZwAlpcSetInformation @ 0x1403F34D0
 * Callers:
 *     PopUmpoInitializeChannel @ 0x140A6C34C (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140A6CF80 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSetInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
