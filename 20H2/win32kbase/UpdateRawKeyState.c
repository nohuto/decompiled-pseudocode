/*
 * XREFs of UpdateRawKeyState @ 0x1C00A16A8
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C01ABC80 (xxxProcessKeyEvent.c)
 *     ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x1C01AE6DC (-ApplyKeyStateUpdate@@YAXE_N@Z.c)
 * Callees:
 *     ApiSetEditionUpdateModifiersForHotkey @ 0x1C00A173C (ApiSetEditionUpdateModifiersForHotkey.c)
 */

__int64 __fastcall UpdateRawKeyState(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  unsigned __int64 v4; // r10
  int v5; // r8d
  unsigned int v6; // r9d
  int v7; // r8d
  __int64 v8; // rdx

  v2 = a2;
  v3 = a1 & 3;
  v4 = (unsigned __int64)a1 >> 2;
  v5 = gafRawKeyState[v4];
  v6 = 2 * v3;
  if ( a2 )
  {
    v7 = v5 & ~(1 << v6);
  }
  else
  {
    if ( !_bittest(&v5, v6) )
      v5 ^= 1 << (2 * v3 + 1);
    v7 = (unsigned __int8)v5 | (1 << v6);
  }
  gafRawKeyState[v4] = v7;
  if ( (unsigned __int8)(a1 - 16) <= 2u )
  {
    v8 = 4 >> (a1 - 16);
  }
  else
  {
    v8 = 8LL;
    if ( (unsigned __int8)(a1 - 91) > 1u )
      v8 = 0LL;
  }
  return ApiSetEditionUpdateModifiersForHotkey(v2, v8);
}
