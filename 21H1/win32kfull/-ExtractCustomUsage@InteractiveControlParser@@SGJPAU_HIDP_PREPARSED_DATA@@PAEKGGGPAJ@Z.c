/*
 * XREFs of ?ExtractCustomUsage@InteractiveControlParser@@SGJPAU_HIDP_PREPARSED_DATA@@PAEKGGGPAJ@Z @ 0x1B5C28
 * Callers:
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QAEJKKGGGPAJ@Z @ 0x1ADF4C (-GetReportExtendedUsage@InteractiveControlManager@@QAEJKKGGGPAJ@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __userpurge InteractiveControlParser::ExtractCustomUsage@<eax>(
        CHAR *a1@<edx>,
        struct _HIDP_PREPARSED_DATA *a2@<ecx>,
        ULONG ReportLength,
        USAGE UsagePage,
        USHORT LinkCollection,
        USAGE Usage,
        LONG *a7,
        unsigned __int16 a8,
        int *a9)
{
  NTSTATUS ScaledUsageValue; // edx
  USHORT ValueCapsLength[2]; // [esp+Ch] [ebp-8h] BYREF
  LONG UsageValue; // [esp+10h] [ebp-4h] BYREF

  UsageValue = 0;
  if ( !a1 )
  {
    *(_DWORD *)ValueCapsLength = 0;
    HidP_GetSpecificValueCaps(HidP_Input, UsagePage, LinkCollection, Usage, 0, ValueCapsLength, a2);
  }
  ScaledUsageValue = HidP_GetScaledUsageValue(
                       HidP_Input,
                       UsagePage,
                       LinkCollection,
                       Usage,
                       &UsageValue,
                       a2,
                       a1,
                       ReportLength);
  if ( ScaledUsageValue < 0 )
    return -1072627708;
  if ( a7 )
    *a7 = UsageValue;
  return ScaledUsageValue;
}
