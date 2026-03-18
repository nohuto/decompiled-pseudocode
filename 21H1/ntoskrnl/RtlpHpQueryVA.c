/*
 * XREFs of RtlpHpQueryVA @ 0x14035F9BC
 * Callers:
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     RtlpHpGetOwnerHeap @ 0x1402AC314 (RtlpHpGetOwnerHeap.c)
 *     RtlpHpLargeAlloc @ 0x14035F3BC (RtlpHpLargeAlloc.c)
 *     RtlpHpSegSegmentInitialize @ 0x14035FE40 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x140360024 (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x140360090 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrRelease @ 0x1403862CC (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x14058F050 (RtlpHpSegMgrVaCtxFree.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x1402B3490 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpEnvGetHeapManager @ 0x1402B3704 (RtlpHpEnvGetHeapManager.c)
 */

__int64 __fastcall RtlpHpQueryVA(__int64 a1, __int128 *a2, _QWORD *a3, _DWORD *a4)
{
  void *HeapManager; // rax
  __int64 v7; // r10
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+40h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v9 = *a2;
  HeapManager = RtlpHpEnvGetHeapManager(&v9);
  RtlpHpVaMgrCtxQuery((__int64)HeapManager + 88, v7, (__int64)&v10);
  if ( a3 )
    *a3 = v11;
  if ( a4 )
    *a4 = DWORD2(v11);
  return v10;
}
