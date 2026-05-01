/*
 * XREFs of sub_1800032C0 @ 0x1800032C0
 * Callers:
 *     sub_18000336C @ 0x18000336C (sub_18000336C.c)
 *     sub_18000339C @ 0x18000339C (sub_18000339C.c)
 *     sub_18000FAC0 @ 0x18000FAC0 (sub_18000FAC0.c)
 * Callees:
 *     sub_1800030CC @ 0x1800030CC (sub_1800030CC.c)
 */

__int64 __fastcall sub_1800032C0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_1800030CC(a1, a2, a3, a4, v5, retaddr);
}
