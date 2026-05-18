/*
 * XREFs of sub_1800F0AB0 @ 0x1800F0AB0
 * Callers:
 *     sub_1800902A0 @ 0x1800902A0 (sub_1800902A0.c)
 *     sub_18009E100 @ 0x18009E100 (sub_18009E100.c)
 *     sub_1800AF1E0 @ 0x1800AF1E0 (sub_1800AF1E0.c)
 *     sub_1801018C0 @ 0x1801018C0 (sub_1801018C0.c)
 * Callees:
 *     memcmp @ 0x18012398E (memcmp.c)
 */

bool __fastcall sub_1800F0AB0(__int64 a1, __int64 a2)
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
