/*
 * XREFs of sub_18009BCB8 @ 0x18009BCB8
 * Callers:
 *     sub_18009F388 @ 0x18009F388 (sub_18009F388.c)
 *     sub_18009FA08 @ 0x18009FA08 (sub_18009FA08.c)
 *     sub_18009FE8C @ 0x18009FE8C (sub_18009FE8C.c)
 *     sub_1800A0450 @ 0x1800A0450 (sub_1800A0450.c)
 *     sub_1800A0E7C @ 0x1800A0E7C (sub_1800A0E7C.c)
 *     sub_1800A5420 @ 0x1800A5420 (sub_1800A5420.c)
 *     sub_1800EAFF0 @ 0x1800EAFF0 (sub_1800EAFF0.c)
 *     sub_1800EC274 @ 0x1800EC274 (sub_1800EC274.c)
 *     sub_1800EC774 @ 0x1800EC774 (sub_1800EC774.c)
 *     sub_1800ED0C0 @ 0x1800ED0C0 (sub_1800ED0C0.c)
 *     sub_1800ED4BC @ 0x1800ED4BC (sub_1800ED4BC.c)
 * Callees:
 *     sub_180012CF0 @ 0x180012CF0 (sub_180012CF0.c)
 *     sub_180013590 @ 0x180013590 (sub_180013590.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180013618 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
const void **__fastcall sub_18009BCB8(const void **Src, _BYTE *a2, _QWORD *a3)
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
        sub_180013590(Src);
    }
    else
    {
      v10 = Src[2];
      sub_180012CF0(Src, v9 - (_QWORD)v10);
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
