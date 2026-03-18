/*
 * XREFs of ?StopVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAXXZ @ 0x1C03BFDE0
 * Callers:
 *     ??1BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAA@XZ @ 0x1C03BFA34 (--1BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAA@XZ.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C0002624 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z @ 0x1C037F4C0 (-VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z.c)
 */

void __fastcall BLTQUEUE_REMOTE_VSYNC_SOURCE::StopVSync(BLTQUEUE_REMOTE_VSYNC_SOURCE *this)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGADAPTER *Adapter; // rax
  __int64 v4; // rdx

  if ( *((_BYTE *)this + 104) )
  {
    *((_BYTE *)this + 104) = 0;
    KeCancelTimer((PKTIMER)((char *)this + 8));
    KeFlushQueuedDpcs();
    Global = DXGGLOBAL_GetGlobal();
    if ( (int)DXG_GUEST_GLOBAL_VMBUS::VmBusSendVsyncControl(
                *((DXG_GUEST_GLOBAL_VMBUS **)Global + 218),
                *(struct _LUID *)((char *)this + 108),
                *((_DWORD *)this + 29),
                (char *)this + 72,
                0) < 0 )
    {
      Adapter = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
      WdLogSingleEntry3(3LL, Adapter, *((unsigned int *)this + 29), v4);
    }
  }
}
