/*
 * XREFs of CmSiProtectViewOfSection @ 0x140341D98
 * Callers:
 *     HvpViewMapMakeViewRangeValid @ 0x1405DBF74 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapCreateView @ 0x1405DC148 (HvpViewMapCreateView.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x1406CA8C8 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeUnCOWByCaller @ 0x140702A38 (HvpViewMapMakeViewRangeUnCOWByCaller.c)
 *     HvpViewMapSealRange @ 0x1407043FC (HvpViewMapSealRange.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x1407045C0 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x14072FD00 (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x1407A516C (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x1403F8B70 (ZwProtectVirtualMemory.c)
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
