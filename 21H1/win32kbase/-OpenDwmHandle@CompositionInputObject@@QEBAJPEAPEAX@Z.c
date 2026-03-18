/*
 * XREFs of ?OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z @ 0x1C00B5270
 * Callers:
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00C0094 (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C00B43C0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?Duplicate@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAX1_N@Z @ 0x1C00B80F8 (-Duplicate@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAX1_N@Z.c)
 */

__int64 __fastcall CompositionInputObject::OpenDwmHandle(CompositionInputObject *this, void **a2)
{
  int v4; // ebx

  v4 = CompositionObject::OpenDwmHandle(this, a2);
  if ( v4 >= 0 )
    InputTraceLogging::InputSink::Duplicate(this, 0LL, *a2, 1);
  return (unsigned int)v4;
}
