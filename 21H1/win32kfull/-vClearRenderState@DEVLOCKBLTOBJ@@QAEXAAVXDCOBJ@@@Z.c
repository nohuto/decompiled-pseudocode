/*
 * XREFs of ?vClearRenderState@DEVLOCKBLTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x5BD44
 * Callers:
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QAEHXZ @ 0x4E10E (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QAEHXZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@H@Z @ 0x5A4E6 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@H@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@HH@Z @ 0x5A622 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@HH@Z.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QAEHXZ @ 0x5A9C8 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QAEHXZ.c)
 *     ??1DEVLOCKBLTOBJ@@QAE@XZ @ 0x5DBF8 (--1DEVLOCKBLTOBJ@@QAE@XZ.c)
 * Callees:
 *     _GreHintSpriteShape@28 @ 0x23FC0 (_GreHintSpriteShape@28.c)
 *     _GreSelectRedirectionBitmap@8 @ 0x322B0 (_GreSelectRedirectionBitmap@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     _GreDeleteSpriteDelayDelete@16 @ 0x1CDFF8 (_GreDeleteSpriteDelayDelete@16.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@H@Z @ 0x1DAA49 (-GdiHintSpriteShapeDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@H@Z.c)
 */

void __thiscall DEVLOCKBLTOBJ::vClearRenderState(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // edx
  int v5; // eax
  PKTHREAD CurrentThread; // ebx
  int *ThreadWin32Thread; // eax
  int v8; // eax
  _DWORD *v9; // ecx
  _DWORD *v10; // ecx
  int v11; // esi
  int v12; // eax
  int v13; // ebx
  PKTHREAD v16; // eax
  PKTHREAD v17; // eax
  int v18; // eax
  int v19; // edi
  int v20; // eax
  int v21; // eax
  struct PDEVOBJ *v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // edi
  HBITMAP v26; // [esp+0h] [ebp-28h]
  int v27; // [esp+4h] [ebp-24h]
  int v28; // [esp+10h] [ebp-18h]
  int v29; // [esp+1Ch] [ebp-Ch]
  int v30; // [esp+20h] [ebp-8h]

  if ( *(_DWORD *)a2 )
  {
    if ( (*((_DWORD *)this + 10) & 0x1000) != 0 )
    {
      v3 = (_DWORD *)*((_DWORD *)this + 16);
      if ( !v3
        || !*((_BYTE *)this + 77)
        || (v4 = (_DWORD *)*((_DWORD *)this + 12)) == 0
        || !*((_BYTE *)this + 61)
        || *v3 != *v4 )
      {
        v5 = *(_DWORD *)(*(_DWORD *)a2 + 24);
        if ( (v5 & 0x200) != 0 )
        {
          if ( (v5 & 0x4000) == 0 )
          {
            CurrentThread = KeGetCurrentThread();
            if ( !IsThreadCrossSessionAttached() )
            {
              ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
              {
                v8 = *ThreadWin32Thread;
                if ( v8 )
                  *(_DWORD *)(v8 + 180) &= ~1u;
              }
            }
          }
          v9 = (_DWORD *)*((_DWORD *)this + 12);
          if ( v9 && *((_BYTE *)this + 61) && **(_DWORD **)a2 == *v9 && !*((_DWORD *)this + 21)
            || (v10 = (_DWORD *)*((_DWORD *)this + 16)) != 0
            && *((_BYTE *)this + 77)
            && **(_DWORD **)a2 == *v10
            && !*((_DWORD *)this + 24) )
          {
            GreAcquireSemaphoreSharedInternal(_ghsemDCVisRgn);
            EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", _ghsemDCVisRgn);
            v11 = *(_DWORD *)a2;
            *(_DWORD *)(v11 + 28) &= ~1u;
            v12 = *(_DWORD *)(v11 + 24);
            if ( (v12 & 0x4000) != 0 )
            {
              v13 = *(_DWORD *)(v11 + 504);
              if ( *(_DWORD *)(v13 + 156) || (*(_BYTE *)(v13 + 76) & 1) != 0 )
              {
                EngLockSurface(*(HSURF *)(v13 + 20));
                v13 = *(_DWORD *)(v11 + 504);
                v12 = *(_DWORD *)(v11 + 24);
              }
              if ( (v12 & 0x40000) != 0 )
              {
                EngUnlockSurface(v13 != 0 ? (SURFOBJ *)(v13 + 16) : 0);
                GreSelectRedirectionBitmap(*(_DWORD *)v11, *(HDEV *)(v11 + 1848));
                *(_DWORD *)(v11 + 1848) = 0;
                *(_DWORD *)(v11 + 24) &= ~0x40000u;
              }
              if ( *(_DWORD *)(v13 + 156) || (*(_BYTE *)(v13 + 76) & 1) != 0 )
              {
                GreAcquireSemaphore(_ghsemSprite);
                EngUnlockSurface((SURFOBJ *)(v13 + 16));
                W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v13 + 168));
                if ( (*(_DWORD *)(v13 + 208))-- != 1 )
                  goto LABEL_51;
                v16 = KeGetCurrentThread();
                W32GetThreadWin32Thread(v16);
                v17 = KeGetCurrentThread();
                v18 = W32GetThreadWin32Thread(v17);
                v19 = v18;
                if ( v18 )
                {
                  v20 = *(_DWORD *)(v18 + 52);
                  *(_DWORD *)(v19 + 52) = 0;
                  v29 = v20;
                  v21 = *(_DWORD *)(v19 + 56);
                  *(_DWORD *)(v19 + 56) = 0;
                }
                else
                {
                  v29 = 0;
                  v21 = 0;
                }
                v30 = v21;
                if ( (*(_DWORD *)(v13 + 72) & 0x2000000) != 0 )
                {
                  v22 = *(struct PDEVOBJ **)(v13 + 220);
                  v28 = *(_DWORD *)(v13 + 360);
                  if ( (*(_BYTE *)(v13 + 76) & 2) == 0 || v28 && g_pDwmState )
                    GreHintSpriteShape(
                      *(HDEV *)(v13 + 212),
                      *(void **)(v13 + 216),
                      v22,
                      (_DWORD *)(v13 + 224),
                      *(_DWORD *)(v13 + 356),
                      v28,
                      0);
                  else
                    GdiHintSpriteShapeDelayDelete((HDEV)v22, 0, v26, v27);
                  *(_DWORD *)(v13 + 72) &= ~0x2000000u;
                  _InterlockedDecrement(&glDelayedHintShape);
                }
                v23 = *(_DWORD *)(v13 + 76);
                if ( (v23 & 2) != 0 )
                {
                  *(_DWORD *)(v13 + 76) = v23 & 0xFFFFFFFD;
                  W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v13 + 168));
                  GreDeleteSpriteDelayDelete(
                    *(struct PDEVOBJ **)(v13 + 364),
                    *(HWND *)(v13 + 368),
                    *(void **)(v13 + 372),
                    *(HDEV *)(v13 + 376));
                  v24 = 1;
                }
                else
                {
                  v24 = 0;
                }
                if ( v19 )
                {
                  *(_DWORD *)(v19 + 52) = v29;
                  *(_DWORD *)(v19 + 56) = v30;
                }
                if ( !v24 )
                {
LABEL_51:
                  if ( *(_DWORD *)(v13 + 156) || (*(_BYTE *)(v13 + 76) & 1) != 0 )
                  {
                    v25 = *(_DWORD *)(v13 + 204);
                    W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v13 + 168));
                    if ( v25 == 1 )
                      bDeleteSurface(*(_DWORD *)v13);
                  }
                }
                if ( _ghsemSprite )
                {
                  EtwTraceGreLockReleaseSemaphore(L"hsem", _ghsemSprite);
                  GreReleaseSemaphoreInternal(_ghsemSprite);
                }
              }
            }
            else if ( (v12 & 0x40000) != 0 )
            {
              GreSelectRedirectionBitmap(*(_DWORD *)v11, *(HDEV *)(v11 + 1848));
              *(_DWORD *)(v11 + 24) &= ~0x40000u;
              *(_DWORD *)(v11 + 1848) = 0;
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
            GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
          }
        }
      }
    }
  }
}
