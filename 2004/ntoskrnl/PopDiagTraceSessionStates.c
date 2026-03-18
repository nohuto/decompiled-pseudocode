/*
 * XREFs of PopDiagTraceSessionStates @ 0x1407120CC
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1405CF974 (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     PopSessionInputChange @ 0x140711DE0 (PopSessionInputChange.c)
 *     PopSetSessionUserStatus @ 0x140712330 (PopSetSessionUserStatus.c)
 *     PopSessionDisconnected @ 0x140766AF8 (PopSessionDisconnected.c)
 *     PopSetSessionDisplayStatus @ 0x14076F628 (PopSetSessionDisplayStatus.c)
 *     PopSessionConnected @ 0x14077B5F0 (PopSessionConnected.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140293470 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSessionStates(PCEVENT_DESCRIPTOR EventDescriptor, int a2, int a3)
{
  REGHANDLE v4; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+78h] [rbp+10h] BYREF
  int v10; // [rsp+80h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      UserData.Ptr = (ULONGLONG)&v9;
      UserData.Size = 4;
      v6 = &v10;
      v7 = 4;
      EtwWrite(v4, EventDescriptor, 0LL, 2u, &UserData);
    }
  }
}
