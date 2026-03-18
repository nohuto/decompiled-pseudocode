/*
 * XREFs of sub_1C00430F0 @ 0x1C00430F0
 * Callers:
 *     sub_1C0044090 @ 0x1C0044090 (sub_1C0044090.c)
 *     sub_1C0044230 @ 0x1C0044230 (sub_1C0044230.c)
 * Callees:
 *     sub_1C0002AF0 @ 0x1C0002AF0 (sub_1C0002AF0.c)
 *     sub_1C000CF10 @ 0x1C000CF10 (sub_1C000CF10.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011260 @ 0x1C0011260 (sub_1C0011260.c)
 *     sub_1C0011C40 @ 0x1C0011C40 (sub_1C0011C40.c)
 *     sub_1C002D328 @ 0x1C002D328 (sub_1C002D328.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0037328 @ 0x1C0037328 (sub_1C0037328.c)
 *     sub_1C003C45C @ 0x1C003C45C (sub_1C003C45C.c)
 */

__int64 __fastcall sub_1C00430F0(__int64 a1, int a2)
{
  _DWORD *v4; // rsi
  int v5; // edi
  __int64 v6; // rdi
  _DWORD *v7; // rax
  __int64 *v8; // rbx
  int v9; // r10d
  int v10; // r8d
  __int64 v12; // [rsp+28h] [rbp-30h]

  v4 = sub_1C000F050(*(_QWORD *)(a1 + 8));
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        sub_1C000FD80(*(_QWORD *)(a1 + 8), 2, 1919243092, 0LL, 0LL);
        LODWORD(v6) = sub_1C002D328(*(_QWORD *)(a1 + 8), a1);
        if ( (int)v6 >= 0 )
          LODWORD(v6) = sub_1C000CF10(*(PDEVICE_OBJECT *)(a1 + 8), a1, 0);
      }
      else
      {
        LODWORD(v6) = -1073741823;
      }
    }
    else
    {
      v7 = sub_1C000F050(*(_QWORD *)(a1 + 8));
      v8 = (__int64 *)(v7 + 390);
      sub_1C000FD80(*((_QWORD *)v7 + 196), 2, 1635341140, 0LL, (__int64)(v7 + 390));
      LODWORD(v6) = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), v8, File, 1u, 0x20u);
      if ( (v6 & 0xC0000000) != 0xC0000000 )
      {
        sub_1C000FD80(v8[1], 8, 1700023634, *((_QWORD *)v4 + 346), 0LL);
        sub_1C0011C40(v8[1], *((_QWORD *)v4 + 346), 1000, 0, (__int64)v8, 0x49577473u);
        v6 = (int)sub_1C003C45C(v8[1], (__int64)v8, (__int64)sub_1C0043380);
        sub_1C000FD80(v8[1], 8, 1919445358, v6, 0LL);
        if ( (v6 & 0xC0000000) == 0xC0000000 && (_DWORD)v6 != -1073741536 )
        {
          sub_1C000FD80(v8[1], v9, 2018790738, *((_QWORD *)v4 + 346), 0LL);
          sub_1C0011260(v8[1], *((_QWORD *)v4 + 346));
          if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
          {
            LODWORD(v12) = v6;
            sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xEu, (__int64)&unk_1C0062F40, v12);
          }
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), v8, 0x20u);
        }
      }
    }
  }
  else
  {
    sub_1C000FD80(*(_QWORD *)(a1 + 8), 2, 1937331028, 0LL, 0LL);
    LODWORD(v6) = sub_1C0037328(*(_QWORD *)(a1 + 8), a1);
    v10 = 5;
    if ( (int)v6 < 0 )
      v10 = 9;
    sub_1C0002AF0(*(struct _DEVICE_OBJECT **)(a1 + 8), a1, v10);
  }
  return (unsigned int)v6;
}
