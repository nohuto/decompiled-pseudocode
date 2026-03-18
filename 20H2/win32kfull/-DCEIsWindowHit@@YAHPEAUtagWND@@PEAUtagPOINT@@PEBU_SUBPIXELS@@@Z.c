/*
 * XREFs of ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C004033C
 * Callers:
 *     ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C003DFC4 (-DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     xxxDCompSpeedHitTest @ 0x1C003F74C (xxxDCompSpeedHitTest.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C00405C4 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     GetWindowCloakState @ 0x1C004042C (GetWindowCloakState.c)
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C0040704 (IsWindowUnderActiveLockScreen.c)
 *     DCELayerHitTest @ 0x1C00C2C08 (DCELayerHitTest.c)
 *     DCEHitTestWindow @ 0x1C01E44C4 (DCEHitTestWindow.c)
 */

__int64 __fastcall DCEIsWindowHit(struct tagWND *a1, struct tagPOINT *a2, const struct _SUBPIXELS *a3)
{
  struct tagPOINT v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct tagPOINT v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  v14 = *a2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0
    || (unsigned int)GetWindowCloakState(a1)
    || (unsigned int)IsWindowUnderActiveLockScreen(a1, v7, v8) )
  {
    return 0LL;
  }
  v9 = *((_QWORD *)a1 + 27);
  v10 = *((_QWORD *)a1 + 5) + 88LL;
  if ( !v9 )
  {
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v10, v3) )
      goto LABEL_6;
    return 0LL;
  }
  if ( !(unsigned int)DCEHitTestWindow(v10, v9, &v14, a3) )
    return 0LL;
  v3 = v14;
LABEL_6:
  v11 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL);
  if ( v11 && !(unsigned int)GrePtInRegion(v11, (unsigned int)v3.x, (unsigned int)v14.y) )
    return 0LL;
  v12 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v12 + 26) & 8) != 0
    && (*(_DWORD *)(v12 + 232) & 0x20) == 0
    && !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))DCELayerHitTest)(a1, v3) )
  {
    return 0LL;
  }
  if ( *((_QWORD *)a1 + 27) )
    *a2 = v3;
  return 1LL;
}
