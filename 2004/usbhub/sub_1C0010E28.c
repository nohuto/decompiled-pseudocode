/*
 * XREFs of sub_1C0010E28 @ 0x1C0010E28
 * Callers:
 *     sub_1C001AFE0 @ 0x1C001AFE0 (sub_1C001AFE0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0017660 @ 0x1C0017660 (sub_1C0017660.c)
 *     sub_1C002E354 @ 0x1C002E354 (sub_1C002E354.c)
 */

__int64 __fastcall sub_1C0010E28(__int64 a1, __int64 a2, IRP *a3)
{
  __int64 v6; // r15
  __int64 v7; // rsi
  DWORD LowPart; // r14d
  KSPIN_LOCK *v9; // rbx
  KIRQL v10; // al
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  _DWORD *v14; // rbx
  KIRQL v15; // dl
  int v16; // edx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 CurrentStackLocation; // rbx
  __int64 v20; // r11
  __int64 v21; // rax
  __int64 v22; // r10
  __int64 v23; // r11
  __int64 v24; // r10
  __int64 v25; // r11

  v6 = sub_1C0011220(a2);
  v7 = sub_1C0011220(a2) + 944;
  sub_1C000FD80(a1, 16, 1885622387, a2, (__int64)a3);
  LowPart = a3->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v9 = (KSPIN_LOCK *)sub_1C000F050(a1);
  v10 = KeAcquireSpinLockRaiseToDpc(v9 + 632);
  v11 = *((_DWORD *)v9 + 1043);
  *((_BYTE *)v9 + 5064) = v10;
  *(_DWORD *)(v7 + 40) = v11;
  *(_DWORD *)(v7 + 44) = 126;
  *(_DWORD *)(v7 + 32) = 844055622;
  *(_DWORD *)(v7 + 36) = 1937339216;
  *(_QWORD *)(v7 + 24) = KeGetCurrentThread();
  v9[168] = v7;
  v13 = *(_DWORD *)(sub_1C0011220(a2) + 1128);
  if ( LowPart == 1 )
    sub_1C0017660(v7, a2, v12, v13, 10);
  else
    sub_1C0017660(v7, a2, v12, v13, 11);
  *(_DWORD *)(v6 + 792) = LowPart;
  v14 = sub_1C000F050(a1);
  sub_1C000F050(*(_QWORD *)(v7 + 8));
  *(_DWORD *)(v7 + 32) = 1734964085;
  v15 = *((_BYTE *)v14 + 5064);
  *((_QWORD *)v14 + 168) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)v14 + 632, v15);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E354(DeviceObject->DeviceExtension, v16, 1, 21, (__int64)&unk_1C0062DF8, *(_WORD *)(v6 + 1428), LowPart);
  v17 = *(_QWORD *)(sub_1C0011220(a2) + 1184);
  v18 = sub_1C0011220(a2);
  CurrentStackLocation = (__int64)a3->Tail.Overlay.CurrentStackLocation;
  v20 = v18;
  v21 = *(unsigned int *)(CurrentStackLocation + 16);
  if ( (unsigned int)v21 <= 1 )
  {
    sub_1C000FD80(v17, 16, 1346653745, *(_QWORD *)(v20 + 8 * v21 + 800), (__int64)a3);
    sub_1C000FD80(v17, 16, 1346653746, *(_QWORD *)(v23 + 8 * v22 + 816), CurrentStackLocation);
    *(_QWORD *)(v25 + 8 * v24 + 800) = 0LL;
    *(_QWORD *)(v25 + 8 * v24 + 816) = 0LL;
    *(_DWORD *)(v25 + 4 * v24 + 832) = 1757;
    PoStartNextPowerIrp(a3);
  }
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 0);
  return 0LL;
}
