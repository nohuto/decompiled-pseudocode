/*
 * XREFs of PopDiagTraceInputTimeout @ 0x1406716B4
 * Callers:
 *     PopUpdateTimeouts @ 0x1406715BC (PopUpdateTimeouts.c)
 *     PopCheckConsoleTimeouts @ 0x1408F5124 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceInputTimeout(int a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v4; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  int *v7; // [rsp+40h] [rbp-30h]
  int v8; // [rsp+48h] [rbp-28h]
  int v9; // [rsp+4Ch] [rbp-24h]
  int *v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+5Ch] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+8h] BYREF
  int v14; // [rsp+80h] [rbp+10h] BYREF
  int v15; // [rsp+88h] [rbp+18h] BYREF
  int v16; // [rsp+90h] [rbp+20h] BYREF

  v3 = &retaddr;
  v16 = a3;
  v15 = a2;
  v14 = a1;
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_ADPM_INPUT_TIMEOUT);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      UserData.Ptr = (ULONGLONG)&v14;
      UserData.Size = 4;
      v7 = &v15;
      v10 = &v16;
      v8 = 4;
      v11 = 4;
      LOBYTE(v3) = EtwWrite(v4, &POP_ETW_ADPM_INPUT_TIMEOUT, 0LL, 3u, &UserData);
    }
  }
  return (char)v3;
}
