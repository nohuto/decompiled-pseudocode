/*
 * XREFs of ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C0064790
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C00642D4 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z @ 0x1C00FC628 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C010E424 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 * Callees:
 *     <none>
 */

NEEDDYNAMICMODECHANGESHARELOCK *__fastcall NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
        NEEDDYNAMICMODECHANGESHARELOCK *this,
        int a2)
{
  *(_DWORD *)this = a2;
  if ( a2 )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  }
  return this;
}
