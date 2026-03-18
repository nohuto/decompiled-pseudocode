/*
 * XREFs of sub_1C0056CF0 @ 0x1C0056CF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0033288 @ 0x1C0033288 (sub_1C0033288.c)
 *     sub_1C0033368 @ 0x1C0033368 (sub_1C0033368.c)
 */

__int64 __fastcall sub_1C0056CF0(PDEVICE_OBJECT Pdo, PIRP Irp)
{
  _DWORD *v4; // rbx
  int v5; // eax
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  NTSTATUS v8; // eax
  unsigned int Status; // ebx

  v4 = sub_1C0011220((__int64)Pdo);
  v4[355] |= 0x400u;
  v5 = v4[355];
  if ( (v5 & 0x800) == 0 && (v4[706] & 0x40) != 0 )
  {
    v6 = sub_1C0011220((__int64)Pdo);
    sub_1C0033288((__int64)(v6 + 236), Pdo);
  }
  else if ( (v5 & 0x820) == 0 && (v4[358] & 0x400) != 0 )
  {
    v7 = sub_1C0011220((__int64)Pdo);
    sub_1C0033368((__int64)(v7 + 236), Pdo);
  }
  if ( (v4[706] & 0x100) != 0 && (v4[355] & 0x800) == 0 )
  {
    v8 = IoSetDevicePropertyData(Pdo, &stru_1C0062900, 0, 0, 0xDu, 0x10u, (PVOID)(*((_QWORD *)v4 + 358) + 4LL));
    if ( v8 < 0 )
      sub_1C000FD80(*((_QWORD *)v4 + 148), 256, 1364349489, v8, 0LL);
  }
  Status = Irp->IoStatus.Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
