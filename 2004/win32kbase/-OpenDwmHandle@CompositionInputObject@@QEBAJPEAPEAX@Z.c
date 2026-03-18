/*
 * XREFs of ?OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z @ 0x1C00A8090
 * Callers:
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003A184 (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C00A7DA0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?Duplicate@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAX1_N@Z @ 0x1C00A8518 (-Duplicate@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAX1_N@Z.c)
 */

__int64 __fastcall CompositionInputObject::OpenDwmHandle(
        CompositionInputObject *this,
        void **a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // ebx

  v6 = CompositionObject::OpenDwmHandle(this, a2, a3, a4);
  if ( v6 >= 0 )
    InputTraceLogging::InputSink::Duplicate(this, 0LL, *a2, 1);
  return (unsigned int)v6;
}
