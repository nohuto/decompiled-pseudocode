/*
 * XREFs of ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C0261AB0
 * Callers:
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C01633E4 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C02611D0 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C02614C4 (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0261950 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

void __fastcall TdrResetFromTimeoutWorkItem(_QWORD *a1)
{
  ULONG_PTR v1; // rdi
  __int64 v3; // rbp
  __int64 v4; // rcx
  struct _LUID *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rax

  v1 = a1[4];
  v3 = *(_QWORD *)(v1 + 32);
  TdrResetFromTimeout(v1);
  v5 = *(struct _LUID **)(v1 + 2896);
  if ( !v5 || KeGetCurrentThread() == (struct _KTHREAD *)v5 )
  {
    LOBYTE(v5) = 1;
    TdrCompleteRecoveryContext((char *)v1, v5, 1);
    v7 = MEMORY[0xFFFFF78000000320];
    v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10);
    v11[3] = v3;
    v11[4] = v7;
    v11[5] = KeGetCurrentThread();
    v11[6] = v1;
    WdLogEvent5_WdWarning(v11);
  }
  else
  {
    v6 = WdLogNewEntry5_WdEvent(v4, v5);
    *(_QWORD *)(v6 + 24) = 2670LL;
    WdLogEvent5_WdEvent(v6);
  }
  if ( *(struct _KTHREAD **)(v1 + 2896) != KeGetCurrentThread() )
  {
    TdrDereferenceRecoveryContext((_QWORD *)v1, 0);
    operator delete(a1);
  }
}
