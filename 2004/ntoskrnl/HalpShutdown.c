/*
 * XREFs of HalpShutdown @ 0x1404B95AC
 * Callers:
 *     HalpCheckPowerButton @ 0x1403ECA10 (HalpCheckPowerButton.c)
 *     HalReturnToFirmware @ 0x1404B92C0 (HalReturnToFirmware.c)
 *     HaliHaltSystem @ 0x1404B9360 (HaliHaltSystem.c)
 * Callees:
 *     HalpAcpiPmRegisterWrite @ 0x14037A7A0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x140396D50 (HalpAcpiPmRegisterRead.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     HalpHvEnterSleepState @ 0x1404BDAFC (HalpHvEnterSleepState.c)
 *     HalEfiResetSystem @ 0x1404BECB0 (HalEfiResetSystem.c)
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
    if ( byte_140C48F10 )
    {
      HalpAcpiPmRegisterRead(3, 0, (__int64)&v4, 2u, 0LL);
      v3 |= v4;
    }
    result = HalpAcpiPmRegisterWrite(0, 0, (__int64)&v3, 2u, 0LL);
    if ( byte_140C48F10 )
      result = HalpAcpiPmRegisterWrite(3, 0, (__int64)&v3, 2u, 0LL);
  }
  if ( HalpShutdownContext && byte_140C48EB0 )
  {
    if ( HalpHvSleepEnlightenedCpuManager )
      HalpHvEnterSleepState(5LL);
    HalpAcpiPmRegisterRead(1, 0, (__int64)&v2, 2u, 0LL);
    v2 = v2 & 0x203 | ((HalpShutdownContext & 7 | 8) << 10);
    result = HalpAcpiPmRegisterWrite(1, 0, (__int64)&v2, 2u, 0LL);
    if ( byte_140C48F40 )
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
