/*
 * XREFs of ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00C0EEC
 * Callers:
 *     GreDeleteSprite @ 0x1C00C0E74 (GreDeleteSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C010786C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C01080C8 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C008278C (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00852CC (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C008C834 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C008CACC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0093AA8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     DwmAsyncDestroySprite @ 0x1C00C10EC (DwmAsyncDestroySprite.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00C4868 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x1C00C4978 (-vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z.c)
 */

__int64 __fastcall GreDeleteSpriteInternal(HDEV a1, struct PDEVOBJ *a2, HSPRITE a3, int a4)
{
  int v4; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DWMSPRITE *v12; // rbx
  __int64 v13; // rsi
  void *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdi
  unsigned int v17; // ebp
  struct DWMSPRITE *v18; // r8
  __int64 v20; // rax
  _BYTE v21[8]; // [rsp+20h] [rbp-38h] BYREF
  struct DWMSPRITE *v22; // [rsp+28h] [rbp-30h] BYREF

  v4 = 1;
  if ( a4 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v21, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v22, (HWND)a2, a3);
    v12 = v22;
    if ( v22 )
    {
      v13 = *((_QWORD *)v22 + 21);
      v14 = (void *)UserReferenceDwmApiPort(v9, v8, v10, v11);
      v15 = DwmAsyncDestroySprite(v14);
      v16 = *(_QWORD *)(v13 + 184);
      v17 = v15;
      if ( !v16 || !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v16 - 24)) )
        goto LABEL_5;
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v16 + 248));
      if ( *(_DWORD *)(v16 + 300) && (*(_DWORD *)(v16 + 92) & 2) == 0 )
      {
        *((_DWORD *)v12 + 41) |= 0x10u;
        vspRemoveStateReferencesForSprite(v12);
        *(_QWORD *)(v16 + 480) = 0LL;
        *(_QWORD *)(v16 + 472) = a1;
        v20 = *(_QWORD *)v12;
        *(_DWORD *)(v16 + 92) |= 2u;
        *(_DWORD *)(v16 + 496) = 1;
        v4 = 0;
        *(_QWORD *)(v16 + 488) = v20;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v16 + 248));
      if ( v4 )
      {
LABEL_5:
        v18 = v12;
        *((_DWORD *)v12 + 16) = *((_DWORD *)v12 + 14);
        *((_DWORD *)v12 + 17) = *((_DWORD *)v12 + 15);
        _InterlockedDecrement((volatile signed __int32 *)v12 + 3);
        v12 = 0LL;
        v22 = 0LL;
        vspDestroyDwmSpriteObjInternal(a1, 0, v18);
      }
    }
    else
    {
      v17 = -2143354870;
    }
    if ( v12 )
      _InterlockedDecrement((volatile signed __int32 *)v12 + 3);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v21);
  }
  else
  {
    return (unsigned int)GdiDeleteSprite(a1, (HWND)a2, a3);
  }
  return v17;
}
