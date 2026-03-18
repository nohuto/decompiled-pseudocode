/*
 * XREFs of ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C016051C
 * Callers:
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C0160258 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1C01C79D8 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1C01CEF58 (-StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z.c)
 */

void __fastcall BLTQUEUE::EnableVSync(struct _KTHREAD **this)
{
  int v2; // eax
  _BYTE v3[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v3, this + 51, 0);
  DXGPUSHLOCK::AcquireExclusive(v4);
  *((_DWORD *)this + 238) |= 8u;
  v2 = *((_DWORD *)this + 99);
  v5 = 2;
  if ( v2 > 0 )
    BLTQUEUE::StartVSync(this, 1LL, 6LL);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v3);
}
