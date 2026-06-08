/*
 * XREFs of WriteGenAddrMaybeHiddenEx @ 0x1C000321C
 * Callers:
 *     CpcReinitializeHandler @ 0x1C0003E00 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0003F10 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C0003F60 (CpcSetAutonomousMode.c)
 *     CpcSetTimeWindow @ 0x1C0003F90 (CpcSetTimeWindow.c)
 *     InitAcpiCpc @ 0x1C0020B78 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C002BE58 (InitCpcStatesInternal.c)
 * Callees:
 *     WriteGenAddrEx @ 0x1C00030D4 (WriteGenAddrEx.c)
 *     WriteGenAddrHiddenEx @ 0x1C00031F0 (WriteGenAddrHiddenEx.c)
 */

void __fastcall WriteGenAddrMaybeHiddenEx(__int64 a1, _BYTE *a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 80) )
    WriteGenAddrHiddenEx(*(_DWORD *)(a1 + 84), a2, a3);
  else
    WriteGenAddrEx(a2, a3);
}
