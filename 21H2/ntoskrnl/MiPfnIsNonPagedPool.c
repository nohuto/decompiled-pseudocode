/*
 * XREFs of MiPfnIsNonPagedPool @ 0x140544D30
 * Callers:
 *     MiIsPfnLocked @ 0x1403812A8 (MiIsPfnLocked.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

_BOOL8 __fastcall MiPfnIsNonPagedPool(__int64 a1)
{
  __int64 v2; // rcx

  return !MI_PFN_IS_PROTO(a1)
      && (unsigned int)MiGetSystemRegionType((__int64)(*(_QWORD *)(v2 + 8) << 25) >> 16) == 5
      && (*(_BYTE *)(a1 + 34) & 7) == 6;
}
