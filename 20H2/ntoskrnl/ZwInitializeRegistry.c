/*
 * XREFs of ZwInitializeRegistry @ 0x1403FA190
 * Callers:
 *     NtInitializeRegistry @ 0x140789720 (NtInitializeRegistry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwInitializeRegistry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
