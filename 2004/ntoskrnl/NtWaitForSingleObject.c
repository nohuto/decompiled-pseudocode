/*
 * XREFs of NtWaitForSingleObject @ 0x1405F7B90
 * Callers:
 *     SepRmCallLsa @ 0x14034F640 (SepRmCallLsa.c)
 *     PfSnPrefetchFileMetadata @ 0x1406BD368 (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     ObWaitForSingleObject @ 0x1405F7AC0 (ObWaitForSingleObject.c)
 */

NTSTATUS __cdecl NtWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  KPROCESSOR_MODE PreviousMode; // dl
  PLARGE_INTEGER v5; // rax
  LARGE_INTEGER v7; // [rsp+58h] [rbp+20h] BYREF

  v7.QuadPart = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = Timeout;
  if ( Timeout && PreviousMode )
  {
    if ( (unsigned __int64)Timeout >= 0x7FFFFFFF0000LL )
      v5 = (PLARGE_INTEGER)0x7FFFFFFF0000LL;
    v7 = *v5;
    v5 = &v7;
  }
  return ObWaitForSingleObject(Handle, PreviousMode, PreviousMode, Alertable, v5);
}
