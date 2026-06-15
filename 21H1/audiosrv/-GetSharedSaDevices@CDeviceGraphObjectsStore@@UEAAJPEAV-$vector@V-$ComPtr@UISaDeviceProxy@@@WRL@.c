/*
 * XREFs of ?GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E9140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceGraphObjectsStore::GetSharedSaDevices(__int64 a1, __int64 a2)
{
  return CDeviceGraphObjectsStore::GetSaDevices(a1, a2, 0);
}
