/*
 * XREFs of ?GetAvailableDevice@CDeviceManager@@AEBA?AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800473D0
 * Callers:
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003D2B4 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003F0EC (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?FindDeviceInfo@CDeviceManager@@AEBAPEBVDeviceInfo@1@U_LUID@@@Z @ 0x1800479B8 (-FindDeviceInfo@CDeviceManager@@AEBAPEBVDeviceInfo@1@U_LUID@@@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BCAF0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CDeviceManager::GetAvailableDevice(CDeviceManager *a1, struct _LUID a2, _QWORD *a3)
{
  const struct CDeviceManager::DeviceInfo *DeviceInfo; // rax
  unsigned int v4; // r10d
  CMILCOMBase **v5; // r11
  CMILCOMBase *v6; // rcx

  *a3 = 0LL;
  DeviceInfo = CDeviceManager::FindDeviceInfo(a1, a2);
  if ( DeviceInfo )
  {
    v6 = *(CMILCOMBase **)DeviceInfo;
    if ( *(_DWORD *)(*(_QWORD *)DeviceInfo + 1128LL) < (signed int)v4 )
    {
      return 2;
    }
    else
    {
      *v5 = v6;
      CMILCOMBase::InternalAddRef(v6);
      return 1;
    }
  }
  return v4;
}
