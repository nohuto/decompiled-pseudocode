/*
 * XREFs of ZwDeleteWnfStateData @ 0x1403F3E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteWnfStateData(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
