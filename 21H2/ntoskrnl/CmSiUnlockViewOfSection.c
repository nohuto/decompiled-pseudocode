/*
 * XREFs of CmSiUnlockViewOfSection @ 0x14020B600
 * Callers:
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x14068DFF0 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x14068ED70 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x14080C508 (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x14083D6A4 (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 * Callees:
 *     ZwUnlockVirtualMemory @ 0x14041F240 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall CmSiUnlockViewOfSection(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = a1;
  v4 = *a2;
  v7 = a3;
  v6 = a4;
  return ZwUnlockVirtualMemory(v4, &v7, &v6, 1LL);
}
