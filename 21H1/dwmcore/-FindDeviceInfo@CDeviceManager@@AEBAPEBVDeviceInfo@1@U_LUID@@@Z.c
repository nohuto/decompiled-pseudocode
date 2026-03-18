/*
 * XREFs of ?FindDeviceInfo@CDeviceManager@@AEBAPEBVDeviceInfo@1@U_LUID@@@Z @ 0x180034AFC
 * Callers:
 *     ?GetAvailableDevice@CDeviceManager@@AEBA?AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180034868 (-GetAvailableDevice@CDeviceManager@@AEBA-AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     <none>
 */

const struct CDeviceManager::DeviceInfo *__fastcall CDeviceManager::FindDeviceInfo(
        CDeviceManager *this,
        struct _LUID a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8

  v2 = qword_18034D608;
  v3 = 0LL;
  while ( v2 != (_QWORD)xmmword_18034D610 )
  {
    if ( a2 == *(_QWORD *)(*(_QWORD *)v2 + 936LL) )
      return (const struct CDeviceManager::DeviceInfo *)v2;
    v2 += 16LL;
  }
  return (const struct CDeviceManager::DeviceInfo *)v3;
}
