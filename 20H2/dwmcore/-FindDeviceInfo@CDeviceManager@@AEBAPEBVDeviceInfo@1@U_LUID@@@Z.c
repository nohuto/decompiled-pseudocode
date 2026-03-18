/*
 * XREFs of ?FindDeviceInfo@CDeviceManager@@AEBAPEBVDeviceInfo@1@U_LUID@@@Z @ 0x18005AEDC
 * Callers:
 *     ?GetAvailableDevice@CDeviceManager@@AEBA?AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18005ACE4 (-GetAvailableDevice@CDeviceManager@@AEBA-AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     <none>
 */

const struct CDeviceManager::DeviceInfo *__fastcall CDeviceManager::FindDeviceInfo(
        CDeviceManager *this,
        struct _LUID a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8

  v2 = qword_180348598;
  v3 = 0LL;
  while ( v2 != (_QWORD)xmmword_1803485A0 )
  {
    if ( a2 == *(_QWORD *)(*(_QWORD *)v2 + 936LL) )
      return (const struct CDeviceManager::DeviceInfo *)v2;
    v2 += 16LL;
  }
  return (const struct CDeviceManager::DeviceInfo *)v3;
}
