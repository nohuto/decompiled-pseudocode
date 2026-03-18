/*
 * XREFs of RtlInterlockedSetClearBits @ 0x14027B5DC
 * Callers:
 *     PspAssociateCompletionPortCallback @ 0x1405CFDB0 (PspAssociateCompletionPortCallback.c)
 *     PspApplyJobChainLimitsToProcess @ 0x140659B74 (PspApplyJobChainLimitsToProcess.c)
 *     PspRundownSingleProcess @ 0x14065C39C (PspRundownSingleProcess.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInterlockedSetClearBits(volatile signed __int32 *a1, int a2, int a3)
{
  unsigned __int32 v3; // r10d
  int v4; // r8d
  signed __int32 i; // r9d
  signed __int32 v6; // r9d

  v3 = *a1;
  v4 = ~a3;
  for ( i = *a1; ; v3 = i )
  {
    v6 = v4 & (a2 | i);
    if ( v6 == v3 )
      break;
    i = _InterlockedCompareExchange(a1, v6, v3);
    if ( v3 == i )
      break;
  }
  return v3;
}
