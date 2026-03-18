/*
 * XREFs of _GreGetSystemPaletteUse@4 @ 0x125E2
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z @ 0x16172 (-xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z.c)
 *     _CreateScreenPalette@12 @ 0x1A1F93 (_CreateScreenPalette@12.c)
 *     _NtGdiGetSystemPaletteUse@4 @ 0x213290 (_NtGdiGetSystemPaletteUse@4.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

unsigned int __thiscall GreGetSystemPaletteUse(HDC this)
{
  unsigned int v1; // edi
  int v2; // esi
  int v4; // edi
  _DWORD v5[3]; // [esp+8h] [ebp-10h] BYREF
  char v6; // [esp+17h] [ebp-1h] BYREF

  v1 = 0;
  memset(v5, 0, sizeof(v5));
  XDCOBJ::vLock((XDCOBJ *)v5, this);
  if ( v5[0] )
  {
    v2 = *(_DWORD *)(v5[0] + 36);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v6);
    if ( (*(_DWORD *)(v2 + 1456) & 0x100) != 0 )
    {
      v4 = *(_DWORD *)(*(_DWORD *)(v2 + 1112) + 16);
      if ( (v4 & 0x1000) != 0 )
        v1 = 2;
      else
        v1 = (v4 & 0x10000 | 0x8000u) >> 15;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
    if ( v5[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  return v1;
}
