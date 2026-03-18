/*
 * XREFs of ?SBPosFromPx@@YGHPAUtagSBCALC@@H@Z @ 0x1A2D1B
 * Callers:
 *     ?xxxMoveThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z @ 0x1A30D9 (-xxxMoveThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall SBPosFromPx(_DWORD *a1, int a2)
{
  int v2; // ebx
  int v4; // edi

  v2 = a1[15];
  if ( a2 < v2 )
    return *a1;
  v4 = a1[14];
  if ( a2 >= v4 + v2 )
    return a1[1] - (a1[2] != 0 ? a1[2] - 1 : 0);
  if ( v4 )
    return *a1 + EngMulDiv(a1[1] - (a1[2] != 0 ? a1[2] - 1 : 0) - *a1, a2 - v2, a1[14]);
  return *a1 - 1;
}
