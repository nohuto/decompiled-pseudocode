/*
 * XREFs of _dynamic_atexit_destructor_for__CPointerDeviceCache::s_deviceCache__ @ 0x1800F0F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall dynamic_atexit_destructor_for__CPointerDeviceCache::s_deviceCache__()
{
  std::map<void *,DEVICE_INFO>::~map<void *,DEVICE_INFO>();
}
