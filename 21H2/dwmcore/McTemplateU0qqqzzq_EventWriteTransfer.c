/*
 * XREFs of McTemplateU0qqqzzq_EventWriteTransfer @ 0x1800B217C
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800B0708 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B23CC (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0qqqzzq_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8)
{
  const wchar_t *v8; // rcx
  __int64 v9; // rax
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // r8
  const wchar_t *v13; // rcx
  bool v14; // zf
  _BYTE v16[16]; // [rsp+30h] [rbp-49h] BYREF
  int *v17; // [rsp+40h] [rbp-39h]
  __int64 v18; // [rsp+48h] [rbp-31h]
  int *v19; // [rsp+50h] [rbp-29h]
  __int64 v20; // [rsp+58h] [rbp-21h]
  char *v21; // [rsp+60h] [rbp-19h]
  __int64 v22; // [rsp+68h] [rbp-11h]
  const wchar_t *v23; // [rsp+70h] [rbp-9h]
  int v24; // [rsp+78h] [rbp-1h]
  int v25; // [rsp+7Ch] [rbp+3h]
  const wchar_t *v26; // [rsp+80h] [rbp+7h]
  int v27; // [rsp+88h] [rbp+Fh]
  int v28; // [rsp+8Ch] [rbp+13h]
  char *v29; // [rsp+90h] [rbp+17h]
  __int64 v30; // [rsp+98h] [rbp+1Fh]
  int v31; // [rsp+D0h] [rbp+57h] BYREF
  int v32; // [rsp+D8h] [rbp+5Fh] BYREF

  v32 = a4;
  v31 = a3;
  v8 = a6;
  v17 = &v31;
  v18 = 4LL;
  v19 = &v32;
  v21 = &a5;
  v9 = -1LL;
  v20 = 4LL;
  v10 = 10;
  v22 = 4LL;
  if ( a6 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a6[v11] );
    v12 = (unsigned int)(2 * v11 + 2);
  }
  else
  {
    v12 = 10LL;
  }
  v24 = v12;
  v25 = 0;
  if ( !a6 )
    v8 = L"NULL";
  v23 = v8;
  v13 = a7;
  v14 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v9;
    while ( a7[v9] );
    v10 = 2 * v9 + 2;
    v14 = a7 == 0LL;
  }
  if ( v14 )
    v13 = L"NULL";
  v27 = v10;
  v26 = v13;
  v29 = &a8;
  v28 = 0;
  v30 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_TELEMETRY_ANIMATION_TTFF_ANALYSIS_EVENT,
           v12,
           7LL,
           v16);
}
