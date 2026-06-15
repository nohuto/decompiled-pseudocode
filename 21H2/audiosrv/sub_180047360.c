/*
 * XREFs of sub_180047360 @ 0x180047360
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CD21C @ 0x1800CD21C (sub_1800CD21C.c)
 */

__int64 __fastcall sub_180047360(__int64 a1, __int64 a2)
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800CD21C(*((_QWORD *)off_18019C348 + 2), 26, (unsigned int)&unk_18015DF00, 0, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 352LL))(*(_QWORD *)(a1 + 72), a2);
}
