/*
 * XREFs of sub_180046EA0 @ 0x180046EA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 */

__int64 __fastcall sub_180046EA0(__int64 a1)
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 17LL, &unk_18015DF00, 0LL);
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 8) + 104LL))(a1 - 8);
}
