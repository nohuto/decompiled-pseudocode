/*
 * XREFs of sub_18003A3E4 @ 0x18003A3E4
 * Callers:
 *     sub_180038EBC @ 0x180038EBC (sub_180038EBC.c)
 * Callees:
 *     sub_18003A464 @ 0x18003A464 (sub_18003A464.c)
 *     sub_18003A740 @ 0x18003A740 (sub_18003A740.c)
 */

__int64 __fastcall sub_18003A3E4(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, _DWORD *a6)
{
  int v7; // edi
  int v8; // esi
  int v9; // ebp
  __int64 result; // rax

  v7 = a3;
  v8 = a2;
  v9 = a1;
  if ( a5 )
    *a5 = 0;
  *a6 = 1;
  result = sub_18003A740(a1, a2, a3, a5);
  if ( !(_DWORD)result )
    return sub_18003A464(a4, v9, v8, v7, (__int64)a5);
  return result;
}
