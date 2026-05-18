/*
 * XREFs of sub_1800995B8 @ 0x1800995B8
 * Callers:
 *     sub_18009C450 @ 0x18009C450 (sub_18009C450.c)
 *     sub_1800D99B0 @ 0x1800D99B0 (sub_1800D99B0.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800136F8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_18005A894 @ 0x18005A894 (sub_18005A894.c)
 */

__int64 __fastcall sub_1800995B8(__int64 a1, char *a2, _QWORD *a3)
{
  unsigned __int64 v3; // r9
  _QWORD *v4; // r10
  char *v5; // r11
  unsigned __int64 v6; // r8
  _OWORD *v8; // rax

  v3 = *((_QWORD *)a2 + 2);
  v4 = a3;
  v5 = a2;
  v6 = a3[2];
  if ( v6 <= *((_QWORD *)a2 + 3) - v3 || v4[3] - v6 < v3 )
  {
    if ( v4[3] >= 0x10uLL )
      v4 = (_QWORD *)*v4;
    v8 = std::string::append(a2, v4, v6);
  }
  else
  {
    if ( *((_QWORD *)a2 + 3) >= 0x10uLL )
      v5 = *(char **)a2;
    v8 = sub_18005A894(v4, 0LL, v5, v3);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *v8;
  *(_OWORD *)(a1 + 16) = v8[1];
  *((_QWORD *)v8 + 2) = 0LL;
  *((_QWORD *)v8 + 3) = 15LL;
  *(_BYTE *)v8 = 0;
  return a1;
}
