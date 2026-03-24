/*
 * XREFs of HalMcFinishMicrocode @ 0x1403A8370
 * Callers:
 *     HalpProcInitSystem @ 0x14099B4C0 (HalpProcInitSystem.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A1F98 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpMcSetUpdateInfoInvalid @ 0x1403A83D4 (HalpMcSetUpdateInfoInvalid.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     HalpMcExportAndChargeNeededData @ 0x140791838 (HalpMcExportAndChargeNeededData.c)
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
    result = (char)qword_140C4A338;
    if ( qword_140C4A338 )
    {
      if ( !v1 )
        result = qword_140C4A338(0LL, 0LL);
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
