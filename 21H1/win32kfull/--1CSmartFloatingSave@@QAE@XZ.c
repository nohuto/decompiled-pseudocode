/*
 * XREFs of ??1CSmartFloatingSave@@QAE@XZ @ 0x13C826
 * Callers:
 *     ?OnInput@InputSink@InputTraceLogging@@SGX_KPAUHWND__@@PBUCompositionInputObject@@_NABUtagINPUT_TRANSFORM@@@Z @ 0xF1E96 (-OnInput@InputSink@InputTraceLogging@@SGX_KPAUHWND__@@PBUCompositionInputObject@@_NABUtagINPUT_T.c)
 * Callees:
 *     <none>
 */

void __thiscall CSmartFloatingSave::~CSmartFloatingSave(PKFLOATING_SAVE FloatSave)
{
  if ( LOBYTE(FloatSave[1].ControlWord) )
    KeRestoreFloatingPointState(FloatSave);
}
