/*
 * XREFs of ?GetHidCapsAndPreparsedData@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJPEAU_HIDP_CAPS@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x18001C060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialRimDevice::GetHidCapsAndPreparsedData(
        Windows::Internal::SpatialInteractions::SpatialRimDevice *this,
        struct _HIDP_CAPS *a2,
        struct _HIDP_PREPARSED_DATA **a3)
{
  *a2 = *(struct _HIDP_CAPS *)((char *)this + 72);
  *a3 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 17);
  return 0LL;
}
