/*
 * XREFs of ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026F0D4
 * Callers:
 *     NtGdiDdNotifyFullscreenSpriteUpdate @ 0x1C0278D50 (NtGdiDdNotifyFullscreenSpriteUpdate.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C001EBD4 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C001F384 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     DwmAsyncDirtySprite @ 0x1C002D7E0 (DwmAsyncDirtySprite.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C0053220 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0079870 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C0112EE4 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 */

__int64 __fastcall SpDdNotifyFullscreenSpriteUpdate(HDC a1, HSPRITE a2)
{
  UINT_PTR v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  struct DWMSPRITE *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char ShouldUseSfmTokenArray; // al
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rdi
  void *v22; // rax
  __int64 v23; // r8
  DYNAMICMODECHANGESHARELOCK *v24; // rcx
  struct DWMSPRITE *v26; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v28[2]; // [rsp+40h] [rbp-10h] BYREF
  char v29; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v30; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0LL;
  v28[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v28, a1);
  if ( v28[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v29, v4, v5, v6);
    v27 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v26, 0LL, a2);
    v7 = -1073741816;
    if ( g_pDwmState )
    {
      v10 = v26;
      if ( v26 )
      {
        v11 = *((_QWORD *)v26 + 21);
        LOBYTE(v8) = 1;
        vSpDwmUpdateSpriteVisibility(v26, v8, v9);
        v30 = 0;
        vSpUpdateDirtyRgn(v10, (struct SFMLOGICALSURFACE *)v11, 0LL, (struct _RECTL *)((char *)v10 + 56), &v30, 0);
        if ( v30 )
        {
          ShouldUseSfmTokenArray = bShouldUseSfmTokenArray(*(unsigned int *)(v11 + 252), v12, v13, v14);
          v19 = *(_QWORD *)(v11 + 184);
          if ( ShouldUseSfmTokenArray )
          {
            if ( v19 )
              v3 = *(_QWORD *)(v19 + 8);
            v20 = GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)v11, v30, v3);
          }
          else
          {
            if ( v19 )
              v3 = *(_QWORD *)(v19 + 8);
            v21 = *(_QWORD *)v10;
            v22 = (void *)UserReferenceDwmApiPort(v19, v16, v17, v18);
            v20 = DwmAsyncDirtySprite(v22, v21, v23, v30, v3);
          }
          v7 = v20;
        }
        else
        {
          v7 = 0;
        }
        _InterlockedDecrement((volatile signed __int32 *)v10 + 3);
      }
    }
    else if ( v26 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v26 + 3);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    XDCOBJ::vUnlockFast((XDCOBJ *)v28);
    SEMOBJ::vUnlock((SEMOBJ *)&v27);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v24);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
