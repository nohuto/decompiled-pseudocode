/*
 * XREFs of VfUtilGetAvailableSystemPages @ 0x1409C96F0
 * Callers:
 *     <none>
 * Callees:
 *     MmCreatePartition @ 0x1403C9FD4 (MmCreatePartition.c)
 *     memset @ 0x140411300 (memset.c)
 *     MmManagePartitionMemoryInformation @ 0x14066081C (MmManagePartitionMemoryInformation.c)
 */

__int64 __fastcall VfUtilGetAvailableSystemPages(_QWORD *a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  result = MmCreatePartition(&ViSystemPartition, 1);
  if ( (int)result >= 0 )
  {
    if ( ViSystemPartition )
    {
      memset(&ViSystemPartitionMemoryInfo, 0, 0xF0uLL);
      dword_140C1D044 = -1;
      dword_140C1D048 = -1;
      result = MmManagePartitionMemoryInformation(
                 (ULONG_PTR **)&ViSystemPartition,
                 (__int64)&ViSystemPartitionMemoryInfo);
      if ( (int)result >= 0 )
        *a1 = qword_140C1D078;
    }
    else
    {
      return 3221225506LL;
    }
  }
  return result;
}
