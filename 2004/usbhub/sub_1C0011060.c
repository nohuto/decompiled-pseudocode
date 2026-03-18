/*
 * XREFs of sub_1C0011060 @ 0x1C0011060
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C002E288 @ 0x1C002E288 (sub_1C002E288.c)
 */

__int64 __fastcall sub_1C0011060(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  __int64 v5; // rbp
  __int64 v6; // r14
  int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r9
  ULONG Options; // ecx
  PDEVICE_OBJECT v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r11
  __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // r10
  __int64 v22; // r11
  int v24; // r9d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = sub_1C0011220(a1);
  v6 = *(_QWORD *)(v5 + 1184);
  sub_1C0011220(a1);
  v8 = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  if ( *(_DWORD *)(v8 + 16) <= 1u )
  {
    sub_1C000FD80(v6, 16, 1346653747, v8, (__int64)a2);
    *(_QWORD *)(v9 + 8 * v10 + 800) = a2;
    *(_QWORD *)(v9 + 8 * v10 + 816) = v11;
    *(_DWORD *)(v9 + 4 * v10 + 832) = 703;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( !Options )
  {
    if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
      goto LABEL_6;
    v13 = DeviceObject;
    if ( !LOWORD(DeviceObject->DeviceType) )
      goto LABEL_6;
    v24 = 10;
LABEL_14:
    sub_1C002E288(
      v13->DeviceExtension,
      *(unsigned __int16 *)(v5 + 1428),
      v7,
      v24,
      (__int64)&unk_1C0062DF8,
      *(_WORD *)(v5 + 1428),
      CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
    goto LABEL_6;
  }
  if ( Options == 1 && off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    v13 = DeviceObject;
    if ( LOWORD(DeviceObject->DeviceType) )
    {
      v24 = 11;
      goto LABEL_14;
    }
  }
LABEL_6:
  v14 = *(_QWORD *)(sub_1C0011220(a1) + 1184);
  v15 = sub_1C0011220(a1);
  v16 = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v17 = v15;
  v18 = *(unsigned int *)(v16 + 16);
  if ( (unsigned int)v18 <= 1 )
  {
    sub_1C000FD80(v14, 16, 1346653745, *(_QWORD *)(v17 + 8 * v18 + 800), (__int64)a2);
    sub_1C000FD80(v14, 16, 1346653746, *(_QWORD *)(v20 + 8 * v19 + 816), v16);
    *(_QWORD *)(v22 + 8 * v21 + 800) = 0LL;
    *(_QWORD *)(v22 + 8 * v21 + 816) = 0LL;
    *(_DWORD *)(v22 + 4 * v21 + 832) = 716;
    PoStartNextPowerIrp(a2);
  }
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
