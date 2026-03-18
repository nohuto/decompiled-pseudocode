/*
 * XREFs of ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C02FC21C
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C0117194 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1C02FDD40 (-ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C00DDD74 (-StartVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_N@Z @ 0x1C0167BD8 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_N@Z.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C02FED90 (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
 */

void __fastcall BLTQUEUE::DisableHwVSyncWorker(struct _KTHREAD **this)
{
  bool v2; // zf
  int v3; // edi
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v4, this + 50, 0);
  DXGPUSHLOCK::AcquireExclusive(v5);
  v2 = *((_DWORD *)this + 34) == 1;
  v6 = 2;
  if ( v2 )
  {
    v3 = (*((_DWORD *)this + 234) >> 1) & 1;
    if ( v3 )
      BLTQUEUE::StopVSync((BLTQUEUE *)this, 1);
    *((_DWORD *)this + 34) = 2;
    BLTQUEUE::RecreateVsyncSource((BLTQUEUE *)this, 0LL);
    if ( v3 )
      BLTQUEUE::StartVSync((BLTQUEUE *)this, 1);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
}
