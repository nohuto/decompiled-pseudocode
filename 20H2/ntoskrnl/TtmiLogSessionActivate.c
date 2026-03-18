/*
 * XREFs of TtmiLogSessionActivate @ 0x140905FAC
 * Callers:
 *     TtmpActivateSessionWorker @ 0x140901F08 (TtmpActivateSessionWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     PsGetProcessSessionIdEx @ 0x1403614B0 (PsGetProcessSessionIdEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

void TtmiLogSessionActivate()
{
  int ProcessSessionId; // eax
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_140D2D8E8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D2D8E8, 1LL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v5 = 0;
      v1 = ProcessSessionId;
      v4 = 4;
      v3 = &v1;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140D2D8E8, (unsigned __int8 *)byte_14002AD21, 0LL, 0LL, 3u, &v2);
    }
  }
}
