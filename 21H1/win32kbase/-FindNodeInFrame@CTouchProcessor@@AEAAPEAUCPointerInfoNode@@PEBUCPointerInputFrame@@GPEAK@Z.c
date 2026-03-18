/*
 * XREFs of ?FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0193AC0
 * Callers:
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1C018E870 (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0193D54 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C01A1274 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 * Callees:
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C018E7EC (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C019AC44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInfoNode *__fastcall CTouchProcessor::FindNodeInFrame(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int16 a3,
        unsigned int *a4)
{
  CTouchProcessor *v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // ebx
  unsigned __int64 v11; // rsi
  unsigned int v12; // edx
  bool v13; // zf

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v7, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  v9 = *((_DWORD *)a2 + 12);
  v10 = 0;
  v11 = *((_QWORD *)a2 + 17);
  if ( v9 )
  {
    LODWORD(v8) = *((_DWORD *)a2 + 12);
    do
    {
      v12 = v8;
      v8 = *((_QWORD *)a2 + 17) + 480LL * (unsigned int)v8;
      if ( v11 >= v8 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
        v12 = *((_DWORD *)a2 + 12);
      }
      v9 = v12;
      if ( *(_WORD *)(v11 + 172) == a3 )
        break;
      v11 += 480LL;
      ++v10;
      v8 = v12;
    }
    while ( v10 < v12 );
  }
  v13 = v10 == v9;
  if ( v10 > v9 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    v13 = v10 == *((_DWORD *)a2 + 12);
  }
  if ( v13 )
    return 0LL;
  if ( a4 )
    *a4 = v10;
  return (struct CPointerInfoNode *)v11;
}
