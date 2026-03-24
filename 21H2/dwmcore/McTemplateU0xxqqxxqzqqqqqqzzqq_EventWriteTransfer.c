/*
 * XREFs of McTemplateU0xxqqxxqzqqqqqqzzqq_EventWriteTransfer @ 0x1801574C4
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800B0708 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B23CC (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xxqqxxqzqqqqqqzzqq_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        const wchar_t *a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        const wchar_t *a17,
        const wchar_t *a18,
        char a19,
        char a20)
{
  const wchar_t *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // r9d
  const wchar_t *v25; // rdx
  __int64 v26; // rcx
  int v27; // r9d
  const wchar_t *v28; // rcx
  bool v29; // zf
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v32; // [rsp+48h] [rbp-C0h]
  __int64 v33; // [rsp+50h] [rbp-B8h]
  __int64 *v34; // [rsp+58h] [rbp-B0h]
  __int64 v35; // [rsp+60h] [rbp-A8h]
  char *v36; // [rsp+68h] [rbp-A0h]
  __int64 v37; // [rsp+70h] [rbp-98h]
  char *v38; // [rsp+78h] [rbp-90h]
  __int64 v39; // [rsp+80h] [rbp-88h]
  char *v40; // [rsp+88h] [rbp-80h]
  __int64 v41; // [rsp+90h] [rbp-78h]
  char *v42; // [rsp+98h] [rbp-70h]
  __int64 v43; // [rsp+A0h] [rbp-68h]
  char *v44; // [rsp+A8h] [rbp-60h]
  __int64 v45; // [rsp+B0h] [rbp-58h]
  const wchar_t *v46; // [rsp+B8h] [rbp-50h]
  int v47; // [rsp+C0h] [rbp-48h]
  int v48; // [rsp+C4h] [rbp-44h]
  char *v49; // [rsp+C8h] [rbp-40h]
  __int64 v50; // [rsp+D0h] [rbp-38h]
  char *v51; // [rsp+D8h] [rbp-30h]
  __int64 v52; // [rsp+E0h] [rbp-28h]
  char *v53; // [rsp+E8h] [rbp-20h]
  __int64 v54; // [rsp+F0h] [rbp-18h]
  char *v55; // [rsp+F8h] [rbp-10h]
  __int64 v56; // [rsp+100h] [rbp-8h]
  char *v57; // [rsp+108h] [rbp+0h]
  __int64 v58; // [rsp+110h] [rbp+8h]
  char *v59; // [rsp+118h] [rbp+10h]
  __int64 v60; // [rsp+120h] [rbp+18h]
  const wchar_t *v61; // [rsp+128h] [rbp+20h]
  int v62; // [rsp+130h] [rbp+28h]
  int v63; // [rsp+134h] [rbp+2Ch]
  const wchar_t *v64; // [rsp+138h] [rbp+30h]
  int v65; // [rsp+140h] [rbp+38h]
  int v66; // [rsp+144h] [rbp+3Ch]
  char *v67; // [rsp+148h] [rbp+40h]
  __int64 v68; // [rsp+150h] [rbp+48h]
  char *v69; // [rsp+158h] [rbp+50h]
  __int64 v70; // [rsp+160h] [rbp+58h]
  __int64 v71; // [rsp+198h] [rbp+90h] BYREF
  __int64 v72; // [rsp+1A0h] [rbp+98h] BYREF

  v72 = a4;
  v71 = a3;
  v20 = a10;
  v32 = &v71;
  v33 = 8LL;
  v34 = &v72;
  v36 = &a5;
  v38 = &a6;
  v21 = 10LL;
  v35 = 8LL;
  v40 = &a7;
  v42 = &a8;
  v44 = &a9;
  v22 = -1LL;
  v37 = 4LL;
  v39 = 4LL;
  v41 = 8LL;
  v43 = 8LL;
  v45 = 4LL;
  if ( a10 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a10[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v24 = 10;
  }
  v47 = v24;
  v48 = 0;
  v49 = &a11;
  if ( !a10 )
    v20 = L"NULL";
  v50 = 4LL;
  v46 = v20;
  v25 = a17;
  v51 = &a12;
  v53 = &a13;
  v55 = &a14;
  v57 = &a15;
  v59 = &a16;
  v52 = 4LL;
  v54 = 4LL;
  v56 = 4LL;
  v58 = 4LL;
  v60 = 4LL;
  if ( a17 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a17[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v27 = 10;
  }
  v28 = a18;
  v62 = v27;
  if ( !a17 )
    v25 = L"NULL";
  v63 = 0;
  v61 = v25;
  v29 = a18 == 0LL;
  if ( a18 )
  {
    do
      ++v22;
    while ( a18[v22] );
    v21 = (unsigned int)(2 * v22 + 2);
    v29 = a18 == 0LL;
  }
  if ( v29 )
    v28 = L"NULL";
  v65 = v21;
  v64 = v28;
  v67 = &a19;
  v66 = 0;
  v69 = &a20;
  v68 = 4LL;
  v70 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ANIMATION_LAST_FRAME_EVENT,
           v21,
           0x13u,
           &v31);
}
