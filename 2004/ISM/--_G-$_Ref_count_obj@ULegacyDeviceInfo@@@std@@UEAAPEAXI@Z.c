/*
 * XREFs of ??_G?$_Ref_count_obj@ULegacyDeviceInfo@@@std@@UEAAPEAXI@Z @ 0x18008A210
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall std::_Ref_count_obj<LegacyDeviceInfo>::`scalar deleting destructor'(void *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x620);
  return a1;
}
