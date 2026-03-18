/*
 * XREFs of McTemplateU0qNR0_EventWriteTransfer @ 0x180162B3C
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007A5D0 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ComputeFrameTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007E1A4 (-ComputeFrameTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180029964 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0qNR0_EventWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        int a3,
        int a4,
        __int64 a5)
{
  __int64 v5; // r8
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-48h] BYREF
  int *v8; // [rsp+40h] [rbp-38h]
  int v9; // [rsp+48h] [rbp-30h]
  int v10; // [rsp+4Ch] [rbp-2Ch]
  __int64 v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]
  int v14; // [rsp+90h] [rbp+18h] BYREF

  v14 = a3;
  v5 = (unsigned int)(a4 * a3);
  v8 = &v14;
  v10 = 0;
  v9 = 4;
  v11 = a5;
  v12 = v5;
  v13 = 0;
  return McGenEventWrite_EventWriteTransfer(Microsoft_Windows_Dwm_Core_Provider_Context, a2, v5, 3u, &v7);
}
