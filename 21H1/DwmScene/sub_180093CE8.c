/*
 * XREFs of sub_180093CE8 @ 0x180093CE8
 * Callers:
 *     sub_180096B80 @ 0x180096B80 (sub_180096B80.c)
 *     sub_1800D40E0 @ 0x1800D40E0 (sub_1800D40E0.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180013618 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_180054FC4 @ 0x180054FC4 (sub_180054FC4.c)
 */

__int64 __fastcall sub_180093CE8(__int64 a1, char *a2, _QWORD *a3)
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
    v8 = sub_180054FC4(v4, 0LL, v5, v3);
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
