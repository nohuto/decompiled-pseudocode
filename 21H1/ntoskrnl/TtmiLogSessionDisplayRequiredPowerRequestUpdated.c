/*
 * XREFs of TtmiLogSessionDisplayRequiredPowerRequestUpdated @ 0x1408FF3E8
 * Callers:
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1408FBD80 (TtmpUpdateDisplayRequiredPowerRequest.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void TtmiLogSessionDisplayRequiredPowerRequestUpdated()
{
  __int64 v0; // rdx
  char v1; // r9
  int v2; // r10d
  int v3; // r11d
  char v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  int v6; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-9h] BYREF
  int *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  char *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_140D2C8E8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D2C8E8, 1LL) )
    {
      v4 = v1;
      v8 = &v5;
      v13 = v0;
      v10 = &v6;
      v5 = v3;
      v12 = &v4;
      v9 = 4LL;
      v6 = v2;
      v11 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140D2C8E8,
        (unsigned __int8 *)&word_14002A4FE,
        0LL,
        0LL,
        5u,
        &v7);
    }
  }
}
