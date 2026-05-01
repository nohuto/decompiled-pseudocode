/*
 * XREFs of sub_180029F0C @ 0x180029F0C
 * Callers:
 *     sub_180029BA8 @ 0x180029BA8 (sub_180029BA8.c)
 * Callees:
 *     sub_180029F44 @ 0x180029F44 (sub_180029F44.c)
 */

__int64 __fastcall sub_180029F0C(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = sub_180029F44();
  if ( !(_DWORD)result )
  {
    result = 0x4000000000000LL;
    if ( (*(_QWORD *)(v3 + 648) & 0x4000000000000LL) != 0 )
    {
      result = TpSetTimerEx(*(_QWORD *)(v3 + 824), 0LL, 0LL, 0LL);
      if ( (_DWORD)result )
      {
        result = 0xFFFBFFFFFFFFFFFFuLL;
        *(_QWORD *)(a1 + 648) &= ~0x4000000000000uLL;
      }
    }
  }
  return result;
}
