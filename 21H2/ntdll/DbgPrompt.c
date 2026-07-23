/*
 * XREFs of DbgPrompt @ 0x1800E09F0
 * Callers:
 *     LdrpGenericExceptionFilter @ 0x1800D554C (LdrpGenericExceptionFilter.c)
 *     RtlAssert @ 0x1800ED7F0 (RtlAssert.c)
 * Callees:
 *     DebugPrompt @ 0x1800A1190 (DebugPrompt.c)
 */

ULONG __cdecl DbgPrompt(PCCH Prompt, PCH Response, ULONG Length)
{
  __int64 v3; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( Prompt[v3] );
  return DebugPrompt();
}
