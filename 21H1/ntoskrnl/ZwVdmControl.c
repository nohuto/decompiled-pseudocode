/*
 * XREFs of ZwVdmControl @ 0x1403F5D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwVdmControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
