/*
 * XREFs of vMakeInactiveHelper @ 0x1F90C7
 * Callers:
 *     ?vUnlinkAllEudcFromRFONTList@@YGXHH@Z @ 0xCE6D4 (-vUnlinkAllEudcFromRFONTList@@YGXHH@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0xCE802 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1F9240 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1F9371 (vUnlinkEudcRFONTsWorker.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QAEHPAPAVRFONT@@@Z @ 0x8D4E8 (-bMakeInactiveHelper@RFONTOBJ@@QAEHPAPAVRFONT@@@Z.c)
 */

void __thiscall vMakeInactiveHelper(struct RFONT **this)
{
  struct RFONT *v2; // [esp+4h] [ebp-4h] BYREF

  if ( this )
  {
    if ( *this )
    {
      v2 = *this;
      RFONTOBJ::bMakeInactiveHelper(&v2, 0);
      *this = 0;
      v2 = 0;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v2);
    }
  }
}
