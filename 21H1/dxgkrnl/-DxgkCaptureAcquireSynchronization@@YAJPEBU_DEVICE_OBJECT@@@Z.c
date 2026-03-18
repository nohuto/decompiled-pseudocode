/*
 * XREFs of ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C0228050
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000A490 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0127674 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C027F7D8 (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetDxgAdapterFromChild @ 0x1C02C1EF0 (DpiGetDxgAdapterFromChild.c)
 */

__int64 __fastcall DxgkCaptureAcquireSynchronization(struct _DEVICE_OBJECT *a1)
{
  int DxgAdapterFromChild; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGPROCESS *v10; // rdi
  char *v11; // rbx

  DxgAdapterFromChild = DpiGetDxgAdapterFromChild(a1);
  v4 = DxgAdapterFromChild;
  if ( DxgAdapterFromChild < 0 )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2);
LABEL_3:
    *(_QWORD *)(v5 + 24) = v4;
    WdLogEvent5_WdError(v5);
    return (unsigned int)v4;
  }
  Current = DXGPROCESS::GetCurrent(v3, v2);
  v10 = Current;
  if ( !Current )
  {
    v5 = WdLogNewEntry5_WdError(v9, v8);
    v4 = -1073741811LL;
    goto LABEL_3;
  }
  v11 = (char *)Current + 176;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v11, 0LL);
  *((_QWORD *)v11 + 1) = KeGetCurrentThread();
  DXGPROCESS::AcquireDeviceLockForAllDevices(v10, 0LL);
  DXGADAPTER::AcquireCoreSync(0LL, 1);
  DXGADAPTER::AcquireDdiSync(0LL, 1);
  return 0LL;
}
