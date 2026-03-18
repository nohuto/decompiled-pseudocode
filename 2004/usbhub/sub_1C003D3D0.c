/*
 * XREFs of sub_1C003D3D0 @ 0x1C003D3D0
 * Callers:
 *     sub_1C001A550 @ 0x1C001A550 (sub_1C001A550.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0031838 @ 0x1C0031838 (sub_1C0031838.c)
 */

__int64 __fastcall sub_1C003D3D0(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rbp
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v8; // [rsp+28h] [rbp-10h]

  v3 = a2;
  v4 = sub_1C000F050(*(_QWORD *)(a1 + 8));
  sub_1C000F050(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  sub_1C000FD80(*(_QWORD *)(a1 + 8), 16, 1920161616, a1, v3);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v8 = v3;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x11u, (__int64)&unk_1C0062E08, v8);
  }
  if ( (_DWORD)v3 == 4 || (_DWORD)v3 == 7 )
  {
    v6 = sub_1C0031838(*(_QWORD *)(a1 + 8), a1, 6u);
    KeSetEvent((PRKEVENT)(v4 + 712), 0, 0);
  }
  else
  {
    return (unsigned int)sub_1C0031838(*(_QWORD *)(a1 + 8), a1, v5);
  }
  return v6;
}
