/*
 * XREFs of McTemplateU0qNR0_EventWriteTransfer @ 0x1801130B2
 * Callers:
 *     ?TracePresentStats@CScheduleFrameInfoVolatileData@@QEBAXXZ @ 0x180079DE0 (-TracePresentStats@CScheduleFrameInfoVolatileData@@QEBAXXZ.c)
 *     ?CalculatePresentAndGlitchDeadlines@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007BE34 (-CalculatePresentAndGlitchDeadlines@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0qNR0_EventWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  int v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+54h] [rbp-24h]
  __int64 v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+64h] [rbp-14h]

  v6 = 1;
  v8 = &v6;
  v10 = 0;
  v9 = 4;
  v11 = a5;
  v12 = a4;
  v13 = 0;
  return McGenEventWrite_EventWriteTransfer(Microsoft_Windows_Dwm_Core_Provider_Context, a2, a3, 3u, &v7);
}
