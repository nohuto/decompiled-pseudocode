/*
 * XREFs of sub_180029F44 @ 0x180029F44
 * Callers:
 *     sub_180029F0C @ 0x180029F0C (sub_180029F0C.c)
 *     sub_18002AAB0 @ 0x18002AAB0 (sub_18002AAB0.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_180029F44(__int64 a1)
{
  return (*(_QWORD *)(a1 + 648) & 0x2000000000000LL) != 0 && *(_QWORD *)(a1 + 600) == a1 + 600;
}
