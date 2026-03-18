/*
 * XREFs of ?vCleanupFontFile@@YGXPAVPFFCLEANUP@@@Z @ 0xCDEB6
 * Callers:
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QAEXXZ @ 0xACDB4 (-vDeleteRFONTRef@PFFOBJ@@QAEXXZ.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z @ 0xCDA6C (-bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QAEHH@Z @ 0xCDD06 (-bUnloadAllButPermanentFonts@PFTOBJ@@QAEHH@Z.c)
 *     ?vPFFC_DeleteAndCleanup@PFFOBJ@@QAEXXZ @ 0x221DA8 (-vPFFC_DeleteAndCleanup@PFFOBJ@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall vCleanupFontFile(_DWORD *this)
{
  if ( this[1] )
  {
    if ( !this[2] )
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 2084))(this, this[1]);
  }
}
