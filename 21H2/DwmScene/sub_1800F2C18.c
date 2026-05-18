/*
 * XREFs of sub_1800F2C18 @ 0x1800F2C18
 * Callers:
 *     sub_1800F50A8 @ 0x1800F50A8 (sub_1800F50A8.c)
 *     sub_1800F5438 @ 0x1800F5438 (sub_1800F5438.c)
 *     sub_1800F558C @ 0x1800F558C (sub_1800F558C.c)
 *     sub_1800F5A14 @ 0x1800F5A14 (sub_1800F5A14.c)
 *     sub_1800F5C80 @ 0x1800F5C80 (sub_1800F5C80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F2C18(__int64 a1, unsigned __int16 a2)
{
  return *(_QWORD *)(a1 + 56) + 56LL * *(unsigned __int16 *)(a1 + 2LL * a2 + 128);
}
