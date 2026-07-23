/*
 * XREFs of CmSiProtectViewOfSection @ 0x1402F7A5C
 * Callers:
 *     HvpViewMapMakeViewRangeWriteable @ 0x1405CCD5C (HvpViewMapMakeViewRangeWriteable.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x1406086BC (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapCreateView @ 0x1406FB860 (HvpViewMapCreateView.c)
 *     HvpViewMapMakeViewRangeValid @ 0x1406FB950 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapMakeViewRangeUnCOWByCaller @ 0x1406FBBD8 (HvpViewMapMakeViewRangeUnCOWByCaller.c)
 *     HvpViewMapMakeViewRangeReadOnly @ 0x1406FBD30 (HvpViewMapMakeViewRangeReadOnly.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x1406FBE64 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x140733EF4 (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x1407AE11C (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x1403FAF80 (ZwProtectVirtualMemory.c)
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
