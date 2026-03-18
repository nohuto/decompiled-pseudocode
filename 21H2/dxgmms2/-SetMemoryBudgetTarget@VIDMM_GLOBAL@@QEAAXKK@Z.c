/*
 * XREFs of ?SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z @ 0x1C00D9AA4
 * Callers:
 *     ?VidMmSetMemoryBudgetTarget@@YAXPEAVVIDMM_GLOBAL@@KK@Z @ 0x1C002CFC0 (-VidMmSetMemoryBudgetTarget@@YAXPEAVVIDMM_GLOBAL@@KK@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C009D21C (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::SetMemoryBudgetTarget(struct _KTHREAD **this, int a2, int a3)
{
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6, this + 5130, 0);
  DXGPUSHLOCK::AcquireExclusive(v7);
  v8 = 2;
  dword_1C006E554 = a2;
  dword_1C006E55C = a2;
  dword_1C006E550 = a3;
  dword_1C006E558 = a3;
  VIDMM_GLOBAL::RequestNewBudget((VIDMM_GLOBAL *)this, 1);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
}
