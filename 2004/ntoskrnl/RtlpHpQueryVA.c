/*
 * XREFs of RtlpHpQueryVA @ 0x1402DAEE8
 * Callers:
 *     RtlpHpGetOwnerHeap @ 0x1402532E4 (RtlpHpGetOwnerHeap.c)
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x1402DA278 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x1402DA368 (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpSegSegmentInitialize @ 0x1402DA478 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpLargeAlloc @ 0x1402DA8E8 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrRelease @ 0x14038723C (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x14058F740 (RtlpHpSegMgrVaCtxFree.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x14025A460 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpEnvGetHeapManager @ 0x14025A6D4 (RtlpHpEnvGetHeapManager.c)
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
