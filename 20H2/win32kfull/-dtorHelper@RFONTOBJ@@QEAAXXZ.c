/*
 * XREFs of ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C00240F8
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C00264BC (GreGetGlyphOutlineInternal.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00AC7E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00AFAAC (--1RFONTOBJ@@QEAA@XZ.c)
 *     RFONTOBJ_dtorHelperWrap @ 0x1C015EAC0 (RFONTOBJ_dtorHelperWrap.c)
 * Callees:
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1C00261F4 (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::dtorHelper(RFONTOBJ *this)
{
  int v2; // ebx

  GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 848LL));
  v2 = *(_DWORD *)(*(_QWORD *)this + 712LL);
  RFONTOBJ::vUnlockEUDCFontsGlyphCache(this);
  if ( (v2 & 0x81) != 0 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  *(_DWORD *)(*(_QWORD *)this + 712LL) &= 0xFFFFFEFE;
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 848LL));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 848LL));
}
