/*
 * XREFs of _NtSetDebugFilterState@12 @ 0x4B2F4240
 * Callers:
 *     _DbgSetDebugFilterState@12 @ 0x4B33EEB0 (_DbgSetDebugFilterState@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtSetDebugFilterState(int a1, int a2, int a3)
{
  return Wow64SystemServiceCall();
}
