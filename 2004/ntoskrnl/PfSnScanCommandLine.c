/*
 * XREFs of PfSnScanCommandLine @ 0x1406B8848
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1406B7880 (PfSnBeginAppLaunch.c)
 * Callees:
 *     PfSnParsePrefetchParam @ 0x1406B88E8 (PfSnParsePrefetchParam.c)
 *     PfSnCaptureParamBlockString @ 0x1406B8AAC (PfSnCaptureParamBlockString.c)
 *     PfSnGetUnsafeProcessParameters @ 0x1406B8AFC (PfSnGetUnsafeProcessParameters.c)
 *     PfSnHashUnsafeUnicodeString @ 0x140702E40 (PfSnHashUnsafeUnicodeString.c)
 */

__int64 __fastcall PfSnScanCommandLine(_DWORD *a1, __int64 a2)
{
  int v2; // edi
  int v4; // ebx
  __int64 UnsafeProcessParameters; // rax
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v8 = 0;
  v2 = a2;
  v7 = 0LL;
  v4 = 0;
  UnsafeProcessParameters = PfSnGetUnsafeProcessParameters(a1, a2);
  if ( !UnsafeProcessParameters )
    return 3221225865LL;
  result = PfSnCaptureParamBlockString(UnsafeProcessParameters, UnsafeProcessParameters + 112, &v7);
  if ( (int)result >= 0 )
  {
    if ( (int)PfSnParsePrefetchParam(&v7, &v8) >= 0 )
      v4 = v8;
    if ( !v2 )
      goto LABEL_6;
    result = PfSnHashUnsafeUnicodeString(&v7, &v9);
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
