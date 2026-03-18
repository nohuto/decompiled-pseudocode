/*
 * XREFs of ZwCreateProfile @ 0x1403F98D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateProfile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
