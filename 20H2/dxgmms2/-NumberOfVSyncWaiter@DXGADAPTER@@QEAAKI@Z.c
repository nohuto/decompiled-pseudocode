/*
 * XREFs of ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C0014F78
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004640 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiControlVSyncThread @ 0x1C0014E20 (VidSchiControlVSyncThread.c)
 *     ?VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002A718 (-VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiIndependentVidPnAdaptiveVSync@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_VSYNC_COOKIE@@I_N2@Z @ 0x1C002AE4C (-VidSchiIndependentVidPnAdaptiveVSync@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_VSYNC_COOKIE@@I_N2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::NumberOfVSyncWaiter(DXGADAPTER *this, int a2)
{
  __int64 v2; // r8

  v2 = a2 & (unsigned int)-((*((_DWORD *)this + 642) & 0x10) != 0);
  if ( (unsigned int)v2 >= 0x10 )
    return 0LL;
  else
    return *((unsigned int *)this + v2 + 682);
}
