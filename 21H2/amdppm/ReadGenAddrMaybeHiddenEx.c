/*
 * XREFs of ReadGenAddrMaybeHiddenEx @ 0x1C0002EE8
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x1C0022D5C (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C0023004 (CpcHighestNotifyWorker.c)
 *     InitAcpiCpc @ 0x1C0023388 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C002DEF8 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrEx @ 0x1C0002DFC (ReadGenAddrEx.c)
 *     ReadGenAddrHiddenEx @ 0x1C0002EB8 (ReadGenAddrHiddenEx.c)
 */

unsigned __int64 __fastcall ReadGenAddrMaybeHiddenEx(__int64 a1, _BYTE *a2)
{
  if ( *(_DWORD *)(a1 + 80) )
    return ReadGenAddrHiddenEx(*(unsigned int *)(a1 + 84), a2);
  else
    return ReadGenAddrEx(a2);
}
