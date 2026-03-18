/*
 * XREFs of ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@CJA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800EF570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceResource::RemoveResourceNotifier(__int64 a1, const struct IDeviceResourceNotify *a2)
{
  CDeviceResource::RemoveResourceNotifier((CDeviceResource *)(a1 - *(int *)(a1 - 4) - 656), a2);
}
