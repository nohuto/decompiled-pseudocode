/*
 * XREFs of sub_1800B9340 @ 0x1800B9340
 * Callers:
 *     sub_1800B9190 @ 0x1800B9190 (sub_1800B9190.c)
 *     sub_1800C09DC @ 0x1800C09DC (sub_1800C09DC.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000BE50 (_guard_check_icall_nop.c)
 *     sub_1800B7F7C @ 0x1800B7F7C (sub_1800B7F7C.c)
 *     sub_1800B8A54 @ 0x1800B8A54 (sub_1800B8A54.c)
 *     sub_1800B8B54 @ 0x1800B8B54 (sub_1800B8B54.c)
 *     sub_1800B9058 @ 0x1800B9058 (sub_1800B9058.c)
 *     sub_1800B9484 @ 0x1800B9484 (sub_1800B9484.c)
 *     sub_1800CBE34 @ 0x1800CBE34 (sub_1800CBE34.c)
 *     sub_1800CBFC4 @ 0x1800CBFC4 (sub_1800CBFC4.c)
 */

char __fastcall sub_1800B9340(__m128 *a1, __m128 *a2)
{
  _DWORD *v4; // rax
  __m128 *v5; // rax
  __m128 v7; // [rsp+20h] [rbp-B8h] BYREF
  __m128 v8[10]; // [rsp+30h] [rbp-A8h] BYREF

  v4 = (_DWORD *)sub_1800CBE34(v8);
  sub_1800B8B54((__m128 *)a1[16].m128_i32, v4);
  sub_1800CBFC4(&a1[16], a2);
  v5 = sub_1800B7F7C(v8, a1 + 16);
  sub_1800B8A54(&a1[6].m128_i32[3], v5);
  sub_1800B9484(a1);
  v7 = *a2;
  return sub_1800B9058(a1, &v7);
}
