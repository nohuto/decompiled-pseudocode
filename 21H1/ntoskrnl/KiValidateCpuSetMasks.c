/*
 * XREFs of KiValidateCpuSetMasks @ 0x140202930
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x14020233C (KeSetSystemAllowedCpuSets.c)
 *     NtSetInformationWorkerFactory @ 0x1402BF210 (NtSetInformationWorkerFactory.c)
 *     KeSetCpuSetsProcess @ 0x1403C1F94 (KeSetCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1405170E0 (KeSetSelectedCpuSetsThread.c)
 *     KeSetTagCpuSets @ 0x1405174AC (KeSetTagCpuSets.c)
 *     KiInitializeReservedCpuSets @ 0x140A3FD38 (KiInitializeReservedCpuSets.c)
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
    v4 = (char *)qword_140CFC838 - a1;
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
