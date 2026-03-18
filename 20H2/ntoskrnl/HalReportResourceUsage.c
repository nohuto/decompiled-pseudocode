/*
 * XREFs of HalReportResourceUsage @ 0x140A3F2D0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     HalpInitSystemHelper @ 0x14099E7A8 (HalpInitSystemHelper.c)
 *     HalpReportResourceUsage @ 0x140A3C200 (HalpReportResourceUsage.c)
 */

void __fastcall HalReportResourceUsage(int a1)
{
  int v1; // edx
  unsigned int v2; // ecx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  switch ( a1 )
  {
    case -1:
      v1 = 24;
      v2 = 23;
      goto LABEL_6;
    case 0:
      HalpInitSystemHelper(0x1Bu, 28, 0LL);
      RtlInitUnicodeString(&DestinationString, L"ACPI x64 platform");
      HalpReportResourceUsage((__int64)&DestinationString);
      return;
    case 1:
      v1 = 30;
      v2 = 29;
LABEL_6:
      HalpInitSystemHelper(v2, v1, 0LL);
      break;
  }
}
