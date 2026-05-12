/*
 * XREFs of RaidBusEnumeratorProcessAtaInformation @ 0x1C00139A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidSrbStatusToNtStatus @ 0x1C0007340 (RaidSrbStatusToNtStatus.c)
 *     RaidAllocatePool @ 0x1C000BD70 (RaidAllocatePool.c)
 *     RaidAtaIdFormatString @ 0x1C0013A4C (RaidAtaIdFormatString.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessAtaInformation(_QWORD *a1, __int64 a2, __int64 a3, _BYTE *a4, _DWORD *a5)
{
  unsigned int v7; // eax
  PVOID Pool; // rax
  __int64 v9; // rbx

  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    return RaidSrbStatusToNtStatus(*(_BYTE *)(a2 + 3));
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v7 = *(_DWORD *)(a2 + 60);
  else
    v7 = *(_DWORD *)(a2 + 16);
  if ( v7 < 0x23C )
  {
    *a4 = 1;
    *a5 = 572;
    return 3221225507LL;
  }
  else
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, 0x32uLL, 0x32316152u, *(_QWORD *)(*a1 + 8LL));
    *(_QWORD *)(a3 + 72) = Pool;
    if ( Pool )
    {
      v9 = a1[5];
      RaidAtaIdFormatString(Pool, v9 + 114, 40LL);
      RaidAtaIdFormatString(*(_QWORD *)(a3 + 72) + 41LL, v9 + 106, 8LL);
      return 0LL;
    }
    else
    {
      return 3221225495LL;
    }
  }
}
