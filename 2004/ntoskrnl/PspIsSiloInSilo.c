/*
 * XREFs of PspIsSiloInSilo @ 0x14070CFEC
 * Callers:
 *     PsIsThreadInSilo @ 0x14027D7A8 (PsIsThreadInSilo.c)
 *     PsIsProcessInSilo @ 0x14027D828 (PsIsProcessInSilo.c)
 *     NtCreateUserProcess @ 0x1406149A0 (NtCreateUserProcess.c)
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 *     PsRootSiloInformation @ 0x140902834 (PsRootSiloInformation.c)
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
