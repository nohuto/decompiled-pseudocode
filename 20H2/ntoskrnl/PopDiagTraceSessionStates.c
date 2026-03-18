/*
 * XREFs of PopDiagTraceSessionStates @ 0x140720C64
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1405D5E24 (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     PopSetSessionUserStatus @ 0x140720A50 (PopSetSessionUserStatus.c)
 *     PopSessionInputChange @ 0x140720ED0 (PopSessionInputChange.c)
 *     PopSessionDisconnected @ 0x140775B28 (PopSessionDisconnected.c)
 *     PopSetSessionDisplayStatus @ 0x14077DBD8 (PopSetSessionDisplayStatus.c)
 *     PopSessionConnected @ 0x140789BF0 (PopSessionConnected.c)
 * Callees:
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
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
