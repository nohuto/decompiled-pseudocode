/*
 * XREFs of _NtDebugActiveProcess@8 @ 0x4B2F3650
 * Callers:
 *     _DbgUiDebugActiveProcess@4 @ 0x4B32DAA0 (_DbgUiDebugActiveProcess@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtDebugActiveProcess(int a1, int a2)
{
  return Wow64SystemServiceCall();
}
