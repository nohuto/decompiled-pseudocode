/*
 * XREFs of RtlStringCchCopyNW @ 0x140370E80
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14036C9B8 (PiDevCfgParsePropertyKeyName.c)
 *     IopErrorLogThread @ 0x14074E910 (IopErrorLogThread.c)
 *     WmipBuildInstanceSet @ 0x14074FE08 (WmipBuildInstanceSet.c)
 *     PiUEventHandleVetoEvent @ 0x14076A438 (PiUEventHandleVetoEvent.c)
 *     AslPathSplit @ 0x14077B8E8 (AslPathSplit.c)
 *     SdbQueryDataExTagID @ 0x1407BD368 (SdbQueryDataExTagID.c)
 *     IopLogBlockedDriverEvent @ 0x140894564 (IopLogBlockedDriverEvent.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1408F5108 (PoQueryProcessEnergyTrackingState.c)
 *     EtwpCoverageSamplerQuery @ 0x140948C54 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     RtlStringCopyWorkerW_2 @ 0x140340DD8 (RtlStringCopyWorkerW_2.c)
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
  return RtlStringCopyWorkerW_2(pszDest, cchDest, (size_t *)pszSrc, pszSrc, cchToCopy);
}
