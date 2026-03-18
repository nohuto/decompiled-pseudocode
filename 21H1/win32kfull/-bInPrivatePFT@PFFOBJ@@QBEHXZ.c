/*
 * XREFs of ?bInPrivatePFT@PFFOBJ@@QBEHXZ @ 0x88E46
 * Callers:
 *     ?bFilterNotEnum@PFEOBJ@@QAEHXZ @ 0x88E14 (-bFilterNotEnum@PFEOBJ@@QAEHXZ.c)
 *     ?bDeleteLoadRef@PFFOBJ@@QAEHKPAUtagPvtData@@PAH@Z @ 0xCDBEA (-bDeleteLoadRef@PFFOBJ@@QAEHKPAUtagPvtData@@PAH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QAEXXZ @ 0xCE2F8 (-vRemoveHash@PFFOBJ@@QAEXXZ.c)
 *     ?bAddHash@PFFOBJ@@QAEHH@Z @ 0xDE594 (-bAddHash@PFFOBJ@@QAEHH@Z.c)
 *     _GreGetUFI@28 @ 0x1D8D94 (_GreGetUFI@28.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall PFFOBJ::bInPrivatePFT(PFFOBJ *this)
{
  return gpPFTPrivate == *(struct PFT **)(*(_DWORD *)this + 80);
}
