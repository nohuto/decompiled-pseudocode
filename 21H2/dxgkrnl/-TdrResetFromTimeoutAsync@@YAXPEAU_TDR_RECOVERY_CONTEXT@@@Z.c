/*
 * XREFs of ?TdrResetFromTimeoutAsync@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0306870
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x1C0306768 (-TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C0306F50 (TdrBugcheckOnTimeout.c)
 */

void __fastcall TdrResetFromTimeoutAsync(
        struct _TDR_RECOVERY_CONTEXT *BugCheckParameter1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  struct _WORK_QUEUE_ITEM *v6; // r8

  v5 = operator new[](0x28uLL, 0x4B677844u, 64LL, a4);
  if ( !v5 )
    TdrBugcheckOnTimeout((ULONG_PTR)BugCheckParameter1);
  *(_QWORD *)(v5 + 32) = BugCheckParameter1;
  TdrReferenceRecoveryContext(BugCheckParameter1);
  v6->List.Flink = 0LL;
  v6->WorkerRoutine = (PWORKER_THREAD_ROUTINE)TdrResetFromTimeoutWorkItem;
  v6->Parameter = v6;
  ExQueueWorkItem(v6, CriticalWorkQueue);
}
