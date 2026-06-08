/*
 * XREFs of WriteGenAddrMaybeHiddenEx @ 0x1C0008BC0
 * Callers:
 *     CpcReinitializeHandler @ 0x1C0009050 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0009160 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C00091B0 (CpcSetAutonomousMode.c)
 *     CpcSetTimeWindow @ 0x1C00091E0 (CpcSetTimeWindow.c)
 *     InitAcpiCpc @ 0x1C0020D88 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C0033C90 (InitCpcStatesInternal.c)
 * Callees:
 *     WriteGenAddrEx @ 0x1C0008A78 (WriteGenAddrEx.c)
 *     WriteGenAddrHiddenEx @ 0x1C0008B94 (WriteGenAddrHiddenEx.c)
 */

void __fastcall WriteGenAddrMaybeHiddenEx(__int64 a1, _BYTE *a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 80) )
    WriteGenAddrHiddenEx(*(_DWORD *)(a1 + 84), a2, a3);
  else
    WriteGenAddrEx(a2, a3);
}
