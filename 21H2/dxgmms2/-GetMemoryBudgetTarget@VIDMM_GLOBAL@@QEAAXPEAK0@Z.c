/*
 * XREFs of ?GetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXPEAK0@Z @ 0x1C00D74F8
 * Callers:
 *     ?VidMmGetMemoryBudgetTarget@@YAXPEAVVIDMM_GLOBAL@@PEAK1@Z @ 0x1C002CE00 (-VidMmGetMemoryBudgetTarget@@YAXPEAVVIDMM_GLOBAL@@PEAK1@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::GetMemoryBudgetTarget(struct _KTHREAD **this, unsigned int *a2, unsigned int *a3)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, this + 5130, 0);
  DXGPUSHLOCK::AcquireExclusive(v6);
  *a2 = dword_1C006E554;
  *a3 = dword_1C006E550;
  v7 = 2;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
}
