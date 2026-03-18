/*
 * XREFs of sub_1C0056E30 @ 0x1C0056E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0017660 @ 0x1C0017660 (sub_1C0017660.c)
 *     sub_1C00176F8 @ 0x1C00176F8 (sub_1C00176F8.c)
 *     sub_1C0018364 @ 0x1C0018364 (sub_1C0018364.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C0039140 @ 0x1C0039140 (sub_1C0039140.c)
 *     sub_1C0039D88 @ 0x1C0039D88 (sub_1C0039D88.c)
 *     sub_1C003AC9C @ 0x1C003AC9C (sub_1C003AC9C.c)
 *     sub_1C0053CC8 @ 0x1C0053CC8 (sub_1C0053CC8.c)
 *     sub_1C0057714 @ 0x1C0057714 (sub_1C0057714.c)
 */

__int64 __fastcall sub_1C0056E30(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _QWORD *v4; // r15
  int v5; // r14d
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  struct _DEVICE_OBJECT *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v14; // [rsp+40h] [rbp-48h] BYREF
  char v15; // [rsp+48h] [rbp-40h]
  int v16; // [rsp+49h] [rbp-3Fh]

  v4 = 0LL;
  v5 = sub_1C0011220((__int64)DeviceObject)[281];
  v6 = sub_1C0011220((__int64)DeviceObject);
  v7 = v6;
  if ( (v6[355] & 0x40000) != 0 )
    v8 = 0LL;
  else
    v8 = (struct _DEVICE_OBJECT *)*((_QWORD *)v6 + 148);
  if ( v5 != 6 )
  {
    v9 = (__int64)(v6 + 236);
    if ( (v6[358] & 0x40000) != 0 )
    {
      v10 = *((_QWORD *)v6 + 382);
      v16 = 0;
      v14 = v10;
      v15 = 0;
      ZwUpdateWnfStateData(&unk_1C0062158, &v14, 13LL);
      v7[358] &= ~0x40000u;
    }
    if ( v8 )
    {
      sub_1C0039140((__int64)DeviceObject);
      if ( v7[288] == 2 || sub_1C0011220((__int64)DeviceObject)[197] != 1 )
        v4 = (_QWORD *)sub_1C0004060((__int64)v8, v9, (__int64)DeviceObject, 1381200755, 1);
      if ( sub_1C0011220((__int64)DeviceObject)[197] != 1 )
      {
        sub_1C0039D88(v8, v9, DeviceObject);
        sub_1C00176F8((__int64)v8, v9, 137, 1148020050);
        sub_1C0017660(v9, (__int64)DeviceObject, v11, 1, 15);
        sub_1C0018364((__int64)v8, v9);
      }
      sub_1C0057714(DeviceObject);
    }
    sub_1C0053CC8((__int64)DeviceObject, 102, 2);
    sub_1C003AC9C((__int64)v8, (__int64)DeviceObject, v9);
    if ( v4 )
      sub_1C0003610((__int64)v8, v12, v4);
  }
  if ( !Irp )
    sub_1C002DC78((__int64)v8, (ULONG_PTR)DeviceObject);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
