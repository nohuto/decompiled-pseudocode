/*
 * XREFs of sub_180070E50 @ 0x180070E50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180070EE8 @ 0x180070EE8 (sub_180070EE8.c)
 */

__int64 __fastcall sub_180070E50(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v5; // edi
  __int64 result; // rax
  bool v9; // cc

  v5 = a3;
  if ( (a4 & 2) == 0 || (result = sub_180070EE8(a1, a2, a3, 0LL), v9 = (int)result <= 0, !(_DWORD)result) )
  {
    if ( (a4 & 4) == 0 || (result = sub_180070EE8(a1, a2, v5, 1LL), v9 = (int)result <= 0, !(_DWORD)result) )
    {
      if ( (a4 & 0x20) == 0 || (result = sub_180070EE8(a1, a2, v5, 8LL), v9 = (int)result <= 0, !(_DWORD)result) )
      {
        result = 0LL;
        v9 = 1;
      }
    }
  }
  if ( !v9 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
