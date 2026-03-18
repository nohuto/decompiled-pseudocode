/*
 * XREFs of ?SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z @ 0x1C00B4894
 * Callers:
 *     ?VidMmSetMemoryBudgetTarget@@YAXPEAVVIDMM_GLOBAL@@KK@Z @ 0x1C0022160 (-VidMmSetMemoryBudgetTarget@@YAXPEAVVIDMM_GLOBAL@@KK@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011A88 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0012350 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00123C8 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0082848 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::SetMemoryBudgetTarget(struct _KTHREAD **this, int a2, int a3)
{
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6, this + 5130, 0LL);
  DXGPUSHLOCK::AcquireExclusive(v7);
  v8 = 2;
  dword_1C00514E4 = a2;
  dword_1C00514EC = a2;
  dword_1C00514E0 = a3;
  dword_1C00514E8 = a3;
  VIDMM_GLOBAL::RequestNewBudget((VIDMM_GLOBAL *)this, 1);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
}
