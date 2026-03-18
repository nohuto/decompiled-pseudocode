/*
 * XREFs of HalpShutdown @ 0x1404B8ECC
 * Callers:
 *     HalpCheckPowerButton @ 0x1403EBA70 (HalpCheckPowerButton.c)
 *     HalReturnToFirmware @ 0x1404B8BE0 (HalReturnToFirmware.c)
 *     HaliHaltSystem @ 0x1404B8C80 (HaliHaltSystem.c)
 * Callees:
 *     HalpAcpiPmRegisterWrite @ 0x140379A20 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x140396140 (HalpAcpiPmRegisterRead.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     HalpHvEnterSleepState @ 0x1404BD41C (HalpHvEnterSleepState.c)
 *     HalEfiResetSystem @ 0x1404BE5BC (HalEfiResetSystem.c)
 */

__int64 HalpShutdown()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int16 v2; // [rsp+60h] [rbp+30h] BYREF
  __int16 v3; // [rsp+68h] [rbp+38h] BYREF
  __int16 v4; // [rsp+70h] [rbp+40h] BYREF

  v4 = 0;
  v2 = 0;
  v3 = 0;
  if ( _InterlockedCompareExchange(&HalpShutdownActive, 1, 0) )
  {
    while ( 1 )
      ;
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(PmAcpiDispatchTable + 8))(0LL);
  if ( PmRegisters[0] )
  {
    HalpAcpiPmRegisterRead(0, 0, (__int64)&v4, 2u, 0LL);
    v3 = v4;
    if ( byte_140C49090 )
    {
      HalpAcpiPmRegisterRead(3, 0, (__int64)&v4, 2u, 0LL);
      v3 |= v4;
    }
    result = HalpAcpiPmRegisterWrite(0, 0, (__int64)&v3, 2u, 0LL);
    if ( byte_140C49090 )
      result = HalpAcpiPmRegisterWrite(3, 0, (__int64)&v3, 2u, 0LL);
  }
  if ( HalpShutdownContext && byte_140C49030 )
  {
    if ( HalpHvSleepEnlightenedCpuManager )
      HalpHvEnterSleepState(5LL);
    HalpAcpiPmRegisterRead(1, 0, (__int64)&v2, 2u, 0LL);
    v2 = v2 & 0x203 | ((HalpShutdownContext & 7 | 8) << 10);
    result = HalpAcpiPmRegisterWrite(1, 0, (__int64)&v2, 2u, 0LL);
    if ( byte_140C490C0 )
    {
      HalpAcpiPmRegisterRead(4, 0, (__int64)&v2, 2u, 0LL);
      v2 = v2 & 0x203 | ((((unsigned int)HalpShutdownContext >> 4) & 7 | 8) << 10);
      result = HalpAcpiPmRegisterWrite(4, 0, (__int64)&v2, 2u, 0LL);
    }
  }
  if ( HalFirmwareTypeEfi )
    return HalEfiResetSystem(2LL, v1);
  return result;
}
