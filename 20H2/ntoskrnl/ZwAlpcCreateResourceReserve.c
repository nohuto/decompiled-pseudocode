/*
 * XREFs of ZwAlpcCreateResourceReserve @ 0x1403F9110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreateResourceReserve(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
