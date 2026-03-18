/*
 * XREFs of McTemplateU0zqqqqx_EventWriteTransfer @ 0x1801592D8
 * Callers:
 *     ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x180088308 (-UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800884C8 (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800D600C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0zqqqqx_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  __int64 v8; // rax
  int v9; // ecx
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-49h] BYREF
  const wchar_t *v12; // [rsp+40h] [rbp-39h]
  int v13; // [rsp+48h] [rbp-31h]
  int v14; // [rsp+4Ch] [rbp-2Dh]
  int *v15; // [rsp+50h] [rbp-29h]
  __int64 v16; // [rsp+58h] [rbp-21h]
  char *v17; // [rsp+60h] [rbp-19h]
  __int64 v18; // [rsp+68h] [rbp-11h]
  char *v19; // [rsp+70h] [rbp-9h]
  __int64 v20; // [rsp+78h] [rbp-1h]
  char *v21; // [rsp+80h] [rbp+7h]
  __int64 v22; // [rsp+88h] [rbp+Fh]
  char *v23; // [rsp+90h] [rbp+17h]
  __int64 v24; // [rsp+98h] [rbp+1Fh]
  int v25; // [rsp+D8h] [rbp+5Fh] BYREF

  v25 = a4;
  if ( a3 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a3[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  v13 = v9;
  v14 = 0;
  if ( !a3 )
    a3 = L"NULL";
  v16 = 4LL;
  v12 = a3;
  v15 = &v25;
  v18 = 4LL;
  v17 = &a5;
  v20 = 4LL;
  v19 = &a6;
  v22 = 4LL;
  v21 = &a7;
  v23 = &a8;
  v24 = 8LL;
  return McGenEventWrite_EventWriteTransfer(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ANIMATION_ANALYSIS_DEBUG_EVENT,
           (__int64)a3,
           7u,
           &v11);
}
