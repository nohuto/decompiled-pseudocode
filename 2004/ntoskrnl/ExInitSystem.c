/*
 * XREFs of ExInitSystem @ 0x140A6423C
 * Callers:
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ExpInitSystemPhase1 @ 0x140A3935C (ExpInitSystemPhase1.c)
 *     ExpInitSystemPhase0 @ 0x140A6490C (ExpInitSystemPhase0.c)
 *     ExpStringCheck @ 0x140A64A78 (ExpStringCheck.c)
 */

char ExInitSystem()
{
  if ( (_DWORD)InitializationPhase )
  {
    if ( (_DWORD)InitializationPhase != 1 )
      KeBugCheckEx(0x33u, 3uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
    return ExpInitSystemPhase1();
  }
  else
  {
    ExpStringCheck(
      L"\\Registry\\Machine\\System\\Setup",
      L"SetupType",
      L"SystemPrefix",
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions",
      L"ProductType",
      L"LanmanNT",
      L"ServerNT",
      L"WinNT",
      L"ProductSuite",
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites",
      L"ConcurrentLimit",
      L"Small Business",
      L"Enterprise",
      L"CommunicationServer",
      L"BackOffice",
      L"Small Business(Restricted)",
      L"Terminal Server",
      L"EmbeddedNT",
      L"DataCenter",
      L"Personal",
      L"Blade",
      L"Embedded(Restricted)",
      L"Security Appliance",
      L"Storage Server",
      L"Compute Server",
      L"WH Server",
      L"SystemSetupInProgress",
      L"PhoneNT",
      L"Kernel-ProductType");
    return ExpInitSystemPhase0();
  }
}
