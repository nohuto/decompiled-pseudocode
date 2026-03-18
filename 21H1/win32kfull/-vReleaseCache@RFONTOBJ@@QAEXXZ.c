/*
 * XREFs of ?vReleaseCache@RFONTOBJ@@QAEXXZ @ 0x86BAC
 * Callers:
 *     _GreGetGlyphOutlineInternal@32 @ 0x85B86 (_GreGetGlyphOutlineInternal@32.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?bSetNewFDX@RFONTOBJ@@QAEHAAVXDCOBJ@@AAU_FD_XFORM@@K@Z @ 0x209520 (-bSetNewFDX@RFONTOBJ@@QAEHAAVXDCOBJ@@AAU_FD_XFORM@@K@Z.c)
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QAEXXZ @ 0x209E08 (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QAEXXZ.c)
 *     ?vUnlockSystemTTGlyphCache@RFONTOBJ@@AAEXXZ @ 0x209EA0 (-vUnlockSystemTTGlyphCache@RFONTOBJ@@AAEXXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall RFONTOBJ::vReleaseCache(RFONTOBJ *this)
{
  int v2; // eax
  int v3; // ecx

  v2 = *(_DWORD *)this;
  v3 = *(_DWORD *)(*(_DWORD *)this + 624);
  if ( v3 )
  {
    Win32FreePool(v3);
    *(_DWORD *)(*(_DWORD *)this + 628) = 0;
    *(_DWORD *)(*(_DWORD *)this + 624) = 0;
    v2 = *(_DWORD *)this;
  }
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_DWORD *)(v2 + 548));
  GreReleaseSemaphoreInternal(*(_DWORD *)(*(_DWORD *)this + 548));
}
