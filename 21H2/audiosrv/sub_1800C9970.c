/*
 * XREFs of sub_1800C9970 @ 0x1800C9970
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002EACC @ 0x18002EACC (sub_18002EACC.c)
 *     sub_180050C80 @ 0x180050C80 (sub_180050C80.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 */

__int64 __fastcall sub_1800C9970(__int64 a1, __int64 a2)
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x51u, (__int64)&unk_18015DEF0, *(const wchar_t **)(a2 + 728));
  }
  if ( *(_QWORD *)(a2 + 1040) )
  {
    sub_18002EACC(a2);
    sub_180050C80(a2);
  }
  return sub_180067A50((volatile signed __int32 *)(a2 + 32));
}
