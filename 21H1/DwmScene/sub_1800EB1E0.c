/*
 * XREFs of sub_1800EB1E0 @ 0x1800EB1E0
 * Callers:
 *     sub_18008A9D0 @ 0x18008A9D0 (sub_18008A9D0.c)
 *     sub_180098830 @ 0x180098830 (sub_180098830.c)
 *     sub_1800A9910 @ 0x1800A9910 (sub_1800A9910.c)
 *     sub_1800FBFF0 @ 0x1800FBFF0 (sub_1800FBFF0.c)
 * Callees:
 *     memcmp @ 0x18011E0BE (memcmp.c)
 */

bool __fastcall sub_1800EB1E0(__int64 a1, __int64 a2)
{
  const void *v3; // rdx
  const void *v5; // rcx
  size_t v6; // r8

  v3 = (const void *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 48) >= 0x10uLL )
    v3 = *(const void **)(a1 + 24);
  v5 = (const void *)(a2 + 24);
  if ( *(_QWORD *)(a2 + 48) >= 0x10uLL )
    v5 = *(const void **)(a2 + 24);
  v6 = *(_QWORD *)(a2 + 40);
  return v6 == *(_QWORD *)(a1 + 40)
      && !memcmp(v5, v3, v6)
      && *(_BYTE *)(a2 + 72) == *(_BYTE *)(a1 + 72)
      && *(_DWORD *)(a2 + 76) == *(_DWORD *)(a1 + 76);
}
