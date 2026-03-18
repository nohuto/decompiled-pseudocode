/*
 * XREFs of ??0ScribbleFrame@CComputeScribbleScheduler@@QEAA@AEBU01@@Z @ 0x1801A553C
 * Callers:
 *     ??$emplace_back@AEBUScribbleFrame@CComputeScribbleScheduler@@@?$deque@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@QEAAAEAUScribbleFrame@CComputeScribbleScheduler@@AEBU23@@Z @ 0x1801A53C8 (--$emplace_back@AEBUScribbleFrame@CComputeScribbleScheduler@@@-$deque@UScribbleFrame@CComputeScr.c)
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801A62F0 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

CComputeScribbleScheduler::ScribbleFrame *__fastcall CComputeScribbleScheduler::ScribbleFrame::ScribbleFrame(
        CComputeScribbleScheduler::ScribbleFrame *this,
        const struct CComputeScribbleScheduler::ScribbleFrame *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)a2;
  *(_QWORD *)this = *(_QWORD *)a2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  return this;
}
