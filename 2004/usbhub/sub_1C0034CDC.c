/*
 * XREFs of sub_1C0034CDC @ 0x1C0034CDC
 * Callers:
 *     sub_1C0004220 @ 0x1C0004220 (sub_1C0004220.c)
 *     sub_1C0004C90 @ 0x1C0004C90 (sub_1C0004C90.c)
 *     sub_1C0007A40 @ 0x1C0007A40 (sub_1C0007A40.c)
 *     sub_1C0013438 @ 0x1C0013438 (sub_1C0013438.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0036088 @ 0x1C0036088 (sub_1C0036088.c)
 */

__int64 __fastcall sub_1C0034CDC(__int64 a1, __int64 a2)
{
  __int16 v4; // r9
  __int64 result; // rax
  _QWORD *i; // r10
  _QWORD *v7; // r10
  void *v8; // r11
  __int64 v9; // r8
  _QWORD *v10; // rax
  int v11; // [rsp+28h] [rbp-10h]

  sub_1C000FD80(a1, 512, 1969836099, 0LL, *(unsigned __int16 *)(a2 + 4));
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) != v4 )
  {
    v11 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x56u, (__int64)&unk_1C0062098, v11);
  }
  sub_1C000F050(a1);
  result = a2 + 456;
  for ( i = *(_QWORD **)(a2 + 456); i != (_QWORD *)result; i = (_QWORD *)*i )
  {
    if ( *((_DWORD *)i - 2) == 0x40000 )
    {
      sub_1C000FD80(a1, 512, 1718375253, a2, (__int64)(i - 2));
      v9 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v10 = (_QWORD *)v7[1], (_QWORD *)*v10 != v7) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      ExFreePoolWithTag(v8, 0);
      return sub_1C0036088(a1, a2);
    }
  }
  return result;
}
