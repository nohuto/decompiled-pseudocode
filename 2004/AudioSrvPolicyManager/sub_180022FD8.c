/*
 * XREFs of sub_180022FD8 @ 0x180022FD8
 * Callers:
 *     sub_180014660 @ 0x180014660 (sub_180014660.c)
 * Callees:
 *     sub_18001EE38 @ 0x18001EE38 (sub_18001EE38.c)
 *     sub_18002262C @ 0x18002262C (sub_18002262C.c)
 */

__int64 __fastcall sub_180022FD8(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi

  v4 = 0;
  v5 = a3;
  if ( a4 )
  {
    if ( a4 == 1 )
      LOBYTE(v4) = (unsigned int)sub_18001EE38(a1, a2, 0LL, 0LL, 0LL) != 0;
  }
  else if ( (a3 - 10 <= 1 || a3 - 1 <= 1) && (unsigned int)sub_18001EE38(a1, a2, 0LL, 0LL, 0LL) )
  {
    v4 = 1;
  }
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_18002262C(
      *((_QWORD *)off_18004F000 + 2),
      0xFu,
      &stru_180044908,
      *(unsigned int *)(a2 + 192),
      off_18003F8D0[v5],
      v4);
  }
  return v4;
}
