/*
 * XREFs of _GreDeleteSpriteDelayDelete@16 @ 0x1CDFF8
 * Callers:
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x5BD44 (-vClearRenderState@DEVLOCKBLTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?vClearRendering@DC@@QAEXXZ @ 0x5FB80 (-vClearRendering@DC@@QAEXXZ.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QAE@PAUHWND__@@PAX@Z @ 0x245C4 (--0DWMSPRITEREF@@QAE@PAUHWND__@@PAX@Z.c)
 *     ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8 (--1DWMSPRITELOCK@@QAE@XZ.c)
 *     ??0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z @ 0x2464E (--0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z @ 0xA3F2E (-vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z.c)
 *     ?GdiDeleteSpriteDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAX@Z @ 0x1DA897 (-GdiDeleteSpriteDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAX@Z.c)
 */

int __fastcall GreDeleteSpriteDelayDelete(struct PDEVOBJ *a1, HWND a2, HDEV a3, HDEV a4)
{
  int v4; // ebx
  HDEV v6; // esi
  int v7; // edi
  HWND v9; // [esp+0h] [ebp-20h]
  void *v10; // [esp+4h] [ebp-1Ch]
  _BYTE v11[8]; // [esp+10h] [ebp-10h] BYREF
  HDEV v12; // [esp+18h] [ebp-8h]
  HWND v13; // [esp+1Ch] [ebp-4h]

  v12 = (HDEV)a1;
  v4 = 0;
  v13 = a2;
  if ( !a4 || !g_pDwmState )
    return GdiDeleteSpriteDelayDelete(a3, v9, v10);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v11, a1, 0, 0);
  GreAcquireSemaphore(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&a4, a2, a3);
  v6 = a4;
  if ( a4 )
  {
    v7 = *(_DWORD *)(*((_DWORD *)a4 + 34) + 112);
    if ( v7 && (*(_DWORD *)(v7 + 140) || (*(_BYTE *)(v7 + 60) & 1) != 0) )
    {
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v7 + 152));
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v7 + 152));
    }
    v6[10] = v6[8];
    v6[11] = v6[9];
    _InterlockedDecrement((volatile signed __int32 *)v6 + 2);
    vspDestroyDwmSpriteObjInternal(0, v12, v6, (bool)v9, (struct DWMSPRITE *)v10);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  GreReleaseSemaphoreInternal(_ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v11);
  return v4;
}
