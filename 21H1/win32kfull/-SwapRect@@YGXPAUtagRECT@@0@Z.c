/*
 * XREFs of ?SwapRect@@YGXPAUtagRECT@@0@Z @ 0x172420
 * Callers:
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z @ 0x175D86 (-xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SwapRect(int *a1, int *a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx

  v3 = *a1;
  *a1 = *a2;
  v4 = a2[1];
  *a2 = v3;
  v5 = a1[1];
  a1[1] = v4;
  v6 = a2[2];
  a2[1] = v5;
  v7 = a1[2];
  a1[2] = v6;
  v8 = a2[3];
  a2[2] = v7;
  v9 = a1[3];
  a1[3] = v8;
  a2[3] = v9;
}
