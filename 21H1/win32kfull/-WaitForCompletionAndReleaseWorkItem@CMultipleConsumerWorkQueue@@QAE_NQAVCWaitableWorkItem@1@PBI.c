/*
 * XREFs of ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QAE_NQAVCWaitableWorkItem@1@PBIPA_N@Z @ 0x8762E
 * Callers:
 *     ?UmfdClientWaitForCompletion@@YGJPAX0PBI@Z @ 0x875F4 (-UmfdClientWaitForCompletion@@YGJPAX0PBI@Z.c)
 * Callees:
 *     ?UmfdMsgWaitForEvent@@YG_NPAU_KEVENT@@PBI@Z @ 0x9AA7E (-UmfdMsgWaitForEvent@@YG_NPAU_KEVENT@@PBI@Z.c)
 *     ?Destroy@CManualResetEvent@@SGXQAV1@@Z @ 0xD3388 (-Destroy@CManualResetEvent@@SGXQAV1@@Z.c)
 */

bool __userpurge CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem@<al>(
        CMultipleConsumerWorkQueue *this@<ecx>,
        struct CManualResetEvent *a2@<esi>,
        struct CMultipleConsumerWorkQueue::CWaitableWorkItem *const pv,
        const unsigned int *a4,
        bool *a5)
{
  int v6; // edi
  int v7; // esi
  struct _KEVENT *v10; // [esp+0h] [ebp-8h]
  const unsigned int *v11; // [esp+4h] [ebp-4h]
  bool v12; // [esp+17h] [ebp+Fh]

  if ( UmfdMsgWaitForEvent(v10, v11) || !a4 )
  {
    if ( a5 )
      *a5 = 0;
    v6 = *((_DWORD *)this + 1);
    v7 = *((_DWORD *)pv + 5);
    v12 = *((_DWORD *)pv + 1) == 3;
    EngFreeMem(pv);
    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v6) > 8 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v6);
      if ( *(_DWORD *)(v7 + 4) )
        CManualResetEvent::Destroy(a2);
      EngFreeMem((PVOID)v7);
    }
    else
    {
      KeResetEvent(**(PRKEVENT **)(v7 + 4));
      InterlockedPushEntrySList((PSLIST_HEADER)(v6 + 8), (PSLIST_ENTRY)v7);
    }
    return v12;
  }
  else
  {
    if ( a5 )
      *a5 = 1;
    return 0;
  }
}
