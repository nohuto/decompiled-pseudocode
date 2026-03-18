/*
 * XREFs of NtWaitForSingleObject @ 0x1405F7B90
 * Callers:
 *     SepRmCallLsa @ 0x14034F640 (SepRmCallLsa.c)
 *     PfSnPrefetchFileMetadata @ 0x1406BD368 (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     ObWaitForSingleObject @ 0x1405F7AC0 (ObWaitForSingleObject.c)
 */

__int64 __fastcall NtWaitForSingleObject(void *a1, BOOLEAN a2, unsigned __int64 a3)
{
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 Timeout; // rax
  LARGE_INTEGER v7; // [rsp+58h] [rbp+20h] BYREF

  v7.QuadPart = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Timeout = a3;
  if ( a3 && PreviousMode )
  {
    if ( a3 >= 0x7FFFFFFF0000LL )
      Timeout = 0x7FFFFFFF0000LL;
    v7 = *(LARGE_INTEGER *)Timeout;
    Timeout = (__int64)&v7;
  }
  return ObWaitForSingleObject(a1, PreviousMode, PreviousMode, a2, (PLARGE_INTEGER)Timeout);
}
