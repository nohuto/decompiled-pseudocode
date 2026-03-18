/*
 * XREFs of AcpiDiagTraceAmliWatchdogTimeout @ 0x1C0047F28
 * Callers:
 *     AmliWatchdogTimeoutAction @ 0x1C0064394 (AmliWatchdogTimeoutAction.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0023FBC (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0023FEC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 */

void AcpiDiagTraceAmliWatchdogTimeout()
{
  __int64 v0; // r8
  __int64 v1; // r9
  unsigned __int64 v2; // r9
  int v3; // [rsp+30h] [rbp-29h] BYREF
  int v4; // [rsp+34h] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-19h] BYREF
  _DWORD *v6; // [rsp+60h] [rbp+7h]
  __int64 v7; // [rsp+68h] [rbp+Fh]
  __int64 v8; // [rsp+70h] [rbp+17h]
  _DWORD v9[2]; // [rsp+78h] [rbp+1Fh] BYREF
  int *v10; // [rsp+80h] [rbp+27h]
  __int64 v11; // [rsp+88h] [rbp+2Fh]
  int *v12; // [rsp+90h] [rbp+37h]
  __int64 v13; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_1C007E0E8 > 5 && tlgKeywordOn((__int64)&dword_1C007E0E8) )
  {
    v2 = v1 - *(_QWORD *)(v0 + 456);
    v6 = v9;
    v8 = *(_QWORD *)(v0 + 448);
    v9[0] = *(unsigned __int16 *)(v0 + 440);
    v7 = 2LL;
    v10 = &v3;
    v4 = AmliWatchdogTimeout;
    v12 = &v4;
    v3 = v2 / 0x2710;
    v9[1] = 0;
    v11 = 4LL;
    v13 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C007E0E8, (unsigned __int8 *)dword_1C0071F89, v0, v2, 6u, &v5);
  }
}
