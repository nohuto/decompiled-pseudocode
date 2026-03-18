/*
 * XREFs of sub_1C0056C20 @ 0x1C0056C20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     NetpGetPrivilege @ 0x1C0057A60 (NetpGetPrivilege.c)
 */

__int64 __fastcall sub_1C0056C20(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rsi
  unsigned int Status; // ebx
  int v7; // [rsp+28h] [rbp-10h]

  v4 = sub_1C0011220((__int64)DeviceObject);
  Status = 0;
  if ( v4[283] )
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    {
      v7 = v4[283];
      sub_1C002E188((__int64)::DeviceObject->DeviceExtension, 0, 1u, 0xFu, (__int64)&unk_1C0065258, v7);
    }
    if ( v4[705] )
      NetpGetPrivilege(DeviceObject);
    Irp->IoStatus.Information |= (unsigned int)v4[283];
    Irp->IoStatus.Status = 0;
  }
  else
  {
    Status = Irp->IoStatus.Status;
  }
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
