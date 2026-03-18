/*
 * XREFs of ZwSignalAndWaitForSingleObject @ 0x1403F6C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSignalAndWaitForSingleObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
