/*
 * XREFs of ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C03BC05C
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01CE5C0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1C03BDE68 (-ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x1C01606B8 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1C01CEF58 (-StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1C03BF230 (-StopVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z.c)
 */

void __fastcall BLTQUEUE::DisableHwVSyncWorker(struct _KTHREAD **this)
{
  bool v2; // zf
  int v3; // edi
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v4, this + 51, 0);
  DXGPUSHLOCK::AcquireExclusive(v5);
  v2 = *((_DWORD *)this + 34) == 1;
  v6 = 2;
  if ( v2 )
  {
    v3 = (*((_DWORD *)this + 238) >> 1) & 1;
    if ( v3 )
      BLTQUEUE::StopVSync(this, 1LL, 7LL);
    *((_DWORD *)this + 34) = 2;
    BLTQUEUE::RecreateVsyncSource((__int64)this, 0, 7);
    if ( v3 )
      BLTQUEUE::StartVSync((__int64)this, 1, 7);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
}
