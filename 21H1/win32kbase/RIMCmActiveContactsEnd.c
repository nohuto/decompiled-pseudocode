/*
 * XREFs of RIMCmActiveContactsEnd @ 0x1C01865F0
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C01620CC (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C016269C (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0162A54 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0162D74 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMEndAllActiveContacts @ 0x1C0165CF0 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C0168624 (RIMSuppressAllActiveContacts.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C0179E1C (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C017A740 (rimStorePointersInHoldingFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C017F6B0 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C017FAE8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C017FDEC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0180C40 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C0182E0C (rimProcessMissingPointerDeviceContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C018655C (RIMCmActiveContactsBeginNoButton.c)
 * Callees:
 *     ListTableEnd @ 0x1C0188CA0 (ListTableEnd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmActiveContactsEnd(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int64 v6; // xmm1_8
  __int64 result; // rax
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_DWORD *)(a2 + 944) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v4 = ListTableEnd(v8, a2 + 936);
  v5 = *(_OWORD *)v4;
  v6 = *(_QWORD *)(v4 + 16);
  result = a1;
  *(_OWORD *)a1 = v5;
  *(_QWORD *)(a1 + 16) = v6;
  return result;
}
