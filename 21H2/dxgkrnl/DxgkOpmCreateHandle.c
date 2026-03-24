/*
 * XREFs of DxgkOpmCreateHandle @ 0x1C0173DE0
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C001CC94 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0057FA4 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C0173E88 (-OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkOpmCreateHandle(struct _KTHREAD ***this, void *a2, void **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **v8; // rcx
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  if ( !this )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v11 + 24) = 916LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v12 + 24) = 917LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v13 + 24) = 918LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v8 = this[337];
  if ( v8 )
  {
    if ( v8[43] != KeGetCurrentThread() )
    {
      v9 = WdLogNewEntry5_WdAssertion(v8, v6);
      *(_QWORD *)(v9 + 24) = 922LL;
      WdLogEvent5_WdAssertion(v9);
      v8 = this[337];
    }
    return ADAPTER_DISPLAY::OpmCreateHandle((ADAPTER_DISPLAY *)v8, a2, a3);
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(0LL, v6);
    *(_QWORD *)(v14 + 24) = this;
    *(_QWORD *)(v14 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v14);
    return 3221225659LL;
  }
}
