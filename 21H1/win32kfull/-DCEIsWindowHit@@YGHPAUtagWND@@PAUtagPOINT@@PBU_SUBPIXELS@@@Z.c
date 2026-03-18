/*
 * XREFs of ?DCEIsWindowHit@@YGHPAUtagWND@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z @ 0x26176
 * Callers:
 *     ?DCETopLevelSpeedHitTest@@YGPAUtagWND@@PAUtagDESKTOP@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z @ 0x259E8 (-DCETopLevelSpeedHitTest@@YGPAUtagWND@@PAUtagDESKTOP@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z.c)
 *     ?DCEChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@PAU2@PBU_SUBPIXELS@@@Z @ 0x26B90 (-DCEChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@PAU2@PBU_SUBPIXELS@@@Z.c)
 *     _xxxDCompSpeedHitTest@28 @ 0xF09A4 (_xxxDCompSpeedHitTest@28.c)
 * Callees:
 *     _DCELayerHitTest@12 @ 0x25668 (_DCELayerHitTest@12.c)
 *     _GetWindowCloakState@4 @ 0x26960 (_GetWindowCloakState@4.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _IsWindowUnderActiveLockScreen@4 @ 0x26C7A (_IsWindowUnderActiveLockScreen@4.c)
 *     _DCEHitTestWindow@16 @ 0x150745 (_DCEHitTestWindow@16.c)
 */

int __userpurge DCEIsWindowHit@<eax>(
        HDEV *a1@<edx>,
        int a2@<ecx>,
        struct tagWND *a3,
        struct tagPOINT *a4,
        const struct _SUBPIXELS *a5)
{
  HDEV v6; // edi
  HWND v7; // ebx
  int v8; // eax
  int v10; // eax
  HDEV *v11; // eax
  HDEV v12; // [esp+10h] [ebp-Ch] BYREF
  HWND v13; // [esp+14h] [ebp-8h]
  HDEV *v14; // [esp+18h] [ebp-4h]

  v14 = a1;
  v6 = *a1;
  v7 = (HWND)a1[1];
  v8 = *(_DWORD *)(a2 + 20);
  v12 = *a1;
  v13 = v7;
  if ( (*(_BYTE *)(v8 + 23) & 0x10) == 0 || GetWindowCloakState(a2) || IsWindowUnderActiveLockScreen(a2) )
    return 0;
  if ( *(_DWORD *)(a2 + 120) )
  {
    if ( !DCEHitTestWindow(&v12, a3) )
      return 0;
    v7 = v13;
    v6 = v12;
  }
  else if ( !PtInRect(v6, v7) )
  {
    return 0;
  }
  if ( *(_DWORD *)(*(_DWORD *)(a2 + 20) + 108) )
    return sub_261DA(a3);
  v10 = *(_DWORD *)(a2 + 20);
  if ( (*(_BYTE *)(v10 + 18) & 8) != 0 && (*(_BYTE *)(v10 + 144) & 0x20) == 0 && !DCELayerHitTest(a2, v6, v7) )
    return 0;
  if ( *(_DWORD *)(a2 + 120) )
  {
    v11 = v14;
    *v14 = v6;
    v11[1] = (HDEV)v7;
  }
  return 1;
}
