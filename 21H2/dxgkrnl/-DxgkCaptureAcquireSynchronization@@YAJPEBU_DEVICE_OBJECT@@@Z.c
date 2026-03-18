/*
 * XREFs of ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C02DB1D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C01B468C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C021B3CC (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetDxgAdapterFromChild @ 0x1C0387348 (DpiGetDxgAdapterFromChild.c)
 */

__int64 __fastcall DxgkCaptureAcquireSynchronization(struct _DEVICE_OBJECT *a1)
{
  int DxgAdapterFromChild; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v9; // rdi
  char *v10; // rbx

  DxgAdapterFromChild = DpiGetDxgAdapterFromChild(a1);
  v6 = DxgAdapterFromChild;
  if ( DxgAdapterFromChild >= 0 )
  {
    Current = DXGPROCESS::GetCurrent(v3, v2, v4, v5);
    v9 = (struct _KTHREAD **)Current;
    if ( Current )
    {
      v10 = (char *)Current + 216;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v10, 0LL);
      *((_QWORD *)v10 + 1) = KeGetCurrentThread();
      DXGPROCESS::AcquireDeviceLockForAllDevices(v9, 0LL);
      DXGADAPTER::AcquireCoreSync(0LL, 1);
      DXGADAPTER::AcquireDdiSync(0LL, 1);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid process context, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, DxgAdapterFromChild);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DpiGetDxgAdapterFromChild failed in DxgkCaptureSynchronize, returning 0x%I64x",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v6;
  }
}
