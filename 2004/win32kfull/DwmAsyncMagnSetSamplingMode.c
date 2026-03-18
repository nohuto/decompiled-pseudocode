/*
 * XREFs of DwmAsyncMagnSetSamplingMode @ 0x1C02756B0
 * Callers:
 *     MagSetLensContextInformation @ 0x1C01CDBF4 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetSamplingMode(PVOID Object, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  _DWORD v10[16]; // [rsp+20h] [rbp-78h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(v10, 0, sizeof(v10));
    v10[0] = 4194328;
    LOWORD(v10[1]) = 0x8000;
    v10[15] = *a4;
    v10[10] = 1073741930;
    *(_QWORD *)&v10[11] = a2;
    *(_QWORD *)&v10[13] = a3;
    EtwUpdateEvent(a2);
    v8 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
