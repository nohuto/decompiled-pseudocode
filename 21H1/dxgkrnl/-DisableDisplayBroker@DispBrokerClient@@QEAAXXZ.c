/*
 * XREFs of ?DisableDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x1C0019058
 * Callers:
 *     ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C014F214 (--1DXGSESSIONDATA@@QEAA@XZ.c)
 *     ?DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z @ 0x1C0156970 (-DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DispBrokerClient::DisableDisplayBroker(struct _KTHREAD **this)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v3; // [rsp+28h] [rbp-20h]
  int v4; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v2, this + 2, 0);
  DXGPUSHLOCK::AcquireExclusive(v3);
  v4 = 2;
  *((_BYTE *)this + 8) = 0;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v2);
}
