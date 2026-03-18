/*
 * XREFs of ?UMPDDrvDisablePDEV@@YGXPAUDHPDEV__@@@Z @ 0x20B4A8
 * Callers:
 *     ?UMPDDrvEnablePDEV@@YGPAUDHPDEV__@@PAU_devicemodeW@@PAGKPAPAUHSURF__@@KPAKKPAUtagDEVINFO@@PAUHDEV__@@1PAX@Z @ 0x20B9D7 (-UMPDDrvEnablePDEV@@YGPAUDHPDEV__@@PAU_devicemodeW@@PAGKPAPAUHSURF__@@KPAKKPAUtagDEVINFO@@PAUHDE.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?vUMPDCachedResourceCleanup@@YGXPAU_W32THREAD@@@Z @ 0xA3A60 (-vUMPDCachedResourceCleanup@@YGXPAU_W32THREAD@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 */

void __stdcall UMPDDrvDisablePDEV(struct DHPDEV__ *a1)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  UMPDOBJ *v3; // [esp+8h] [ebp-20h] BYREF
  _DWORD Src[6]; // [esp+Ch] [ebp-1Ch] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v3);
  if ( v3 )
  {
    Src[0] = 24;
    Src[2] = 0;
    Src[3] = 0;
    Src[1] = 2;
    Src[4] = *(_DWORD *)v3;
    Src[5] = a1;
    UMPDOBJ::Thunk(v3, Src, 0x18u, 0, 0);
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v3);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  if ( (_DWORD *)ThreadWin32Thread[5] == ThreadWin32Thread + 5 )
    vUMPDCachedResourceCleanup(ThreadWin32Thread);
}
