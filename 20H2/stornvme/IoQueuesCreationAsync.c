/*
 * XREFs of IoQueuesCreationAsync @ 0x1C000AB9C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000C7A0 (NVMeControllerInitPart2.c)
 * Callees:
 *     CalculateTimeDurationIn100ns @ 0x1C000484C (CalculateTimeDurationIn100ns.c)
 *     IoQueuesFreeResources @ 0x1C000B074 (IoQueuesFreeResources.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0017FB0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C0018690 (NVMeIoSubmissionQueueCreate.c)
 */

char __fastcall IoQueuesCreationAsync(_DWORD *a1)
{
  _DWORD *v1; // rdi
  __int64 v3; // r14
  unsigned int v5; // eax
  __int64 v6; // r10
  __int64 v7; // r11
  int v8; // [rsp+20h] [rbp-98h]
  int v9; // [rsp+20h] [rbp-98h]
  __int64 v10; // [rsp+28h] [rbp-90h]
  __int64 v11; // [rsp+28h] [rbp-90h]
  __int64 v12; // [rsp+28h] [rbp-90h]
  __int64 v13; // [rsp+28h] [rbp-90h]
  __int64 v14; // [rsp+28h] [rbp-90h]
  __int64 v15; // [rsp+28h] [rbp-90h]
  __int64 v16; // [rsp+30h] [rbp-88h]
  __int64 v17; // [rsp+30h] [rbp-88h]
  __int64 v18; // [rsp+30h] [rbp-88h]
  __int64 v19; // [rsp+30h] [rbp-88h]
  __int64 v20; // [rsp+30h] [rbp-88h]
  __int64 v21; // [rsp+30h] [rbp-88h]
  int v22; // [rsp+38h] [rbp-80h]
  int v23; // [rsp+38h] [rbp-80h]
  int v24; // [rsp+38h] [rbp-80h]
  int v25; // [rsp+38h] [rbp-80h]
  int v26; // [rsp+38h] [rbp-80h]
  int v27; // [rsp+38h] [rbp-80h]
  int v28; // [rsp+40h] [rbp-78h]
  int v29; // [rsp+40h] [rbp-78h]
  int v30; // [rsp+40h] [rbp-78h]
  int v31; // [rsp+40h] [rbp-78h]
  int v32; // [rsp+40h] [rbp-78h]
  int v33; // [rsp+40h] [rbp-78h]
  __int64 v34; // [rsp+48h] [rbp-70h]
  __int64 v35; // [rsp+48h] [rbp-70h]
  __int64 v36; // [rsp+48h] [rbp-70h]
  __int64 v37; // [rsp+48h] [rbp-70h]
  __int64 v38; // [rsp+48h] [rbp-70h]
  __int64 v39; // [rsp+48h] [rbp-70h]
  __int64 v40; // [rsp+50h] [rbp-68h]
  __int64 v41; // [rsp+50h] [rbp-68h]
  __int64 v42; // [rsp+50h] [rbp-68h]
  __int64 v43; // [rsp+50h] [rbp-68h]
  __int64 v44; // [rsp+50h] [rbp-68h]
  __int64 v45; // [rsp+50h] [rbp-68h]
  __int64 v46; // [rsp+58h] [rbp-60h]
  __int64 v47; // [rsp+58h] [rbp-60h]
  __int64 v48; // [rsp+58h] [rbp-60h]
  __int64 v49; // [rsp+58h] [rbp-60h]
  __int64 v50; // [rsp+58h] [rbp-60h]
  __int64 v51; // [rsp+58h] [rbp-60h]
  __int64 v52; // [rsp+60h] [rbp-58h]
  __int64 v53; // [rsp+60h] [rbp-58h]
  __int64 v54; // [rsp+60h] [rbp-58h]
  __int64 v55; // [rsp+60h] [rbp-58h]
  __int64 v56; // [rsp+60h] [rbp-58h]
  __int64 v57; // [rsp+60h] [rbp-58h]
  __int64 v58; // [rsp+68h] [rbp-50h]
  __int64 v59; // [rsp+68h] [rbp-50h]
  __int64 v60; // [rsp+68h] [rbp-50h]
  __int64 v61; // [rsp+68h] [rbp-50h]
  __int64 v62; // [rsp+68h] [rbp-50h]
  __int64 v63; // [rsp+68h] [rbp-50h]
  __int64 v64; // [rsp+70h] [rbp-48h]
  __int64 v65; // [rsp+70h] [rbp-48h]
  __int64 v66; // [rsp+70h] [rbp-48h]
  __int64 v67; // [rsp+70h] [rbp-48h]
  __int64 v68; // [rsp+70h] [rbp-48h]
  __int64 v69; // [rsp+70h] [rbp-48h]
  __int64 v70; // [rsp+78h] [rbp-40h]
  __int64 v71; // [rsp+78h] [rbp-40h]
  __int64 v72; // [rsp+78h] [rbp-40h]
  __int64 v73; // [rsp+78h] [rbp-40h]
  __int64 v74; // [rsp+78h] [rbp-40h]
  __int64 v75; // [rsp+78h] [rbp-40h]
  __int64 v76; // [rsp+80h] [rbp-38h]
  __int64 v77; // [rsp+80h] [rbp-38h]
  __int64 v78; // [rsp+80h] [rbp-38h]
  __int64 v79; // [rsp+80h] [rbp-38h]
  __int64 v80; // [rsp+80h] [rbp-38h]
  __int64 v81; // [rsp+80h] [rbp-38h]
  __int64 v82; // [rsp+88h] [rbp-30h]
  __int64 v83; // [rsp+88h] [rbp-30h]
  __int64 v84; // [rsp+88h] [rbp-30h]
  __int64 v85; // [rsp+88h] [rbp-30h]
  __int64 v86; // [rsp+88h] [rbp-30h]
  __int64 v87; // [rsp+88h] [rbp-30h]
  __int64 v88; // [rsp+C0h] [rbp+8h] BYREF
  unsigned __int64 v89; // [rsp+D0h] [rbp+18h] BYREF

  v1 = a1 + 978;
  v88 = 0LL;
  v89 = 0LL;
  StorPortExtendedFunction(99LL, a1, a1 + 978, 0LL, 0, v10, v16, v22, v28, v34, v40, v46, v52, v58, v64, v70, v76, v82);
  StorPortExtendedFunction(99LL, a1, a1 + 984, 0LL, 0, v11, v17, v23, v29, v35, v41, v47, v53, v59, v65, v71, v77, v83);
  StorPortExtendedFunction(47LL, a1, &v89, &v88, v8, v12, v18, v24, v30, v36, v42, v48, v54, v60, v66, v72, v78, v84);
  v3 = v88;
  a1[205] = 0;
  if ( !(unsigned __int8)NVMeIoCompletionQueueCreate((int)a1) )
  {
    a1[7] = 23;
LABEL_3:
    IoQueuesFreeResources(a1);
    return 0;
  }
  StorPortExtendedFunction(100LL, a1, v1, 0LL, 0, v13, v19, v25, v31, v37, v43, v49, v55, v61, v67, v73, v79, v85);
  if ( a1[7] )
    goto LABEL_3;
  a1[204] = 0;
  if ( !(unsigned __int8)NVMeIoSubmissionQueueCreate((int)a1) )
  {
    a1[7] = 22;
    goto LABEL_3;
  }
  StorPortExtendedFunction(100LL, a1, a1 + 984, 0LL, 0, v14, v20, v26, v32, v38, v44, v50, v56, v62, v68, v74, v80, v86);
  if ( a1[7] )
    goto LABEL_3;
  StorPortExtendedFunction(47LL, a1, &v89, &v88, v9, v15, v21, v27, v33, v39, v45, v51, v57, v63, v69, v75, v81, v87);
  v5 = CalculateTimeDurationIn100ns(v88 - v3, v89);
  StorPortExtendedFunction(
    86LL,
    a1,
    0LL,
    0LL,
    10,
    L"IOQ-Async Latency",
    64LL,
    4,
    0,
    0LL,
    L"Latency",
    v5,
    L"CQ Count",
    v7,
    L"SQ Count",
    v6,
    0LL,
    0LL);
  return 1;
}
