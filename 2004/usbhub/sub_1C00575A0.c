/*
 * XREFs of sub_1C00575A0 @ 0x1C00575A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C0039140 @ 0x1C0039140 (sub_1C0039140.c)
 *     sub_1C003AEF8 @ 0x1C003AEF8 (sub_1C003AEF8.c)
 *     sub_1C0053CC8 @ 0x1C0053CC8 (sub_1C0053CC8.c)
 *     sub_1C0053D28 @ 0x1C0053D28 (sub_1C0053D28.c)
 *     sub_1C0057714 @ 0x1C0057714 (sub_1C0057714.c)
 */

__int64 __fastcall sub_1C00575A0(PDEVICE_OBJECT Pdo, PIRP Irp)
{
  _DWORD *v4; // rbx
  int v5; // r10d
  __int64 v6; // rax
  __int64 v8; // [rsp+40h] [rbp-38h] BYREF
  char v9; // [rsp+48h] [rbp-30h]
  int v10; // [rsp+49h] [rbp-2Fh]

  v4 = sub_1C0011220((__int64)Pdo);
  sub_1C000FD80(*((_QWORD *)v4 + 148), 256, 1936879716, (__int64)Irp, *((_QWORD *)v4 + 145));
  sub_1C000FD80(*((_QWORD *)v4 + 148), v5, 1936879665, (__int64)Pdo, (__int64)v4);
  sub_1C0039140((__int64)Pdo);
  if ( (v4[355] & 0x400000) != 0 )
    KeSetEvent((PRKEVENT)(v4 + 730), 0, 0);
  if ( (v4[358] & 0x40000) != 0 )
  {
    v6 = *((_QWORD *)v4 + 382);
    v10 = 0;
    v8 = v6;
    v9 = 0;
    ZwUpdateWnfStateData(&unk_1C0062158, &v8, 13LL);
    v4[358] &= ~0x40000u;
  }
  if ( *((_QWORD *)v4 + 301) )
    sub_1C0053D28(Pdo);
  sub_1C0057714(Pdo);
  sub_1C003AEF8(*((_QWORD *)v4 + 148), Pdo, (__int64)(v4 + 236));
  sub_1C0053CC8((__int64)Pdo, 102, 3);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
