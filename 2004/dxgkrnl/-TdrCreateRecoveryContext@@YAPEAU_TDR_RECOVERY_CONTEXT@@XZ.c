/*
 * XREFs of ?TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ @ 0x1C0265600
 * Callers:
 *     ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z @ 0x1C0264570 (-TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C02FFDB4 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 * Callees:
 *     ?TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C0264520 (-TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x1C0265C28 (-TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z.c)
 */

struct _TDR_RECOVERY_CONTEXT *TdrCreateRecoveryContext(void)
{
  struct _TDR_RECOVERY_CONTEXT *Pool; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  struct _TDR_RECOVERY_CONTEXT *v3; // rbx
  __int64 v4; // rax

  Pool = (struct _TDR_RECOVERY_CONTEXT *)TdrAllocatePool(0xB60uLL, (POOL_TYPE)512);
  v3 = Pool;
  if ( Pool )
  {
    *((_DWORD *)Pool + 4) = 0;
    *((_DWORD *)Pool + 27) = 0;
    *(_DWORD *)Pool = 1380209782;
    *((_DWORD *)Pool + 26) = 1380209782;
    *((_DWORD *)Pool + 30) = 12;
    *((_DWORD *)Pool + 694) = g_TdrConfig;
    *((_DWORD *)Pool + 695) = dword_1C00B2164;
    *((_DWORD *)Pool + 696) = dword_1C00B2170;
    *((_QWORD *)Pool + 14) = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)Pool + 707) = 1380209782;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(v2, v1);
    *(_QWORD *)(v4 + 24) = 2912LL;
    WdLogEvent5_WdError(v4);
  }
  return TdrReferenceRecoveryContext(v3);
}
