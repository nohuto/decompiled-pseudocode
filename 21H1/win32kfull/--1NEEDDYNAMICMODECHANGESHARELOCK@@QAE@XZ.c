/*
 * XREFs of ??1NEEDDYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x96A1A
 * Callers:
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YGXPAVPDEV@@W4_CLEANUPTYPE@@@Z @ 0x94DD6 (-vCleanupOwnedRedirectionDeviceBitmaps@@YGXPAVPDEV@@W4_CLEANUPTYPE@@@Z.c)
 *     ?bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@Z@Z @ 0x95996 (-bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z @ 0xD0924 (-vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK(NEEDDYNAMICMODECHANGESHARELOCK *this)
{
  if ( *(_DWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  }
}
