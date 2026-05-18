/*
 * XREFs of sub_180020FF0 @ 0x180020FF0
 * Callers:
 *     sub_18001C1B8 @ 0x18001C1B8 (sub_18001C1B8.c)
 *     sub_18001C264 @ 0x18001C264 (sub_18001C264.c)
 *     sub_18001FD3C @ 0x18001FD3C (sub_18001FD3C.c)
 *     sub_18001FE84 @ 0x18001FE84 (sub_18001FE84.c)
 * Callees:
 *     sub_18000F088 @ 0x18000F088 (sub_18000F088.c)
 *     sub_180021070 @ 0x180021070 (sub_180021070.c)
 */

char __fastcall sub_180020FF0(__int64 a1, const void *a2, size_t a3)
{
  char result; // al

  if ( a3 + *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 < *(_QWORD *)(a1 + 16) - *(_QWORD *)a1
    || (result = sub_180021070(a1)) != 0 )
  {
    sub_18000F088(
      *(void **)(a1 + 8),
      (*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)) & -(__int64)(*(_QWORD *)(a1 + 8) < *(_QWORD *)(a1 + 16)),
      a2,
      a3);
    *(_QWORD *)(a1 + 8) += a3;
    return 1;
  }
  return result;
}
