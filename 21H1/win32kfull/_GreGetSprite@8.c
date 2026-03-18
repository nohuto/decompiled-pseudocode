/*
 * XREFs of _GreGetSprite@8 @ 0xC3FF0
 * Callers:
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 * Callees:
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E (-hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8 (--1DWMSPRITELOCK@@QAE@XZ.c)
 *     ??0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z @ 0x2464E (--0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z.c)
 */

int __fastcall GreGetSprite(struct PDEVOBJ *a1, void *a2)
{
  int v2; // edi
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // edx
  _DWORD *v7; // eax
  _BYTE v9[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = 0;
  if ( g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v9, a1, 0, 0);
    GreAcquireSemaphore(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
    v4 = 0;
    v5 = DWMALTSPRITEREF::hspLookupWindow(a2);
    if ( v5 )
    {
      LOBYTE(v6) = 15;
      v7 = (_DWORD *)HmgLock(v5, v6);
      v4 = v7;
      if ( !v7 )
      {
LABEL_7:
        EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
        GreReleaseSemaphoreInternal(_ghsemDwmState);
        DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v9);
        return v2;
      }
      v2 = *v7;
    }
    if ( v4 )
      _InterlockedDecrement(v4 + 2);
    goto LABEL_7;
  }
  return v2;
}
