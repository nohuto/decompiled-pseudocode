/*
 * XREFs of MmGetSessionCreateTime @ 0x140711EE8
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x140711F48 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpWriteProcessStarted @ 0x1407136E8 (EtwpWriteProcessStarted.c)
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
    return *(_QWORD *)(v1 + 888);
}
