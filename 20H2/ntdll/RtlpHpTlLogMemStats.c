/*
 * XREFs of RtlpHpTlLogMemStats @ 0x18010B810
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x180006258 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180006CD0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegFreeRangeRemove @ 0x180006DB8 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegPageRangeCommit @ 0x180023180 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegFree @ 0x1800279F0 (RtlpHpSegFree.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1800281F0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008A8EC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 */

ULONG __fastcall RtlpHpTlLogMemStats(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  ULONG result; // eax
  __int64 v5; // [rsp+30h] [rbp-59h] BYREF
  __int64 v6; // [rsp+38h] [rbp-51h] BYREF
  __int64 v7; // [rsp+40h] [rbp-49h] BYREF
  __int64 v8; // [rsp+48h] [rbp-41h] BYREF
  __int64 v9; // [rsp+50h] [rbp-39h] BYREF
  _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp-29h] BYREF
  __int64 *v11; // [rsp+80h] [rbp-9h]
  __int64 v12; // [rsp+88h] [rbp-1h]
  __int64 *v13; // [rsp+90h] [rbp+7h]
  __int64 v14; // [rsp+98h] [rbp+Fh]
  __int64 *v15; // [rsp+A0h] [rbp+17h]
  __int64 v16; // [rsp+A8h] [rbp+1Fh]
  __int64 *v17; // [rsp+B0h] [rbp+27h]
  __int64 v18; // [rsp+B8h] [rbp+2Fh]
  __int64 *v19; // [rsp+C0h] [rbp+37h]
  __int64 v20; // [rsp+C8h] [rbp+3Fh]

  if ( (unsigned int)dword_180166698 > 5 )
  {
    v5 = a1;
    v11 = &v5;
    v6 = *a2;
    v13 = &v6;
    v7 = a2[1];
    v15 = &v7;
    v8 = a2[2];
    v17 = &v8;
    v9 = a2[3];
    v19 = &v9;
    v12 = 8LL;
    v14 = 8LL;
    v16 = 8LL;
    v18 = 8LL;
    v20 = 8LL;
    return tlgWriteTransfer_EtwEventWriteTransfer(
             (__int64)&dword_180166698,
             (unsigned __int8 *)dword_180131E9F,
             a3,
             a4,
             7u,
             &v10);
  }
  return result;
}
