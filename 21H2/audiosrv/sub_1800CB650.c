/*
 * XREFs of sub_1800CB650 @ 0x1800CB650
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 */

__int64 __fastcall sub_1800CB650(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x23u, (__int64)&unk_18015DF00, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 72) + 416LL))(
           *(_QWORD *)(a1 + 72),
           a2,
           a3);
}
