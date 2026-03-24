/*
 * XREFs of MmGetSessionCreateTime @ 0x14061157C
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x140611214 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpWriteProcessStarted @ 0x14062B670 (EtwpWriteProcessStarted.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionCreateTime(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1368);
  if ( !v1 || (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(v1 + 1056);
}
