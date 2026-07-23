/*
 * XREFs of _DbgPrompt@12 @ 0x4B33EE60
 * Callers:
 *     _LdrpGenericExceptionFilter@8 @ 0x4B334947 (_LdrpGenericExceptionFilter@8.c)
 *     _RtlAssert@16 @ 0x4B34FBC0 (_RtlAssert@16.c)
 * Callees:
 *     _NtWow64DebuggerCall@20 @ 0x4B2F4790 (_NtWow64DebuggerCall@20.c)
 */

ULONG __cdecl DbgPrompt(PCCH Prompt, PCH Response, ULONG Length)
{
  return NtWow64DebuggerCall(2, (int)Prompt, (unsigned __int16)strlen(Prompt), (int)Response, (unsigned __int16)Length);
}
