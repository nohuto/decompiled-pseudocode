/*
 * XREFs of _UmfdSessionUninitialize@0 @ 0xD39AC
 * Callers:
 *     <none>
 * Callees:
 *     ?SessionUninitialize@UmfdHostLifeTimeManager@@CGXXZ @ 0xD39E6 (-SessionUninitialize@UmfdHostLifeTimeManager@@CGXXZ.c)
 *     ?Uninitialize@UmfdAllocation@@SGXXZ @ 0xD3A3C (-Uninitialize@UmfdAllocation@@SGXXZ.c)
 *     ?UmfdCallSessionUninitialize@@YGXXZ @ 0xD3A84 (-UmfdCallSessionUninitialize@@YGXXZ.c)
 */

void __stdcall UmfdSessionUninitialize()
{
  PVOID v0; // edi

  UmfdCallSessionUninitialize();
  UmfdAllocation::Uninitialize();
  UmfdHostLifeTimeManager::SessionUninitialize();
  v0 = UmfdFontFileLookup;
  if ( UmfdFontFileLookup )
  {
    ExFreePoolWithTag(*((PVOID *)UmfdFontFileLookup + 7), 0);
    ExFreePoolWithTag(v0, 0);
    UmfdFontFileLookup = 0;
  }
}
