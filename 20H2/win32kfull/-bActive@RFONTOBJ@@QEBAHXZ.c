/*
 * XREFs of ?bActive@RFONTOBJ@@QEBAHXZ @ 0x1C0272110
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00252E8 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A6BC8 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RFONTOBJ::bActive(RFONTOBJ *this)
{
  return *(_DWORD *)(*(_QWORD *)this + 660LL) != 0;
}
