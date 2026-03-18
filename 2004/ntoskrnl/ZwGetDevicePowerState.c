/*
 * XREFs of ZwGetDevicePowerState @ 0x1403F5460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwGetDevicePowerState(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
