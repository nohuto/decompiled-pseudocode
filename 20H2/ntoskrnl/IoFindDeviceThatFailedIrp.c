/*
 * XREFs of IoFindDeviceThatFailedIrp @ 0x14036D9C8
 * Callers:
 *     PnpDiagnosticCompletionRoutine @ 0x14036D100 (PnpDiagnosticCompletionRoutine.c)
 *     PnpDeviceCompletionRoutine @ 0x14036D250 (PnpDeviceCompletionRoutine.c)
 *     PopDiagTraceIrpFinish @ 0x14037A974 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x14037AB2C (PopDiagTraceIrpFinishTelemetry.c)
 *     PopSystemIrpCompletion @ 0x140999E50 (PopSystemIrpCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoFindDeviceThatFailedIrp(__int64 a1)
{
  unsigned int v1; // r9d
  unsigned int v2; // r8d
  __int64 v3; // rcx

  v1 = *(char *)(a1 + 66);
  v2 = 0;
  if ( *(int *)(a1 + 48) >= 0 )
    return 0LL;
  v3 = a1 + 72LL * (v1 - 1) + 208;
  if ( !v1 )
    return 0LL;
  while ( (*(_BYTE *)(v3 + 3) & 2) == 0 )
  {
    ++v2;
    v3 -= 72LL;
    if ( v2 >= v1 )
      return 0LL;
  }
  return *(_QWORD *)(v3 + 40);
}
