/*
 * XREFs of ?xxxGetMinMaxTrackInfo@@YGXPAU_MOVESIZEDATA@@H@Z @ 0x1743B3
 * Callers:
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 * Callees:
 *     _xxxInitSendValidateMinMaxInfoEx@16 @ 0x6DD46 (_xxxInitSendValidateMinMaxInfoEx@16.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __fastcall xxxGetMinMaxTrackInfo(int a1, int a2)
{
  _DWORD v3[10]; // [esp+Ch] [ebp-2Ch] BYREF

  memset(v3, 0, sizeof(v3));
  xxxInitSendValidateMinMaxInfoEx(*(_DWORD **)(a1 + 8), (int)v3, 0, a2);
  *(_DWORD *)(a1 + 92) = v3[6];
  *(_DWORD *)(a1 + 96) = v3[7];
  *(_DWORD *)(a1 + 100) = v3[8];
  *(_DWORD *)(a1 + 104) = v3[9];
}
