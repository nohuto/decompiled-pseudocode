/*
 * XREFs of _bSetDevDragRect@16 @ 0xB08E8
 * Callers:
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _xxxReleaseCapture@0 @ 0xC4E64 (_xxxReleaseCapture@0.c)
 *     _xxxDwmStopRedirection@4 @ 0xCEE26 (_xxxDwmStopRedirection@4.c)
 *     _zzzDwmStartRedirection@0 @ 0xE08D6 (_zzzDwmStartRedirection@0.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z @ 0x175D86 (-xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z.c)
 *     ?xxxTrackInitSize@@YGHPAUtagWND@@IIJPAU_MOVESIZEDATA@@@Z @ 0x176158 (-xxxTrackInitSize@@YGHPAUtagWND@@IIJPAU_MOVESIZEDATA@@@Z.c)
 *     _xxxCancelTrackingForThread@4 @ 0x17668C (_xxxCancelTrackingForThread@4.c)
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 * Callees:
 *     _GreDeleteSprite@16 @ 0x1BB86 (_GreDeleteSprite@16.c)
 *     _GreCreateSprite@44 @ 0x1F6C0 (_GreCreateSprite@44.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?bCleanupSpriteStateRects@@YGHPAUHDEV__@@PAU_SPRITESTATE@@@Z @ 0xB0A32 (-bCleanupSpriteStateRects@@YGHPAUHDEV__@@PAU_SPRITESTATE@@@Z.c)
 *     _vSpDwmGetMiniWinInfoForNonWindowSprite@8 @ 0xD2CCC (_vSpDwmGetMiniWinInfoForNonWindowSprite@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _DwmAsyncSendWindowArrangingData@24 @ 0x1D282F (_DwmAsyncSendWindowArrangingData@24.c)
 *     _bMoveDevDragRect@16 @ 0x1E3757 (_bMoveDevDragRect@16.c)
 */

int __stdcall bSetDevDragRect(_DWORD *a1, int a2, int a3, char a4)
{
  int v4; // esi
  _DWORD *v5; // edi
  struct tagMINIWINDOWINFO *v6; // ebx
  HDEV *v7; // ebx
  int v8; // eax
  int v10; // edi
  void *Sprite; // eax
  bool v12; // zf
  HDEV v13; // [esp+0h] [ebp-E0h]
  struct _SPRITESTATE *v14; // [esp+4h] [ebp-DCh]
  char v15; // [esp+13h] [ebp-CDh]
  int v16; // [esp+14h] [ebp-CCh]
  int v17; // [esp+18h] [ebp-C8h]
  _DWORD *v18; // [esp+20h] [ebp-C0h]
  int v19; // [esp+24h] [ebp-BCh]
  _DWORD *v20; // [esp+2Ch] [ebp-B4h] BYREF
  _DWORD *v21; // [esp+30h] [ebp-B0h]
  int v22; // [esp+34h] [ebp-ACh]
  _BYTE v23[4]; // [esp+38h] [ebp-A8h] BYREF
  int v24; // [esp+3Ch] [ebp-A4h] BYREF
  _DWORD v25[4]; // [esp+40h] [ebp-A0h] BYREF
  struct HWND__ v26[35]; // [esp+50h] [ebp-90h] BYREF

  v4 = _ghsemDynamicModeChange;
  v5 = a1 + 16;
  v22 = a3;
  v17 = 1;
  memset(v25, 0, sizeof(v25));
  v20 = a1;
  v21 = a1 + 16;
  GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", _ghsemDynamicModeChange);
  v24 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v23, (struct PDEVOBJ *)&v20);
  if ( !a1[190] || (v15 = 1, !a1[191]) )
    v15 = 0;
  bCleanupSpriteStateRects(v13, v14);
  v6 = (struct tagMINIWINDOWINFO *)(a4 & 1);
  if ( a2 )
  {
    a1[189] = v6;
    v10 = 1;
    v18 = a1 + 194;
    v19 = 4;
    do
    {
      memset(v26, 0, 0x84u);
      vSpDwmGetMiniWinInfoForNonWindowSprite(v26, 0);
      Sprite = GreCreateSprite(0, v26, (struct tagRECT *)0x9900, v6, 1u, 0, 0, 0, 0);
      *v18 = Sprite;
      v10 = Sprite != 0 ? v10 : 0;
      ++v18;
      --v19;
    }
    while ( v19 );
    v4 = _ghsemDynamicModeChange;
    v12 = v10 == 0;
    v17 = v10;
    v5 = v21;
    if ( !v12 )
    {
      v21[172] = 1;
      if ( (a4 & 4) == 0 )
        bMoveDevDragRect(a1, a2, v22, v6);
    }
  }
  else if ( v15 )
  {
    UserReferenceDwmApiPort();
    DwmAsyncSendWindowArrangingData(0, v25, 0, 0);
  }
  if ( !v5[172] )
  {
    v7 = (HDEV *)(v5 + 178);
    v8 = 4;
    v16 = 4;
    do
    {
      if ( *v7 )
      {
        GreDeleteSprite(*v7, (HWND)v5[173]);
        *v7 = 0;
        v8 = v16;
      }
      ++v7;
      v16 = --v8;
    }
    while ( v8 );
    v4 = _ghsemDynamicModeChange;
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v23);
  SEMOBJ::vUnlock((SEMOBJ *)&v24);
  EtwTraceGreLockReleaseSemaphore(L"hsem", v4);
  GreReleaseSemaphoreInternal(v4);
  return v17;
}
