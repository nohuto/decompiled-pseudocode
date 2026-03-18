/*
 * XREFs of ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0306790
 * Callers:
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C03068E0 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BDA44 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Start@CVP_SYSTEM_THREAD@@QEAAJXZ @ 0x1C0305084 (-Start@CVP_SYSTEM_THREAD@@QEAAJXZ.c)
 *     ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x1C0306768 (-TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C0306F50 (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall TdrResetFromTimeout(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // r9
  struct _KTHREAD *v3; // rcx
  __int64 Pool2; // rax
  struct _TDR_RECOVERY_CONTEXT *v5; // rax
  __int64 v6; // r8

  if ( (int)DXGADAPTER::Reset(*(DXGADAPTER **)(BugCheckParameter1 + 32), BugCheckParameter1) < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 104) = -1LL;
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  v3 = *(struct _KTHREAD **)(BugCheckParameter1 + 2904);
  if ( (!v3 || KeGetCurrentThread() == v3) && *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 32) + 2792LL) )
  {
    Pool2 = ExAllocatePool2(256LL, 32LL, 1380209782LL, v2);
    if ( !Pool2 )
      TdrBugcheckOnTimeout(BugCheckParameter1);
    *(_QWORD *)(Pool2 + 8) = 0LL;
    *(_DWORD *)(Pool2 + 16) = 0;
    *(_QWORD *)Pool2 = &CTDR_GDI_RESET_THREAD::`vftable';
    v5 = TdrReferenceRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
    *(_QWORD *)(v6 + 24) = v5;
    if ( CVP_SYSTEM_THREAD::Start((void **)v6) < 0 )
      TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  return 0LL;
}
