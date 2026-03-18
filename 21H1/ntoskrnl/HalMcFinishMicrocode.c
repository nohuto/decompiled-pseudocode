/*
 * XREFs of HalMcFinishMicrocode @ 0x1403A4D30
 * Callers:
 *     HalpProcInitSystem @ 0x140996B30 (HalpProcInitSystem.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14039EA78 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpMcSetUpdateInfoInvalid @ 0x1403A4D94 (HalpMcSetUpdateInfoInvalid.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     HalpMcExportAndChargeNeededData @ 0x14077BB68 (HalpMcExportAndChargeNeededData.c)
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
    result = (char)qword_140C4A518;
    if ( qword_140C4A518 )
    {
      if ( !v1 )
        result = qword_140C4A518(0LL, 0LL);
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
