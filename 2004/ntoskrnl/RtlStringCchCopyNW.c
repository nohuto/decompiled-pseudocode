/*
 * XREFs of RtlStringCchCopyNW @ 0x14036EF30
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14036A9D8 (PiDevCfgParsePropertyKeyName.c)
 *     IopErrorLogThread @ 0x14073FD30 (IopErrorLogThread.c)
 *     WmipBuildInstanceSet @ 0x140741228 (WmipBuildInstanceSet.c)
 *     PiUEventHandleVetoEvent @ 0x14075BB48 (PiUEventHandleVetoEvent.c)
 *     AslPathSplit @ 0x14076CEB8 (AslPathSplit.c)
 *     SdbQueryDataExTagID @ 0x1407AF428 (SdbQueryDataExTagID.c)
 *     IopLogBlockedDriverEvent @ 0x14088EAA4 (IopLogBlockedDriverEvent.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1408EF4F8 (PoQueryProcessEnergyTrackingState.c)
 *     EtwpCoverageSamplerQuery @ 0x140942E94 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     RtlStringCopyWorkerW_0 @ 0x140272358 (RtlStringCopyWorkerW_0.c)
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
  return RtlStringCopyWorkerW_0(pszDest, cchDest, (size_t *)pszSrc, pszSrc, cchToCopy);
}
