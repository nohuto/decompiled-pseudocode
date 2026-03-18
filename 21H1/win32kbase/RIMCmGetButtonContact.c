/*
 * XREFs of RIMCmGetButtonContact @ 0x1C0186AC4
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C016269C (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0162A54 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C0179E1C (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C017A740 (rimStorePointersInHoldingFrame.c)
 *     rimFinalizePointerFlags @ 0x1C0182284 (rimFinalizePointerFlags.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C0183220 (rimProcessPointerDeviceButtonContact.c)
 *     RIMCmActivateButtonContact @ 0x1C01862F4 (RIMCmActivateButtonContact.c)
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
