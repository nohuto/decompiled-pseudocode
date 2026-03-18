/*
 * XREFs of ?ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01EDA74
 * Callers:
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C01EDA3C (DxgkReleaseAdapterOpmI2CSync.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::ReleaseOpmI2CSync(struct _KTHREAD **this)
{
  if ( this[49] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 3944LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OpmI2CMutex.IsOwner()", 3944LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Release(this + 46);
}
