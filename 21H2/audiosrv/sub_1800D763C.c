/*
 * XREFs of sub_1800D763C @ 0x1800D763C
 * Callers:
 *     sub_1800D652C @ 0x1800D652C (sub_1800D652C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D763C(__int64 a1, char a2, int a3, __int16 a4, unsigned __int16 a5, int a6, int a7)
{
  int v8; // ecx
  unsigned __int16 v9; // dx
  __int128 v10; // xmm0
  __int16 v11; // dx
  __int64 result; // rax

  v8 = a7;
  if ( !a7 && a6 <= 2 )
    v8 = 4 - (a6 != 1);
  if ( a2 )
  {
    v9 = 32;
    *(_WORD *)(a1 + 18) = 32;
    *(_WORD *)(a1 + 14) = 32;
    v10 = *(_OWORD *)&xmmword_18015B720;
  }
  else
  {
    *(_WORD *)(a1 + 14) = a5;
    v9 = a5;
    *(_WORD *)(a1 + 18) = a4;
    v10 = xmmword_18015B710;
  }
  *(_DWORD *)(a1 + 20) = v8;
  *(_WORD *)a1 = -2;
  *(_WORD *)(a1 + 16) = 22;
  v11 = v9 >> 3;
  *(_OWORD *)(a1 + 24) = v10;
  *(_WORD *)(a1 + 2) = a6;
  *(_DWORD *)(a1 + 4) = a3;
  *(_WORD *)(a1 + 12) = a6 * v11;
  result = a3 * (unsigned int)(unsigned __int16)(a6 * v11);
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
