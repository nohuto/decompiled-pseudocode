/*
 * XREFs of ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BDA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18010A170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceResource::RemoveResourceNotifier(__int64 a1, const struct IDeviceResourceNotify *a2)
{
  CDeviceResource::RemoveResourceNotifier((CDeviceResource *)(a1 - *(int *)(a1 - 4) - 304), a2);
}
