/*
 * XREFs of PspIsSiloInSilo @ 0x1406E918C
 * Callers:
 *     PsIsThreadInSilo @ 0x140204498 (PsIsThreadInSilo.c)
 *     PsIsProcessInSilo @ 0x140204518 (PsIsProcessInSilo.c)
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     NtCreateUserProcess @ 0x14066BF50 (NtCreateUserProcess.c)
 *     PsRootSiloInformation @ 0x1409019D4 (PsRootSiloInformation.c)
 * Callees:
 *     <none>
 */

char __fastcall PspIsSiloInSilo(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 1;
  while ( a1 )
  {
    if ( a1 == a2 )
      return 1;
    a1 = *(_QWORD *)(a1 + 1072);
  }
  return 0;
}
