/*
 * XREFs of ?vClearRendering@DC@@QAEXXZ @ 0x5FB80
 * Callers:
 *     ?TrapAppContainerRenderingWorker@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z @ 0x5A290 (-TrapAppContainerRenderingWorker@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z.c)
 *     _GreDrawStream@12 @ 0x5C150 (_GreDrawStream@12.c)
 *     ?UntrapAppContainerRenderingWorker@@YGXAAPAUHDC__@@AAPAUHSURF__@@1PBK@Z @ 0x5DF78 (-UntrapAppContainerRenderingWorker@@YGXAAPAUHDC__@@AAPAUHSURF__@@1PBK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QAEXXZ @ 0xAAFAA (-vClearRenderState@DEVLOCKOBJ@@QAEXXZ.c)
 * Callees:
 *     _GreHintSpriteShape@28 @ 0x23FC0 (_GreHintSpriteShape@28.c)
 *     _GreSelectRedirectionBitmap@8 @ 0x322B0 (_GreSelectRedirectionBitmap@8.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     _GreDeleteSpriteDelayDelete@16 @ 0x1CDFF8 (_GreDeleteSpriteDelayDelete@16.c)
 *     _GreHintSpriteShapeDelayDelete@24 @ 0x1CE666 (_GreHintSpriteShapeDelayDelete@24.c)
 */

void __thiscall DC::vClearRendering(DC *this)
{
  int v2; // eax
  int v3; // ebx
  int v5; // edi
  int *ThreadWin32Thread; // eax
  PKTHREAD v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  struct PDEVOBJ *v13; // [esp+Ch] [ebp-14h]
  HDEV v14; // [esp+14h] [ebp-Ch]
  PKTHREAD v15; // [esp+18h] [ebp-8h]
  PKTHREAD CurrentThread; // [esp+1Ch] [ebp-4h]
  PKTHREAD v17; // [esp+1Ch] [ebp-4h]
  PKTHREAD v18; // [esp+1Ch] [ebp-4h]

  *((_DWORD *)this + 7) &= ~1u;
  v2 = *((_DWORD *)this + 6);
  if ( (v2 & 0x4000) != 0 )
  {
    v3 = *((_DWORD *)this + 126);
    if ( *(_DWORD *)(v3 + 156) || (*(_BYTE *)(v3 + 76) & 1) != 0 )
    {
      EngLockSurface(*(HSURF *)(v3 + 20));
      v3 = *((_DWORD *)this + 126);
      v2 = *((_DWORD *)this + 6);
    }
    if ( (v2 & 0x40000) != 0 )
    {
      EngUnlockSurface(v3 != 0 ? (SURFOBJ *)(v3 + 16) : 0);
      GreSelectRedirectionBitmap(*(_DWORD *)this, *((HDEV *)this + 462));
      *((_DWORD *)this + 6) &= ~0x40000u;
      *((_DWORD *)this + 462) = 0;
    }
    if ( *(_DWORD *)(v3 + 156) || (*(_BYTE *)(v3 + 76) & 1) != 0 )
    {
      GreAcquireSemaphore(_ghsemSprite);
      EngUnlockSurface((SURFOBJ *)(v3 + 16));
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v3 + 168));
      if ( (*(_DWORD *)(v3 + 208))-- != 1 )
        goto LABEL_29;
      CurrentThread = KeGetCurrentThread();
      if ( !IsThreadCrossSessionAttached() )
        PsGetThreadWin32Thread(CurrentThread);
      v17 = KeGetCurrentThread();
      v5 = 0;
      if ( !IsThreadCrossSessionAttached()
        && (ThreadWin32Thread = (int *)PsGetThreadWin32Thread(v17)) != 0
        && (v5 = *ThreadWin32Thread) != 0 )
      {
        v15 = *(PKTHREAD *)(v5 + 52);
        v7 = *(PKTHREAD *)(v5 + 56);
        *(_DWORD *)(v5 + 52) = 0;
        *(_DWORD *)(v5 + 56) = 0;
      }
      else
      {
        v15 = v17;
        v7 = v17;
      }
      v18 = v7;
      if ( (*(_DWORD *)(v3 + 72) & 0x2000000) != 0 )
      {
        v8 = *(_DWORD *)(v3 + 360);
        v9 = *(_DWORD *)(v3 + 356);
        v13 = *(struct PDEVOBJ **)(v3 + 220);
        v14 = *(HDEV *)(v3 + 212);
        if ( (*(_BYTE *)(v3 + 76) & 2) != 0 )
          GreHintSpriteShapeDelayDelete((HWND)v14, (HDEV)v13, v3 + 224, v9, v8);
        else
          GreHintSpriteShape(v14, *(void **)(v3 + 216), v13, (_DWORD *)(v3 + 224), v9, v8, 0);
        *(_DWORD *)(v3 + 72) &= ~0x2000000u;
        _InterlockedDecrement(&glDelayedHintShape);
      }
      v10 = *(_DWORD *)(v3 + 76);
      if ( (v10 & 2) != 0 )
      {
        *(_DWORD *)(v3 + 76) = v10 & 0xFFFFFFFD;
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v3 + 168));
        GreDeleteSpriteDelayDelete(
          *(struct PDEVOBJ **)(v3 + 364),
          *(HWND *)(v3 + 368),
          *(void **)(v3 + 372),
          *(HDEV *)(v3 + 376));
        v11 = 1;
      }
      else
      {
        v11 = 0;
      }
      if ( v5 )
      {
        *(_DWORD *)(v5 + 52) = v15;
        *(_DWORD *)(v5 + 56) = v18;
      }
      if ( !v11 )
      {
LABEL_29:
        if ( *(_DWORD *)(v3 + 156) || (*(_BYTE *)(v3 + 76) & 1) != 0 )
        {
          v12 = *(_DWORD *)(v3 + 204);
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v3 + 168));
          if ( v12 == 1 )
            bDeleteSurface(*(_DWORD *)v3);
        }
      }
      if ( _ghsemSprite )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsem", _ghsemSprite);
        GreReleaseSemaphoreInternal(_ghsemSprite);
      }
    }
  }
  else if ( (v2 & 0x40000) != 0 )
  {
    GreSelectRedirectionBitmap(*(_DWORD *)this, *((HDEV *)this + 462));
    *((_DWORD *)this + 6) &= ~0x40000u;
    *((_DWORD *)this + 462) = 0;
  }
}
