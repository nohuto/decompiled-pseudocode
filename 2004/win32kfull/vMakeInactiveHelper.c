/*
 * XREFs of vMakeInactiveHelper @ 0x1C029917C
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C01146F4 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C012A560 (-vUnlinkAllEudcFromRFONTList@@YAXHH@Z.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C02993D0 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C029952C (vUnlinkEudcRFONTsWorker.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C00DBF50 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 */

void __fastcall vMakeInactiveHelper(struct RFONT **a1)
{
  struct RFONT *v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( *a1 )
    {
      v2 = *a1;
      RFONTOBJ::bMakeInactiveHelper(&v2, 0LL);
      *a1 = 0LL;
      v2 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v2);
    }
  }
}
