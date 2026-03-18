/*
 * XREFs of ?vSetUniqueness@PFFOBJ@@QAEXXZ @ 0xDE55E
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z @ 0x1D0D40 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z.c)
 * Callees:
 *     ?iHash@@YGIPBGI@Z @ 0x89CAC (-iHash@@YGIPBGI@Z.c)
 */

void __thiscall PFFOBJ::vSetUniqueness(PFFOBJ *this)
{
  unsigned int v1; // edx
  int v2; // esi

  v1 = PFFOBJ::uGlobalUniqueness + 1;
  *(_DWORD *)(*(_DWORD *)this + 88) = PFFOBJ::uGlobalUniqueness + 1;
  v2 = *(_DWORD *)this;
  PFFOBJ::uGlobalUniqueness = v1;
  *(_DWORD *)(v2 + 88) = *(_DWORD *)(v2 + 88) & 0xFFFFFF | (iHash(
                                                              *(_WORD **)(v2 + 12),
                                                              *(_DWORD *)(*(_DWORD *)(v2 + 80) + 12)) << 24);
}
