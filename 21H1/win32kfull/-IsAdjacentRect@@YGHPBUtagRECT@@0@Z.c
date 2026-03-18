/*
 * XREFs of ?IsAdjacentRect@@YGHPBUtagRECT@@0@Z @ 0x14FDD9
 * Callers:
 *     ?IsCandidateTransformOwner@@YGHPAUtagWND@@0@Z @ 0x359D0 (-IsCandidateTransformOwner@@YGHPAUtagWND@@0@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall IsAdjacentRect(_DWORD *a1, _DWORD *a2)
{
  int v3; // ecx
  char v4; // bh
  char v5; // bl
  int v7; // [esp+14h] [ebp-Ch]
  char v8; // [esp+1Fh] [ebp-1h]

  v7 = a2[2];
  v3 = 0;
  if ( *a1 >= v7 || (v4 = 1, a1[2] <= *a2) )
    v4 = 0;
  if ( a1[1] >= a2[3] || (v8 = 1, a1[3] <= a2[1]) )
    v8 = 0;
  if ( *a1 == v7 || (v5 = 0, a1[2] == *a2) )
    v5 = 1;
  if ( (a1[1] == a2[3] || a1[3] == a2[1]) && v4 || v5 && v8 )
    return 1;
  return v3;
}
