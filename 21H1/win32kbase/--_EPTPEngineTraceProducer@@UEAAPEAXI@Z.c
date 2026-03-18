/*
 * XREFs of ??_EPTPEngineTraceProducer@@UEAAPEAXI@Z @ 0x1C01CC0E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ??1PTPEngineTraceProducer@@UEAA@XZ @ 0x1C01CC08C (--1PTPEngineTraceProducer@@UEAA@XZ.c)
 */

PTPEngineTraceProducer *__fastcall PTPEngineTraceProducer::`vector deleting destructor'(
        PTPEngineTraceProducer *this,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  PTPEngineTraceProducer::~PTPEngineTraceProducer(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, v4, v5);
  return this;
}
