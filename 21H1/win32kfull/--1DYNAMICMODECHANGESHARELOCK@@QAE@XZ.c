/*
 * XREFs of ??1DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x7C296
 * Callers:
 *     _NtGdiDdDDICreateDCFromMemory@4 @ 0x7BD76 (_NtGdiDdDDICreateDCFromMemory@4.c)
 *     _NtGdiDdDDIDestroyDCFromMemory@4 @ 0xCB254 (_NtGdiDdDDIDestroyDCFromMemory@4.c)
 *     _DxgkEngBltViaGDI@52 @ 0x1D3921 (_DxgkEngBltViaGDI@52.c)
 *     _GreCreateHalftonePalette@4 @ 0x21E27D (_GreCreateHalftonePalette@4.c)
 * Callees:
 *     <none>
 */

void __thiscall DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(DYNAMICMODECHANGESHARELOCK *this)
{
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
}
