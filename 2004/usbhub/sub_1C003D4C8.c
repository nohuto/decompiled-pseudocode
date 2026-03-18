/*
 * XREFs of sub_1C003D4C8 @ 0x1C003D4C8
 * Callers:
 *     sub_1C001A550 @ 0x1C001A550 (sub_1C001A550.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C0017B0C @ 0x1C0017B0C (sub_1C0017B0C.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0031390 @ 0x1C0031390 (sub_1C0031390.c)
 *     sub_1C0031404 @ 0x1C0031404 (sub_1C0031404.c)
 *     sub_1C0031838 @ 0x1C0031838 (sub_1C0031838.c)
 *     sub_1C003CBD8 @ 0x1C003CBD8 (sub_1C003CBD8.c)
 *     sub_1C003CE68 @ 0x1C003CE68 (sub_1C003CE68.c)
 *     sub_1C0043C9C @ 0x1C0043C9C (sub_1C0043C9C.c)
 */

__int64 __fastcall sub_1C003D4C8(__int64 a1, int a2)
{
  __int64 v3; // rbx
  _DWORD *v4; // rsi
  unsigned int v5; // ebp
  int v6; // ebx
  unsigned int v7; // r8d
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // r8d
  struct _DEVICE_OBJECT *v15; // rbx
  unsigned int v16; // ebx
  int v17; // ebx
  int v18; // eax
  __int64 v20; // [rsp+28h] [rbp-30h]

  v3 = a2;
  v4 = sub_1C000F050(*(_QWORD *)(a1 + 8));
  sub_1C000F050(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  sub_1C000FD80(*(_QWORD *)(a1 + 8), 16, 1920160085, a1, v3);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xFu, (__int64)&unk_1C0062E08, v3);
  v6 = v3 - 2;
  if ( !v6 )
  {
    v12 = *(_QWORD *)(a1 + 8);
    v14 = 5;
    v13 = a1;
    goto LABEL_29;
  }
  v7 = 3;
  v8 = v6 - 1;
  if ( !v8 )
  {
LABEL_14:
    v12 = *(_QWORD *)(a1 + 8);
    v13 = a1;
    return (unsigned int)sub_1C0031838(v12, v13, v7);
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 3;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        v12 = *(_QWORD *)(a1 + 8);
        v13 = a1;
        if ( v11 != 1 )
        {
          v7 = v5;
          return (unsigned int)sub_1C0031838(v12, v13, v7);
        }
        v14 = 7;
LABEL_29:
        v16 = sub_1C0031838(v12, v13, v14);
        KeWaitForSingleObject(v4 + 712, Executive, 0, 0, 0LL);
        return v16;
      }
      goto LABEL_14;
    }
    v15 = *(struct _DEVICE_OBJECT **)(a1 + 8);
    sub_1C000F050((__int64)v15);
    sub_1C0031404(v15, a1, 6);
    sub_1C0031390(v15, a1);
LABEL_13:
    v7 = 4;
    goto LABEL_14;
  }
  sub_1C0012400(*(_QWORD *)(a1 + 8), 0LL, 0LL, &stru_1C00628C0);
  v17 = sub_1C003CBD8(*(struct _DEVICE_OBJECT **)(a1 + 8), a1);
  if ( *((_BYTE *)v4 + 5268) && _InterlockedExchange(v4 + 1315, 0) )
  {
    do
    {
      sub_1C0043C9C(*(_QWORD *)(a1 + 8));
      v17 = sub_1C003CBD8(*(struct _DEVICE_OBJECT **)(a1 + 8), a1);
      sub_1C003CE68(*(_QWORD *)(a1 + 8));
    }
    while ( _InterlockedExchange(v4 + 1315, 0) );
  }
  sub_1C0012400(*(_QWORD *)(a1 + 8), 0LL, 0LL, (const EVENT_DESCRIPTOR *)"1");
  if ( v17 < 0 && !*((_BYTE *)v4 + 5268) )
    goto LABEL_13;
  v18 = sub_1C0017B0C(*(_QWORD *)(a1 + 8), 1u, (int)sub_1C0046BC0, 0LL, 0, 0x49577372u, 0LL);
  if ( (v18 & 0xC0000000) == 0xC0000000
    && off_1C006B000 != (_UNKNOWN *)&off_1C006B000
    && LOWORD(DeviceObject->DeviceType) )
  {
    LODWORD(v20) = v18;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x10u, (__int64)&unk_1C0062E08, v20);
  }
  v16 = sub_1C0031838(*(_QWORD *)(a1 + 8), a1, 2u);
  if ( *((_BYTE *)v4 + 5268) && v4[1315] )
  {
    sub_1C0043C9C(*(_QWORD *)(a1 + 8));
    sub_1C003CBD8(*(struct _DEVICE_OBJECT **)(a1 + 8), a1);
    sub_1C003CE68(*(_QWORD *)(a1 + 8));
  }
  return v16;
}
