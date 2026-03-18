/*
 * XREFs of ZwAlpcCreatePort @ 0x1403F90D0
 * Callers:
 *     PopUmpoInitializeChannel @ 0x140A72EFC (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140A73B30 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreatePort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
