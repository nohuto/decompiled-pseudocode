/*
 * XREFs of sub_1C003C654 @ 0x1C003C654
 * Callers:
 *     sub_1C00173C0 @ 0x1C00173C0 (sub_1C00173C0.c)
 * Callees:
 *     sub_1C00038F0 @ 0x1C00038F0 (sub_1C00038F0.c)
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0010D74 @ 0x1C0010D74 (sub_1C0010D74.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C001853C @ 0x1C001853C (sub_1C001853C.c)
 *     sub_1C0034AF8 @ 0x1C0034AF8 (sub_1C0034AF8.c)
 *     sub_1C0039D88 @ 0x1C0039D88 (sub_1C0039D88.c)
 */

LONG __fastcall sub_1C003C654(PDEVICE_OBJECT DeviceObject, struct _DEVICE_OBJECT *a2)
{
  char v4; // r15
  int v5; // edi
  _DWORD *v6; // rax
  _DWORD *v7; // rbp
  int v8; // eax
  int v9; // r10d
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  int v14; // [rsp+70h] [rbp+18h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0;
  v4 = 0;
  v5 = 0;
  v6 = sub_1C0011220((__int64)a2);
  v7 = v6;
  if ( (v6[355] & 0x1000000) != 0 )
  {
    v4 = 1;
    v5 = sub_1C00038F0((__int64)DeviceObject, v6 + 730, v6[742], 1684222788, 0, 0LL);
  }
  KeWaitForSingleObject(v7 + 736, Executive, 0, 0, 0LL);
  v7[355] &= ~0x4000000u;
  KeSetEvent((PRKEVENT)(v7 + 736), 0, 0);
  sub_1C000FD80((__int64)DeviceObject, 16, 1144210290, v5, *((unsigned __int16 *)v7 + 714));
  if ( !v4 )
  {
    v5 = sub_1C000A080((__int64)DeviceObject, *((_WORD *)v7 + 714), (__int64)&v14, &v15);
    if ( v5 < 0 )
    {
LABEL_17:
      v12 = sub_1C0011220((__int64)a2);
      sub_1C0034AF8((__int64)DeviceObject, *((_WORD *)v7 + 714), (__int64)(v12 + 236), 0);
      return sub_1C0010D74(a2, (POWER_STATE)1);
    }
    if ( (v14 & 3) == 1 )
    {
      sub_1C000FD80((__int64)DeviceObject, 16, 1144210284, (unsigned __int16)v14, *((unsigned __int16 *)v7 + 714));
      v4 = 1;
    }
    else if ( (v14 & 1) == 0 )
    {
      sub_1C000FD80((__int64)DeviceObject, 16, 1144210279, (unsigned __int16)v14, *((unsigned __int16 *)v7 + 714));
      v5 = -1073741823;
    }
  }
  if ( v5 < 0 )
    goto LABEL_17;
  if ( v4 == 1 )
  {
    sub_1C001853C((__int64)DeviceObject, 0x64u);
    v8 = sub_1C000A080((__int64)DeviceObject, *((_WORD *)v7 + 714), (__int64)&v14, &v15);
    sub_1C000FD80((__int64)DeviceObject, 16, 1144210291, v8, (unsigned __int16)v14);
    if ( v9 >= 0 && (v14 & 1) != 0 )
    {
      v10 = sub_1C0011220((__int64)a2);
      v5 = sub_1C00162A8(DeviceObject, (__int64)(v10 + 236), (__int64)a2);
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    v11 = sub_1C0011220((__int64)a2);
    sub_1C0039D88(DeviceObject, (__int64)(v11 + 236), a2);
  }
  if ( v5 < 0 )
    goto LABEL_17;
  return sub_1C0010D74(a2, (POWER_STATE)1);
}
