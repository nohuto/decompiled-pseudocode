/*
 * XREFs of ?OpmReset@ADAPTER_DISPLAY@@AEAAXXZ @ 0x1C02C15B4
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02C25BC (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::OpmReset(DXGADAPTER **this)
{
  DXGADAPTER **i; // rax
  _BYTE v3[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 6736LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 6736LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v3, (struct DXGFASTMUTEX *const)(this + 46), 0);
  for ( i = (DXGADAPTER **)this[44]; i != this + 44; i = (DXGADAPTER **)*i )
    *((_BYTE *)i + 24) = 1;
  if ( v3[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v3);
}
