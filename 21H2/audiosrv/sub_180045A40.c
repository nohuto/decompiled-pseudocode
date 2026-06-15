/*
 * XREFs of sub_180045A40 @ 0x180045A40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CB468 @ 0x1800CB468 (sub_1800CB468.c)
 */

__int64 __fastcall sub_180045A40(__int64 a1, char a2)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 400));
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 404));
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800CB468(
      *((_QWORD *)off_18019C348 + 2),
      68LL,
      &unk_18015DEF0,
      a1,
      *(_DWORD *)(a1 + 400),
      *(_DWORD *)(a1 + 404));
  }
  return 0LL;
}
