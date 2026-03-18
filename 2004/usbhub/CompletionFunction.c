/*
 * XREFs of CompletionFunction @ 0x1C000CC80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0012210 @ 0x1C0012210 (sub_1C0012210.c)
 *     sub_1C0018750 @ 0x1C0018750 (sub_1C0018750.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

void __fastcall CompletionFunction(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  IRP *v5; // rdi
  __int64 v8; // rsi
  __int64 v10; // r15
  __int64 v11; // rbp
  __int64 v12; // rsi
  KIRQL v13; // al
  int v14; // ecx
  NTSTATUS Status; // r12d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  KIRQL v19; // dl
  __int64 v20; // rax
  __int64 CurrentStackLocation; // rbx
  __int64 v22; // r11
  __int64 v23; // rax
  __int64 v24; // r10
  __int64 v25; // r11
  __int64 v26; // r10
  __int64 v27; // r11

  v5 = (IRP *)Context[7];
  v8 = MinorFunction;
  v10 = sub_1C000F050(DeviceObject);
  sub_1C000FD80((_DWORD)DeviceObject, 16, 1685606467, (_DWORD)Context, v8);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    sub_1C002E188(::DeviceObject->DeviceExtension, 0, 1, 16, (__int64)&unk_1C0062DE8, PowerState.SystemState);
  v11 = Context[9];
  v12 = sub_1C000F050(DeviceObject);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 5056));
  v14 = *(_DWORD *)(v12 + 4172);
  *(_BYTE *)(v12 + 5064) = v13;
  *(_DWORD *)(v11 + 40) = v14;
  *(_DWORD *)(v11 + 44) = 108;
  *(_DWORD *)(v11 + 32) = 844055622;
  *(_DWORD *)(v11 + 36) = 1869641828;
  *(_QWORD *)(v11 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v12 + 1344) = v11;
  Status = IoStatus->Status;
  v5->IoStatus.Status = IoStatus->Status;
  *(_BYTE *)(v10 + 4184) = 1;
  *(POWER_STATE *)(sub_1C000F050(DeviceObject) + 4208) = PowerState;
  v16 = sub_1C000F050(DeviceObject);
  v17 = ((unsigned __int8)*(_DWORD *)(v16 + 828) + 1) & 7;
  *(_DWORD *)(v16 + 828) = v17;
  v17 *= 32LL;
  *(_DWORD *)(v17 + v16 + 284) = 108;
  *(_DWORD *)(v17 + v16 + 288) = *(_DWORD *)(v16 + 4172);
  *(_QWORD *)(v17 + v16 + 292) = 205LL;
  *(_DWORD *)(v16 + 4172) = 205;
  v18 = sub_1C000F050(DeviceObject);
  sub_1C000F050(*(_QWORD *)(v11 + 8));
  *(_DWORD *)(v11 + 32) = 1734964085;
  v19 = *(_BYTE *)(v18 + 5064);
  *(_QWORD *)(v18 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v18 + 5056), v19);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))sub_1C0012210)(
    DeviceObject,
    v5,
    0LL,
    &unk_1C0061F78,
    (POWER_STATE)PowerState.SystemState,
    Status);
  sub_1C0018750(DeviceObject, Context);
  v20 = sub_1C000F050(DeviceObject);
  CurrentStackLocation = (__int64)v5->Tail.Overlay.CurrentStackLocation;
  v22 = v20;
  v23 = *(unsigned int *)(CurrentStackLocation + 16);
  if ( (unsigned int)v23 <= 1 )
  {
    sub_1C000FD80((_DWORD)DeviceObject, 16, 1347374641, *(_QWORD *)(v22 + 8 * v23 + 840), (__int64)v5);
    sub_1C000FD80((_DWORD)DeviceObject, 16, 1347374642, *(_QWORD *)(v25 + 8 * v24 + 856), CurrentStackLocation);
    *(_QWORD *)(v27 + 8 * v26 + 840) = 0LL;
    *(_QWORD *)(v27 + 8 * v26 + 856) = 0LL;
    *(_DWORD *)(v27 + 4 * v26 + 872) = 1913;
    PoStartNextPowerIrp(v5);
  }
  IofCompleteRequest(v5, 0);
  *(_QWORD *)(v10 + 5080) = MEMORY[0xFFFFF78000000014];
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v10 + 1224), v5, 0x20u);
}
