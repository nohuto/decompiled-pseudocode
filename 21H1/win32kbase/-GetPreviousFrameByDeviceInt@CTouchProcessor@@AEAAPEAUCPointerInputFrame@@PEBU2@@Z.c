/*
 * XREFs of ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0199DC8
 * Callers:
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C0199D8C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C019EC74 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 * Callees:
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C018E7EC (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::GetPreviousFrameByDeviceInt(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2)
{
  __int64 v4; // rcx
  CTouchProcessor *v5; // rax
  CTouchProcessor *v6; // rcx
  char *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // rcx

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  v5 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  v6 = (CTouchProcessor *)(this + 16);
  if ( v5 == (CTouchProcessor *)(this + 16) )
    return 0LL;
  do
  {
    v7 = (char *)v5 - 8;
    if ( *((_QWORD *)v5 + 7) == *((_QWORD *)a2 + 8) )
      break;
    v5 = *(CTouchProcessor **)v5;
  }
  while ( v5 != v6 );
  if ( v5 == v6 )
    return 0LL;
  v8 = *((_DWORD *)v7 + 13);
  v9 = *((unsigned int *)v7 + 12);
  v10 = v8 == (_DWORD)v9;
  if ( v8 > (unsigned int)v9 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
    v10 = *((_DWORD *)v7 + 13) == *((_DWORD *)v7 + 12);
  }
  if ( v10 )
    return 0LL;
  v11 = *((_QWORD *)a2 + 8);
  if ( *((_QWORD *)v7 + 8) != v11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
  return (struct CPointerInputFrame *)v7;
}
