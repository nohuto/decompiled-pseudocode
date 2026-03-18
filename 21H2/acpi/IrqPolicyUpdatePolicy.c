/*
 * XREFs of IrqPolicyUpdatePolicy @ 0x1C00BDE10
 * Callers:
 *     AcpiIrqLibConfigureLibrary @ 0x1C00BE048 (AcpiIrqLibConfigureLibrary.c)
 * Callees:
 *     IrqPolicyQueryInterruptSteeringEnabled @ 0x1C009C4DC (IrqPolicyQueryInterruptSteeringEnabled.c)
 *     ProcessorQueryGroupInformation @ 0x1C009D740 (ProcessorQueryGroupInformation.c)
 */

__int64 __fastcall IrqPolicyUpdatePolicy(__int64 a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v2 = 0;
  if ( !IrqPolicyRegistrySpecified
    && !IrqDisableInterruptSteeringPolicy
    && (int)ProcessorQueryGroupInformation(a1, &v3, &v2) >= 0 )
  {
    IrqInterruptSteeringEnabled = IrqPolicyQueryInterruptSteeringEnabled(0LL);
    if ( IrqInterruptSteeringEnabled )
    {
      if ( !ProcessorPreferredCpuSetSpecified && (v3 == 1 || v3 == 3 && v2 == (_BYTE)ProcessorPreferredCpuSetSpecified) )
        IrqMachinePolicy = 6;
    }
  }
  return 0LL;
}
