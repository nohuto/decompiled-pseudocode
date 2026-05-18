/*
 * XREFs of sub_1800A155C @ 0x1800A155C
 * Callers:
 *     sub_1800CF2C8 @ 0x1800CF2C8 (sub_1800CF2C8.c)
 *     sub_1800F2EE8 @ 0x1800F2EE8 (sub_1800F2EE8.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180013618 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A155C(_QWORD *Src, _QWORD **a2)
{
  _WORD *v3; // rax
  char v4; // bp
  _QWORD **v5; // rdi
  _QWORD *v6; // rbx
  const void *v7; // rdx
  __int64 **v8; // rax
  __int64 i; // rax
  __int64 *j; // rcx

  Src[2] = 0LL;
  Src[3] = 15LL;
  *(_BYTE *)Src = 0;
  v3 = Src;
  if ( Src[3] >= 0x10uLL )
    v3 = (_WORD *)*Src;
  Src[2] = 1LL;
  *v3 = 123;
  v4 = 0;
  v5 = (_QWORD **)*a2;
  v6 = (_QWORD *)**a2;
  while ( v6 != v5 )
  {
    if ( v4 )
      std::string::append(Src, &unk_18013CEAC, 1uLL);
    else
      v4 = 1;
    v7 = v6 + 4;
    if ( v6[7] >= 0x10uLL )
      v7 = (const void *)v6[4];
    std::string::append(Src, v7, v6[6]);
    v8 = (__int64 **)v6[2];
    if ( *((_BYTE *)v8 + 25) )
    {
      for ( i = v6[1]; !*(_BYTE *)(i + 25) && v6 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v6 = (_QWORD *)i;
      v6 = (_QWORD *)i;
    }
    else
    {
      v6 = (_QWORD *)v6[2];
      for ( j = *v8; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v6 = j;
    }
  }
  std::string::append(Src, &unk_18013CEA8, 1uLL);
  return Src;
}
