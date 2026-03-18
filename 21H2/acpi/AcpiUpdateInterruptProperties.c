/*
 * XREFs of AcpiUpdateInterruptProperties @ 0x1C00AE1B0
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibReleaseArbiterLock @ 0x1C002385C (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C0023884 (IrqLibAcquireArbiterLock.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0099900 (IcIsInterruptTypeSecondary.c)
 *     ProcessorUpdateInterruptProperties @ 0x1C00B63DC (ProcessorUpdateInterruptProperties.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C00B6A14 (IrqArbUpdateInterruptProperties.c)
 *     IcUpdateInterruptProperties @ 0x1C00B71A4 (IcUpdateInterruptProperties.c)
 */

__int64 __fastcall AcpiUpdateInterruptProperties(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int updated; // ebx

  IrqLibAcquireArbiterLock(1);
  if ( IcIsInterruptTypeSecondary(a1) && a1 < 0xFFF00000 )
  {
    updated = ProcessorUpdateInterruptProperties(a1, a2);
    if ( updated >= 0 )
    {
      updated = IcUpdateInterruptProperties(a1, a2, a3);
      if ( updated >= 0 )
        updated = IrqArbUpdateInterruptProperties(a1);
    }
  }
  else
  {
    updated = -1073741811;
  }
  IrqLibReleaseArbiterLock();
  return (unsigned int)updated;
}
