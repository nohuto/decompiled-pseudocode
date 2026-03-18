/*
 * XREFs of ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C0152470
 * Callers:
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C013ED88 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C0152430 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0208670 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x1C02FB108 (-SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z.c)
 * Callees:
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C0152558 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 */

void __fastcall BLTQUEUE::Flush(BLTQUEUE *this)
{
  __int64 v2; // rbp
  __int64 v3; // rbx

  if ( *((_QWORD *)this + 75) )
  {
    v2 = *((unsigned int *)this + 210);
    if ( KeReadStateEvent((PRKEVENT)((char *)this + 536)) )
      *((_DWORD *)this + 232) |= 1u;
    *((LARGE_INTEGER *)this + 5 * v2 + 106) = KeQueryPerformanceCounter(0LL);
    *((_BYTE *)this + 565) = 1;
    BLTQUEUE::IssueCommand(this);
    *((LARGE_INTEGER *)this + 5 * v2 + 109) = KeQueryPerformanceCounter(0LL);
    v3 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)this + 5 * v2 + 110) = v3 * KeQueryTimeIncrement();
    *((_DWORD *)this + 210) = ((_BYTE)v2 - 1) & 1;
  }
}
