/*
 * XREFs of WriteGenAddrMaybeHiddenEx @ 0x1C00032BC
 * Callers:
 *     CpcReinitializeHandler @ 0x1C0004780 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C00048A0 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C00048F0 (CpcSetAutonomousMode.c)
 *     CpcSetTimeWindow @ 0x1C0004920 (CpcSetTimeWindow.c)
 *     InitAcpiCpc @ 0x1C0023388 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C002DEF8 (InitCpcStatesInternal.c)
 * Callees:
 *     WriteGenAddrEx @ 0x1C0003174 (WriteGenAddrEx.c)
 *     WriteGenAddrHiddenEx @ 0x1C0003290 (WriteGenAddrHiddenEx.c)
 */

void __fastcall WriteGenAddrMaybeHiddenEx(__int64 a1, _BYTE *a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 80) )
    WriteGenAddrHiddenEx(*(_DWORD *)(a1 + 84), a2, a3);
  else
    WriteGenAddrEx(a2, a3);
}
