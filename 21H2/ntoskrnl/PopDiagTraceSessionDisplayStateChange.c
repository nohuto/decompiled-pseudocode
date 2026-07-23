/*
 * XREFs of PopDiagTraceSessionDisplayStateChange @ 0x14038DF88
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceSessionDisplayStateChange(char a1, int a2, int a3, int a4)
{
  const EVENT_DESCRIPTOR *v4; // rax
  const EVENT_DESCRIPTOR *v5; // rbx
  REGHANDLE v6; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  int *v9; // [rsp+50h] [rbp-30h]
  int v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+5Ch] [rbp-24h]
  int *v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]
  int v15; // [rsp+A8h] [rbp+28h] BYREF
  int v16; // [rsp+B0h] [rbp+30h] BYREF
  int v17; // [rsp+B8h] [rbp+38h] BYREF

  v17 = a4;
  v16 = a3;
  v15 = a2;
  v4 = &POP_ETW_EVENT_SESSION_DISPLAY_ON;
  v5 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_SESSION_DISPLAY_OFF;
  if ( !a1 )
    v5 = &POP_ETW_EVENT_SESSION_DISPLAY_ON;
  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, v5);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      UserData.Ptr = (ULONGLONG)&v15;
      UserData.Size = 4;
      v9 = &v16;
      v10 = 4;
      v12 = &v17;
      v13 = 4;
      LOBYTE(v4) = EtwWriteEx(v6, v5, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v4;
}
