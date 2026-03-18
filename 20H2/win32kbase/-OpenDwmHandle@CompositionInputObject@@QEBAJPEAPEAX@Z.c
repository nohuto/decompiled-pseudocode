/*
 * XREFs of ?OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z @ 0x1C0066DC0
 * Callers:
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007E904 (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?Duplicate@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAX1_N@Z @ 0x1C0063B58 (-Duplicate@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAX1_N@Z.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0066E10 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 */

__int64 __fastcall CompositionInputObject::OpenDwmHandle(CompositionInputObject *this, void **a2)
{
  int v4; // ebx
  __int64 v5; // r9

  v4 = CompositionObject::OpenDwmHandle(this, a2);
  if ( v4 >= 0 )
  {
    LOBYTE(v5) = 1;
    InputTraceLogging::InputSink::Duplicate(this, 0LL, *a2, v5);
  }
  return (unsigned int)v4;
}
