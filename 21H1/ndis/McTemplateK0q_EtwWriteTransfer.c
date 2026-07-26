/*
 * XREFs of McTemplateK0q_EtwWriteTransfer @ 0x1C00A3E6C
 * Callers:
 *     ndisTracePeriodicReceivesStart @ 0x1C00A3D68 (ndisTracePeriodicReceivesStart.c)
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A74A8 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisNsiClientParameterChangeHandler @ 0x1C00FE3F0 (ndisNsiClientParameterChangeHandler.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C005D34C (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0q_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, int a4)
{
  _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6 = &v9;
  v8 = 0;
  v7 = 4;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, a2, a3, 2u, &v5);
}
