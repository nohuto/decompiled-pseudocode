/*
 * XREFs of TtmiLogSessionPowerStateChange @ 0x140906A14
 * Callers:
 *     TtmNotifySessionPowerStateChange @ 0x140901640 (TtmNotifySessionPowerStateChange.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     PsGetProcessSessionIdEx @ 0x1403614B0 (PsGetProcessSessionIdEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

void __fastcall TtmiLogSessionPowerStateChange(char a1)
{
  int ProcessSessionId; // eax
  char v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  char *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140D2D8E8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D2D8E8, 1LL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v8 = 0;
      v11 = 0;
      v4 = ProcessSessionId;
      v7 = 4;
      v6 = &v4;
      v3 = a1;
      v9 = &v3;
      v10 = 1;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140D2D8E8,
        (unsigned __int8 *)&dword_14002AE2C,
        0LL,
        0LL,
        4u,
        &v5);
    }
  }
}
