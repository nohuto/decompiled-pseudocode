/*
 * XREFs of GreDeleteSpriteDelayDelete @ 0x1C02701B4
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007BFD0 (-vClearRendering@DC@@QEAAXXZ.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C001F384 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C001FC7C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C001FCC4 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C002AE7C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C004F8CC (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C027EF08 (-GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreDeleteSpriteDelayDelete(HDEV a1, struct PDEVOBJ *a2, HSPRITE a3, int a4)
{
  unsigned int v4; // esi
  struct DWMSPRITE *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdi
  struct DWMSPRITE *v12; // [rsp+20h] [rbp-38h] BYREF
  char v13; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  if ( a4 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v13, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v12, (HWND)a2, a3);
    v8 = v12;
    if ( v12 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)v12 + 21) + 184LL);
      if ( v9 )
      {
        v10 = v9 - 24;
        if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v9 - 24)) )
        {
          W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v10 + 272));
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v10 + 272));
        }
      }
      *((_DWORD *)v8 + 16) = *((_DWORD *)v8 + 14);
      *((_DWORD *)v8 + 17) = *((_DWORD *)v8 + 15);
      _InterlockedDecrement((volatile signed __int32 *)v8 + 3);
      vspDestroyDwmSpriteObjInternal(a1, 0LL, v8);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v13);
  }
  else
  {
    return (unsigned int)GdiDeleteSpriteDelayDelete(a1, (HWND)a2, a3);
  }
  return v4;
}
