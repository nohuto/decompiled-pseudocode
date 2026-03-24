/*
 * XREFs of HalpPowerWriteResetCommand @ 0x1404BE30C
 * Callers:
 *     HalpInterruptResetThisProcessor @ 0x1404BC480 (HalpInterruptResetThisProcessor.c)
 *     HalReturnToFirmware @ 0x1404BE1A0 (HalReturnToFirmware.c)
 *     HalpInterruptResetAllProcessors @ 0x1404D2BEC (HalpInterruptResetAllProcessors.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14022A880 (KeStallExecutionProcessor.c)
 *     HalpAcpiPmRegisterWrite @ 0x14037C760 (HalpAcpiPmRegisterWrite.c)
 *     HalpMiscIsLegacyPcType @ 0x140386A24 (HalpMiscIsLegacyPcType.c)
 *     HalpMap @ 0x1403BB938 (HalpMap.c)
 *     VslTerminateSecureServices @ 0x1403F0ED4 (VslTerminateSecureServices.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     HalEfiResetSystem @ 0x1404C3BA0 (HalEfiResetSystem.c)
 */

void __fastcall __noreturn HalpPowerWriteResetCommand(int a1, volatile signed __int32 *a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
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
      v4 = HalpMap(0LL, 1LL, 1u, 0LL, 4u);
      if ( v4 )
        *(_WORD *)(v4 + 1138) = 4660;
    }
    if ( (HalpPlatformFlags & 4) != 0 )
    {
      __outbyte(0x70u, 0x15u);
      KeStallExecutionProcessor(1u);
    }
    VslTerminateSecureServices();
    if ( HalpHvUsedForReboot )
    {
      v5 = 0LL;
      __writemsr(0x40000003u, 1uLL);
    }
    if ( byte_140C491E0 )
    {
      HalpAcpiPmRegisterWrite(8, 0, (__int64)&unk_140C4A060, 1u, 0LL);
      KeStallExecutionProcessor(0x1F4u);
    }
    if ( (HalpPlatformFlags & 2) != 0 )
    {
      __outbyte(0x64u, 0xFEu);
      KeStallExecutionProcessor(0x1388u);
    }
    if ( HalFirmwareTypeEfi )
    {
      HalEfiResetSystem(1LL, v5);
      HalEfiResetSystem(0LL, v6);
      __debugbreak();
    }
  }
  if ( a2 )
    _InterlockedDecrement(a2);
  __halt();
}
