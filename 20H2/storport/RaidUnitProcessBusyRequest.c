/*
 * XREFs of RaidUnitProcessBusyRequest @ 0x1C0014B64
 * Callers:
 *     RaUnitAsyncError @ 0x1C00073AC (RaUnitAsyncError.c)
 * Callees:
 *     RaidUnitReleaseIrp @ 0x1C00077B8 (RaidUnitReleaseIrp.c)
 *     RaidRestartIoQueue @ 0x1C00078AC (RaidRestartIoQueue.c)
 *     StorRemoveIoGatewayItem @ 0x1C0008D50 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 *     RaidStartIoPacket @ 0x1C0009FE0 (RaidStartIoPacket.c)
 *     IsUntaggedRequest @ 0x1C000ABC8 (IsUntaggedRequest.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000B644 (RaUnitAcquireRemoveLock.c)
 *     RaidStallDeviceQueue @ 0x1C0014CDC (RaidStallDeviceQueue.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C0014E58 (RaidDeleteDeviceQueueEntry.c)
 *     GetSrbScsiData @ 0x1C001C50C (GetSrbScsiData.c)
 *     RaidNtStatusToSrbStatus @ 0x1C00453B0 (RaidNtStatusToSrbStatus.c)
 */

void __fastcall RaidUnitProcessBusyRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rbx
  IRP *v4; // r13
  char v6; // cl
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  unsigned int v9; // r12d
  unsigned int v10; // esi
  BOOL v11; // eax
  __int64 v12; // r8
  signed int v13; // esi
  int v14; // ecx
  int v15; // r8d
  _QWORD v16[11]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v17; // [rsp+90h] [rbp+8h] BYREF
  _BYTE *v18; // [rsp+A0h] [rbp+18h]

  v18 = a3;
  v3 = *(_QWORD *)(a2 + 168);
  v4 = *(IRP **)(a2 + 160);
  v6 = 0;
  v16[0] = 0LL;
  LOBYTE(v17) = 0;
  v7 = 0;
  v16[1] = 0LL;
  v8 = 0;
  v16[3] = 0LL;
  v16[2] = a2;
  if ( *(_BYTE *)(v3 + 2) == 40 )
  {
    v10 = *(_DWORD *)(v3 + 20);
    v9 = *(_DWORD *)(v3 + 24);
    if ( !v10 )
    {
      GetSrbScsiData(v3, 0, 0, (unsigned int)&v17, 0LL, 0LL);
      v6 = v17;
    }
  }
  else
  {
    v9 = *(_DWORD *)(v3 + 12);
    v10 = *(unsigned __int8 *)(v3 + 2);
    v6 = *(_BYTE *)(v3 + 4);
  }
  if ( (*(_BYTE *)(v3 + 3) & 0x3F) == 5 || v6 == 8 )
  {
    v8 = *(_DWORD *)(a1 + 1808);
    v7 = 1;
  }
  if ( v6 == 40 )
  {
    v8 = *(_DWORD *)(a1 + 1804);
    v7 = 2;
  }
  v11 = IsUntaggedRequest(v9, v10);
  LOBYTE(v12) = 1;
  v17 = v11;
  v13 = RaUnitAcquireRemoveLock(a1, (__int64)v4, v12);
  if ( v13 >= 0 )
    *(_BYTE *)(v3 + 3) &= ~0x80u;
  RaidUnitReleaseIrp((__int64)v4);
  if ( (unsigned __int8)StorRemoveIoGatewayItem(
                          (volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 832LL),
                          (__int64)v16,
                          0LL) )
    KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(a1 + 24) + 1856LL), 0LL, 0LL);
  RaidDeleteDeviceQueueEntry(a1 + 656, v17);
  if ( v13 < 0 )
  {
    *(_BYTE *)(v3 + 3) = RaidNtStatusToSrbStatus((unsigned int)v13);
    RaidCompleteRequestEx(v4, 0, v13);
  }
  else
  {
    RaidStallDeviceQueue(a1 + 656, v7, v8, a1);
    if ( v18 )
      *v18 = 0;
    v14 = (v9 >> 3) & 2 | 4;
    if ( (v9 & 0x80000) == 0 )
      v14 = (v9 >> 3) & 2;
    v15 = v14 | 1;
    if ( !v17 )
      v15 = v14;
    if ( !(unsigned int)RaidStartIoPacket(a1, (__int64)v4, v15) )
      RaidRestartIoQueue(a1);
  }
}
