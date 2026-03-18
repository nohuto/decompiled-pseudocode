/*
 * XREFs of HalpPowerWriteResetCommand @ 0x14050A93C
 * Callers:
 *     HalpInterruptResetThisProcessor @ 0x140508F00 (HalpInterruptResetThisProcessor.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     HalpInterruptResetAllProcessors @ 0x14051F9A8 (HalpInterruptResetAllProcessors.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     HalpMiscIsLegacyPcType @ 0x14039174C (HalpMiscIsLegacyPcType.c)
 *     HalpAcpiPmRegisterWrite @ 0x1403B2B00 (HalpAcpiPmRegisterWrite.c)
 *     HalpMap @ 0x1403BF3B8 (HalpMap.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalEfiResetSystem @ 0x140510080 (HalEfiResetSystem.c)
 */

void __fastcall __noreturn HalpPowerWriteResetCommand(int a1, volatile signed __int32 *a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx

  if ( HalpRebootHandler )
    HalpRebootHandler();
  if ( !a1 )
  {
    if ( HalpMiscIsLegacyPcType() )
    {
      __outbyte(0x70u, 0xFu);
      __outbyte(0x71u, 0);
      KeStallExecutionProcessor(0x64u);
    }
    if ( !HalFirmwareTypeEfi )
    {
      v5 = HalpMap(0LL, 1LL, 1u, 0LL, 4u);
      if ( v5 )
        *(_WORD *)(v5 + 1138) = 4660;
    }
    if ( (HalpPlatformFlags & 4) != 0 )
    {
      __outbyte(0x70u, 0x15u);
      KeStallExecutionProcessor(1u);
    }
    if ( HalpHvUsedForReboot )
    {
      v4 = 0LL;
      __writemsr(0x40000003u, 1uLL);
    }
    if ( byte_140C4A620 )
    {
      HalpAcpiPmRegisterWrite(8, 0, (__int64)&unk_140C4C0A0, 1u, 0LL);
      KeStallExecutionProcessor(0x1F4u);
    }
    if ( (HalpPlatformFlags & 2) != 0 )
    {
      __outbyte(0x64u, 0xFEu);
      KeStallExecutionProcessor(0x1388u);
    }
    if ( HalFirmwareTypeEfi )
    {
      HalEfiResetSystem(1LL, v4);
      HalEfiResetSystem(0LL, v6);
      __debugbreak();
    }
  }
  if ( a2 )
    _InterlockedDecrement(a2);
  __halt();
}
