/*
 * XREFs of CmSiProtectViewOfSection @ 0x1402E2494
 * Callers:
 *     HvpViewMapMakeViewRangeValid @ 0x140686998 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapCreateView @ 0x140686B6C (HvpViewMapCreateView.c)
 *     HvpViewMapMakeViewRangeUnCOWByCaller @ 0x140692BB4 (HvpViewMapMakeViewRangeUnCOWByCaller.c)
 *     HvpViewMapSealRange @ 0x14069606C (HvpViewMapSealRange.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x140696230 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x1406D4DA8 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x14071FD30 (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x14079608C (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x1403F2D30 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall CmSiProtectViewOfSection(
        ULONG_PTR a1,
        void **a2,
        void *a3,
        ULONG_PTR a4,
        ULONG NewProtect,
        ULONG *a6)
{
  void *v6; // rcx
  ULONG_PTR v8; // [rsp+40h] [rbp+8h] BYREF
  PVOID v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = a1;
  v6 = *a2;
  v9 = a3;
  v8 = a4;
  return ZwProtectVirtualMemory(v6, &v9, &v8, NewProtect, a6);
}
