/*
 * XREFs of PipDmgInitPhaseTwo @ 0x140799AA4
 * Callers:
 *     PiDmaGuardInitialize @ 0x1403B5CE8 (PiDmaGuardInitialize.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     PipDmgInitReadGroupPolicy @ 0x1408A5F60 (PipDmgInitReadGroupPolicy.c)
 *     PipDmgReevaluateQueue @ 0x1408B3F5C (PipDmgReevaluateQueue.c)
 */

__int64 PipDmgInitPhaseTwo()
{
  int GroupPolicy; // eax
  int v2; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-40h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( PipDmaGuardPolicy )
  {
    GroupPolicy = PipDmgInitReadGroupPolicy();
    if ( !GroupPolicy )
      GroupPolicy = 2;
    PipDmaGuardPolicy = GroupPolicy;
    PipDmgReevaluateQueue();
  }
  if ( (unsigned int)dword_140C02DC0 > 5 && tlgKeywordOn((__int64)&dword_140C02DC0, 0x400000000000LL) )
  {
    v6 = 0;
    v2 = PipDmaGuardPolicy;
    v5 = 4;
    v4 = &v2;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02DC0, (unsigned __int8 *)byte_14002434B, 0LL, 0LL, 3u, &v3);
  }
  return 0LL;
}
