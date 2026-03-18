/*
 * XREFs of FxCacheBugCheckDriverInfo @ 0x1C0027910
 * Callers:
 *     FxInitialize @ 0x1C0027E24 (FxInitialize.c)
 * Callees:
 *     memmove @ 0x1C0036E00 (memmove.c)
 */

void __fastcall FxCacheBugCheckDriverInfo(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  KIRQL v2; // bp
  _FX_DUMP_DRIVER_INFO_ENTRY *v3; // rdx
  _WDF_BIND_INFO *WdfBindInfo; // rax
  unsigned int v5; // r14d
  _FX_DUMP_DRIVER_INFO_ENTRY *Pool2; // rax
  _FX_DUMP_DRIVER_INFO_ENTRY *v7; // rsi
  _FX_DUMP_DRIVER_INFO_ENTRY *BugCheckDriverInfo; // rbx

  FxDriverGlobals->BugCheckDriverInfoIndex = 0;
  if ( FxLibraryGlobals.BugCheckDriverInfo )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock);
    if ( FxLibraryGlobals.BugCheckDriverInfoIndex >= FxLibraryGlobals.BugCheckDriverInfoCount )
    {
      if ( FxLibraryGlobals.BugCheckDriverInfoCount > 0x23F )
        goto $Done_18;
      v5 = FxLibraryGlobals.BugCheckDriverInfoCount + 10;
      Pool2 = (_FX_DUMP_DRIVER_INFO_ENTRY *)ExAllocatePool2(
                                              64LL,
                                              56LL * (FxLibraryGlobals.BugCheckDriverInfoCount + 10),
                                              1917089862LL);
      v7 = Pool2;
      if ( !Pool2 )
        goto $Done_18;
      BugCheckDriverInfo = FxLibraryGlobals.BugCheckDriverInfo;
      memmove(Pool2, FxLibraryGlobals.BugCheckDriverInfo, 56LL * FxLibraryGlobals.BugCheckDriverInfoCount);
      FxLibraryGlobals.BugCheckDriverInfo = v7;
      FxLibraryGlobals.BugCheckDriverInfoCount = v5;
      ExFreePoolWithTag(BugCheckDriverInfo, 0);
    }
    v3 = &FxLibraryGlobals.BugCheckDriverInfo[FxLibraryGlobals.BugCheckDriverInfoIndex];
    v3->FxDriverGlobals = FxDriverGlobals;
    WdfBindInfo = FxDriverGlobals->WdfBindInfo;
    *(_QWORD *)&v3->Version.Major = *(_QWORD *)&WdfBindInfo->Version.Major;
    v3->Version.Build = WdfBindInfo->Version.Build;
    *(_OWORD *)v3->DriverName = *(_OWORD *)FxDriverGlobals->Public.DriverName;
    *(_OWORD *)&v3->DriverName[16] = *(_OWORD *)&FxDriverGlobals->Public.DriverName[16];
    v3->DriverName[31] = 0;
    FxDriverGlobals->BugCheckDriverInfoIndex = FxLibraryGlobals.BugCheckDriverInfoIndex++;
$Done_18:
    KeReleaseSpinLock(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock, v2);
  }
}
