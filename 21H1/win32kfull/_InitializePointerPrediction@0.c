/*
 * XREFs of _InitializePointerPrediction@0 @ 0xEC744
 * Callers:
 *     <none>
 * Callees:
 *     _EnterFloatingPointRegion@0 @ 0xAD89E (_EnterFloatingPointRegion@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __stdcall InitializePointerPrediction()
{
  NTSTATUS result; // eax
  _BYTE v1[16]; // [esp+8h] [ebp-14h] BYREF

  memset(v1, 0, sizeof(v1));
  glTOUCH_DRIVER_HW_STACK_LATENCY = 0;
  glTOUCH_DRIVER_HW_STACK_SAMPLETIME = 0;
  gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = 0;
  result = _gliQpcFreq[0];
  if ( _gliQpcFreq[1] | _gliQpcFreq[0] )
  {
    result = ReadPointerDeviceSettings(156, v1);
    if ( result )
    {
      result = EnterFloatingPointRegion();
      if ( result )
      {
        dword_273D44 = 0;
        gPredictorRLSDelta = 4294968;
        gPredictorRLSLambdaMin = -429496832;
        dword_273D3C = 0;
        gPredictorRLSLambdaMax = -4294912;
        dword_273D34 = 0;
        gPredictorRLSLambdaLearningRate = 4294968;
        dword_273D2C = 0;
        gPredictorRLSExpoSmoothAlpha = -42949632;
        dword_273D24 = 0;
        return KeRestoreFloatingPointState(_gfsSave);
      }
    }
  }
  return result;
}
