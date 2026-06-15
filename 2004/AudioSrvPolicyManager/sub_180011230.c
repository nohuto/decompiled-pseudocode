/*
 * XREFs of sub_180011230 @ 0x180011230
 * Callers:
 *     sub_180015790 @ 0x180015790 (sub_180015790.c)
 *     sub_18001E848 @ 0x18001E848 (sub_18001E848.c)
 * Callees:
 *     sub_1800112C0 @ 0x1800112C0 (sub_1800112C0.c)
 *     sub_180012658 @ 0x180012658 (sub_180012658.c)
 *     sub_180012868 @ 0x180012868 (sub_180012868.c)
 *     sub_180029028 @ 0x180029028 (sub_180029028.c)
 */

__int64 __fastcall sub_180011230(__int64 a1)
{
  __int64 result; // rax

  sub_1800112C0();
  if ( !(unsigned int)sub_180012868(a1, 0LL) )
    return sub_180029028(*(_DWORD *)(a1 + 212));
  if ( *(_DWORD *)(a1 + 208) )
    return sub_18001F4C8(qword_18004FE78, a1, 0LL);
  if ( !(unsigned int)sub_180012868(a1, 1LL) )
    return sub_180029028(*(_DWORD *)(a1 + 212));
  if ( *(_DWORD *)(a1 + 208) )
    return sub_18001F4C8(qword_18004FE78, a1, 0LL);
  result = sub_180012658(a1);
  if ( (_DWORD)result )
  {
    result = sub_180012868(a1, 1LL);
    if ( (_DWORD)result )
      return sub_18001F4C8(qword_18004FE78, a1, 0LL);
  }
  return result;
}
