/*
 * XREFs of _ZwCreateDebugObject@16 @ 0x4B2F33D0
 * Callers:
 *     _DbgUiConnectToDbg@0 @ 0x4B32D7F0 (_DbgUiConnectToDbg@0.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwCreateDebugObject(int a1, int a2, int a3, int a4)
{
  return Wow64SystemServiceCall();
}
