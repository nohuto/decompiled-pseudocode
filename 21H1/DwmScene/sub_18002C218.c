/*
 * XREFs of sub_18002C218 @ 0x18002C218
 * Callers:
 *     sub_180043F74 @ 0x180043F74 (sub_180043F74.c)
 *     sub_180055D0C @ 0x180055D0C (sub_180055D0C.c)
 *     sub_18005C8C4 @ 0x18005C8C4 (sub_18005C8C4.c)
 *     sub_18005EAC4 @ 0x18005EAC4 (sub_18005EAC4.c)
 *     sub_18007EF38 @ 0x18007EF38 (sub_18007EF38.c)
 *     sub_1800867D4 @ 0x1800867D4 (sub_1800867D4.c)
 *     sub_180087A00 @ 0x180087A00 (sub_180087A00.c)
 *     sub_18009F388 @ 0x18009F388 (sub_18009F388.c)
 *     sub_18009FA08 @ 0x18009FA08 (sub_18009FA08.c)
 *     sub_18009FE8C @ 0x18009FE8C (sub_18009FE8C.c)
 *     sub_1800A0450 @ 0x1800A0450 (sub_1800A0450.c)
 *     sub_1800A06CC @ 0x1800A06CC (sub_1800A06CC.c)
 *     sub_1800A0E7C @ 0x1800A0E7C (sub_1800A0E7C.c)
 *     sub_1800A5420 @ 0x1800A5420 (sub_1800A5420.c)
 *     sub_1800EAFF0 @ 0x1800EAFF0 (sub_1800EAFF0.c)
 *     sub_1800EC274 @ 0x1800EC274 (sub_1800EC274.c)
 *     sub_1800EC774 @ 0x1800EC774 (sub_1800EC774.c)
 *     sub_1800ED0C0 @ 0x1800ED0C0 (sub_1800ED0C0.c)
 *     sub_1800ED4BC @ 0x1800ED4BC (sub_1800ED4BC.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180013618 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

__int64 __fastcall sub_18002C218(__int64 a1, _QWORD *a2, _BYTE *a3)
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
