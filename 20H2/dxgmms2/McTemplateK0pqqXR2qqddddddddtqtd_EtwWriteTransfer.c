/*
 * XREFs of McTemplateK0pqqXR2qqddddddddtqtd_EtwWriteTransfer @ 0x1C002D7D4
 * Callers:
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@I@Z @ 0x1C002B028 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0023D10 (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0pqqXR2qqddddddddtqtd_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21)
{
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v23; // [rsp+40h] [rbp-C0h]
  __int64 v24; // [rsp+48h] [rbp-B8h]
  char *v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  int *v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  __int64 v29; // [rsp+70h] [rbp-90h]
  int v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+7Ch] [rbp-84h]
  char *v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  char *v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  char *v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  char *v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  char *v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  char *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  char *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  char *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  char *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  char *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  char *v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  char *v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  char *v56; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]
  char *v58; // [rsp+150h] [rbp+50h]
  __int64 v59; // [rsp+158h] [rbp+58h]
  __int64 v60; // [rsp+198h] [rbp+98h] BYREF

  v60 = a4;
  v24 = 8LL;
  v31 = 0;
  v23 = &v60;
  v26 = 4LL;
  v25 = &a5;
  v28 = 4LL;
  v27 = &a6;
  v29 = a7;
  v30 = 8 * a6;
  v32 = &a8;
  v34 = &a9;
  v36 = &a10;
  v38 = &a11;
  v40 = &a12;
  v42 = &a13;
  v44 = &a14;
  v46 = &a15;
  v48 = &a16;
  v50 = &a17;
  v52 = &a18;
  v54 = &a19;
  v56 = &a20;
  v58 = &a21;
  v33 = 4LL;
  v35 = 4LL;
  v37 = 4LL;
  v39 = 4LL;
  v41 = 4LL;
  v43 = 4LL;
  v45 = 4LL;
  v47 = 4LL;
  v49 = 4LL;
  v51 = 4LL;
  v53 = 4LL;
  v55 = 4LL;
  v57 = 4LL;
  v59 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &MMIOFlipMultiPlaneOverlay3, a3, 0x13u, &v22);
}
