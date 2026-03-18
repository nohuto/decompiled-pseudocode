/*
 * XREFs of PspIsSiloInSilo @ 0x1406DF41C
 * Callers:
 *     PsIsThreadInSilo @ 0x14023F0B8 (PsIsThreadInSilo.c)
 *     PsIsProcessInSilo @ 0x14023F168 (PsIsProcessInSilo.c)
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 *     NtCreateUserProcess @ 0x140690C20 (NtCreateUserProcess.c)
 *     PsRootSiloInformation @ 0x140908444 (PsRootSiloInformation.c)
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
