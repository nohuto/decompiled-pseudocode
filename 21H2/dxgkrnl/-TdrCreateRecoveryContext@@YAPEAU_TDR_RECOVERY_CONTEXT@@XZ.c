/*
 * XREFs of ?TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ @ 0x1C0306130
 * Callers:
 *     ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z @ 0x1C0305110 (-TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C03BF2E0 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 * Callees:
 *     ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x1C0306768 (-TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z.c)
 */

struct _TDR_RECOVERY_CONTEXT *__fastcall TdrCreateRecoveryContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Pool2; // rax
  struct _TDR_RECOVERY_CONTEXT *v5; // rbx

  Pool2 = ExAllocatePool2(64LL, 2920LL, 1380209782LL, a4);
  v5 = (struct _TDR_RECOVERY_CONTEXT *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = 0;
    *(_DWORD *)(Pool2 + 116) = 0;
    *(_DWORD *)Pool2 = 1380209782;
    *(_DWORD *)(Pool2 + 112) = 1380209782;
    *(_DWORD *)(Pool2 + 128) = 12;
    *(_DWORD *)(Pool2 + 2784) = g_TdrConfig;
    *(_DWORD *)(Pool2 + 2788) = dword_1C0130BFC;
    *(_DWORD *)(Pool2 + 2792) = dword_1C0130C08;
    *(_QWORD *)(Pool2 + 120) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(Pool2 + 2836) = 1380209782;
  }
  else
  {
    WdLogSingleEntry1(2LL, 2920LL);
  }
  return TdrReferenceRecoveryContext(v5);
}
