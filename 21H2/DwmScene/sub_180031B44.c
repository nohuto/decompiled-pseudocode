/*
 * XREFs of sub_180031B44 @ 0x180031B44
 * Callers:
 *     sub_1800329B4 @ 0x1800329B4 (sub_1800329B4.c)
 *     sub_180047058 @ 0x180047058 (sub_180047058.c)
 *     sub_180068A0C @ 0x180068A0C (sub_180068A0C.c)
 *     sub_18009C450 @ 0x18009C450 (sub_18009C450.c)
 *     _setlocale_set_cat_0 @ 0x1800AFE94 (_setlocale_set_cat_0.c)
 *     sub_1800B0380 @ 0x1800B0380 (sub_1800B0380.c)
 *     sub_1800D99B0 @ 0x1800D99B0 (sub_1800D99B0.c)
 *     sub_1800F87B8 @ 0x1800F87B8 (sub_1800F87B8.c)
 *     sub_1800FFD00 @ 0x1800FFD00 (sub_1800FFD00.c)
 *     sub_180100870 @ 0x180100870 (sub_180100870.c)
 *     sub_1801009C8 @ 0x1801009C8 (sub_1801009C8.c)
 *     sub_180100AA0 @ 0x180100AA0 (sub_180100AA0.c)
 *     sub_18010A840 @ 0x18010A840 (sub_18010A840.c)
 * Callees:
 *     sub_180012DD0 @ 0x180012DD0 (sub_180012DD0.c)
 *     sub_180013670 @ 0x180013670 (sub_180013670.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800136F8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
const void **__fastcall sub_180031B44(const void **Src, _QWORD *a2, _BYTE *a3)
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
        sub_180013670(Src);
    }
    else
    {
      v10 = Src[2];
      sub_180012DD0(Src, v9 - (_QWORD)v10);
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
