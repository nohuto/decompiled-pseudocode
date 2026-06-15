/*
 * XREFs of sub_1800BBB74 @ 0x1800BBB74
 * Callers:
 *     sub_1800BC7E0 @ 0x1800BC7E0 (sub_1800BC7E0.c)
 * Callees:
 *     sub_1800BC028 @ 0x1800BC028 (sub_1800BC028.c)
 */

__int64 __fastcall sub_1800BBB74(_QWORD *a1, __int64 *a2, _OWORD *a3, _QWORD *a4)
{
  _QWORD *v4; // r14
  unsigned int v8; // ebx
  const WCHAR *v9; // rcx
  char v10; // bl
  HANDLE FileW; // rax
  __int64 v12; // rsi
  __int128 v14; // [rsp+40h] [rbp-68h]
  __int128 v15; // [rsp+50h] [rbp-58h]
  __int128 v16; // [rsp+60h] [rbp-48h]
  __int128 v17; // [rsp+70h] [rbp-38h]

  v4 = (_QWORD *)*a1;
  v8 = -2147023728;
  while ( v4 && v8 == -2147023728 )
  {
    v9 = (const WCHAR *)v4[2];
    v4 = (_QWORD *)*v4;
    v10 = 0;
    FileW = CreateFileW(v9, 0xC0000000, 3u, 0LL, 3u, 0x40000000u, 0LL);
    v12 = (__int64)FileW;
    if ( FileW != (HANDLE)-1LL )
    {
      v10 = sub_1800BC028(FileW);
      if ( v10 )
      {
        *a3 = v14;
        a3[1] = v15;
        a3[2] = v16;
        *a2 = v12;
        v12 = -1LL;
        a3[3] = v17;
        *a4 = 0LL;
      }
    }
    v8 = v10 == 0 ? 0x80070490 : 0;
    if ( v12 != -1 )
      CloseHandle((HANDLE)v12);
  }
  return v8;
}
