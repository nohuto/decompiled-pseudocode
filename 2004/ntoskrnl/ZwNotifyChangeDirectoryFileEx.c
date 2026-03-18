/*
 * XREFs of ZwNotifyChangeDirectoryFileEx @ 0x1403F58C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwNotifyChangeDirectoryFileEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
