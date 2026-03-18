/*
 * XREFs of ??1CProcessResourceAttributionReporter@@AEAA@XZ @ 0x1801AEDC8
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800DD5DC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@0@@Z @ 0x1800F8D0C (--$_Destroy_range@V-$allocator@V-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcess.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CProcessResourceAttributionReporter::~CProcessResourceAttributionReporter(
        CProcessResourceAttributionReporter *this)
{
  PSLIST_ENTRY v2; // rdi
  _QWORD *p_Next; // rsi
  void *v4; // rcx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  void **v6; // rcx

  WaitForThreadpoolWorkCallbacks(*((PTP_WORK *)this + 1), 1);
  CloseThreadpoolWork(*((PTP_WORK *)this + 1));
  v2 = InterlockedFlushSList((PSLIST_HEADER)this + 1);
  while ( v2 )
  {
    p_Next = &v2->Next;
    v2 = v2->Next;
    v4 = (void *)p_Next[2];
    if ( v4 )
    {
      std::_Deallocate<16,0>(v4, 8 * ((__int64)(p_Next[4] - (_QWORD)v4) >> 3));
      p_Next[2] = 0LL;
      p_Next[3] = 0LL;
      p_Next[4] = 0LL;
    }
    operator delete(p_Next);
  }
  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 7);
  if ( v5 )
    (**v5)(v5, 1LL);
  v6 = (void **)*((_QWORD *)this + 4);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>>(
      v6,
      *((void ***)this + 5));
    std::_Deallocate<16,0>(
      *((void **)this + 4),
      (*((_QWORD *)this + 6) - *((_QWORD *)this + 4)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
}
