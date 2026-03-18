/*
 * XREFs of bSetDevDragRect @ 0x1C002A4E0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 *     xxxReleaseCapture @ 0x1C0038EA0 (xxxReleaseCapture.c)
 *     zzzDwmStartRedirection @ 0x1C007FCE0 (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C0081030 (xxxDwmStopRedirection.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EAF8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C02103FC (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0210864 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C0210FC0 (xxxCancelTrackingForThread.c)
 *     xxxDrawDragRectEx @ 0x1C02110D4 (xxxDrawDragRectEx.c)
 *     xxxMoveSize @ 0x1C0212444 (xxxMoveSize.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C002A62C (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008513C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     GreDeleteSprite @ 0x1C00C0E74 (GreDeleteSprite.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00C3338 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     GreCreateSprite @ 0x1C00C6994 (GreCreateSprite.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C01281E0 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C0274D60 (DwmAsyncSendWindowArrangingData.c)
 *     bMoveDevDragRect @ 0x1C0285128 (bMoveDevDragRect.c)
 */

__int64 __fastcall bSetDevDragRect(HDEV a1, __int64 a2, __int64 a3, char a4)
{
  HDEV v4; // rbx
  unsigned int v7; // r15d
  char v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  int v14; // edi
  void **v15; // rdi
  __int64 *v17; // r14
  __int64 v18; // rbx
  HWND v19; // rdx
  __int64 Sprite; // rax
  unsigned int v21; // eax
  void *v22; // rax
  HDEV v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h]
  _BYTE v26[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v28[8]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v29; // [rsp+98h] [rbp-68h]
  _BYTE v30[144]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a1 + 22;
  v24 = a1;
  v25 = a3;
  v7 = 1;
  v29 = 0LL;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v28, ghsemDynamicModeChange);
  v27 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v26, (struct PDEVOBJ *)&v24);
  if ( !*((_DWORD *)v4 + 276) || (v8 = 1, !*((_DWORD *)v4 + 277)) )
    v8 = 0;
  bCleanupSpriteStateRects(a1, (struct _SPRITESTATE *)v4);
  v13 = 4LL;
  v14 = a4 & 1;
  if ( a2 )
  {
    *((_DWORD *)v4 + 275) = v14;
    v17 = (__int64 *)(v4 + 282);
    v18 = 4LL;
    do
    {
      memset(v30, 0, 0x88uLL);
      vSpDwmGetMiniWinInfoForNonWindowSprite(v30, 0LL);
      Sprite = GreCreateSprite(a1, v19, 0LL, (struct tagMINIWINDOWINFO *)v30, 0x9900u, v14, 1, 0, 0, 0, 0LL);
      *v17++ = Sprite;
      v21 = Sprite != 0 ? v7 : 0;
      v7 = v21;
      --v18;
    }
    while ( v18 );
    v4 = a1 + 22;
    if ( v21 )
    {
      *((_DWORD *)a1 + 296) = 1;
      if ( (a4 & 4) == 0 )
        bMoveDevDragRect(a1, a2, v25, a4 & 1);
    }
  }
  else if ( v8 )
  {
    v22 = (void *)UserReferenceDwmApiPort(v10, v9, v11, v12);
    DwmAsyncSendWindowArrangingData(v22, 0LL);
  }
  if ( !*((_DWORD *)v4 + 274) )
  {
    v15 = (void **)(v4 + 282);
    do
    {
      if ( *v15 )
      {
        GreDeleteSprite(a1, 0LL, *v15, *((_DWORD *)v4 + 275));
        *v15 = 0LL;
      }
      ++v15;
      --v13;
    }
    while ( v13 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v26);
  SEMOBJ::vUnlock((SEMOBJ *)&v27);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v28);
  return v7;
}
