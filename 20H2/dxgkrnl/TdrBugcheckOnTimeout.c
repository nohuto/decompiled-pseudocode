/*
 * XREFs of TdrBugcheckOnTimeout @ 0x1C0265460
 * Callers:
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020D478 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0215990 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z @ 0x1C0263590 (-TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z.c)
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C02647E4 (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0264A10 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0264C70 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrResetFromTimeoutAsync@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0264D50 (-TdrResetFromTimeoutAsync@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ @ 0x1C02651B0 (-Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C02FEE14 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 * Callees:
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02648A4 (-TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0264F18 (-TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

void __fastcall __noreturn TdrBugcheckOnTimeout(ULONG_PTR BugCheckParameter1, int a2, int a3)
{
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v5; // rbp
  struct _TDR_RECOVERY_CONTEXT *v6; // rcx
  unsigned int v7; // eax
  PVOID PoolWithTag; // rax
  __int64 v9; // rdi
  int v10; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]
  void *BugCheckParameter2; // [rsp+40h] [rbp+8h]

  BugCheckParameter4 = a3;
  v5 = a2;
  BugCheckParameter2 = (void *)TdrGetDbgOwnerTag((const struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
  if ( !BugCheckParameter2 || BugCheckParameter2 == (void *)-1LL )
    BugCheckParameter2 = retaddr;
  if ( BugCheckParameter1 )
  {
    TdrUpdateDbgBuffer(v6);
    if ( *(_QWORD *)(BugCheckParameter1 + 2840) )
    {
      if ( *(_QWORD *)(BugCheckParameter1 + 2848) )
      {
        v7 = *(_DWORD *)(BugCheckParameter1 + 2848);
        if ( v7 )
        {
          if ( v7 < 0x1000 )
            v7 = 4096;
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v7, 0x52445476u);
          v9 = (__int64)PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, *(const void **)(BugCheckParameter1 + 2840), *(_QWORD *)(BugCheckParameter1 + 2848));
            v10 = *(_DWORD *)(BugCheckParameter1 + 2848);
            if ( v10 )
            {
              qword_1C00B2568 = v9;
              dword_1C00B2564 = v10;
            }
            WdDbgReportCancel(*(_QWORD *)(BugCheckParameter1 + 2832));
          }
        }
      }
    }
  }
  KeBugCheckEx(0x116u, BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, v5, BugCheckParameter4);
}
