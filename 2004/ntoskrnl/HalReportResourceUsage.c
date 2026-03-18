/*
 * XREFs of HalReportResourceUsage @ 0x140A392F0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     HalpInitSystemHelper @ 0x140998768 (HalpInitSystemHelper.c)
 *     HalpReportResourceUsage @ 0x140A36200 (HalpReportResourceUsage.c)
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
