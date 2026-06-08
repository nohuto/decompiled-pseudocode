/*
 * XREFs of ReadGenAddrMaybeHiddenEx @ 0x1C0002E48
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x1C0020548 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C00207F0 (CpcHighestNotifyWorker.c)
 *     InitAcpiCpc @ 0x1C0020B78 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C002BE58 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrEx @ 0x1C0002D5C (ReadGenAddrEx.c)
 *     ReadGenAddrHiddenEx @ 0x1C0002E18 (ReadGenAddrHiddenEx.c)
 */

unsigned __int64 __fastcall ReadGenAddrMaybeHiddenEx(__int64 a1, _BYTE *a2)
{
  if ( *(_DWORD *)(a1 + 80) )
    return ReadGenAddrHiddenEx(*(unsigned int *)(a1 + 84), a2);
  else
    return ReadGenAddrEx(a2);
}
