/*
 * XREFs of HaliHaltSystem @ 0x1404BC880
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiPmRegisterRead @ 0x1403991D0 (HalpAcpiPmRegisterRead.c)
 *     HalpShutdown @ 0x1404BCACC (HalpShutdown.c)
 *     InbvCheckDisplayOwnership @ 0x1404FD390 (InbvCheckDisplayOwnership.c)
 */

void __noreturn HaliHaltSystem()
{
  __int16 v0; // bx
  __int16 v1; // [rsp+40h] [rbp+8h] BYREF

  while ( 1 )
  {
    do
    {
      do
      {
        v0 = 0;
        v1 = 0;
      }
      while ( !(_DWORD)KiBugCheckData && !(unsigned __int8)InbvCheckDisplayOwnership() );
    }
    while ( !HalpShutdownContext );
    if ( PmRegisters[0] )
    {
      HalpAcpiPmRegisterRead(0, 0, (__int64)&v1, 2u, 0LL);
      v0 = v1;
      if ( byte_140C48F70 )
      {
        HalpAcpiPmRegisterRead(3, 0, (__int64)&v1, 2u, 0LL);
        v0 |= v1;
      }
    }
    if ( (v0 & 0x8100) == 0x100 )
      HalpShutdown();
  }
}
