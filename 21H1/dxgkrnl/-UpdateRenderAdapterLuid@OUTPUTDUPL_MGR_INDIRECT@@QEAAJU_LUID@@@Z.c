/*
 * XREFs of ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1C02985D8
 * Callers:
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C020DF7C (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C014A414 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ?ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0297588 (-ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR_INDIRECT::UpdateRenderAdapterLuid(OUTPUTDUPL_MGR_INDIRECT *this, struct _LUID a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, *((struct _KTHREAD ***)this + 6), 0);
  DXGPUSHLOCK::AcquireExclusive(v6);
  *((_DWORD *)this + 18) = 0;
  v7 = 2;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
  OUTPUTDUPL_MGR::ProcessAdapterReset((OUTPUTDUPL_CONTEXT **)this + 3);
  OUTPUTDUPL_MGR::ProcessPendingDestroy((struct _KTHREAD ***)this + 3, 0LL, 1);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, *((struct _KTHREAD ***)this + 6), 0);
  DXGPUSHLOCK::AcquireExclusive(v6);
  v7 = 2;
  *((struct _LUID *)this + 14) = a2;
  *((_DWORD *)this + 18) = 1;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
  return 0LL;
}
