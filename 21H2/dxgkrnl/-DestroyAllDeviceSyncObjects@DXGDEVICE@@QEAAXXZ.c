/*
 * XREFs of ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C016E398
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C0166120 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C016DF90 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C001E3F0 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceSyncObjects(DXGDEVICE *this)
{
  DXGDEVICESYNCOBJECT **v2; // rbx
  DXGDEVICESYNCOBJECT *v3; // rcx

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 2538LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 2538LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 236) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL) + 8LL) + 616LL))();
    *((_QWORD *)this + 236) = 0LL;
  }
  v2 = (DXGDEVICESYNCOBJECT **)((char *)this + 512);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (DXGDEVICESYNCOBJECT *)v2 )
      break;
    if ( v3 )
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v3);
  }
}
