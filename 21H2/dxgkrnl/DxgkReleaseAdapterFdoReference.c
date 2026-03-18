/*
 * XREFs of DxgkReleaseAdapterFdoReference @ 0x1C02C5358
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 *     DpiFdoResetFdo @ 0x1C038B234 (DpiFdoResetFdo.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000A6A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?ClearDeviceObject@DXGADAPTER@@QEAAXXZ @ 0x1C0046C54 (-ClearDeviceObject@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterFdoReference(DXGADAPTER *this)
{
  if ( this )
  {
    DXGADAPTER::ClearDeviceObject(this);
    DXGADAPTER::ReleaseReferenceNoTracking(this);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"No pAdapter specified, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
