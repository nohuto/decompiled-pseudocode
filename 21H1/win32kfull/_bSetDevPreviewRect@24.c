/*
 * XREFs of _bSetDevPreviewRect@24 @ 0x1E3D0B
 * Callers:
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 * Callees:
 *     _GreDeleteSprite@16 @ 0x1BB86 (_GreDeleteSprite@16.c)
 *     _GreCreateSprite@44 @ 0x1F6C0 (_GreCreateSprite@44.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?bCleanupSpriteStateRects@@YGHPAUHDEV__@@PAU_SPRITESTATE@@@Z @ 0xB0A32 (-bCleanupSpriteStateRects@@YGHPAUHDEV__@@PAU_SPRITESTATE@@@Z.c)
 *     _vSpDwmGetMiniWinInfoForNonWindowSprite@8 @ 0xD2CCC (_vSpDwmGetMiniWinInfoForNonWindowSprite@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _DwmAsyncSendWindowArrangingData@24 @ 0x1D282F (_DwmAsyncSendWindowArrangingData@24.c)
 *     _bMoveDevPreviewRect@24 @ 0x1E3ABE (_bMoveDevPreviewRect@24.c)
 */

int __fastcall bSetDevPreviewRect(HDEV a1, _DWORD *a2, char a3, int a4, int a5, int a6)
{
  int v6; // ebx
  int v7; // edi
  void *Sprite; // eax
  struct tagMINIWINDOWINFO *v9; // eax
  void *v10; // eax
  HDEV v11; // eax
  int v13; // [esp-10h] [ebp-D0h]
  int v14; // [esp+10h] [ebp-B0h] BYREF
  _BYTE v15[4]; // [esp+14h] [ebp-ACh] BYREF
  HDEV v16; // [esp+18h] [ebp-A8h] BYREF
  int v17; // [esp+1Ch] [ebp-A4h]
  _DWORD *v18; // [esp+20h] [ebp-A0h]
  struct tagMINIWINDOWINFO *v19; // [esp+24h] [ebp-9Ch]
  HDEV v20; // [esp+28h] [ebp-98h]
  char v21; // [esp+2Fh] [ebp-91h]
  struct HWND__ v22[35]; // [esp+30h] [ebp-90h] BYREF

  v17 = a4;
  v6 = 1;
  v7 = (int)(a1 + 16);
  v18 = a2;
  v20 = a1;
  v16 = a1;
  GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", _ghsemDynamicModeChange);
  v14 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v15, (struct PDEVOBJ *)&v16);
  if ( !*(_DWORD *)(v7 + 696) || (v21 = 1, !*(_DWORD *)(v7 + 700)) )
    v21 = 0;
  bCleanupSpriteStateRects((int)v20, v7);
  v19 = (struct tagMINIWINDOWINFO *)(a3 & 1);
  if ( v18 )
  {
    *(_DWORD *)(v7 + 700) = a3 & 1;
    memset(v22, 0, 0x84u);
    vSpDwmGetMiniWinInfoForNonWindowSprite(v22, 0);
    Sprite = GreCreateSprite(0, v22, (struct tagRECT *)0x9900, v19, 1u, 0, 0, 0, 0);
    *(_DWORD *)(v7 + 728) = Sprite;
    if ( Sprite )
    {
      v9 = v19;
      *(_DWORD *)(v7 + 696) = 1;
      *(_DWORD *)(v7 + 700) = v9;
      if ( (a3 & 4) == 0 )
        bMoveDevPreviewRect(v20, v18, 1, v17, a5, a6);
    }
    else
    {
      v6 = 0;
    }
  }
  else if ( v21 )
  {
    v13 = v17;
    v10 = (void *)UserReferenceDwmApiPort();
    DwmAsyncSendWindowArrangingData(v10, 2, v13, 0, a5, a6);
  }
  if ( !*(_DWORD *)(v7 + 696) )
  {
    v11 = *(HDEV *)(v7 + 728);
    if ( v11 )
    {
      GreDeleteSprite(v11, *(HWND *)(v7 + 700));
      *(_DWORD *)(v7 + 728) = 0;
    }
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v15);
  SEMOBJ::vUnlock((SEMOBJ *)&v14);
  EtwTraceGreLockReleaseSemaphore(L"hsem", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  return v6;
}
