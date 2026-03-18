/*
 * XREFs of ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026DAB4
 * Callers:
 *     NtGdiDdNotifyFullscreenSpriteUpdate @ 0x1C02777E0 (NtGdiDdNotifyFullscreenSpriteUpdate.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     DwmAsyncDirtySprite @ 0x1C008CA08 (DwmAsyncDirtySprite.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0090504 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0093AA8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0099034 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00A4D00 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C0107E40 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C0113D08 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 */

__int64 __fastcall SpDdNotifyFullscreenSpriteUpdate(HDC a1, HSPRITE a2)
{
  UINT_PTR v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  struct DWMSPRITE *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  char ShouldUseSfmTokenArray; // al
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rdi
  void *v19; // rax
  __int64 v20; // r8
  DYNAMICMODECHANGESHARELOCK *v21; // rcx
  struct DWMSPRITE *v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-10h] BYREF
  char v26; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v27; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0LL;
  v25[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v25, a1);
  if ( v25[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v26);
    v24 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v23, 0LL, a2);
    v4 = -1073741816;
    if ( g_pDwmState )
    {
      v7 = v23;
      if ( v23 )
      {
        v8 = *((_QWORD *)v23 + 21);
        LOBYTE(v5) = 1;
        vSpDwmUpdateSpriteVisibility(v23, v5, v6);
        v27 = 0;
        vSpUpdateDirtyRgn(v7, (struct SFMLOGICALSURFACE *)v8, 0LL, (struct _RECTL *)((char *)v7 + 56), &v27, 0);
        if ( v27 )
        {
          ShouldUseSfmTokenArray = bShouldUseSfmTokenArray(*(unsigned int *)(v8 + 252), v9, v10, v11);
          v16 = *(_QWORD *)(v8 + 184);
          if ( ShouldUseSfmTokenArray )
          {
            if ( v16 )
              v3 = *(_QWORD *)(v16 + 8);
            v17 = GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)v8, v27, v3);
          }
          else
          {
            if ( v16 )
              v3 = *(_QWORD *)(v16 + 8);
            v18 = *(_QWORD *)v7;
            v19 = (void *)UserReferenceDwmApiPort(v16, v13, v14, v15);
            v17 = DwmAsyncDirtySprite(v19, v18, v20, v27, v3);
          }
          v4 = v17;
        }
        else
        {
          v4 = 0;
        }
        _InterlockedDecrement((volatile signed __int32 *)v7 + 3);
      }
    }
    else if ( v23 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v23 + 3);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    XDCOBJ::vUnlockFast((XDCOBJ *)v25);
    SEMOBJ::vUnlock((SEMOBJ *)&v24);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v21);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
