/*
 * XREFs of HalMcFinishMicrocode @ 0x1403AE3C0
 * Callers:
 *     HalpProcInitSystem @ 0x1409A11A0 (HalpProcInitSystem.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A16D8 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpMcSetUpdateInfoInvalid @ 0x1403AE424 (HalpMcSetUpdateInfoInvalid.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     HalpMcExportAndChargeNeededData @ 0x1407920C8 (HalpMcExportAndChargeNeededData.c)
 */

char __fastcall HalMcFinishMicrocode(__int64 a1)
{
  char v1; // di
  char result; // al
  PVOID *v3; // rbx

  v1 = KeDynamicPartitioningSupported;
  result = HalpIsMicrosoftCompatibleHvLoaded(a1);
  v3 = 0LL;
  if ( result )
  {
    result = (char)qword_140C4A418;
    if ( qword_140C4A418 )
    {
      if ( !v1 )
        result = qword_140C4A418(0LL, 0LL);
    }
  }
  if ( HalpMcUpdateRecordingSupported && HalpMcUpdateExportDataFunc )
  {
    if ( HalpMcUpdateInfoValid )
    {
      if ( !v1 )
        v3 = &HalpMcUpdateInfoHead;
    }
    HalpMcExportAndChargeNeededData(v3);
    return HalpMcSetUpdateInfoInvalid();
  }
  return result;
}
