/*
 * XREFs of McTemplateK0ujjpx_EtwWriteTransfer @ 0x1C005DF98
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C005B6D8 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C005DC5C (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0ujjpx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        char a4,
        int a5,
        __int64 a6,
        char a7,
        char a8)
{
  _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-39h] BYREF
  char *v10; // [rsp+40h] [rbp-29h]
  __int64 v11; // [rsp+48h] [rbp-21h]
  GUID *v12; // [rsp+50h] [rbp-19h]
  __int64 v13; // [rsp+58h] [rbp-11h]
  __int64 v14; // [rsp+60h] [rbp-9h]
  __int64 v15; // [rsp+68h] [rbp-1h]
  char *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  char *v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]
  char v20; // [rsp+C8h] [rbp+5Fh] BYREF

  v20 = a4;
  v11 = 1LL;
  v10 = &v20;
  v13 = 16LL;
  v12 = &GUID_SLEEPSTUDY_BLOCKER_PARENT_NETWORKING;
  v14 = a6;
  v16 = &a7;
  v18 = &a8;
  v15 = 16LL;
  v17 = 8LL;
  v19 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &MiniportSleepStudyDevicePdo, a3, 6u, &v9);
}
