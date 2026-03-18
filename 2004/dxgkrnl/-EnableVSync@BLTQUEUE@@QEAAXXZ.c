/*
 * XREFs of ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C00DE7C4
 * Callers:
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C00DE6A4 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C0149B38 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C00DEE04 (-StartVSync@BLTQUEUE@@AEAAXH@Z.c)
 */

void __fastcall BLTQUEUE::EnableVSync(struct _KTHREAD **this)
{
  int v2; // eax
  _BYTE v3[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v3, this + 50, 0);
  DXGPUSHLOCK::AcquireExclusive(v4);
  *((_DWORD *)this + 234) |= 8u;
  v2 = *((_DWORD *)this + 97);
  v5 = 2;
  if ( v2 > 0 )
    BLTQUEUE::StartVSync((BLTQUEUE *)this, 1);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v3);
}
