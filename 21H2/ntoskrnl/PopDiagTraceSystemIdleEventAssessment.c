/*
 * XREFs of PopDiagTraceSystemIdleEventAssessment @ 0x1408EBB0C
 * Callers:
 *     PopAssessSystemIdleEvent @ 0x1408F0EC0 (PopAssessSystemIdleEvent.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceSystemIdleEventAssessment(int a1, int a2, int a3, unsigned __int8 a4, char a5)
{
  _UNKNOWN **v5; // rax
  int v6; // edi
  REGHANDLE v7; // rbx
  int v9; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-21h] BYREF
  int *v11; // [rsp+58h] [rbp-11h]
  int v12; // [rsp+60h] [rbp-9h]
  int v13; // [rsp+64h] [rbp-5h]
  int *v14; // [rsp+68h] [rbp-1h]
  int v15; // [rsp+70h] [rbp+7h]
  int v16; // [rsp+74h] [rbp+Bh]
  int *v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+80h] [rbp+17h]
  int v19; // [rsp+84h] [rbp+1Bh]
  char *v20; // [rsp+88h] [rbp+1Fh]
  int v21; // [rsp+90h] [rbp+27h]
  int v22; // [rsp+94h] [rbp+2Bh]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+57h] BYREF
  int v24; // [rsp+C8h] [rbp+5Fh] BYREF
  int v25; // [rsp+D0h] [rbp+67h] BYREF
  int v26; // [rsp+D8h] [rbp+6Fh] BYREF

  v5 = &retaddr;
  v26 = a3;
  v25 = a2;
  v24 = a1;
  v6 = a4;
  if ( PopDiagHandleRegistered )
  {
    v7 = PopDiagHandle;
    LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_EVENT_ASSESSMENT);
    if ( (_BYTE)v5 )
    {
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      UserData.Ptr = (ULONGLONG)&v24;
      v11 = &v25;
      UserData.Size = 4;
      v14 = &v26;
      v17 = &v9;
      v20 = &a5;
      v12 = 4;
      v15 = 4;
      v18 = 4;
      v21 = 4;
      v9 = v6;
      LOBYTE(v5) = EtwWrite(v7, &POP_ETW_EVENT_SYSTEM_IDLE_EVENT_ASSESSMENT, 0LL, 5u, &UserData);
    }
  }
  return (char)v5;
}
