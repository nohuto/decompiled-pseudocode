/*
 * XREFs of _NtWow64DebuggerCall@20 @ 0x4B2F4790
 * Callers:
 *     _vDbgPrintExWithPrefixInternal@24 @ 0x4B2AB8F1 (_vDbgPrintExWithPrefixInternal@24.c)
 *     _DbgPrompt@12 @ 0x4B33EE60 (_DbgPrompt@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtWow64DebuggerCall(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
