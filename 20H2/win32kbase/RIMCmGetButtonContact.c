/*
 * XREFs of RIMCmGetButtonContact @ 0x1C017E994
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0159DEC (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C015A1A4 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C01716BC (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C0171FE0 (rimStorePointersInHoldingFrame.c)
 *     rimFinalizePointerFlags @ 0x1C017A154 (rimFinalizePointerFlags.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C017B0F0 (rimProcessPointerDeviceButtonContact.c)
 *     RIMCmActivateButtonContact @ 0x1C017E1C4 (RIMCmActivateButtonContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmGetButtonContact(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 24) == 7 )
    return *(_QWORD *)(a1 + 912);
  else
    return 0LL;
}
