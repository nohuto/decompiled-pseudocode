/*
 * XREFs of HalpInterruptInitDiscard @ 0x140A73AD4
 * Callers:
 *     HalpInterruptInitSystem @ 0x14099C890 (HalpInterruptInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HviGetHardwareFeatures @ 0x1405BF1A0 (HviGetHardwareFeatures.c)
 *     HalpInitializeInterrupts @ 0x140A3A6FC (HalpInitializeInterrupts.c)
 */

__int64 __fastcall HalpInterruptInitDiscard(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  HalpInterruptLock = 0LL;
  HalpDefaultPcIoSpace = HalpAddressUsageList;
  HalpAddressUsageList = (ULONG_PTR)&HalpDefaultPcIoSpace;
  v6 = 0LL;
  if ( HalpHvCpuManager )
  {
    HviGetHardwareFeatures((__int64)&v6, a2, a3, a4);
    if ( (v6 & 0x4000) != 0 )
      HalpInterruptPhysicalModeOnly = 1;
  }
  result = HalpInitializeInterrupts(a1);
  if ( (int)result >= 0 )
  {
    off_140C00770[0] = (__int64 (__fastcall *)())HalpMaskInterrupt;
    off_140C00778[0] = (__int64 (__fastcall *)())HalpUnmaskInterrupt;
    off_140C00810[0] = (__int64 (__fastcall *)())HalpInterruptRequestInterrupt;
    off_140C00818[0] = (__int64 (__fastcall *)())HalpInterruptEnumerateUnmaskedInterrupts;
    off_140C00AD8[0] = (__int64 (__fastcall *)())HaliGetInterruptTranslator;
    off_140C00768[0] = (__int64 (__fastcall *)())HalpSecondaryInterruptQueryPrimaryInformation;
    off_140C00780[0] = (__int64 (__fastcall *)())HalpIsInterruptTypeSecondary;
    off_140C00788[0] = (__int64 (__fastcall *)())HalpAllocateGsivForSecondaryInterrupt;
    off_140C008E0[0] = (__int64 (__fastcall *)())HalpInterruptVectorDataToGsiv;
    off_140C008E8[0] = (__int64 (__fastcall *)())HalpInterruptGetHighestPriorityInterrupt;
    return 0LL;
  }
  return result;
}
