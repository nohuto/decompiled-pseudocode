/*
 * XREFs of ??C?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@VCMegaRect@@@std@@@std@@@std@@QEBAPEAVCMegaRect@@XZ @ 0x1800EA214
 * Callers:
 *     ?OccludeRegions@CMegaRectCollection@@AEAAXXZ @ 0x18003FA6C (-OccludeRegions@CMegaRectCollection@@AEAAXXZ.c)
 *     ??$emplace_back@AEBUScribbleFrame@CComputeScribbleScheduler@@@?$deque@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@QEAAAEAUScribbleFrame@CComputeScribbleScheduler@@AEBU23@@Z @ 0x1801A53C8 (--$emplace_back@AEBUScribbleFrame@CComputeScribbleScheduler@@@-$deque@UScribbleFrame@CComputeScr.c)
 *     ??A?$deque@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@QEAAAEAUScribbleFrame@CComputeScribbleScheduler@@_K@Z @ 0x1801A56BC (--A-$deque@UScribbleFrame@CComputeScribbleScheduler@@V-$allocator@UScribbleFrame@CComputeScribbl.c)
 *     ?CheckForWorkerThreadHang@CComputeScribbleScheduler@@AEBA_NI@Z @ 0x1801A5968 (-CheckForWorkerThreadHang@CComputeScribbleScheduler@@AEBA_NI@Z.c)
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801A62F0 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<CMegaRect>>>::operator->(__int64 **a1)
{
  __int64 v1; // rax

  v1 = 0LL;
  if ( *a1 )
    v1 = **a1;
  return *(_QWORD *)(*(_QWORD *)(v1 + 8) + 8 * ((unsigned __int64)a1[2] & (*(_QWORD *)(v1 + 16) - 1LL)));
}
