/*
 * XREFs of sub_18002CE00 @ 0x18002CE00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A610 @ 0x18000A610 (sub_18000A610.c)
 */

__int64 __fastcall sub_18002CE00(__int64 a1)
{
  DWORD *v2; // rcx

  v2 = (DWORD *)off_18004F000;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_18000A610(*((_QWORD *)off_18004F000 + 2), 0x1Fu, &stru_180045198, *(const wchar_t **)(a1 + 16));
  }
  return sub_18001E14C(v2, *(const wchar_t **)(a1 + 16), *(_QWORD *)(a1 + 24), *(_DWORD *)(a1 + 8));
}
