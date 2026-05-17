/*
 * XREFs of _RtlpDeCommitQueryDebugInfo@12 @ 0x4B3379F5
 * Callers:
 *     _RtlDeCommitDebugInfo@12 @ 0x4B3369A0 (_RtlDeCommitDebugInfo@12.c)
 *     _RtlQueryProcessBackTraceInformation@4 @ 0x4B336A00 (_RtlQueryProcessBackTraceInformation@4.c)
 *     _RtlQueryProcessLockInformation@4 @ 0x4B337290 (_RtlQueryProcessLockInformation@4.c)
 *     _RtlQueryProcessModuleInformation@12 @ 0x4B337478 (_RtlQueryProcessModuleInformation@12.c)
 *     _AVrfpQueryProcessVerifierOptions@4 @ 0x4B339457 (_AVrfpQueryProcessVerifierOptions@4.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall RtlpDeCommitQueryDebugInfo(int a1, int a2, unsigned int a3)
{
  unsigned int result; // eax
  unsigned int v5; // ecx

  result = a3;
  if ( a3 <= 0xFFFFFFFC )
  {
    v5 = *(_DWORD *)(a1 + 36) - ((a3 + 3) & 0xFFFFFFFC);
    result = v5 + a1;
    if ( a2 == v5 + a1 )
      *(_DWORD *)(a1 + 36) = v5;
  }
  return result;
}
