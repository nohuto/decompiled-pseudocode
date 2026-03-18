/*
 * XREFs of ?DisableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C02F8D44
 * Callers:
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C013F768 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C02FB820 (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
 */

void __fastcall BLTQUEUE::DisableVSync(struct _KTHREAD **this)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v3; // [rsp+28h] [rbp-20h]
  int v4; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v2, this + 50, 0);
  DXGPUSHLOCK::AcquireExclusive(v3);
  v4 = 2;
  BLTQUEUE::StopVSync((BLTQUEUE *)this, 1);
  *((_DWORD *)this + 234) &= ~8u;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v2);
}
