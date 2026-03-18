/*
 * XREFs of HalpInterruptInitDiscard @ 0x140AF819C
 * Callers:
 *     HalpInterruptInitSystem @ 0x140A54BA0 (HalpInterruptInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HviGetHardwareFeatures @ 0x140647B00 (HviGetHardwareFeatures.c)
 *     HalpInitializeInterrupts @ 0x140AF82A8 (HalpInitializeInterrupts.c)
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
    off_140C01DC0[0] = (__int64 (__fastcall *)())HalpMaskInterrupt;
    off_140C01DC8[0] = (__int64 (__fastcall *)())HalpUnmaskInterrupt;
    off_140C01E60[0] = (__int64 (__fastcall *)())HalpInterruptRequestInterrupt;
    off_140C01E68[0] = (__int64 (__fastcall *)())HalpInterruptEnumerateUnmaskedInterrupts;
    off_140C02148[0] = (__int64 (__fastcall *)())HaliGetInterruptTranslator;
    off_140C01DB8[0] = (__int64 (__fastcall *)())HalpSecondaryInterruptQueryPrimaryInformation;
    off_140C01DD0[0] = (__int64 (__fastcall *)())HalpIsInterruptTypeSecondary;
    off_140C01DD8[0] = (__int64 (__fastcall *)())HalpAllocateGsivForSecondaryInterrupt;
    off_140C01F30[0] = (__int64 (__fastcall *)())HalpInterruptVectorDataToGsiv;
    off_140C01F38[0] = (__int64 (__fastcall *)())HalpInterruptGetHighestPriorityInterrupt;
    return 0LL;
  }
  return result;
}
