/*
 * XREFs of CmSiProtectViewOfSection @ 0x14020B57C
 * Callers:
 *     HvpViewMapCreateView @ 0x14068DA14 (HvpViewMapCreateView.c)
 *     HvpViewMapMakeViewRangeValid @ 0x14068DB00 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapMakeViewRangeUnCOWByCaller @ 0x14068DD88 (HvpViewMapMakeViewRangeUnCOWByCaller.c)
 *     HvpViewMapSealRange @ 0x14068DE2C (HvpViewMapSealRange.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x14068DFF0 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x14068ED70 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x14080C508 (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x14083D6A4 (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x14041C160 (ZwProtectVirtualMemory.c)
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
