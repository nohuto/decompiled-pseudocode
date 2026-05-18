/*
 * XREFs of sub_180031AE8 @ 0x180031AE8
 * Callers:
 *     sub_180049844 @ 0x180049844 (sub_180049844.c)
 *     sub_18005B5DC @ 0x18005B5DC (sub_18005B5DC.c)
 *     sub_180062194 @ 0x180062194 (sub_180062194.c)
 *     sub_180064394 @ 0x180064394 (sub_180064394.c)
 *     sub_180084808 @ 0x180084808 (sub_180084808.c)
 *     sub_18008C0A4 @ 0x18008C0A4 (sub_18008C0A4.c)
 *     sub_18008D2D0 @ 0x18008D2D0 (sub_18008D2D0.c)
 *     sub_1800A4C58 @ 0x1800A4C58 (sub_1800A4C58.c)
 *     sub_1800A52D8 @ 0x1800A52D8 (sub_1800A52D8.c)
 *     sub_1800A575C @ 0x1800A575C (sub_1800A575C.c)
 *     sub_1800A5D20 @ 0x1800A5D20 (sub_1800A5D20.c)
 *     sub_1800A5F9C @ 0x1800A5F9C (sub_1800A5F9C.c)
 *     sub_1800A674C @ 0x1800A674C (sub_1800A674C.c)
 *     sub_1800AACF0 @ 0x1800AACF0 (sub_1800AACF0.c)
 *     sub_1800F08C0 @ 0x1800F08C0 (sub_1800F08C0.c)
 *     sub_1800F1B44 @ 0x1800F1B44 (sub_1800F1B44.c)
 *     sub_1800F2044 @ 0x1800F2044 (sub_1800F2044.c)
 *     sub_1800F2990 @ 0x1800F2990 (sub_1800F2990.c)
 *     sub_1800F2D8C @ 0x1800F2D8C (sub_1800F2D8C.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800136F8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

__int64 __fastcall sub_180031AE8(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  unsigned __int64 v4; // r8
  _QWORD *v6; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( a3[v4] );
  v6 = std::string::append(a2, a3, v4);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v6;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)v6 + 1);
  v6[2] = 0LL;
  v6[3] = 15LL;
  *(_BYTE *)v6 = 0;
  return a1;
}
