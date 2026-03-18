/*
 * XREFs of FxCacheBugCheckDriverInfo @ 0x1C008FB98
 * Callers:
 *     FxInitialize @ 0x1C0056768 (FxInitialize.c)
 * Callees:
 *     memmove @ 0x1C001CB80 (memmove.c)
 */

void __fastcall FxCacheBugCheckDriverInfo(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  KIRQL v2; // si
  int v3; // ebp
  PVOID PoolWithTag; // rax
  void *v5; // rdi
  PVOID v6; // rcx
  char *v7; // rdx
  _WDF_BIND_INFO *WdfBindInfo; // rax

  FxDriverGlobals->BugCheckDriverInfoIndex = 0;
  if ( P )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( dword_1C00A9F20 >= dword_1C00A9F24 )
    {
      if ( dword_1C00A9F24 > 0x23F )
        goto $Done_72;
      v3 = dword_1C00A9F24 + 10;
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 56LL * (dword_1C00A9F24 + 10), 0x72447846u);
      v5 = PoolWithTag;
      if ( !PoolWithTag )
        goto $Done_72;
      memmove(PoolWithTag, P, 56LL * dword_1C00A9F24);
      v6 = P;
      P = v5;
      dword_1C00A9F24 = v3;
      ExFreePoolWithTag(v6, 0);
    }
    v7 = (char *)P + 56 * dword_1C00A9F20;
    *(_QWORD *)v7 = FxDriverGlobals;
    WdfBindInfo = FxDriverGlobals->WdfBindInfo;
    *((_QWORD *)v7 + 1) = *(_QWORD *)&WdfBindInfo->Version.Major;
    *((_DWORD *)v7 + 4) = WdfBindInfo->Version.Build;
    *(_OWORD *)(v7 + 20) = *(_OWORD *)FxDriverGlobals->Public.DriverName;
    *(_OWORD *)(v7 + 36) = *(_OWORD *)&FxDriverGlobals->Public.DriverName[16];
    v7[51] = 0;
    FxDriverGlobals->BugCheckDriverInfoIndex = dword_1C00A9F20++;
$Done_72:
    KeReleaseSpinLock(&SpinLock, v2);
  }
}
