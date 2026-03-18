/*
 * XREFs of ?GetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXPEAK0@Z @ 0x1C00B1050
 * Callers:
 *     ?VidMmGetMemoryBudgetTarget@@YAXPEAVVIDMM_GLOBAL@@PEAK1@Z @ 0x1C0021F40 (-VidMmGetMemoryBudgetTarget@@YAXPEAVVIDMM_GLOBAL@@PEAK1@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011A88 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0012350 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00123C8 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::GetMemoryBudgetTarget(struct _KTHREAD **this, unsigned int *a2, unsigned int *a3)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, this + 5130, 0LL);
  DXGPUSHLOCK::AcquireExclusive(v6);
  *a2 = dword_1C00514E4;
  *a3 = dword_1C00514E0;
  v7 = 2;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
}
