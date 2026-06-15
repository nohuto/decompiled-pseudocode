/*
 * XREFs of sub_180047FDC @ 0x180047FDC
 * Callers:
 *     sub_180048018 @ 0x180048018 (sub_180048018.c)
 *     sub_180048910 @ 0x180048910 (sub_180048910.c)
 *     sub_180049150 @ 0x180049150 (sub_180049150.c)
 *     sub_18005A98C @ 0x18005A98C (sub_18005A98C.c)
 *     sub_1800720A4 @ 0x1800720A4 (sub_1800720A4.c)
 *     sub_180118C04 @ 0x180118C04 (sub_180118C04.c)
 *     sub_180118CDC @ 0x180118CDC (sub_180118CDC.c)
 *     sub_18011EC50 @ 0x18011EC50 (sub_18011EC50.c)
 * Callees:
 *     sub_1800126B0 @ 0x1800126B0 (sub_1800126B0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_180047FDC(__int64 a1, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = sub_1800126B0(*(_QWORD *)(a1 + 40), a2 <= 1, (a2 & 0xFFFFFFFD) == 0);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  sub_18004BD84(
    retaddr,
    7057LL,
    "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (unsigned int)v2);
  return v3;
}
