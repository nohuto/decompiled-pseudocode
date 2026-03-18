/*
 * XREFs of PsWow64GetProcessMachine @ 0x1406941D0
 * Callers:
 *     RtlpWalkFrameChain @ 0x1402273F0 (RtlpWalkFrameChain.c)
 *     KiVerifyContextRecord @ 0x1402E7230 (KiVerifyContextRecord.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsWow64GetProcessMachine(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1408);
  if ( !v1 )
    return 34404LL;
  result = *(unsigned __int16 *)(v1 + 8);
  if ( !(_WORD)result )
    return 34404LL;
  return result;
}
