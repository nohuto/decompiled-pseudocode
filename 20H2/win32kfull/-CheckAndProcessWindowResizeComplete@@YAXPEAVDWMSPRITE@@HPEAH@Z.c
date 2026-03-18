/*
 * XREFs of ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026D08C
 * Callers:
 *     GreHintSpriteShape @ 0x1C0097240 (GreHintSpriteShape.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00C4868 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     GreWindowLayoutComplete @ 0x1C0113FB8 (GreWindowLayoutComplete.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C026E760 (CheckAndProcessSurfaceComplete.c)
 *     GreCancelSynchronizedWindowResize @ 0x1C026E9A0 (GreCancelSynchronizedWindowResize.c)
 *     GreWindowResizeComplete @ 0x1C026FB10 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C026FD50 (GreWindowResizeStarted.c)
 * Callees:
 *     DwmAsyncUpdateSprite @ 0x1C00FB99C (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00FBB40 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?UpdateWindowResizeTelemetry@@YAXPEAVDWMSPRITE@@H@Z @ 0x1C026DD54 (-UpdateWindowResizeTelemetry@@YAXPEAVDWMSPRITE@@H@Z.c)
 *     DwmAsyncProcessSurfaceComplete @ 0x1C0274914 (DwmAsyncProcessSurfaceComplete.c)
 */

void __fastcall CheckAndProcessWindowResizeComplete(struct DWMSPRITE *a1, int a2, int *a3, __int64 a4)
{
  int v4; // edi
  int *v5; // rbx
  int v7; // eax
  SFMLOGICALSURFACE *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rax
  int v13; // eax
  int v14; // edx
  __int64 v15; // rsi
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // ebx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // rax
  void *v24; // rax
  void *v25; // rcx
  int v26[18]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+B8h] [rbp+10h] BYREF
  int *v28; // [rsp+C0h] [rbp+18h]
  unsigned int v29; // [rsp+C8h] [rbp+20h] BYREF

  v28 = a3;
  v4 = 0;
  v5 = a3;
  v7 = 0;
  if ( a2 || !*((_DWORD *)a1 + 30) && *((_DWORD *)a1 + 29) == 1 )
  {
    v8 = (SFMLOGICALSURFACE *)*((_QWORD *)a1 + 21);
    if ( v8 )
    {
      if ( a2
        || (v9 = g_cDelayedUpdateSpriteNotifications,
            v10 = 0LL,
            v11 = *(_QWORD *)v8,
            !g_cDelayedUpdateSpriteNotifications) )
      {
LABEL_10:
        v26[0] = 0;
        v29 = 0;
        v27 = 0;
        SFMLOGICALSURFACE::GetRedirectionInfo(v8, (enum _HLSURF_REDIRECTIONSTYLE *)v26, &v29, &v27, 0LL, 0LL);
        v13 = *((_DWORD *)a1 + 41);
        v14 = *((_DWORD *)v8 + 63);
        v15 = *((_QWORD *)a1 + 13);
        v16 = *(_QWORD *)a1;
        *((_QWORD *)a1 + 13) = 0LL;
        v17 = *(_QWORD *)v8;
        v18 = v14 & 1;
        v19 = v14 & 0xC;
        v20 = v19 | v13 & 1 | (2 * (v18 | v13 & 0x40 | (4 * (v13 & 0xE | 0x20))));
        LOBYTE(v4) = *((_DWORD *)a1 + 29) >= 1;
        v23 = (void *)UserReferenceDwmApiPort(v18, v19, v21, v22);
        DwmAsyncUpdateSprite(v23, v16, v17, v20, (__int64)a1 + 72, 0LL, v26[0], v29, v27, v4, v15);
      }
      else
      {
        v12 = &unk_1C033DA58;
        while ( *v12 != v11 )
        {
          v10 = (unsigned int)(v10 + 1);
          v12 = (_QWORD *)((char *)v12 + 196);
          if ( (unsigned int)v10 >= g_cDelayedUpdateSpriteNotifications )
            goto LABEL_10;
        }
      }
      v24 = (void *)UserReferenceDwmApiPort(v10, v9, v11, a4);
      DwmAsyncProcessSurfaceComplete(v24);
      v5 = v28;
    }
    *((_DWORD *)a1 + 29) = 0;
    UpdateWindowResizeTelemetry(a1, 0);
    v25 = (void *)*((_QWORD *)a1 + 12);
    if ( v25 )
    {
      ObfDereferenceObject(v25);
      *((_QWORD *)a1 + 12) = 0LL;
    }
    v7 = 1;
  }
  if ( v5 )
    *v5 = v7;
}
