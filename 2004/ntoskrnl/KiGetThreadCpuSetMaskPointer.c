/*
 * XREFs of KiGetThreadCpuSetMaskPointer @ 0x14030C038
 * Callers:
 *     KeQueryCpuSetsThread @ 0x1405172E0 (KeQueryCpuSetsThread.c)
 *     KeSetSelectedCpuSetsThread @ 0x140517730 (KeSetSelectedCpuSetsThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetThreadCpuSetMaskPointer(__int64 a1, _DWORD *a2)
{
  if ( (*(_DWORD *)(a1 + 1296) & 0x20000) != 0 )
  {
    if ( a2 )
      *a2 = (unsigned __int16)KiMaximumGroups;
    return *(_QWORD *)(a1 + 1536);
  }
  else
  {
    if ( a2 )
      *a2 = 1;
    return a1 + 1536;
  }
}
