/*
 * XREFs of ??_E?$_Ref_count_obj@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@UEAAPEAXI@Z @ 0x1800C8F10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall std::_Ref_count_obj<SpatialInteractionDevices::SpatialInputReportCaps>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xC0);
  return a1;
}
