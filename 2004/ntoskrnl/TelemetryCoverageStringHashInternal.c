/*
 * XREFs of TelemetryCoverageStringHashInternal @ 0x140356AD8
 * Callers:
 *     EtwpCoverageValidateCP @ 0x140356A10 (EtwpCoverageValidateCP.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x1405A1330 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     PsSetProcessFaultInformation @ 0x1407605A0 (PsSetProcessFaultInformation.c)
 *     PopTransitionTelemetryOsState @ 0x140786610 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageEnsureContext @ 0x1407B754C (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageProvEnableCallback @ 0x140931B10 (EtwpCoverageProvEnableCallback.c)
 *     EtwpCoverageReset @ 0x140931C74 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x140931E54 (EtwpCoverageResetCP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TelemetryCoverageStringHashInternal(_BYTE *a1, _DWORD *a2)
{
  unsigned int v2; // r8d
  int v3; // r10d
  unsigned int v4; // r9d

  v2 = -2128831035;
  v3 = (int)a1;
  v4 = 1;
  while ( *a1 )
    v2 = (char)*a1++ + 16777619 * v2;
  *a2 = (_DWORD)a1 - v3;
  if ( v2 )
    return v2;
  return v4;
}
