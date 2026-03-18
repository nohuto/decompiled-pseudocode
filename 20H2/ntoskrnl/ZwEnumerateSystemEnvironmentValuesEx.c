/*
 * XREFs of ZwEnumerateSystemEnvironmentValuesEx @ 0x1403F9D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnumerateSystemEnvironmentValuesEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
