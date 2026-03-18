/*
 * XREFs of ??0NEEDDYNAMICMODECHANGESHARELOCK@@QAE@H@Z @ 0x96A40
 * Callers:
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YGXPAVPDEV@@W4_CLEANUPTYPE@@@Z @ 0x94DD6 (-vCleanupOwnedRedirectionDeviceBitmaps@@YGXPAVPDEV@@W4_CLEANUPTYPE@@@Z.c)
 *     ?bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@Z@Z @ 0x95996 (-bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z @ 0xD0924 (-vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

NEEDDYNAMICMODECHANGESHARELOCK *__thiscall NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
        NEEDDYNAMICMODECHANGESHARELOCK *this,
        int a2)
{
  *(_DWORD *)this = a2;
  if ( a2 )
  {
    GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  }
  return this;
}
