/*
 * XREFs of sub_18003E850 @ 0x18003E850
 * Callers:
 *     sub_18003EAB8 @ 0x18003EAB8 (sub_18003EAB8.c)
 * Callees:
 *     sub_18003E7E0 @ 0x18003E7E0 (sub_18003E7E0.c)
 */

__int64 __fastcall sub_18003E850(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  int v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_18003E7E0(a1, a2, a3, a4, v5, retaddr, v6, a4);
}
