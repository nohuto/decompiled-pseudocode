/*
 * XREFs of ?SpDdNotifyFullscreenSpriteUpdate@@YGJPAUHDC__@@PAX@Z @ 0x1CD3D4
 * Callers:
 *     _NtGdiDdNotifyFullscreenSpriteUpdate@8 @ 0x1D4753 (_NtGdiDdNotifyFullscreenSpriteUpdate@8.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ??0DWMSPRITEREF@@QAE@PAUHWND__@@PAX@Z @ 0x245C4 (--0DWMSPRITEREF@@QAE@PAUHWND__@@PAX@Z.c)
 *     _DwmAsyncDirtySprite@24 @ 0x2531C (_DwmAsyncDirtySprite@24.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z @ 0x60D20 (-vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     _GreAddLogicalSurfaceToDirtyQueue@16 @ 0xC6A7E (_GreAddLogicalSurfaceToDirtyQueue@16.c)
 *     ?bShouldUseSfmTokenArray@@YGEU_LOGSURF_FLAGS@@@Z @ 0xCA2FE (-bShouldUseSfmTokenArray@@YGEU_LOGSURF_FLAGS@@@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YGXPAVDWMSPRITE@@_N@Z @ 0xD0592 (-vSpDwmUpdateSpriteVisibility@@YGXPAVDWMSPRITE@@_N@Z.c)
 */

int __usercall SpDdNotifyFullscreenSpriteUpdate@<eax>(void *a1@<edx>, HDC a2@<ecx>, unsigned int *a3@<esi>)
{
  int v3; // ebx
  struct _RECTL *unused; // esi
  int *v6; // edi
  bool ShouldUseSfmTokenArray; // al
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // eax
  int v11; // eax
  int left; // edi
  void *v13; // eax
  int v15; // [esp-14h] [ebp-34h]
  int v16; // [esp-10h] [ebp-30h]
  int v17; // [esp-Ch] [ebp-2Ch]
  int v19; // [esp+0h] [ebp-20h]
  _DWORD v20[3]; // [esp+8h] [ebp-18h] BYREF
  int v21; // [esp+14h] [ebp-Ch] BYREF
  struct HDC__ v22; // [esp+18h] [ebp-8h] BYREF
  char v23; // [esp+1Fh] [ebp-1h] BYREF

  v3 = 0;
  v20[1] = 0;
  v20[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v20, a2);
  if ( v20[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v23);
    v21 = _ghsemGreLock;
    GreAcquireSemaphore(_ghsemGreLock);
    GreAcquireSemaphore(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v22, 0, a1);
    if ( g_pDwmState )
    {
      unused = (struct _RECTL *)v22.unused;
      if ( v22.unused )
      {
        v6 = *(int **)(v22.unused + 136);
        vSpDwmUpdateSpriteVisibility((int *)v22.unused, 1u);
        v22.unused = 0;
        vSpUpdateDirtyRgn(v6, (int)unused, 0, unused + 2, &v22, 0, a3, v19);
        if ( v22.unused )
        {
          ShouldUseSfmTokenArray = bShouldUseSfmTokenArray(v6[41]);
          v8 = v6[28];
          if ( ShouldUseSfmTokenArray )
          {
            if ( v8 )
              v9 = *(_DWORD *)(v8 + 4);
            else
              v9 = 0;
            v10 = GreAddLogicalSurfaceToDirtyQueue(*v6, v22.unused, v9);
          }
          else
          {
            if ( v8 )
              v11 = *(_DWORD *)(v8 + 4);
            else
              v11 = 0;
            left = unused->left;
            v17 = v11;
            v16 = v22.unused;
            v15 = v8;
            v13 = (void *)UserReferenceDwmApiPort();
            v10 = DwmAsyncDirtySprite(v13, left, v15, v16, v17, 0);
          }
          v3 = v10;
        }
        _InterlockedDecrement(&unused->right);
        goto LABEL_20;
      }
    }
    else
    {
      v3 = -1073741816;
      if ( v22.unused )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v22.unused + 8));
        goto LABEL_20;
      }
    }
    v3 = -1073741816;
LABEL_20:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
    GreReleaseSemaphoreInternal(_ghsemDwmState);
    XDCOBJ::vUnlockFast((XDCOBJ *)v20);
    SEMOBJ::vUnlock((SEMOBJ *)&v21);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
    return v3;
  }
  return -1073741811;
}
