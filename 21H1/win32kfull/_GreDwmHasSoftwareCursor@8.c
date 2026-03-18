/*
 * XREFs of _GreDwmHasSoftwareCursor@8 @ 0xB1736
 * Callers:
 *     _DwmDestroyDeviceSpecificResources@4 @ 0xB0AC4 (_DwmDestroyDeviceSpecificResources@4.c)
 *     _zzzEnableDwmPointerSupport@8 @ 0xB0B78 (_zzzEnableDwmPointerSupport@8.c)
 * Callees:
 *     ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8 (--1DWMSPRITELOCK@@QAE@XZ.c)
 *     ??0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z @ 0x2464E (--0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z.c)
 */

int __fastcall GreDwmHasSoftwareCursor(struct PDEVOBJ *a1, int a2)
{
  int v2; // esi
  _BYTE v6[4]; // [esp+Ch] [ebp-4h] BYREF

  v2 = 0;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v6, a1, 0, 0);
  GreAcquireSemaphore(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
  if ( g_pDwmState
    && (*((_DWORD *)g_pDwmState + 14) || a2)
    && *((_DWORD *)g_pDwmState + 23)
    && (*((struct PDEVOBJ **)a1 + 580) != (struct PDEVOBJ *)((char *)a1 + 2320)
     || ((unsigned int)&loc_20000 & *((_DWORD *)a1 + 6)) != 0) )
  {
    v2 = 1;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  GreReleaseSemaphoreInternal(_ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v6);
  return v2;
}
