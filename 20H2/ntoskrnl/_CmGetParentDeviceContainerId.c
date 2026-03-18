/*
 * XREFs of _CmGetParentDeviceContainerId @ 0x1407CC5C8
 * Callers:
 *     _CmUpdateDevicePanel @ 0x140739EE0 (_CmUpdateDevicePanel.c)
 *     _CmUpdateDevicePanelInterface @ 0x14097B700 (_CmUpdateDevicePanelInterface.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x14063FDAC (_PnpGetObjectProperty.c)
 *     _CmGetDeviceParent @ 0x1406E46C8 (_CmGetDeviceParent.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetParentDeviceContainerId(__int64 a1, const WCHAR *a2, __int64 a3)
{
  wchar_t *PoolWithTag; // rax
  wchar_t *v7; // rdi
  int DeviceParent; // ebx
  int v10; // [rsp+60h] [rbp-18h] BYREF
  unsigned int v11[3]; // [rsp+64h] [rbp-14h] BYREF
  int v12; // [rsp+98h] [rbp+20h] BYREF

  v12 = 0;
  v10 = 0;
  v11[0] = 200;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x52504E50u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    DeviceParent = CmGetDeviceParent(a1, a2, PoolWithTag, v11);
    if ( DeviceParent >= 0 )
    {
      DeviceParent = PnpGetObjectProperty(
                       a1,
                       (__int64)v7,
                       1LL,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_ContainerId,
                       (__int64)&v12,
                       a3,
                       16,
                       (__int64)&v10,
                       0);
      if ( DeviceParent >= 0 && (v12 != 13 || v10 != 16) )
        DeviceParent = -1073741823;
    }
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)DeviceParent;
}
