/*
 * XREFs of ?ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C02E7148
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C02E71E8 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0344248 (-ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::ReportDeviceSyncObjects(DXGDEVICE *this)
{
  DXGDEVICESYNCOBJECT **v2; // rdi
  DXGDEVICESYNCOBJECT *i; // rbx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 8565LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      8565LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = (DXGDEVICESYNCOBJECT **)((char *)this + 512);
  for ( i = *v2; i != (DXGDEVICESYNCOBJECT *)v2 && i; i = *(DXGDEVICESYNCOBJECT **)i )
    DXGDEVICESYNCOBJECT::ReportState(i);
}
