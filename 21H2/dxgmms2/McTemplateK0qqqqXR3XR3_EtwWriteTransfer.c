/*
 * XREFs of McTemplateK0qqqqXR3XR3_EtwWriteTransfer @ 0x1C00380C8
 * Callers:
 *     ?VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_VSYNC_COOKIE@@IIK@Z @ 0x1C00362B0 (-VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_VSYNC_COOKIE@@IIK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C002E360 (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0qqqqXR3XR3_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-51h] BYREF
  int *v11; // [rsp+40h] [rbp-41h]
  __int64 v12; // [rsp+48h] [rbp-39h]
  char *v13; // [rsp+50h] [rbp-31h]
  __int64 v14; // [rsp+58h] [rbp-29h]
  char *v15; // [rsp+60h] [rbp-21h]
  __int64 v16; // [rsp+68h] [rbp-19h]
  int *v17; // [rsp+70h] [rbp-11h]
  __int64 v18; // [rsp+78h] [rbp-9h]
  __int64 v19; // [rsp+80h] [rbp-1h]
  int v20; // [rsp+88h] [rbp+7h]
  int v21; // [rsp+8Ch] [rbp+Bh]
  __int64 v22; // [rsp+90h] [rbp+Fh]
  int v23; // [rsp+98h] [rbp+17h]
  int v24; // [rsp+9Ch] [rbp+1Bh]
  int v25; // [rsp+D8h] [rbp+57h] BYREF

  v25 = a4;
  v12 = 4LL;
  v21 = 0;
  v11 = &v25;
  v13 = &a5;
  v15 = &a6;
  v24 = 0;
  v17 = &a7;
  v19 = a8;
  v14 = 4LL;
  v16 = 4LL;
  v18 = 4LL;
  v22 = a9;
  v20 = 8 * a7;
  v23 = 8 * a7;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventVSyncHwFlipQueueLogUpdate, a3, 7u, &v10);
}
