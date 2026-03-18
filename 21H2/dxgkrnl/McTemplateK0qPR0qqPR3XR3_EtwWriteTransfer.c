/*
 * XREFs of McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer @ 0x1C00542D0
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N66@Z @ 0x1C017EED0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0310230 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013C40 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        char a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-51h] BYREF
  int *v11; // [rsp+40h] [rbp-41h]
  __int64 v12; // [rsp+48h] [rbp-39h]
  __int64 v13; // [rsp+50h] [rbp-31h]
  int v14; // [rsp+58h] [rbp-29h]
  int v15; // [rsp+5Ch] [rbp-25h]
  char *v16; // [rsp+60h] [rbp-21h]
  __int64 v17; // [rsp+68h] [rbp-19h]
  int *v18; // [rsp+70h] [rbp-11h]
  __int64 v19; // [rsp+78h] [rbp-9h]
  __int64 v20; // [rsp+80h] [rbp-1h]
  int v21; // [rsp+88h] [rbp+7h]
  int v22; // [rsp+8Ch] [rbp+Bh]
  __int64 v23; // [rsp+90h] [rbp+Fh]
  int v24; // [rsp+98h] [rbp+17h]
  int v25; // [rsp+9Ch] [rbp+1Bh]
  int v26; // [rsp+D8h] [rbp+57h] BYREF

  v26 = a4;
  v12 = 4LL;
  v15 = 0;
  v11 = &v26;
  v13 = a5;
  v14 = 8 * a4;
  v22 = 0;
  v16 = &a6;
  v18 = &a7;
  v20 = a8;
  v25 = 0;
  v17 = 4LL;
  v19 = 4LL;
  v23 = a9;
  v21 = 8 * a7;
  v24 = 8 * a7;
  return McGenEventWrite_EtwWriteTransfer(
           (REGHANDLE *)&DxgkControlGuid_Context,
           &EventSignalSynchronizationObjectFromGpu,
           a3,
           7u,
           &v10);
}
