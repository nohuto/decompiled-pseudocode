/*
 * XREFs of RIMCmActiveContactsNext @ 0x1C0180944
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C015BD7C (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C015C34C (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C015C704 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C015CA24 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMEndAllActiveContacts @ 0x1C015F9A0 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01622D4 (RIMSuppressAllActiveContacts.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C0173AEC (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C0174410 (rimStorePointersInHoldingFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01799B0 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0179DE8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C017A0EC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C017AF40 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C017D10C (rimProcessMissingPointerDeviceContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C018085C (RIMCmActiveContactsBeginNoButton.c)
 * Callees:
 *     ListTableEnd @ 0x1C0182FA0 (ListTableEnd.c)
 *     ListTableIteratorNext @ 0x1C0182FF8 (ListTableIteratorNext.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
