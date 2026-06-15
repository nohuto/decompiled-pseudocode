/*
 * XREFs of sub_1800F7864 @ 0x1800F7864
 * Callers:
 *     sub_1800F7B30 @ 0x1800F7B30 (sub_1800F7B30.c)
 * Callees:
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 */

__int64 __fastcall sub_1800F7864(const wchar_t *a1)
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x20) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x1Au, (__int64)&unk_180171E90, a1);
  }
  return 0LL;
}
