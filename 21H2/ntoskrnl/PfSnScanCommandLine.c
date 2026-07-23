/*
 * XREFs of PfSnScanCommandLine @ 0x140679F70
 * Callers:
 *     PfSnBeginAppLaunch @ 0x14067A99C (PfSnBeginAppLaunch.c)
 * Callees:
 *     PfSnHashUnsafeUnicodeString @ 0x140613514 (PfSnHashUnsafeUnicodeString.c)
 *     PfSnParsePrefetchParam @ 0x14067A010 (PfSnParsePrefetchParam.c)
 *     PfSnCaptureParamBlockString @ 0x14067A1D4 (PfSnCaptureParamBlockString.c)
 *     PfSnGetUnsafeProcessParameters @ 0x14067A224 (PfSnGetUnsafeProcessParameters.c)
 */

__int64 __fastcall PfSnScanCommandLine(_DWORD *a1, __int64 a2)
{
  int v2; // edi
  int v4; // ebx
  __int64 UnsafeProcessParameters; // rax
  __int64 result; // rax
  unsigned __int16 v7[12]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v8 = 0;
  v2 = a2;
  *(_OWORD *)v7 = 0LL;
  v4 = 0;
  UnsafeProcessParameters = PfSnGetUnsafeProcessParameters(a1, a2);
  if ( !UnsafeProcessParameters )
    return 3221225865LL;
  result = PfSnCaptureParamBlockString(UnsafeProcessParameters, UnsafeProcessParameters + 112, v7);
  if ( (int)result >= 0 )
  {
    if ( (int)PfSnParsePrefetchParam(v7, &v8) >= 0 )
      v4 = v8;
    if ( !v2 )
      goto LABEL_6;
    result = PfSnHashUnsafeUnicodeString(v7, &v9);
    if ( (int)result >= 0 )
    {
      v4 += v9;
LABEL_6:
      *a1 = v4;
      return 0LL;
    }
  }
  return result;
}
