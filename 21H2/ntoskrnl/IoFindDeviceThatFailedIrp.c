/*
 * XREFs of IoFindDeviceThatFailedIrp @ 0x140259568
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1402DE5C0 (PnpDeviceCompletionRoutine.c)
 *     PopDiagTraceIrpFinish @ 0x1403A5020 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x1403A51D0 (PopDiagTraceIrpFinishTelemetry.c)
 *     PnpDiagnosticCompletionRoutine @ 0x140564940 (PnpDiagnosticCompletionRoutine.c)
 *     PopSystemIrpCompletion @ 0x140A50A10 (PopSystemIrpCompletion.c)
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
