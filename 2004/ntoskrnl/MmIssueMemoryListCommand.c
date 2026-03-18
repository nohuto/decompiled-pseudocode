/*
 * XREFs of MmIssueMemoryListCommand @ 0x14077AB44
 * Callers:
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 *     PfpLogEventRequest @ 0x1407640CC (PfpLogEventRequest.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     MmPerformMemoryListCommand @ 0x14099758C (MmPerformMemoryListCommand.c)
 */

__int64 __fastcall MmIssueMemoryListCommand(unsigned int *a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  unsigned int v3; // ebx

  if ( a2 < 4 )
    return 3221225476LL;
  v3 = *a1;
  if ( *a1 > 5 )
    return 3221225485LL;
  if ( v3 == 3 || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a3) )
    return MmPerformMemoryListCommand(v3);
  return 3221225569LL;
}
