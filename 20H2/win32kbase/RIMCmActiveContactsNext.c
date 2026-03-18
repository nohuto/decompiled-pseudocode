/*
 * XREFs of RIMCmActiveContactsNext @ 0x1C017E514
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
 *     ListTableIteratorNext @ 0x1C0180AB8 (ListTableIteratorNext.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmActiveContactsNext(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // xmm0_8
  _BYTE v14[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( !*(_DWORD *)(a1 + 944) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v6 = *a2;
  if ( *a2 != a1 + 936 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v6, a3, a4);
    v6 = *a2;
  }
  v7 = (_QWORD *)ListTableEnd(v14, v6);
  if ( *a2 == *v7 && *((_DWORD *)a2 + 2) == (unsigned int)v7[1] && a2[2] == v7[2] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
  result = ListTableIteratorNext(v14, a2);
  v13 = *(_QWORD *)(result + 16);
  *(_OWORD *)a2 = *(_OWORD *)result;
  a2[2] = v13;
  return result;
}
