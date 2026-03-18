/*
 * XREFs of McTemplateK0uqq_EtwWriteTransfer @ 0x1C0043C54
 * Callers:
 *     UsbDevice_DirectWriteDoorbell @ 0x1C000900C (UsbDevice_DirectWriteDoorbell.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C00090A0 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C00351EC (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0uqq_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, char a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  char *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  char *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  char *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  char v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v9 = 1LL;
  v11 = 4LL;
  v8 = &v14;
  v13 = 4LL;
  v10 = &a5;
  v12 = &a6;
  return McGenEventWrite_EtwWriteTransfer(a1, (const EVENT_DESCRIPTOR *)"-", 0LL, 4u, &v7);
}
