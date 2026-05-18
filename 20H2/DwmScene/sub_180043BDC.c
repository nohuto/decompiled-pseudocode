/*
 * XREFs of sub_180043BDC @ 0x180043BDC
 * Callers:
 *     sub_180043F74 @ 0x180043F74 (sub_180043F74.c)
 *     sub_180055D0C @ 0x180055D0C (sub_180055D0C.c)
 *     sub_18005C8C4 @ 0x18005C8C4 (sub_18005C8C4.c)
 *     sub_18005EAC4 @ 0x18005EAC4 (sub_18005EAC4.c)
 *     sub_18007EF38 @ 0x18007EF38 (sub_18007EF38.c)
 *     sub_1800867D4 @ 0x1800867D4 (sub_1800867D4.c)
 *     sub_180087A00 @ 0x180087A00 (sub_180087A00.c)
 *     sub_1800A06CC @ 0x1800A06CC (sub_1800A06CC.c)
 *     sub_1800EC170 @ 0x1800EC170 (sub_1800EC170.c)
 *     sub_1800ED368 @ 0x1800ED368 (sub_1800ED368.c)
 *     sub_1800EFB68 @ 0x1800EFB68 (sub_1800EFB68.c)
 *     sub_1800EFCBC @ 0x1800EFCBC (sub_1800EFCBC.c)
 *     sub_1800F0144 @ 0x1800F0144 (sub_1800F0144.c)
 *     sub_1800F03B0 @ 0x1800F03B0 (sub_1800F03B0.c)
 * Callees:
 *     sub_180054FC4 @ 0x180054FC4 (sub_180054FC4.c)
 */

__int64 __fastcall sub_180043BDC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  __int64 v5; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a2 + v4) );
  v5 = sub_180054FC4(a3, 0LL, a2);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v5;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 15LL;
  *(_BYTE *)v5 = 0;
  return a1;
}
