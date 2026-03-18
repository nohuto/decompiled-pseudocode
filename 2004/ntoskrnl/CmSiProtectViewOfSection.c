/*
 * XREFs of CmSiProtectViewOfSection @ 0x1402D5750
 * Callers:
 *     HvpViewMapMakeViewRangeValid @ 0x140638E1C (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapCreateView @ 0x140638FF0 (HvpViewMapCreateView.c)
 *     HvpViewMapSealRange @ 0x14069C808 (HvpViewMapSealRange.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x14069C9CC (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapMakeViewRangeUnCOWByCaller @ 0x1406DDB74 (HvpViewMapMakeViewRangeUnCOWByCaller.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x1406F822C (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x140721BF0 (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140795E3C (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x1403F3FC0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall CmSiProtectViewOfSection(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = a1;
  v6 = *a2;
  v9 = a3;
  v8 = a4;
  return ZwProtectVirtualMemory(v6, &v9, &v8, a5, a6);
}
