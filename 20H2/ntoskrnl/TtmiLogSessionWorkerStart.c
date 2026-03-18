/*
 * XREFs of TtmiLogSessionWorkerStart @ 0x140906D38
 * Callers:
 *     TtmpSessionWorker @ 0x140902880 (TtmpSessionWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

void TtmiLogSessionWorkerStart()
{
  int v0; // r9d
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_140D2D8E8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D2D8E8, 1LL) )
    {
      v5 = 0;
      v3 = &v1;
      v1 = v0;
      v4 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140D2D8E8,
        (unsigned __int8 *)&dword_14002AD95 + 1,
        0LL,
        0LL,
        3u,
        &v2);
    }
  }
}
