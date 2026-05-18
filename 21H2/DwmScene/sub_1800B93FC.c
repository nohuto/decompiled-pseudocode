/*
 * XREFs of sub_1800B93FC @ 0x1800B93FC
 * Callers:
 *     sub_18001D460 @ 0x18001D460 (sub_18001D460.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000BE50 (_guard_check_icall_nop.c)
 *     sub_1800B7DC0 @ 0x1800B7DC0 (sub_1800B7DC0.c)
 *     sub_1800B8A54 @ 0x1800B8A54 (sub_1800B8A54.c)
 *     sub_1800B8B54 @ 0x1800B8B54 (sub_1800B8B54.c)
 *     sub_1800B9058 @ 0x1800B9058 (sub_1800B9058.c)
 *     sub_1800B9484 @ 0x1800B9484 (sub_1800B9484.c)
 *     sub_1800CC000 @ 0x1800CC000 (sub_1800CC000.c)
 */

char __fastcall sub_1800B93FC(__m128 *a1, _DWORD *a2)
{
  __int64 v2; // rbx
  _DWORD *v4; // rax
  __int128 v6; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v7[152]; // [rsp+30h] [rbp-98h] BYREF

  v2 = (__int64)&a1[6].m128_i64[1] + 4;
  sub_1800B8A54(&a1[6].m128_i32[3], a2);
  a1[15].m128_i32[3] = 2;
  sub_1800B7DC0(v2);
  v4 = (_DWORD *)sub_1800CC000(v7, v2);
  sub_1800B8B54((__m128 *)a1[16].m128_i32, v4);
  sub_1800B9484(a1);
  v6 = xmmword_180214CE0;
  return sub_1800B9058(a1, (__m128 *)&v6);
}
