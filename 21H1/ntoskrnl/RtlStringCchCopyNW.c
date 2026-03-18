/*
 * XREFs of RtlStringCchCopyNW @ 0x14036E300
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14036A018 (PiDevCfgParsePropertyKeyName.c)
 *     IopErrorLogThread @ 0x14073E1B0 (IopErrorLogThread.c)
 *     WmipBuildInstanceSet @ 0x14073F6A8 (WmipBuildInstanceSet.c)
 *     PiUEventHandleVetoEvent @ 0x140759F40 (PiUEventHandleVetoEvent.c)
 *     AslPathSplit @ 0x14076A718 (AslPathSplit.c)
 *     SdbQueryDataExTagID @ 0x1407AC2C8 (SdbQueryDataExTagID.c)
 *     IopLogBlockedDriverEvent @ 0x14088D784 (IopLogBlockedDriverEvent.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1408EE208 (PoQueryProcessEnergyTrackingState.c)
 *     EtwpCoverageSamplerQuery @ 0x140941C14 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1402E2108 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCchCopyNW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  NTSTATUS v4; // r10d

  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( !cchDest )
      return v4;
LABEL_9:
    *pszDest = 0;
    return v4;
  }
  if ( cchToCopy > 0x7FFFFFFE )
  {
    v4 = -1073741811;
    goto LABEL_9;
  }
  return RtlStringCopyWorkerW(pszDest, cchDest, (size_t *)pszSrc, pszSrc, cchToCopy);
}
