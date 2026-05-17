/*
 * XREFs of RtlCreateUnicodeString @ 0x180038AF0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18000CF10 (RtlCanonicalizeDomainName.c)
 *     LdrpLogDllStateEx2 @ 0x1800116AC (LdrpLogDllStateEx2.c)
 *     RtlConvertSidToUnicodeString @ 0x180037250 (RtlConvertSidToUnicodeString.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x18003B458 (RtlpInitUnicodeStringUsingBuffer.c)
 *     EtwpInitLoggerContext @ 0x180056D6C (EtwpInitLoggerContext.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x18005717C (EtwpAddInstanceIdToLogFileName.c)
 *     EtwpGenerateFileName @ 0x18005814C (EtwpGenerateFileName.c)
 *     LdrSetDllDirectory @ 0x18007FC20 (LdrSetDllDirectory.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x1800D00B4 (LdrpMakeUnicodeStringFromPathElement.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x18006DAA0 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

char __fastcall RtlCreateUnicodeString(__int64 a1, _WORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  void *StringRoutine; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = 2 * v4 + 2;
  if ( (unsigned int)(2 * v4 + 1) > 0xFFFD )
    return 0;
  StringRoutine = (void *)NtdllpAllocateStringRoutine(v5);
  *(_QWORD *)(a1 + 8) = StringRoutine;
  if ( !StringRoutine )
    return 0;
  *(_WORD *)(a1 + 2) = v5;
  memmove(StringRoutine, a2, v5);
  *(_WORD *)a1 = v5 - 2;
  return 1;
}
