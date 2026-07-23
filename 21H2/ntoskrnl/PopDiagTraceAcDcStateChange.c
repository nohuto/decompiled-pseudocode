/*
 * XREFs of PopDiagTraceAcDcStateChange @ 0x1408E8334
 * Callers:
 *     PopUpdateAcDcState @ 0x140399B1C (PopUpdateAcDcState.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceAcDcStateChange(int a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v5; // rbx
  BOOL v7; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  int *v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+54h] [rbp-1Ch]
  int *v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+60h] [rbp-10h]
  int v14; // [rsp+64h] [rbp-Ch]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+8h] BYREF
  int v16; // [rsp+88h] [rbp+18h] BYREF
  int v17; // [rsp+90h] [rbp+20h] BYREF

  v3 = &retaddr;
  v17 = a3;
  v16 = a2;
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ACDC_STATE_CHANGE);
    if ( (_BYTE)v3 )
    {
      UserData.Size = 4;
      v10 = 4;
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v7 = a1 == 0;
      UserData.Ptr = (ULONGLONG)&v7;
      v9 = &v16;
      v12 = &v17;
      v13 = 4;
      LOBYTE(v3) = EtwWrite(v5, &POP_ETW_EVENT_ACDC_STATE_CHANGE, 0LL, 3u, &UserData);
    }
  }
  return (char)v3;
}
