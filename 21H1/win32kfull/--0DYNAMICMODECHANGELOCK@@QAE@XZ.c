/*
 * XREFs of ??0DYNAMICMODECHANGELOCK@@QAE@XZ @ 0x21F4B8
 * Callers:
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YGXPAX00@Z @ 0x220CFB (-pConvertDfbSurfaceToDibNKAPC@@YGXPAX00@Z.c)
 * Callees:
 *     <none>
 */

DYNAMICMODECHANGELOCK *__thiscall DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK(DYNAMICMODECHANGELOCK *this)
{
  GreAcquireSemaphore(_ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", _ghsemDynamicModeChange, 1);
  return this;
}
