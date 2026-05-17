/*
 * XREFs of _RtlpHpQueryVA@20 @ 0x4B37951B
 * Callers:
 *     _RtlpHpLargeAlloc@16 @ 0x4B379D22 (_RtlpHpLargeAlloc@16.c)
 *     _RtlpHpSegMgrCommit@28 @ 0x4B37BF36 (_RtlpHpSegMgrCommit@28.c)
 *     _RtlpHpSegMgrRelease@12 @ 0x4B37C3E1 (_RtlpHpSegMgrRelease@12.c)
 *     _RtlpHpSegMgrVaCtxFree@12 @ 0x4B37C6A4 (_RtlpHpSegMgrVaCtxFree@12.c)
 *     _RtlpHpSegMgrVaCtxInitialize@16 @ 0x4B37C7AB (_RtlpHpSegMgrVaCtxInitialize@16.c)
 *     _RtlpHpSegMgrVaCtxInsert@8 @ 0x4B37C7EB (_RtlpHpSegMgrVaCtxInsert@8.c)
 *     _RtlpHpSegSegmentInitialize@12 @ 0x4B37D82A (_RtlpHpSegSegmentInitialize@12.c)
 * Callees:
 *     _RtlpHpVaMgrCtxQuery@12 @ 0x4B37AD9C (_RtlpHpVaMgrCtxQuery@12.c)
 */

int __fastcall RtlpHpQueryVA(int a1, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  _DWORD v7[5]; // [esp+4h] [ebp-14h] BYREF

  RtlpHpVaMgrCtxQuery(v7);
  if ( a2 )
    *a2 = v7[3];
  if ( a3 )
    *a3 = v7[4];
  return v7[0];
}
