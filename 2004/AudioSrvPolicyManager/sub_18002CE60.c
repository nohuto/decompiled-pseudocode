/*
 * XREFs of sub_18002CE60 @ 0x18002CE60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002BA20 @ 0x18002BA20 (sub_18002BA20.c)
 */

__int64 __fastcall sub_18002CE60(__int64 a1, __int64 a2, __int64 a3)
{
  char v5[4]; // [rsp+28h] [rbp-10h]

  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    *(_DWORD *)v5 = *(_DWORD *)(a1 + 16);
    sub_18002BA20(
      *((_QWORD *)off_18004F000 + 2),
      a2,
      a3,
      *(const wchar_t **)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      *(_DWORD *)v5);
  }
  return sub_18001F228(qword_18004FE78, *(const WCHAR **)(a1 + 8), *(_QWORD *)(a1 + 24), *(_DWORD *)(a1 + 16));
}
