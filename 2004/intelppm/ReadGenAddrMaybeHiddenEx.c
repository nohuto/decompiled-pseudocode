/*
 * XREFs of ReadGenAddrMaybeHiddenEx @ 0x1C0008830
 * Callers:
 *     InitAcpiCpc @ 0x1C0020D88 (InitAcpiCpc.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C002D728 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C002D9E4 (CpcHighestNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1C0033C90 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrEx @ 0x1C0008744 (ReadGenAddrEx.c)
 *     ReadGenAddrHiddenEx @ 0x1C0008800 (ReadGenAddrHiddenEx.c)
 */

unsigned __int64 __fastcall ReadGenAddrMaybeHiddenEx(__int64 a1, _BYTE *a2)
{
  if ( *(_DWORD *)(a1 + 80) )
    return ReadGenAddrHiddenEx(*(unsigned int *)(a1 + 84), a2);
  else
    return ReadGenAddrEx(a2);
}
