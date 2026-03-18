/*
 * XREFs of _GreZorderSprite@16 @ 0x244DA
 * Callers:
 *     _TrackLayeredZorder@4 @ 0x2343C (_TrackLayeredZorder@4.c)
 *     ?ReorderChildrenSpriteList@@YGXPAUtagWND@@0@Z @ 0x23494 (-ReorderChildrenSpriteList@@YGXPAUtagWND@@0@Z.c)
 * Callees:
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E (-hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8 (--1DWMSPRITELOCK@@QAE@XZ.c)
 *     ??0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z @ 0x2464E (--0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z.c)
 *     ?vSpDwmZorderSprite@@YGXPAUHSPRITE__@@0@Z @ 0x24B82 (-vSpDwmZorderSprite@@YGXPAUHSPRITE__@@0@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?GdiZorderSprite@@YGXPAUHDEV__@@PAUHWND__@@1@Z @ 0x9FBC6 (-GdiZorderSprite@@YGXPAUHDEV__@@PAUHWND__@@1@Z.c)
 */

void __fastcall GreZorderSprite(int a1, void *a2, HDEV a3, int a4)
{
  struct PDEVOBJ *v5; // ecx
  HWND v6; // [esp+0h] [ebp-18h]
  HWND v7; // [esp+4h] [ebp-14h]
  _DWORD v8[2]; // [esp+8h] [ebp-10h] BYREF
  _BYTE v9[4]; // [esp+10h] [ebp-8h] BYREF
  int v10; // [esp+14h] [ebp-4h]

  v8[1] = a1;
  v10 = 1;
  v8[0] = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  if ( !a4 || !g_pDwmState )
    goto LABEL_7;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v9, v5, 0, 0);
  GreAcquireSemaphore(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
  v10 = 0;
  DWMALTSPRITEREF::hspLookupWindow(a2);
  if ( a3 )
    DWMALTSPRITEREF::hspLookupWindow(a3);
  vSpDwmZorderSprite((HSPRITE)v6, (HSPRITE)v7);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  GreReleaseSemaphoreInternal(_ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v9);
  if ( v10 )
LABEL_7:
    GdiZorderSprite(a3, v6, v7);
  SEMOBJ::vUnlock((SEMOBJ *)v8);
}
