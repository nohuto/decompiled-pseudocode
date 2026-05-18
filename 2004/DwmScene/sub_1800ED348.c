/*
 * XREFs of sub_1800ED348 @ 0x1800ED348
 * Callers:
 *     sub_1800EF7D8 @ 0x1800EF7D8 (sub_1800EF7D8.c)
 *     sub_1800EFB68 @ 0x1800EFB68 (sub_1800EFB68.c)
 *     sub_1800EFCBC @ 0x1800EFCBC (sub_1800EFCBC.c)
 *     sub_1800F0144 @ 0x1800F0144 (sub_1800F0144.c)
 *     sub_1800F03B0 @ 0x1800F03B0 (sub_1800F03B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800ED348(__int64 a1, unsigned __int16 a2)
{
  return *(_QWORD *)(a1 + 56) + 56LL * *(unsigned __int16 *)(a1 + 2LL * a2 + 128);
}
