/*
 * XREFs of ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024520
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageReport@1@@Z @ 0x180024620 (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageRe.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CProcessResourceAttributionReporter::ReportHighResourceUsageWorker(
        PTP_CALLBACK_INSTANCE Instance,
        union _SLIST_HEADER *Context,
        PTP_WORK Work)
{
  PSLIST_ENTRY v4; // rbx
  _QWORD *p_Next; // rdi
  struct _SLIST_ENTRY *Next; // rcx

  v4 = InterlockedFlushSList(Context + 1);
  while ( v4 )
  {
    p_Next = &v4->Next;
    CProcessResourceAttributionReporter::ReportHighResourceUsageWorker(
      (CProcessResourceAttributionReporter *)Context,
      (struct CProcessResourceAttributionReporter::HighResourceUsageReport *)v4);
    Next = v4[1].Next;
    v4 = v4->Next;
    if ( Next )
    {
      std::_Deallocate<16,0>(Next, 8 * ((__int64)(p_Next[4] - (_QWORD)Next) >> 3));
      p_Next[2] = 0LL;
      p_Next[3] = 0LL;
      p_Next[4] = 0LL;
    }
    operator delete(p_Next, 0x30uLL);
  }
}
