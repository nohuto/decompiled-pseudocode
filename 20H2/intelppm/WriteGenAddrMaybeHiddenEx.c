/*
 * XREFs of WriteGenAddrMaybeHiddenEx @ 0x1C0008BB0
 * Callers:
 *     CpcReinitializeHandler @ 0x1C0009040 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0009160 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C00091B0 (CpcSetAutonomousMode.c)
 *     CpcSetTimeWindow @ 0x1C00091E0 (CpcSetTimeWindow.c)
 *     InitAcpiCpc @ 0x1C00220D8 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C0035000 (InitCpcStatesInternal.c)
 * Callees:
 *     WriteGenAddrEx @ 0x1C0008A68 (WriteGenAddrEx.c)
 *     WriteGenAddrHiddenEx @ 0x1C0008B84 (WriteGenAddrHiddenEx.c)
 */

void __fastcall WriteGenAddrMaybeHiddenEx(__int64 a1, _BYTE *a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 80) )
    WriteGenAddrHiddenEx(*(_DWORD *)(a1 + 84), a2, a3);
  else
    WriteGenAddrEx(a2, a3);
}
