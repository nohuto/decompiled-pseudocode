/*
 * XREFs of CompletionRoutine @ 0x1C000DFA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0012210 @ 0x1C0012210 (sub_1C0012210.c)
 *     sub_1C00176F8 @ 0x1C00176F8 (sub_1C00176F8.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003BC30 @ 0x1C003BC30 (sub_1C003BC30.c)
 *     sub_1C003C33C @ 0x1C003C33C (sub_1C003C33C.c)
 */

__int64 __fastcall CompletionRoutine(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v7; // rax
  int LowPart; // ebp
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rbx
  KIRQL v12; // al
  int v13; // ecx
  POWER_STATE v14; // ebx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  KIRQL v19; // dl
  NTSTATUS v20; // eax
  unsigned int v21; // esi
  int v23; // [rsp+68h] [rbp+10h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v7 = sub_1C000F050(DeviceObject);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v9 = v7;
  if ( LowPart != ((CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF) )
    LowPart = (CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF;
  sub_1C000FD80((_DWORD)DeviceObject, 16, 1937262915, (_DWORD)Context, (__int64)Irp);
  v10 = Context[9];
  v11 = sub_1C000F050(DeviceObject);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 5056));
  v13 = *(_DWORD *)(v11 + 4172);
  *(_BYTE *)(v11 + 5064) = v12;
  *(_DWORD *)(v10 + 40) = v13;
  *(_DWORD *)(v10 + 44) = 112;
  *(_DWORD *)(v10 + 32) = 844055622;
  *(_DWORD *)(v10 + 36) = 829977449;
  *(_QWORD *)(v10 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v11 + 1344) = v10;
  *(_DWORD *)(v9 + 4216) = 0;
  if ( *(_DWORD *)(sub_1C000F050(DeviceObject) + 4LL * LowPart + 5008) == 3 )
  {
    v14.SystemState = PowerSystemSleeping2;
    v15 = 1;
  }
  else
  {
    v14.SystemState = PowerSystemSleeping3;
    v15 = 0;
  }
  *(_DWORD *)(v9 + 4216) = v15;
  if ( v15 == 1 && LowPart > 4 )
    *(_DWORD *)(v9 + 4216) = 2;
  v16 = sub_1C000F050(DeviceObject);
  v17 = ((unsigned __int8)*(_DWORD *)(v16 + 828) + 1) & 7;
  *(_DWORD *)(v16 + 828) = v17;
  v17 *= 32LL;
  *(_DWORD *)(v17 + v16 + 284) = 112;
  *(_DWORD *)(v17 + v16 + 288) = *(_DWORD *)(v16 + 4172);
  *(_QWORD *)(v17 + v16 + 292) = 203LL;
  *(_DWORD *)(v16 + 4172) = 203;
  *((_DWORD *)Context + 22) = *(_DWORD *)(v9 + 4216);
  *((POWER_STATE *)Context + 7) = v14;
  v23 = *(_DWORD *)(sub_1C000F050(DeviceObject) + 4212);
  *(_DWORD *)(sub_1C000F050(DeviceObject) + 4212) = LowPart;
  v18 = sub_1C000F050(DeviceObject);
  sub_1C000F050(*(_QWORD *)(v10 + 8));
  *(_DWORD *)(v10 + 32) = 1734964085;
  v19 = *(_BYTE *)(v18 + 5064);
  *(_QWORD *)(v18 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v18 + 5056), v19);
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64))sub_1C000FD80)(
    (_DWORD)DeviceObject,
    16,
    1937265233,
    (POWER_STATE)v14.SystemState,
    (__int64)Irp);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    sub_1C002E188(::DeviceObject->DeviceExtension, 0, 1, 20, (__int64)&unk_1C0062DE8, LowPart);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))sub_1C0012210)(
    DeviceObject,
    Irp,
    0LL,
    &unk_1C0061F58,
    (POWER_STATE)v14.SystemState,
    0);
  v20 = PoRequestPowerIrp(DeviceObject, 2u, v14, (PREQUEST_POWER_COMPLETE)CompletionFunction, Context, 0LL);
  v21 = v20;
  if ( v20 == 259 )
    return 3221225494LL;
  sub_1C000FD80((_DWORD)DeviceObject, 16, 1937261906, v20, (__int64)Irp);
  Irp->IoStatus.Status = v21;
  sub_1C00176F8(DeviceObject, v10, 117LL, 846754665LL);
  *(_DWORD *)(sub_1C000F050(DeviceObject) + 4212) = v23;
  sub_1C003BC30(DeviceObject, 117LL, v21, Context);
  sub_1C003C33C(DeviceObject, Irp, 2519LL);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))sub_1C0012210)(
    DeviceObject,
    Irp,
    0LL,
    &unk_1C0061F78,
    (POWER_STATE)v14.SystemState,
    v21);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 1224), Irp, 0x20u);
  return 0LL;
}
