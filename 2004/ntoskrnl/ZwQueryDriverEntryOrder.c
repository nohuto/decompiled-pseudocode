/*
 * XREFs of ZwQueryDriverEntryOrder @ 0x1403F5E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDriverEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
