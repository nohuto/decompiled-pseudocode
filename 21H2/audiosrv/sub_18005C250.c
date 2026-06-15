/*
 * XREFs of sub_18005C250 @ 0x18005C250
 * Callers:
 *     sub_18005C130 @ 0x18005C130 (sub_18005C130.c)
 *     sub_18005C190 @ 0x18005C190 (sub_18005C190.c)
 *     sub_18005C1F0 @ 0x18005C1F0 (sub_18005C1F0.c)
 *     sub_18012A524 @ 0x18012A524 (sub_18012A524.c)
 *     sub_18012BC24 @ 0x18012BC24 (sub_18012BC24.c)
 *     sub_18012C888 @ 0x18012C888 (sub_18012C888.c)
 *     sub_18012D1F0 @ 0x18012D1F0 (sub_18012D1F0.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_18005C250(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
