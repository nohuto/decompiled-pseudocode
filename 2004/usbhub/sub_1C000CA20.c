/*
 * XREFs of sub_1C000CA20 @ 0x1C000CA20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0017B0C @ 0x1C0017B0C (sub_1C0017B0C.c)
 *     sub_1C0018364 @ 0x1C0018364 (sub_1C0018364.c)
 *     sub_1C001CE0C @ 0x1C001CE0C (sub_1C001CE0C.c)
 *     sub_1C001CE84 @ 0x1C001CE84 (sub_1C001CE84.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

void __fastcall sub_1C000CA20(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  KIRQL v10; // al
  int v11; // ecx
  unsigned int Status; // r14d
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  KIRQL v17; // dl
  unsigned int v18; // eax
  int v19; // eax

  v6 = sub_1C000F050(DeviceObject);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    sub_1C002E0B4(::DeviceObject->DeviceExtension, 0, 1, 13, (__int64)&unk_1C0062DE8);
  v7 = sub_1C000F050(DeviceObject);
  *(_QWORD *)(v6 + 4888) = 0LL;
  *(_DWORD *)(v6 + 4884) = 1;
  v8 = v7 + 1384;
  v9 = sub_1C000F050(DeviceObject);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 5056));
  v11 = *(_DWORD *)(v9 + 4172);
  *(_BYTE *)(v9 + 5064) = v10;
  *(_DWORD *)(v8 + 40) = v11;
  *(_DWORD *)(v8 + 44) = 122;
  *(_DWORD *)(v8 + 32) = 844055622;
  *(_DWORD *)(v8 + 36) = 829120887;
  *(_QWORD *)(v8 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v9 + 1344) = v8;
  Status = IoStatus->Status;
  if ( IoStatus->Status >= 0 )
  {
    sub_1C000FD80((_DWORD)DeviceObject, 16, 1750548811, 0, 0LL);
    *(_DWORD *)(v6 + 2560) |= 0x20000u;
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
      sub_1C002E0B4(::DeviceObject->DeviceExtension, 0, 1, 14, (__int64)&unk_1C0062DE8);
    if ( (unsigned int)sub_1C001CE84(v8) == 201 )
    {
      v19 = sub_1C000F050(DeviceObject);
      Status = sub_1C0017B0C((_DWORD)DeviceObject, 1, (unsigned int)sub_1C0059D60, v19 + 1912, 0, 2001228627, 0LL);
    }
    KeSetEvent((PRKEVENT)(v6 + 4896), 0, 0);
    v18 = sub_1C001CE84(v8);
    sub_1C001CE0C(DeviceObject, Status, v18, 122LL);
    sub_1C0018364(DeviceObject, v8);
  }
  else
  {
    KeSetEvent((PRKEVENT)(v6 + 4896), 0, 0);
    sub_1C000F050(*(_QWORD *)(v8 + 8));
    v13 = *(_DWORD *)(sub_1C000F050(*(_QWORD *)(v8 + 8)) + 4172);
    v14 = sub_1C000F050(DeviceObject);
    v15 = ((unsigned __int8)*(_DWORD *)(v14 + 828) + 1) & 7;
    *(_DWORD *)(v14 + 828) = v15;
    v15 *= 32LL;
    *(_DWORD *)(v15 + v14 + 284) = 125;
    *(_DWORD *)(v15 + v14 + 288) = *(_DWORD *)(v14 + 4172);
    *(_DWORD *)(v15 + v14 + 292) = v13;
    *(_DWORD *)(v15 + v14 + 296) = Status;
    *(_DWORD *)(v14 + 4172) = v13;
    v16 = sub_1C000F050(DeviceObject);
    sub_1C000F050(*(_QWORD *)(v8 + 8));
    *(_DWORD *)(v8 + 32) = 1734964085;
    v17 = *(_BYTE *)(v16 + 5064);
    *(_QWORD *)(v16 + 1344) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 5056), v17);
  }
}
