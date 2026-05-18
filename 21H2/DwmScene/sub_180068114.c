/*
 * XREFs of sub_180068114 @ 0x180068114
 * Callers:
 *     sub_1800345D4 @ 0x1800345D4 (sub_1800345D4.c)
 *     sub_180034E48 @ 0x180034E48 (sub_180034E48.c)
 *     sub_18003E050 @ 0x18003E050 (sub_18003E050.c)
 *     sub_1800428D0 @ 0x1800428D0 (sub_1800428D0.c)
 *     sub_180042BE0 @ 0x180042BE0 (sub_180042BE0.c)
 *     sub_1800464F0 @ 0x1800464F0 (sub_1800464F0.c)
 *     sub_180047680 @ 0x180047680 (sub_180047680.c)
 *     sub_180047A50 @ 0x180047A50 (sub_180047A50.c)
 *     sub_180047DF0 @ 0x180047DF0 (sub_180047DF0.c)
 *     sub_180048190 @ 0x180048190 (sub_180048190.c)
 *     sub_1800D311C @ 0x1800D311C (sub_1800D311C.c)
 * Callees:
 *     sub_180067CB4 @ 0x180067CB4 (sub_180067CB4.c)
 *     sub_1800D14B0 @ 0x1800D14B0 (sub_1800D14B0.c)
 *     sub_1800D14C8 @ 0x1800D14C8 (sub_1800D14C8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180068114(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  v3 = a3;
  if ( a3 == 15 )
    v3 = *(_DWORD *)(a1 + 48);
  v10 = v3;
  v11 = a2;
  v6 = sub_1800D14C8(a1);
  sub_1800D14B0(v6, v3, 2LL, a2);
  sub_180067CB4((unsigned int *)(a1 + 56), &v10);
  v8 = sub_1800D14C8(v7);
  return sub_1800D14B0(v8, v3, 2LL, -a2);
}
