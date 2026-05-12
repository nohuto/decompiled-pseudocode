/*
 * XREFs of RaidCancelIrp @ 0x1C0044AA8
 * Callers:
 *     RaidUnitCancelPendingRequests @ 0x1C001A07C (RaidUnitCancelPendingRequests.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0047450 (RaUnitDisableDeviceIrp.c)
 * Callees:
 *     RaidSrbStatusToNtStatus @ 0x1C0007340 (RaidSrbStatusToNtStatus.c)
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B600 (RaUnitReleaseRemoveLock.c)
 */

__int64 __fastcall RaidCancelIrp(__int64 a1, char a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rcx
  __int64 v9; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a3 + 184) + 8LL);
  *(_BYTE *)(v4 + 3) = a2;
  v5 = RaidSrbStatusToNtStatus(a2);
  *(_QWORD *)(v6 + 56) = 0LL;
  *(_DWORD *)(v6 + 48) = v5;
  RaUnitReleaseRemoveLock(v7);
  if ( (*(_BYTE *)(a3 + 142) & 0x20) != 0 )
  {
    if ( *(_BYTE *)(v4 + 2) == 40 )
    {
      v8 = *(_QWORD **)(v4 + 96);
      *(_QWORD *)(v4 + 96) = v8[2];
    }
    else
    {
      v8 = *(_QWORD **)(v4 + 48);
      v9 = v8[2];
      *(_QWORD *)(v4 + 56) = 0LL;
      *(_QWORD *)(v4 + 40) = 0LL;
      *(_QWORD *)(v4 + 48) = v9;
    }
    ExFreePoolWithTag(v8, 0x54436152u);
  }
  return RaidCompleteRequestEx((PIRP)a3, 0, *(_DWORD *)(a3 + 48));
}
