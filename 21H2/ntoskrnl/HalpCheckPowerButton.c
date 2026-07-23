/*
 * XREFs of HalpCheckPowerButton @ 0x1403F0020
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiPmRegisterRead @ 0x140399790 (HalpAcpiPmRegisterRead.c)
 *     HalpShutdown @ 0x1404BE6D0 (HalpShutdown.c)
 *     InbvCheckDisplayOwnership @ 0x1404FEEB0 (InbvCheckDisplayOwnership.c)
 */

void HalpCheckPowerButton()
{
  __int16 v0; // bx
  __int16 v1; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  v1 = 0;
  if ( ((_DWORD)KiBugCheckData || (unsigned __int8)InbvCheckDisplayOwnership()) && HalpShutdownContext )
  {
    if ( PmRegisters[0] )
    {
      HalpAcpiPmRegisterRead(0, 0, (__int64)&v1, 2u, 0LL);
      v0 = v1;
      if ( byte_140C49130 )
      {
        HalpAcpiPmRegisterRead(3, 0, (__int64)&v1, 2u, 0LL);
        v0 |= v1;
      }
    }
    if ( (v0 & 0x8100) == 0x100 )
      HalpShutdown();
  }
}
