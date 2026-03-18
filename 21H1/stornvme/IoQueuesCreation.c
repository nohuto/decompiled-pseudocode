/*
 * XREFs of IoQueuesCreation @ 0x1C000AA68
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000C7F0 (NVMeControllerInitPart2.c)
 * Callees:
 *     CalculateTimeDurationIn100ns @ 0x1C0004850 (CalculateTimeDurationIn100ns.c)
 *     IoQueuesFreeResources @ 0x1C000B0C4 (IoQueuesFreeResources.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0018040 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C0018720 (NVMeIoSubmissionQueueCreate.c)
 */

char __fastcall IoQueuesCreation(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // eax
  unsigned int v5; // eax
  __int64 v6; // r10
  __int64 v7; // r11
  int v8; // [rsp+20h] [rbp-78h]
  int v9; // [rsp+20h] [rbp-78h]
  __int64 v10; // [rsp+28h] [rbp-70h]
  __int64 v11; // [rsp+28h] [rbp-70h]
  __int64 v12; // [rsp+30h] [rbp-68h]
  __int64 v13; // [rsp+30h] [rbp-68h]
  int v14; // [rsp+38h] [rbp-60h]
  int v15; // [rsp+38h] [rbp-60h]
  int v16; // [rsp+40h] [rbp-58h]
  int v17; // [rsp+40h] [rbp-58h]
  __int64 v18; // [rsp+48h] [rbp-50h]
  __int64 v19; // [rsp+48h] [rbp-50h]
  __int64 v20; // [rsp+50h] [rbp-48h]
  __int64 v21; // [rsp+50h] [rbp-48h]
  __int64 v22; // [rsp+58h] [rbp-40h]
  __int64 v23; // [rsp+58h] [rbp-40h]
  __int64 v24; // [rsp+60h] [rbp-38h]
  __int64 v25; // [rsp+60h] [rbp-38h]
  __int64 v26; // [rsp+68h] [rbp-30h]
  __int64 v27; // [rsp+68h] [rbp-30h]
  __int64 v28; // [rsp+70h] [rbp-28h]
  __int64 v29; // [rsp+70h] [rbp-28h]
  __int64 v30; // [rsp+78h] [rbp-20h]
  __int64 v31; // [rsp+78h] [rbp-20h]
  __int64 v32; // [rsp+80h] [rbp-18h]
  __int64 v33; // [rsp+80h] [rbp-18h]
  __int64 v34; // [rsp+88h] [rbp-10h]
  __int64 v35; // [rsp+88h] [rbp-10h]
  __int64 v36; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v37; // [rsp+B8h] [rbp+20h] BYREF

  v36 = 0LL;
  v37 = 0LL;
  StorPortExtendedFunction(47LL, a1, &v37, &v36, v8, v10, v12, v14, v16, v18, v20, v22, v24, v26, v28, v30, v32, v34);
  v2 = v36;
  if ( !(unsigned __int8)NVMeIoCompletionQueueCreate(a1) )
  {
    v3 = 23;
LABEL_5:
    *(_DWORD *)(a1 + 28) = v3;
    IoQueuesFreeResources(a1);
    return 0;
  }
  if ( !(unsigned __int8)NVMeIoSubmissionQueueCreate(a1) )
  {
    v3 = 22;
    goto LABEL_5;
  }
  StorPortExtendedFunction(47LL, a1, &v37, &v36, v9, v11, v13, v15, v17, v19, v21, v23, v25, v27, v29, v31, v33, v35);
  v5 = CalculateTimeDurationIn100ns(v36 - v2, v37);
  StorPortExtendedFunction(
    86LL,
    a1,
    0LL,
    0LL,
    10,
    L"IOQ-Sync Latency",
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
