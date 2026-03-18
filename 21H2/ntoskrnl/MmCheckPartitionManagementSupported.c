/*
 * XREFs of MmCheckPartitionManagementSupported @ 0x1407DE8B4
 * Callers:
 *     NtManagePartition @ 0x1407DE5F0 (NtManagePartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmCheckPartitionManagementSupported(__int64 a1, unsigned int a2)
{
  int v3; // eax

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 4LL) & 0x100) == 0 )
    return 0LL;
  if ( a2 <= 0xC && (v3 = 4579, _bittest(&v3, a2)) )
    return 0LL;
  else
    return 3221225659LL;
}
