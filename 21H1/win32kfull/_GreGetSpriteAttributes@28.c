/*
 * XREFs of _GreGetSpriteAttributes@28 @ 0x20186
 * Callers:
 *     _CreateOrGetRedirectionBitmap@16 @ 0x20722 (_CreateOrGetRedirectionBitmap@16.c)
 *     __GetLayeredWindowAttributes@16 @ 0x153A92 (__GetLayeredWindowAttributes@16.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QAE@PAUHWND__@@PAX@Z @ 0x245C4 (--0DWMSPRITEREF@@QAE@PAUHWND__@@PAX@Z.c)
 *     ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8 (--1DWMSPRITELOCK@@QAE@XZ.c)
 *     ??0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z @ 0x2464E (--0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z.c)
 *     ?GdiGetSpriteAttributes@@YGHPAUHDEV__@@PAUHWND__@@PAXPAKPAU_BLENDFUNCTION@@3@Z @ 0x9F268 (-GdiGetSpriteAttributes@@YGHPAUHDEV__@@PAUHWND__@@PAXPAKPAU_BLENDFUNCTION@@3@Z.c)
 */

int __fastcall GreGetSpriteAttributes(
        struct PDEVOBJ *a1,
        HWND a2,
        int a3,
        HWND a4,
        _DWORD *a5,
        unsigned int *a6,
        struct HWND__ *a7)
{
  unsigned int *v7; // ebx
  int v8; // esi
  int v10; // eax
  struct _BLENDFUNCTION *v12; // [esp+0h] [ebp-14h]
  unsigned int *v13; // [esp+4h] [ebp-10h]

  v7 = a6;
  v8 = 0;
  if ( !a7 || !g_pDwmState )
    return GdiGetSpriteAttributes((HDEV)a1, a4, a5, a6, v12, v13);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&a6, a1, 0, 0);
  GreAcquireSemaphore(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&a7, a2, 0);
  v10 = (int)a7;
  if ( a7 )
  {
    v8 = 1;
    *(_DWORD *)a4 = a7[14];
    *a5 = *(_DWORD *)(v10 + 52);
    *v7 = *(_DWORD *)(v10 + 48);
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 8));
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  GreReleaseSemaphoreInternal(_ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&a6);
  return v8;
}
