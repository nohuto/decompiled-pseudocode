/*
 * XREFs of RIMCmActiveContactsBegin @ 0x1C01864D8
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0162D74 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMEndAllActiveContacts @ 0x1C0165CF0 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C0168624 (RIMSuppressAllActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C017FAE8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0180C40 (rimEndPointerDeviceStaleContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C018655C (RIMCmActiveContactsBeginNoButton.c)
 * Callees:
 *     ListTableIteratorNext @ 0x1C0188CF8 (ListTableIteratorNext.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmActiveContactsBegin(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int128 v6; // xmm0
  __int64 v7; // xmm1_8
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( !*(_DWORD *)(a2 + 944) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v4 = a2 + 936;
  if ( !*(_QWORD *)v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( !*(_DWORD *)(v4 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v9[0] = v4;
  v9[1] = 0LL;
  v9[2] = *(_QWORD *)v4;
  v5 = ListTableIteratorNext(v10, v9);
  v6 = *(_OWORD *)v5;
  v7 = *(_QWORD *)(v5 + 16);
  result = a1;
  *(_OWORD *)a1 = v6;
  *(_QWORD *)(a1 + 16) = v7;
  return result;
}
