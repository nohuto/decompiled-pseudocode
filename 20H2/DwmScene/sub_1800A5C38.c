/*
 * XREFs of sub_1800A5C38 @ 0x1800A5C38
 * Callers:
 *     sub_1800A7058 @ 0x1800A7058 (sub_1800A7058.c)
 * Callees:
 *     sub_18009B2EC @ 0x18009B2EC (sub_18009B2EC.c)
 *     memcmp @ 0x18011E0BE (memcmp.c)
 */

char __fastcall sub_1800A5C38(__int64 a1, __int64 a2)
{
  char v2; // bl
  const void *v5; // rdx
  const void *v6; // rcx
  size_t v7; // r8

  v2 = 0;
  if ( *(_DWORD *)a1 == *(_DWORD *)a2 )
  {
    v5 = (const void *)(a2 + 8);
    if ( *(_QWORD *)(a2 + 32) >= 0x10uLL )
      v5 = *(const void **)(a2 + 8);
    v6 = (const void *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 32) >= 0x10uLL )
      v6 = *(const void **)(a1 + 8);
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 == *(_QWORD *)(a2 + 24) && !memcmp(v6, v5, v7) && sub_18009B2EC((__m128 *)(a1 + 40), (__m128 *)(a2 + 40)) )
      return 1;
  }
  return v2;
}
