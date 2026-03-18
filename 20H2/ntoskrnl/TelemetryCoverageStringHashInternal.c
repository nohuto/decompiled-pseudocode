/*
 * XREFs of TelemetryCoverageStringHashInternal @ 0x1403274D8
 * Callers:
 *     EtwpCoverageValidateCP @ 0x140327410 (EtwpCoverageValidateCP.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x1405A4DD0 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     PsSetProcessFaultInformation @ 0x14076EBB0 (PsSetProcessFaultInformation.c)
 *     PopTransitionTelemetryOsState @ 0x140794320 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageEnsureContext @ 0x1407C5DD8 (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageProvEnableCallback @ 0x140937940 (EtwpCoverageProvEnableCallback.c)
 *     EtwpCoverageReset @ 0x140937AA4 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x140937C84 (EtwpCoverageResetCP.c)
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
