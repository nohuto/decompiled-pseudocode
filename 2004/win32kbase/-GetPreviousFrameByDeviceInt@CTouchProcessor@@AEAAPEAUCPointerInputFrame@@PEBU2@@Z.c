/*
 * XREFs of ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01940C8
 * Callers:
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C019408C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0198F84 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 * Callees:
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C0188AEC (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::GetPreviousFrameByDeviceInt(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  CTouchProcessor *v8; // rax
  CTouchProcessor *v9; // rcx
  __int64 v10; // rdx
  char *v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // rcx

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
  v8 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  v9 = (CTouchProcessor *)(this + 16);
  if ( v8 == (CTouchProcessor *)(this + 16) )
    return 0LL;
  v10 = *((_QWORD *)a2 + 8);
  do
  {
    v11 = (char *)v8 - 8;
    if ( *((_QWORD *)v8 + 7) == v10 )
      break;
    v8 = *(CTouchProcessor **)v8;
  }
  while ( v8 != v9 );
  if ( v8 == v9 )
    return 0LL;
  v12 = *((_DWORD *)v11 + 13);
  v13 = *((unsigned int *)v11 + 12);
  v14 = v12 == (_DWORD)v13;
  if ( v12 > (unsigned int)v13 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v10, v6, v7);
    v14 = *((_DWORD *)v11 + 13) == *((_DWORD *)v11 + 12);
  }
  if ( v14 )
    return 0LL;
  v15 = *((_QWORD *)a2 + 8);
  if ( *((_QWORD *)v11 + 8) != v15 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v10, v6, v7);
  return (struct CPointerInputFrame *)v11;
}
