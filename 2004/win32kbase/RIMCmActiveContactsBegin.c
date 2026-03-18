/*
 * XREFs of RIMCmActiveContactsBegin @ 0x1C01807D8
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C015CA24 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMEndAllActiveContacts @ 0x1C015F9A0 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01622D4 (RIMSuppressAllActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0179DE8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C017AF40 (rimEndPointerDeviceStaleContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C018085C (RIMCmActiveContactsBeginNoButton.c)
 * Callees:
 *     ListTableIteratorNext @ 0x1C0182FF8 (ListTableIteratorNext.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmActiveContactsBegin(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  __int64 result; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( !*(_DWORD *)(a2 + 944) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v6 = a2 + 936;
  if ( !*(_QWORD *)v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( !*(_DWORD *)(v6 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v11[0] = v6;
  v11[1] = 0LL;
  v11[2] = *(_QWORD *)v6;
  v7 = ListTableIteratorNext(v12, v11);
  v8 = *(_OWORD *)v7;
  v9 = *(_QWORD *)(v7 + 16);
  result = a1;
  *(_OWORD *)a1 = v8;
  *(_QWORD *)(a1 + 16) = v9;
  return result;
}
