/*
 * XREFs of sub_180054FC4 @ 0x180054FC4
 * Callers:
 *     sub_180043BDC @ 0x180043BDC (sub_180043BDC.c)
 *     sub_180055318 @ 0x180055318 (sub_180055318.c)
 *     sub_180055D0C @ 0x180055D0C (sub_180055D0C.c)
 *     sub_18005C020 @ 0x18005C020 (sub_18005C020.c)
 *     sub_18005C428 @ 0x18005C428 (sub_18005C428.c)
 *     sub_18005C8C4 @ 0x18005C8C4 (sub_18005C8C4.c)
 *     sub_18005EAC4 @ 0x18005EAC4 (sub_18005EAC4.c)
 *     sub_180062BC4 @ 0x180062BC4 (sub_180062BC4.c)
 *     sub_1800867D4 @ 0x1800867D4 (sub_1800867D4.c)
 *     sub_180093CE8 @ 0x180093CE8 (sub_180093CE8.c)
 *     sub_1800BB10C @ 0x1800BB10C (sub_1800BB10C.c)
 *     sub_1800CA8A4 @ 0x1800CA8A4 (sub_1800CA8A4.c)
 *     sub_1800D8398 @ 0x1800D8398 (sub_1800D8398.c)
 *     sub_1800DC1B8 @ 0x1800DC1B8 (sub_1800DC1B8.c)
 *     sub_180109924 @ 0x180109924 (sub_180109924.c)
 *     sub_18010DF40 @ 0x18010DF40 (sub_18010DF40.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_1 @ 0x180026D38 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_1.c)
 *     sub_180043C34 @ 0x180043C34 (sub_180043C34.c)
 *     memcpy @ 0x18011E094 (memcpy.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 */

const void **__fastcall sub_180054FC4(_QWORD *a1, size_t a2, char *a3, unsigned __int64 Size)
{
  unsigned __int64 v6; // r8
  _QWORD *v7; // rsi
  bool v8; // cf
  _BYTE *v9; // r15
  size_t v10; // rbx

  v6 = a1[2];
  v7 = a1;
  if ( v6 < a2 )
    std::vector<void *>::_Xlen();
  if ( Size > a1[3] - v6 )
  {
    LOBYTE(v6) = 0;
    return sub_180043C34((const void **)a1, Size, v6, a2, a3, Size);
  }
  else
  {
    v8 = a1[3] < 0x10uLL;
    a1[2] = v6 + Size;
    if ( !v8 )
      a1 = (_QWORD *)*a1;
    v9 = (char *)a1 + a2;
    if ( &a3[Size] <= (char *)a1 + a2 || a3 > (char *)a1 + v6 )
    {
      v10 = Size;
    }
    else if ( v9 > a3 )
    {
      v10 = v9 - a3;
    }
    else
    {
      v10 = 0LL;
    }
    memmove(&v9[Size], v9, v6 - a2 + 1);
    memcpy(v9, a3, v10);
    memcpy(&v9[v10], &a3[v10 + Size], Size - v10);
    return (const void **)v7;
  }
}
