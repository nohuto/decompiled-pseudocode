/*
 * XREFs of McTemplateK0qxqqq_EtwWriteTransfer @ 0x1C00B554C
 * Callers:
 *     ndisNsiClientParameterChangeHandler @ 0x1C00FE3F0 (ndisNsiClientParameterChangeHandler.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C005D34C (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0qxqqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-39h] BYREF
  int *v10; // [rsp+40h] [rbp-29h]
  __int64 v11; // [rsp+48h] [rbp-21h]
  char *v12; // [rsp+50h] [rbp-19h]
  __int64 v13; // [rsp+58h] [rbp-11h]
  char *v14; // [rsp+60h] [rbp-9h]
  __int64 v15; // [rsp+68h] [rbp-1h]
  char *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  char *v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+C8h] [rbp+5Fh] BYREF

  v20 = a4;
  v11 = 4LL;
  v10 = &v20;
  v13 = 8LL;
  v12 = &a5;
  v15 = 4LL;
  v14 = &a6;
  v17 = 4LL;
  v16 = &a7;
  v19 = 4LL;
  v18 = &a8;
  return McGenEventWrite_EtwWriteTransfer(
           NDIS_PROVIDER_ID_Context,
           &ChangeNotificationInterfaceInfo,
           (const GUID *)&NDIS_PROVIDER_ID,
           6u,
           &v9);
}
