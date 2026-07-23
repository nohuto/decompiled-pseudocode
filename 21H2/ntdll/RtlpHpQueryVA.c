/*
 * XREFs of RtlpHpQueryVA @ 0x180003794
 * Callers:
 *     RtlpHpLargeAlloc @ 0x180003404 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrRelease @ 0x180004F04 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegSegmentInitialize @ 0x180006874 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegMgrCommit @ 0x180022E90 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x18010F224 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x18010F348 (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x18010F3A4 (RtlpHpSegMgrVaCtxInsert.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x1800037E8 (RtlpHpVaMgrCtxQuery.c)
 */

__int64 __fastcall RtlpHpQueryVA(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD v7[3]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-10h]

  RtlpHpVaMgrCtxQuery(&unk_18016DC98, a1, v7);
  if ( a3 )
    *a3 = v7[2];
  if ( a4 )
    *a4 = v8;
  return v7[0];
}
