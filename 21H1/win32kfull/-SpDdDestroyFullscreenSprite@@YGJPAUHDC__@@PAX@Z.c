/*
 * XREFs of ?SpDdDestroyFullscreenSprite@@YGJPAUHDC__@@PAX@Z @ 0x1CD2E0
 * Callers:
 *     _NtGdiDdDestroyFullscreenSprite@8 @ 0x1D473A (_NtGdiDdDestroyFullscreenSprite@8.c)
 * Callees:
 *     _GreDeleteSprite@16 @ 0x1BB86 (_GreDeleteSprite@16.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8 (--1DWMSPRITELOCK@@QAE@XZ.c)
 *     ??0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z @ 0x2464E (--0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

unsigned int __fastcall SpDdDestroyFullscreenSprite(HDC a1, HDEV a2)
{
  unsigned int v3; // ebx
  struct PDEVOBJ *v4; // ecx
  _DWORD v6[3]; // [esp+8h] [ebp-1Ch] BYREF
  int v7; // [esp+14h] [ebp-10h] BYREF
  _BYTE v8[4]; // [esp+18h] [ebp-Ch] BYREF
  int v9; // [esp+1Ch] [ebp-8h]
  char v10; // [esp+23h] [ebp-1h] BYREF

  v6[1] = 0;
  v6[2] = 0;
  v3 = -1073741811;
  XDCOBJ::vLock((XDCOBJ *)v6, a1);
  if ( v6[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
    v7 = _ghsemGreLock;
    GreAcquireSemaphore(_ghsemGreLock);
    v9 = *(_DWORD *)(v6[0] + 36);
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v8, v4, 0, 0);
    GreAcquireSemaphore(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
    if ( g_pDwmState )
      v3 = GreDeleteSprite(a2, (HWND)1) == 0 ? 0xC000000D : 0;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
    GreReleaseSemaphoreInternal(_ghsemDwmState);
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v8);
    SEMOBJ::vUnlock((SEMOBJ *)&v7);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  }
  return v3;
}
