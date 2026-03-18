/*
 * XREFs of RIMCmActiveContactsEnd @ 0x1C017E4C0
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C015981C (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0159DEC (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C015A1A4 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C015A4C4 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMEndAllActiveContacts @ 0x1C015D440 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C015FD74 (RIMSuppressAllActiveContacts.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C01716BC (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C0171FE0 (rimStorePointersInHoldingFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C0177580 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01779B8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C0177CBC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0178B10 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C017ACDC (rimProcessMissingPointerDeviceContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C017E42C (RIMCmActiveContactsBeginNoButton.c)
 * Callees:
 *     ListTableEnd @ 0x1C0180A60 (ListTableEnd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmActiveContactsEnd(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  __int64 result; // rax
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_DWORD *)(a2 + 944) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v6 = ListTableEnd(v10, a2 + 936);
  v7 = *(_OWORD *)v6;
  v8 = *(_QWORD *)(v6 + 16);
  result = a1;
  *(_OWORD *)a1 = v7;
  *(_QWORD *)(a1 + 16) = v8;
  return result;
}
