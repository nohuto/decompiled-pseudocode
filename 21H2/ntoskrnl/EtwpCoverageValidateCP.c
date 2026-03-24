/*
 * XREFs of EtwpCoverageValidateCP @ 0x1402C85E0
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x1402C84B0 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageRecordAtHighIrql @ 0x1405A69F4 (EtwpCoverageRecordAtHighIrql.c)
 *     EtwpCoverageRecord @ 0x1406B5CE4 (EtwpCoverageRecord.c)
 *     EtwpCoverageCheckCP @ 0x140934F68 (EtwpCoverageCheckCP.c)
 *     EtwpCoverageResetCP @ 0x140935454 (EtwpCoverageResetCP.c)
 * Callees:
 *     TelemetryCoverageValidateName @ 0x1402C8640 (TelemetryCoverageValidateName.c)
 *     TelemetryCoverageStringHashInternal @ 0x1402C86A8 (TelemetryCoverageStringHashInternal.c)
 */

__int64 __fastcall EtwpCoverageValidateCP(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rdi
  int v4; // eax
  __int64 v5; // r11
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v7 = 0;
  v4 = TelemetryCoverageStringHashInternal(v2, &v7);
  if ( v4 == *(_DWORD *)(v5 + 8) && (unsigned int)TelemetryCoverageValidateName(v2) )
  {
    *a2 = v7;
    return 1LL;
  }
  else
  {
    *(_DWORD *)(v5 + 12) = -1;
    return 0LL;
  }
}
