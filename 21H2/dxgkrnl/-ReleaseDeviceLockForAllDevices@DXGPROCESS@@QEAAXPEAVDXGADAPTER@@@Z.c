/*
 * XREFs of ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C021B5B0
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C016E8D4 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C02DB310 (-DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000BD28 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 */

void __fastcall DXGPROCESS::ReleaseDeviceLockForAllDevices(struct _KTHREAD **this, struct DXGADAPTER *a2)
{
  char *v4; // rax
  struct _KTHREAD *v5; // rbx
  __int64 Current; // rax
  _QWORD v7[3]; // [rsp+50h] [rbp-18h] BYREF

  if ( this[28] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 3351LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DeviceCreationLock.IsExclusiveOwner()",
      3351LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = (char *)(this + 40);
  v5 = this[40];
  v7[0] = v4;
  while ( 1 )
  {
    v7[1] = v5;
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v7);
    if ( !Current )
      break;
    if ( *(struct DXGADAPTER **)(*(_QWORD *)(Current + 16) + 16LL) == a2 )
      ExReleaseResourceLite(*(PERESOURCE *)(Current + 136));
    v5 = *(struct _KTHREAD **)v5;
  }
}
