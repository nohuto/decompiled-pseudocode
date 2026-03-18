/*
 * XREFs of bSetDevDragRect @ 0x1C004BF00
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C000DF88 (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C000E180 (xxxDwmStopRedirection.c)
 *     xxxReleaseCapture @ 0x1C00359E0 (xxxReleaseCapture.c)
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020F978 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C021127C (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02116E4 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C0211E40 (xxxCancelTrackingForThread.c)
 *     xxxDrawDragRectEx @ 0x1C0211F54 (xxxDrawDragRectEx.c)
 *     xxxMoveSize @ 0x1C02132C4 (xxxMoveSize.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreCreateSprite @ 0x1C0028EB8 (GreCreateSprite.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C002D44C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C002D58C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C004C04C (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     GreDeleteSprite @ 0x1C004ECD8 (GreDeleteSprite.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0126880 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C02762D0 (DwmAsyncSendWindowArrangingData.c)
 *     bMoveDevDragRect @ 0x1C0286698 (bMoveDevDragRect.c)
 */

__int64 __fastcall bSetDevDragRect(HDEV a1, __int64 a2, __int64 a3, __int64 a4)
{
  HDEV v4; // rbx
  char v6; // r12
  unsigned int v7; // r15d
  char v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  int v14; // edi
  HSPRITE *v15; // rdi
  _QWORD *v17; // r14
  __int64 v18; // rbx
  HWND v19; // rdx
  void *Sprite; // rax
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
  v6 = a4;
  v7 = 1;
  v29 = 0LL;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v28, ghsemDynamicModeChange, a3, a4);
  v27 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v26, (struct PDEVOBJ *)&v24);
  if ( !*((_DWORD *)v4 + 276) || (v8 = 1, !*((_DWORD *)v4 + 277)) )
    v8 = 0;
  bCleanupSpriteStateRects(a1, (struct _SPRITESTATE *)v4);
  v13 = 4LL;
  v14 = v6 & 1;
  if ( a2 )
  {
    *((_DWORD *)v4 + 275) = v14;
    v17 = v4 + 282;
    v18 = 4LL;
    do
    {
      memset(v30, 0, 0x88uLL);
      vSpDwmGetMiniWinInfoForNonWindowSprite(v30, 0LL);
      Sprite = GreCreateSprite(a1, v19, 0LL, (struct tagMINIWINDOWINFO *)v30, 0x9900u, v14, 1, 0, 0, 0, 0LL);
      *v17++ = Sprite;
      v21 = Sprite != 0LL ? v7 : 0;
      v7 = v21;
      --v18;
    }
    while ( v18 );
    v4 = a1 + 22;
    if ( v21 )
    {
      *((_DWORD *)a1 + 296) = 1;
      if ( (v6 & 4) == 0 )
        bMoveDevDragRect(a1, a2, v25, v6 & 1);
    }
  }
  else if ( v8 )
  {
    v22 = (void *)UserReferenceDwmApiPort(v10, v9, v11, v12);
    DwmAsyncSendWindowArrangingData(v22, 0LL);
  }
  if ( !*((_DWORD *)v4 + 274) )
  {
    v15 = (HSPRITE *)(v4 + 282);
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
