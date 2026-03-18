/*
 * XREFs of sub_1C000E620 @ 0x1C000E620
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0012210 @ 0x1C0012210 (sub_1C0012210.c)
 *     sub_1C00176F8 @ 0x1C00176F8 (sub_1C00176F8.c)
 *     sub_1C0017C80 @ 0x1C0017C80 (sub_1C0017C80.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003BC30 @ 0x1C003BC30 (sub_1C003BC30.c)
 *     sub_1C003C33C @ 0x1C003C33C (sub_1C003C33C.c)
 */

void __fastcall sub_1C000E620(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned int Status; // r12d
  char v11; // r13
  __int64 v12; // rsi
  KIRQL v13; // al
  int v14; // ecx
  int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  KIRQL v19; // dl
  char v20; // si
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // rsi
  void (__fastcall *v24)(PDEVICE_OBJECT, __int64, void *, _QWORD, __int64, int); // rax
  unsigned int v25; // esi
  int v26; // [rsp+28h] [rbp-50h]
  IRP *Irp; // [rsp+40h] [rbp-38h]
  __int64 v28; // [rsp+98h] [rbp+20h]
  char IoStatusa; // [rsp+A0h] [rbp+28h]

  v8 = sub_1C000F050(DeviceObject);
  sub_1C000FD80((_DWORD)DeviceObject, 16, 1680896111, (_DWORD)Context, IoStatus->Status);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    sub_1C002E0B4(::DeviceObject->DeviceExtension, 0, 1, 17, (__int64)&unk_1C0062DE8);
  v9 = Context[9];
  Status = IoStatus->Status;
  Irp = (IRP *)Context[7];
  v11 = 0;
  sub_1C000FD80((_DWORD)DeviceObject, 16, 1685090097, (_DWORD)Context, v9);
  v12 = sub_1C000F050(DeviceObject);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 5056));
  v14 = *(_DWORD *)(v12 + 4172);
  *(_BYTE *)(v12 + 5064) = v13;
  *(_DWORD *)(v9 + 40) = v14;
  *(_DWORD *)(v9 + 44) = 110;
  *(_DWORD *)(v9 + 32) = 844055622;
  *(_DWORD *)(v9 + 36) = 829436004;
  *(_QWORD *)(v9 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v12 + 1344) = v9;
  *(_QWORD *)(v8 + 5088) = MEMORY[0xFFFFF78000000014];
  if ( (Status & 0xC0000000) == 0xC0000000 )
  {
    sub_1C003BC30(DeviceObject, 120LL, Status, Context);
  }
  else
  {
    v15 = *(_DWORD *)(sub_1C000F050(DeviceObject) + 4212);
    v16 = sub_1C000F050(DeviceObject);
    v17 = ((unsigned __int8)*(_DWORD *)(v16 + 828) + 1) & 7;
    *(_DWORD *)(v16 + 828) = v17;
    v17 *= 32LL;
    *(_DWORD *)(v17 + v16 + 284) = 110;
    *(_DWORD *)(v17 + v16 + 288) = *(_DWORD *)(v16 + 4172);
    *(_DWORD *)(v17 + v16 + 292) = 210;
    *(_DWORD *)(v17 + v16 + 296) = v15;
    *(_DWORD *)(v16 + 4172) = 210;
    *(_DWORD *)(sub_1C000F050(DeviceObject) + 4208) = 1;
    v18 = sub_1C000F050(DeviceObject);
    sub_1C000F050(*(_QWORD *)(v9 + 8));
    *(_DWORD *)(v9 + 32) = 1734964085;
    v19 = *(_BYTE *)(v18 + 5064);
    *(_QWORD *)(v18 + 1344) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v18 + 5056), v19);
    sub_1C000FD80((_DWORD)DeviceObject, 16, 1935962161, 0, (__int64)Context);
    v20 = *(_BYTE *)(sub_1C000F050(DeviceObject) + 5268);
    IoStatusa = v20;
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
      sub_1C002E188(::DeviceObject->DeviceExtension, 0, 1, 46, (__int64)&unk_1C0062088, 0);
    sub_1C000FD80((_DWORD)DeviceObject, 8, 1632720717, 1769428816, (__int64)Context);
    v22 = sub_1C0017C80((_DWORD)DeviceObject, (unsigned int)sub_1C000DC30, (_DWORD)Context, 0, v21, v20);
    v23 = v22;
    if ( v22 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
        sub_1C002E188(::DeviceObject->DeviceExtension, 0, 1, 47, (__int64)&unk_1C0062088, 0);
      sub_1C000FD80((_DWORD)DeviceObject, 8, 1364479275, 1769428816, v23);
      v28 = *(_QWORD *)(v23 + 40);
      v24 = *(void (__fastcall **)(PDEVICE_OBJECT, __int64, void *, _QWORD, __int64, int))(sub_1C000F050(DeviceObject)
                                                                                         + 4784);
      if ( v24 )
      {
        LOBYTE(v26) = IoStatusa;
        v24(DeviceObject, v28, &sub_1C001A220, 0LL, v23, v26);
        v25 = 0;
      }
      else
      {
        v25 = -1073741822;
      }
    }
    else
    {
      v25 = -1073741670;
    }
    if ( (v25 & 0xC0000000) == 0xC0000000 )
    {
      *(_QWORD *)(v8 + 5096) = MEMORY[0xFFFFF78000000014];
      sub_1C00176F8(DeviceObject, v9, 132LL, 846213220LL);
      sub_1C003BC30(DeviceObject, 132LL, v25, Context);
    }
    else
    {
      v11 = 1;
    }
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))sub_1C0012210)(
    DeviceObject,
    0LL,
    Context + 15,
    &unk_1C0061FA8,
    (POWER_STATE)PowerState.SystemState,
    Status);
  if ( dword_1C006B63C )
  {
    sub_1C003C33C(DeviceObject, Irp, 2047LL);
    IofCompleteRequest(Irp, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 1224), Irp, 0x20u);
  }
  *(_QWORD *)(v8 + 5080) = MEMORY[0xFFFFF78000000014];
  if ( !v11 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 1224), Context, 0x20u);
}
