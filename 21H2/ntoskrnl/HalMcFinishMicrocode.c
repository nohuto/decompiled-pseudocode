/*
 * XREFs of HalMcFinishMicrocode @ 0x1403A9100
 * Callers:
 *     HalpProcInitSystem @ 0x14099C4C0 (HalpProcInitSystem.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A20E8 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpMcSetUpdateInfoInvalid @ 0x1403A9164 (HalpMcSetUpdateInfoInvalid.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpMcExportAndChargeNeededData @ 0x140792DE8 (HalpMcExportAndChargeNeededData.c)
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
    result = (char)qword_140C4A378;
    if ( qword_140C4A378 )
    {
      if ( !v1 )
        result = qword_140C4A378(0LL, 0LL);
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
