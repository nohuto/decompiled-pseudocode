/*
 * XREFs of McTemplateK0quuupd_EtwWriteTransfer @ 0x1C003DDAC
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0012E48 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C000DC24 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuupd_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  int v9; // [rsp+30h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-51h] BYREF
  int *v11; // [rsp+50h] [rbp-41h]
  __int64 v12; // [rsp+58h] [rbp-39h]
  char *v13; // [rsp+60h] [rbp-31h]
  __int64 v14; // [rsp+68h] [rbp-29h]
  char *v15; // [rsp+70h] [rbp-21h]
  __int64 v16; // [rsp+78h] [rbp-19h]
  char *v17; // [rsp+80h] [rbp-11h]
  __int64 v18; // [rsp+88h] [rbp-9h]
  char *v19; // [rsp+90h] [rbp-1h]
  __int64 v20; // [rsp+98h] [rbp+7h]
  int *v21; // [rsp+A0h] [rbp+Fh]
  __int64 v22; // [rsp+A8h] [rbp+17h]
  int v23; // [rsp+E8h] [rbp+57h] BYREF

  v23 = a4;
  v12 = 4LL;
  v9 = 0;
  v11 = &v23;
  v14 = 1LL;
  v13 = &a5;
  v16 = 1LL;
  v15 = &a6;
  v17 = &a7;
  v19 = &a8;
  v21 = &v9;
  v18 = 1LL;
  v20 = 8LL;
  v22 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &EventUnitPowerRequestComplete, a3, 7u, &v10);
}
