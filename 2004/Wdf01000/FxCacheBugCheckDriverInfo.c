/*
 * XREFs of FxCacheBugCheckDriverInfo @ 0x1C0090498
 * Callers:
 *     FxInitialize @ 0x1C0057038 (FxInitialize.c)
 * Callees:
 *     memmove @ 0x1C001D440 (memmove.c)
 */

void __fastcall FxCacheBugCheckDriverInfo(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  KIRQL v2; // si
  unsigned int v3; // ebp
  _FX_DUMP_DRIVER_INFO_ENTRY *PoolWithTag; // rax
  _FX_DUMP_DRIVER_INFO_ENTRY *v5; // rdi
  _FX_DUMP_DRIVER_INFO_ENTRY *BugCheckDriverInfo; // rcx
  _FX_DUMP_DRIVER_INFO_ENTRY *v7; // rdx
  _WDF_BIND_INFO *WdfBindInfo; // rax

  FxDriverGlobals->BugCheckDriverInfoIndex = 0;
  if ( FxLibraryGlobals.BugCheckDriverInfo )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock);
    if ( FxLibraryGlobals.BugCheckDriverInfoIndex >= FxLibraryGlobals.BugCheckDriverInfoCount )
    {
      if ( FxLibraryGlobals.BugCheckDriverInfoCount > 0x23F )
        goto $Done_72;
      v3 = FxLibraryGlobals.BugCheckDriverInfoCount + 10;
      PoolWithTag = (_FX_DUMP_DRIVER_INFO_ENTRY *)ExAllocatePoolWithTag(
                                                    ExDefaultNonPagedPoolType,
                                                    56LL * (FxLibraryGlobals.BugCheckDriverInfoCount + 10),
                                                    0x72447846u);
      v5 = PoolWithTag;
      if ( !PoolWithTag )
        goto $Done_72;
      memmove(PoolWithTag, FxLibraryGlobals.BugCheckDriverInfo, 56LL * FxLibraryGlobals.BugCheckDriverInfoCount);
      BugCheckDriverInfo = FxLibraryGlobals.BugCheckDriverInfo;
      FxLibraryGlobals.BugCheckDriverInfo = v5;
      FxLibraryGlobals.BugCheckDriverInfoCount = v3;
      ExFreePoolWithTag(BugCheckDriverInfo, 0);
    }
    v7 = &FxLibraryGlobals.BugCheckDriverInfo[FxLibraryGlobals.BugCheckDriverInfoIndex];
    v7->FxDriverGlobals = FxDriverGlobals;
    WdfBindInfo = FxDriverGlobals->WdfBindInfo;
    *(_QWORD *)&v7->Version.Major = *(_QWORD *)&WdfBindInfo->Version.Major;
    v7->Version.Build = WdfBindInfo->Version.Build;
    *(_OWORD *)v7->DriverName = *(_OWORD *)FxDriverGlobals->Public.DriverName;
    *(_OWORD *)&v7->DriverName[16] = *(_OWORD *)&FxDriverGlobals->Public.DriverName[16];
    v7->DriverName[31] = 0;
    FxDriverGlobals->BugCheckDriverInfoIndex = FxLibraryGlobals.BugCheckDriverInfoIndex++;
$Done_72:
    KeReleaseSpinLock(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock, v2);
  }
}
