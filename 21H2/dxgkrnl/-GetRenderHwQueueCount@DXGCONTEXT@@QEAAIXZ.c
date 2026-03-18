/*
 * XREFs of ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C030ED78
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N66@Z @ 0x1C017EED0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C0224DC6 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C02E5B80 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGCONTEXT::GetRenderHwQueueCount(DXGCONTEXT *this)
{
  unsigned int v1; // edx
  _QWORD **v2; // rcx
  _QWORD *v3; // rax

  v1 = 0;
  v2 = (_QWORD **)((char *)this + 408);
  v3 = *v2;
  while ( v3 != v2 && v3 )
  {
    v3 = (_QWORD *)*v3;
    ++v1;
  }
  return v1;
}
