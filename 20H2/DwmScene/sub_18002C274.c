/*
 * XREFs of sub_18002C274 @ 0x18002C274
 * Callers:
 *     sub_18002D0E4 @ 0x18002D0E4 (sub_18002D0E4.c)
 *     sub_180041788 @ 0x180041788 (sub_180041788.c)
 *     sub_18006313C @ 0x18006313C (sub_18006313C.c)
 *     sub_180096B80 @ 0x180096B80 (sub_180096B80.c)
 *     _setlocale_set_cat_0 @ 0x1800AA5C4 (_setlocale_set_cat_0.c)
 *     sub_1800AAAB0 @ 0x1800AAAB0 (sub_1800AAAB0.c)
 *     sub_1800D40E0 @ 0x1800D40E0 (sub_1800D40E0.c)
 *     sub_1800F2EE8 @ 0x1800F2EE8 (sub_1800F2EE8.c)
 *     sub_1800FA430 @ 0x1800FA430 (sub_1800FA430.c)
 *     sub_1800FAFA0 @ 0x1800FAFA0 (sub_1800FAFA0.c)
 *     sub_1800FB0F8 @ 0x1800FB0F8 (sub_1800FB0F8.c)
 *     sub_1800FB1D0 @ 0x1800FB1D0 (sub_1800FB1D0.c)
 *     sub_180104F70 @ 0x180104F70 (sub_180104F70.c)
 * Callees:
 *     sub_180012CF0 @ 0x180012CF0 (sub_180012CF0.c)
 *     sub_180013590 @ 0x180013590 (sub_180013590.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180013618 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
const void **__fastcall sub_18002C274(const void **Src, _QWORD *a2, _BYTE *a3)
{
  _QWORD *v4; // r14
  unsigned __int64 *v6; // r15
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  const void *v10; // rbx

  v4 = a2;
  Src[2] = 0LL;
  Src[3] = (const void *)15;
  *(_BYTE *)Src = 0;
  v6 = a2 + 2;
  v7 = -1LL;
  v8 = -1LL;
  do
    ++v8;
  while ( a3[v8] );
  v9 = *v6 + v8;
  if ( v9 != 15 )
  {
    if ( (unsigned __int64)Src[3] >= v9 )
    {
      if ( v9 < 0x10 && (unsigned __int64)Src[3] >= 0x10 )
        sub_180013590(Src);
    }
    else
    {
      v10 = Src[2];
      sub_180012CF0(Src, v9 - (_QWORD)v10);
      Src[2] = v10;
    }
  }
  if ( v4[3] >= 0x10uLL )
    v4 = (_QWORD *)*v4;
  std::string::append(Src, v4, *v6);
  do
    ++v7;
  while ( a3[v7] );
  std::string::append(Src, a3, v7);
  return Src;
}
