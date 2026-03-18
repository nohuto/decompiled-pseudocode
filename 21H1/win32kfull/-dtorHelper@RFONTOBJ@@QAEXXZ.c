/*
 * XREFs of ?dtorHelper@RFONTOBJ@@QAEXXZ @ 0x207AAB
 * Callers:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 *     _GreGetGlyphOutlineInternal@32 @ 0x85B86 (_GreGetGlyphOutlineInternal@32.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     _RFONTOBJ_dtorHelperWrap@4 @ 0xF8329 (_RFONTOBJ_dtorHelperWrap@4.c)
 * Callees:
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QAEXXZ @ 0x209E08 (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QAEXXZ.c)
 */

void __thiscall RFONTOBJ::dtorHelper(RFONTOBJ *this)
{
  int v2; // ebx

  GreAcquireSemaphore(*(_DWORD *)(*(_DWORD *)this + 788));
  v2 = *(_DWORD *)(*(_DWORD *)this + 708);
  RFONTOBJ::vUnlockEUDCFontsGlyphCache(this);
  if ( (v2 & 0x81) != 0 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  *(_DWORD *)(*(_DWORD *)this + 708) &= 0xFFFFFEFE;
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_DWORD *)(*(_DWORD *)this + 788));
  GreReleaseSemaphoreInternal(*(_DWORD *)(*(_DWORD *)this + 788));
}
