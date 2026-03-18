/*
 * XREFs of sub_1C0048720 @ 0x1C0048720
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002B3F4 @ 0x1C002B3F4 (sub_1C002B3F4.c)
 *     sub_1C002E354 @ 0x1C002E354 (sub_1C002E354.c)
 */

__int64 __fastcall sub_1C0048720(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4, __int64 a5)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v9; // r9
  __int64 v10; // r9
  unsigned int *v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // r9
  int v14; // eax
  int v15; // r10d
  int v17; // [rsp+28h] [rbp-30h]

  v6 = a3;
  v7 = (unsigned int)a2;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v17 = a2;
    sub_1C002E354((__int64)DeviceObject->DeviceExtension, a2, 1u, 0xDu, (__int64)&unk_1C0063950, v17, a3);
  }
  sub_1C000FD80(a1, 64, 1094929969, a5, v7);
  sub_1C000FD80(a1, 64, 1094929970, v9, v6);
  *a4 = 0;
  if ( (unsigned int)v6 < 0xA )
    return 3221225507LL;
  v11 = (unsigned int *)(v10 + 4);
  v12 = *(_DWORD *)(v10 + 4);
  if ( v12 < 0xA )
    return 3221225507LL;
  v13 = v10 + 4;
  if ( v12 > (unsigned int)v6 )
    v12 = v6;
  sub_1C000FD80(a1, 64, 1094929971, v13, v12);
  *v11 -= 4;
  if ( *v11 > (int)v6 - 4 )
    return 3221225507LL;
  v14 = sub_1C002B3F4(a1, (__int64)v11, *v11);
  sub_1C000FD80(a1, 64, 1094929972, (__int64)v11, v14);
  if ( v15 >= 0 )
  {
    *v11 += 4;
    *a4 = v12;
  }
  return (unsigned int)v15;
}
