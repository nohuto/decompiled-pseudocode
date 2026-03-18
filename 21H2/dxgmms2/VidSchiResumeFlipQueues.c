/*
 * XREFs of VidSchiResumeFlipQueues @ 0x1C00ABA3C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C009F9F0 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     VidSchResumeSchedulerForSource @ 0x1C00ABA20 (VidSchResumeSchedulerForSource.c)
 * Callees:
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C001C228 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     VidSchiMarkFlipQueuesRunningStateOnPresentInfo @ 0x1C001C300 (VidSchiMarkFlipQueuesRunningStateOnPresentInfo.c)
 */

void __fastcall VidSchiResumeFlipQueues(__int64 a1, int a2)
{
  __int64 i; // rdi
  __int64 v5; // rdx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    if ( _bittest(&a2, i) )
    {
      v5 = *(_QWORD *)(a1 + 8 * i + 3200);
      if ( v5 )
        VidSchiMarkFlipQueuesRunningStateOnPresentInfo(a1, v5, 1u);
    }
  }
  VidSchiUnwaitFlipQueueUnderSchedulerSpinLock(a1);
}
