/*
 * XREFs of TppWorkerpOuterExceptionFilter @ 0x180112F2C
 * Callers:
 *     TppWorkerThread @ 0x18004D110 (TppWorkerThread.c)
 * Callees:
 *     RtlReportException @ 0x1800DCAA0 (RtlReportException.c)
 *     TppExceptionFilter @ 0x180112394 (TppExceptionFilter.c)
 *     TppTerminateProcess @ 0x180112580 (TppTerminateProcess.c)
 */

__int64 __fastcall TppWorkerpOuterExceptionFilter(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *a2 )
  {
    *a2 = 0;
  }
  else
  {
    v2 = TppExceptionFilter((const void **)a1, (__int64)a2);
    if ( v2 == 1 )
    {
      if ( **(_DWORD **)a1 != -1073741571 )
      {
        TppTerminateProcess();
        __debugbreak();
      }
      RtlReportException(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), 3u);
    }
  }
  return v2;
}
