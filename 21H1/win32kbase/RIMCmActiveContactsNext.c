/*
 * XREFs of RIMCmActiveContactsNext @ 0x1C0186644
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
 *     ListTableIteratorNext @ 0x1C0188CF8 (ListTableIteratorNext.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmActiveContactsNext(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // xmm0_8
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( !*(_DWORD *)(a1 + 944) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v4 = *a2;
  if ( *a2 != a1 + 936 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    v4 = *a2;
  }
  v5 = (_QWORD *)ListTableEnd(v9, v4);
  if ( *a2 == *v5 && *((_DWORD *)a2 + 2) == (unsigned int)v5[1] && a2[2] == v5[2] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  result = ListTableIteratorNext(v9, a2);
  v8 = *(_QWORD *)(result + 16);
  *(_OWORD *)a2 = *(_OWORD *)result;
  a2[2] = v8;
  return result;
}
