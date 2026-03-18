/*
 * XREFs of ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C02BB55C
 * Callers:
 *     DpiDisableMsBddFallbackDriver @ 0x1C0388570 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C0388704 (DpiEnableMsBddFallbackDriver.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C000F8B8 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01C80AC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGADAPTER::EnableMsBddFallback(DXGADAPTER *this, char a2)
{
  if ( *((struct _KTHREAD **)this + 18) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 8855LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsStopResetLockExclusiveOwner()", 8855LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry1(1LL, 8856LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 8856LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsBddFallbackDriver(this) )
  {
    WdLogSingleEntry1(1LL, 8858LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"this->IsBddFallbackDriver()", 8858LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a2 )
  {
    *((_DWORD *)this + 50) = 1;
  }
  else
  {
    if ( *((_QWORD *)this + 350) )
    {
      WdLogSingleEntry1(1LL, 8870LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayOnlyAdapter()", 8870LL, 0LL, 0LL, 0LL, 0LL);
    }
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(*((PERESOURCE ***)this + 349), 0LL);
    *((_DWORD *)this + 50) = 3;
  }
}
