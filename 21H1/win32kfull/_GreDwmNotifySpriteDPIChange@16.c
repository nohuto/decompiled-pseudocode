/*
 * XREFs of _GreDwmNotifySpriteDPIChange@16 @ 0x23C66
 * Callers:
 *     _UpdateWindowSpriteDPI@8 @ 0x23C14 (_UpdateWindowSpriteDPI@8.c)
 *     ?CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z @ 0x152DDB (-CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QAE@PAUHWND__@@PAX@Z @ 0x245C4 (--0DWMSPRITEREF@@QAE@PAUHWND__@@PAX@Z.c)
 *     ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8 (--1DWMSPRITELOCK@@QAE@XZ.c)
 *     ??0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z @ 0x2464E (--0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z.c)
 *     _DwmAsyncNotifySpriteDPIChange@12 @ 0x24982 (_DwmAsyncNotifySpriteDPIChange@12.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

int __fastcall GreDwmNotifySpriteDPIChange(int a1, HWND a2, void *a3, int a4)
{
  int v5; // edi
  struct PDEVOBJ *v6; // ecx
  volatile signed __int32 *v7; // esi
  int v9; // [esp-4h] [ebp-1Ch]
  int v10; // [esp+10h] [ebp-8h] BYREF
  _BYTE v11[4]; // [esp+14h] [ebp-4h] BYREF

  v5 = 0;
  v10 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v11, v6, 0, 0);
  GreAcquireSemaphore(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
  if ( g_pDwmState )
  {
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&a3, a2, a3);
    v7 = (volatile signed __int32 *)a3;
    if ( a3 )
    {
      v9 = a4;
      UserReferenceDwmApiPort();
      v5 = DwmAsyncNotifySpriteDPIChange(v9);
      _InterlockedDecrement(v7 + 2);
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  GreReleaseSemaphoreInternal(_ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v11);
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
  return v5;
}
