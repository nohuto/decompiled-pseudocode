/*
 * XREFs of ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00B2104
 * Callers:
 *     xxxDCompSpeedHitTest @ 0x1C00B0CEC (xxxDCompSpeedHitTest.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C00B1FC4 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C010DBCC (-DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     DCELayerHitTest @ 0x1C002D038 (DCELayerHitTest.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00B1E80 (IsWindowUnderActiveLockScreen.c)
 *     PtInRect @ 0x1C00B20DC (PtInRect.c)
 *     GetWindowCloakState @ 0x1C00B2AEC (GetWindowCloakState.c)
 *     DCEHitTestWindow @ 0x1C01E5184 (DCEHitTestWindow.c)
 */

__int64 __fastcall DCEIsWindowHit(struct tagWND *a1, struct tagPOINT *a2, const struct _SUBPIXELS *a3)
{
  struct tagPOINT v3; // rbx
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct tagPOINT v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  v12 = *a2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0
    || (unsigned int)GetWindowCloakState(a1)
    || (unsigned int)IsWindowUnderActiveLockScreen((__int64)a1) )
  {
    return 0LL;
  }
  v7 = *((_QWORD *)a1 + 27);
  v8 = (_DWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  if ( !v7 )
  {
    if ( PtInRect(v8, *(_QWORD *)&v3) )
      goto LABEL_6;
    return 0LL;
  }
  if ( !(unsigned int)DCEHitTestWindow(v8, v7, &v12, a3) )
    return 0LL;
  v3 = v12;
LABEL_6:
  v9 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL);
  if ( v9 && !(unsigned int)GrePtInRegion(v9, (unsigned int)v3.x, (unsigned int)v12.y) )
    return 0LL;
  v10 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v10 + 26) & 8) != 0
    && (*(_DWORD *)(v10 + 232) & 0x20) == 0
    && !DCELayerHitTest((__int64)a1, *(_QWORD *)&v3) )
  {
    return 0LL;
  }
  if ( *((_QWORD *)a1 + 27) )
    *a2 = v3;
  return 1LL;
}
