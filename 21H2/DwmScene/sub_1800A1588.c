/*
 * XREFs of sub_1800A1588 @ 0x1800A1588
 * Callers:
 *     sub_1800A4C58 @ 0x1800A4C58 (sub_1800A4C58.c)
 *     sub_1800A52D8 @ 0x1800A52D8 (sub_1800A52D8.c)
 *     sub_1800A575C @ 0x1800A575C (sub_1800A575C.c)
 *     sub_1800A5D20 @ 0x1800A5D20 (sub_1800A5D20.c)
 *     sub_1800A674C @ 0x1800A674C (sub_1800A674C.c)
 *     sub_1800AACF0 @ 0x1800AACF0 (sub_1800AACF0.c)
 *     sub_1800F08C0 @ 0x1800F08C0 (sub_1800F08C0.c)
 *     sub_1800F1B44 @ 0x1800F1B44 (sub_1800F1B44.c)
 *     sub_1800F2044 @ 0x1800F2044 (sub_1800F2044.c)
 *     sub_1800F2990 @ 0x1800F2990 (sub_1800F2990.c)
 *     sub_1800F2D8C @ 0x1800F2D8C (sub_1800F2D8C.c)
 * Callees:
 *     sub_180012DD0 @ 0x180012DD0 (sub_180012DD0.c)
 *     sub_180013670 @ 0x180013670 (sub_180013670.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800136F8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
const void **__fastcall sub_1800A1588(const void **Src, _BYTE *a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  unsigned __int64 *v6; // r15
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  const void *v10; // rbx

  v3 = a3;
  Src[2] = 0LL;
  Src[3] = (const void *)15;
  *(_BYTE *)Src = 0;
  v6 = a3 + 2;
  v7 = -1LL;
  v8 = -1LL;
  do
    ++v8;
  while ( a2[v8] );
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
  do
    ++v7;
  while ( a2[v7] );
  std::string::append(Src, a2, v7);
  if ( v3[3] >= 0x10uLL )
    v3 = (_QWORD *)*v3;
  std::string::append(Src, v3, *v6);
  return Src;
}
