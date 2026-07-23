/*
 * XREFs of ZwAcquireCrossVmMutant @ 0x1403F42A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAcquireCrossVmMutant(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
