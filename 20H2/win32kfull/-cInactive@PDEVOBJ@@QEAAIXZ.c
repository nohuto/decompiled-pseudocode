/*
 * XREFs of ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C0026F28
 * Callers:
 *     prfntKillList @ 0x1C001DA20 (prfntKillList.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C0020748 (prfntDeactivateEudcRFONTs.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C0025DF8 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C00642D4 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::cInactive(PDEVOBJ *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x800000) != 0 )
    return *(unsigned int *)(*(_QWORD *)(v1 + 3520) + 1536LL);
  else
    return *(unsigned int *)(v1 + 1536);
}
