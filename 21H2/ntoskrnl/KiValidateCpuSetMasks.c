/*
 * XREFs of KiValidateCpuSetMasks @ 0x14020F30C
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x14020E0AC (KeSetSystemAllowedCpuSets.c)
 *     NtSetInformationWorkerFactory @ 0x1402D4530 (NtSetInformationWorkerFactory.c)
 *     KeSetCpuSetsProcess @ 0x1403D2D98 (KeSetCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     KeSetTagCpuSets @ 0x140572EC0 (KeSetTagCpuSets.c)
 *     KiInitializeReservedCpuSets @ 0x140B2EDD8 (KiInitializeReservedCpuSets.c)
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
    v4 = (char *)qword_140D06E48 - a1;
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
