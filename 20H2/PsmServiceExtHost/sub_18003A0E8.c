/*
 * XREFs of sub_18003A0E8 @ 0x18003A0E8
 * Callers:
 *     sub_180038D80 @ 0x180038D80 (sub_180038D80.c)
 *     sub_180038EBC @ 0x180038EBC (sub_180038EBC.c)
 *     sub_1800392EC @ 0x1800392EC (sub_1800392EC.c)
 *     sub_18003A354 @ 0x18003A354 (sub_18003A354.c)
 *     sub_180065A10 @ 0x180065A10 (sub_180065A10.c)
 * Callees:
 *     sub_18003A154 @ 0x18003A154 (sub_18003A154.c)
 */

char __fastcall sub_18003A0E8(__int64 a1, const void *a2, rsize_t a3)
{
  if ( !(unsigned __int8)sub_18003A154(a1, a3) )
    return 0;
  memcpy_s(
    *(void *const *)(a1 + 8),
    (*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)) & -(__int64)(*(_QWORD *)(a1 + 8) < *(_QWORD *)(a1 + 16)),
    a2,
    a3);
  *(_QWORD *)(a1 + 8) += a3;
  return 1;
}
