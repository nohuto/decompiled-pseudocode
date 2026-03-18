/*
 * XREFs of _DwmDestroyDeviceSpecificResources@4 @ 0xB0AC4
 * Callers:
 *     <none>
 * Callees:
 *     ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8 (--1DWMSPRITELOCK@@QAE@XZ.c)
 *     ??0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z @ 0x2464E (--0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z.c)
 *     _GreDwmHasSoftwareCursor@8 @ 0xB1736 (_GreDwmHasSoftwareCursor@8.c)
 *     ?vSpDwmDestroyCursorSprites@@YGXPAUHDEV__@@@Z @ 0xD07F2 (-vSpDwmDestroyCursorSprites@@YGXPAUHDEV__@@@Z.c)
 */

void __thiscall DwmDestroyDeviceSpecificResources(struct PDEVOBJ *this, struct PDEVOBJ *a2)
{
  _DWORD *v2; // eax
  int v3; // ecx
  _DWORD *v4; // edx
  HDEV v5; // [esp+0h] [ebp-Ch]
  _BYTE v6[4]; // [esp+8h] [ebp-4h] BYREF

  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v6, this, 0, 0);
  GreAcquireSemaphore(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
  if ( GreDwmHasSoftwareCursor(a2) )
  {
    v2 = (_DWORD *)((char *)a2 + 2320);
    v3 = *((_DWORD *)a2 + 580);
    if ( *(struct PDEVOBJ **)(v3 + 4) != (struct PDEVOBJ *)((char *)a2 + 2320)
      || (v4 = (_DWORD *)*((_DWORD *)a2 + 581), (_DWORD *)*v4 != v2) )
    {
      __fastfail(3u);
    }
    *v4 = v3;
    *(_DWORD *)(v3 + 4) = v4;
    *((_DWORD *)a2 + 581) = (char *)a2 + 2320;
    *v2 = v2;
    if ( *((struct DwmState **)g_pDwmState + 15) == (struct DwmState *)((char *)g_pDwmState + 60)
      && *((struct DwmState **)g_pDwmState + 17) == (struct DwmState *)((char *)g_pDwmState + 68) )
    {
      vSpDwmDestroyCursorSprites(v5);
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  GreReleaseSemaphoreInternal(_ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v6);
}
