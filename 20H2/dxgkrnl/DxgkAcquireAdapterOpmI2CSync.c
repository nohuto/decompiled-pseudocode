/*
 * XREFs of DxgkAcquireAdapterOpmI2CSync @ 0x1C016E1FC
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C001C714 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0057094 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0057390 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0057520 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C01630D0 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkAcquireAdapterOpmI2CSync(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax

  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdError(0LL, a2);
    v6 = -1073741811;
    *(_QWORD *)(v5 + 24) = -1073741811LL;
LABEL_8:
    WdLogEvent5_WdError(v5);
    return v6;
  }
  v3 = *(_QWORD *)(a1 + 2696);
  if ( !v3 )
  {
    v5 = WdLogNewEntry5_WdError(a1, a2);
    v6 = -1073741637;
    *(_QWORD *)(v5 + 24) = a1;
    *(_QWORD *)(v5 + 32) = -1073741637LL;
    goto LABEL_8;
  }
  if ( *(struct _KTHREAD **)(v3 + 336) == KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v7 + 24) = 3811LL;
    WdLogEvent5_WdAssertion(v7);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v3 + 320));
  return 0LL;
}
