/*
 * XREFs of ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00DD934
 * Callers:
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00DDA2C (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C00DDD18 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00A2A18 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::MoveToPenaltyBoxBand(__int64 a1, int a2)
{
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  if ( *(struct _KTHREAD **)(*(_QWORD *)a1 + 44488LL) == KeGetCurrentThread() )
  {
    VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(a1, a2);
  }
  else
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v4, (struct _KTHREAD **)(*(_QWORD *)a1 + 44480LL), 0);
    DXGPUSHLOCK::AcquireExclusive(v5);
    v6 = 2;
    VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(a1, a2);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
  }
}
