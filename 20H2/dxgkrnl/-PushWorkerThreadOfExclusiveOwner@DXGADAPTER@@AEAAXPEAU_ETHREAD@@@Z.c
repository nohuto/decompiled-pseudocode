/*
 * XREFs of ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1C000CF9C
 * Callers:
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014820C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DxgkCddPushWorkerThreadOfOwner@@YAXQEAX0PEAU_ETHREAD@@@Z @ 0x1C0148510 (-DxgkCddPushWorkerThreadOfOwner@@YAXQEAX0PEAU_ETHREAD@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGADAPTER::PushWorkerThreadOfExclusiveOwner(PERESOURCE *this, struct _ERESOURCE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 2983LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( this[24] )
  {
    v7 = WdLogNewEntry5_WdCriticalError(v5, v4);
    *(_QWORD *)(v7 + 24) = 275LL;
    *(_QWORD *)(v7 + 32) = 17LL;
    *(_QWORD *)(v7 + 40) = this;
    *(_OWORD *)(v7 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  this[24] = this[23];
  this[23] = a2;
}
