/*
 * XREFs of sub_1800E9A10 @ 0x1800E9A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CC9DC @ 0x1800CC9DC (sub_1800CC9DC.c)
 *     sub_1800CCCE4 @ 0x1800CCCE4 (sub_1800CCCE4.c)
 *     sub_1800CCCF4 @ 0x1800CCCF4 (sub_1800CCCF4.c)
 *     sub_1800CCD04 @ 0x1800CCD04 (sub_1800CCD04.c)
 *     sub_1800CCD24 @ 0x1800CCD24 (sub_1800CCD24.c)
 *     sub_1800CCD44 @ 0x1800CCD44 (sub_1800CCD44.c)
 *     sub_1800CCD64 @ 0x1800CCD64 (sub_1800CCD64.c)
 *     sub_1800CCD84 @ 0x1800CCD84 (sub_1800CCD84.c)
 */

__int64 __fastcall sub_1800E9A10(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 result; // rax

  v2 = sub_1800CCCE4(5, 4LL, 0LL);
  v3 = sub_1800CC9DC(4, 4, 0LL) | v2;
  v4 = v3 | sub_1800CCCF4(4, 4LL, 0LL);
  v5 = v4 | sub_1800CCD44(0, 4, 0LL);
  v6 = v5 | sub_1800CCD24(0, 3, 0LL);
  v7 = v6 | sub_1800CCD04(0, 3, 0LL);
  v8 = v7 | sub_1800CCD64(0, 2, 0LL);
  result = v8 | sub_1800CCD84(0, 2, 0LL);
  *(_QWORD *)(a1 + 112) = result;
  return result;
}
