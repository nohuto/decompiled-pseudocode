/*
 * XREFs of ZwInitializeRegistry @ 0x1403F55C0
 * Callers:
 *     NtInitializeRegistry @ 0x14077B120 (NtInitializeRegistry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwInitializeRegistry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
