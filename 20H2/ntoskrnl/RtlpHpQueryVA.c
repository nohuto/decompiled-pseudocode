/*
 * XREFs of RtlpHpQueryVA @ 0x1403090DC
 * Callers:
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     RtlpHpGetOwnerHeap @ 0x14023811C (RtlpHpGetOwnerHeap.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x140308510 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x140308600 (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpSegSegmentInitialize @ 0x14030866C (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpLargeAlloc @ 0x140308ADC (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrRelease @ 0x1403893FC (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1405931E0 (RtlpHpSegMgrVaCtxFree.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x1402CEBC4 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpEnvGetHeapManager @ 0x1402CEE38 (RtlpHpEnvGetHeapManager.c)
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
