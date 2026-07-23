/*
 * XREFs of McTemplateK0jq_EtwWriteTransfer @ 0x1404F1190
 * Callers:
 *     McGenControlCallbackV2 @ 0x1403C6540 (McGenControlCallbackV2.c)
 *     FsRtlpHeatRegisterVolume @ 0x14088D228 (FsRtlpHeatRegisterVolume.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14036EFF4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0jq_EtwWriteTransfer(__int64 a1, __int64 a2, const GUID *a3, __int64 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]

  v7 = a4;
  v9 = 0;
  v8 = 16;
  v10 = &a5;
  v12 = 0;
  v11 = 4;
  return McGenEventWrite_EtwWriteTransfer(
           MS_StorageTiering_Provider_Context,
           (const EVENT_DESCRIPTOR *)TieredStorage_NewVolume,
           a3,
           3u,
           &v6);
}
