/*
 * XREFs of KiValidateCpuSetMasks @ 0x14032B988
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x1402661E0 (NtSetInformationWorkerFactory.c)
 *     KeSetSystemAllowedCpuSets @ 0x14032B394 (KeSetSystemAllowedCpuSets.c)
 *     KeSetCpuSetsProcess @ 0x1403C2E54 (KeSetCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140517730 (KeSetSelectedCpuSetsThread.c)
 *     KeSetTagCpuSets @ 0x140517AFC (KeSetTagCpuSets.c)
 *     KiInitializeReservedCpuSets @ 0x140A4555C (KiInitializeReservedCpuSets.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiValidateCpuSetMasks(char *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  signed __int64 v4; // r9

  if ( a2 <= (unsigned __int16)KiMaximumGroups )
  {
    v2 = 0;
    if ( !a2 )
      return 0LL;
    v4 = (char *)qword_140CFC848 - a1;
    while ( (~*(_QWORD *)&a1[v4] & *(_QWORD *)a1) == 0LL )
    {
      ++v2;
      a1 += 8;
      if ( v2 >= a2 )
        return 0LL;
    }
  }
  return 3221225903LL;
}
