/*
 * XREFs of _LdrpTryAcquireLoaderLock@0 @ 0x4B32E68D
 * Callers:
 *     _LdrLockLoaderLock@12 @ 0x4B2E85B0 (_LdrLockLoaderLock@12.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlTryEnterCriticalSection@4 @ 0x4B2E0960 (_RtlTryEnterCriticalSection@4.c)
 *     _LdrpLogEtwEvent@24 @ 0x4B330117 (_LdrpLogEtwEvent@24.c)
 */

char __stdcall LdrpTryAcquireLoaderLock()
{
  int v0; // edi
  int v1; // eax
  int v2; // esi
  char *v3; // eax

  v0 = 2147353476;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (int)NtCurrentPeb()->SharedData + 554;
  else
    v1 = 2147353476;
  v2 = 2147353477;
  if ( *(_BYTE *)v1 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v3 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v3 & 0x20) != 0 )
      LdrpLogEtwEvent(-1, -1, 0, 0);
  }
  if ( RtlTryEnterCriticalSection(&LdrpLoaderLock) )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v0 = (int)NtCurrentPeb()->SharedData + 554;
    if ( *(_BYTE *)v0 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v2 = (int)NtCurrentPeb()->SharedData + 555;
      if ( (*(_BYTE *)v2 & 0x20) != 0 )
        LdrpLogEtwEvent(-1, -1, 0, 0);
    }
    return 1;
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v0 = (int)NtCurrentPeb()->SharedData + 554;
    if ( *(_BYTE *)v0 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v2 = (int)NtCurrentPeb()->SharedData + 555;
      if ( (*(_BYTE *)v2 & 0x20) != 0 )
        LdrpLogEtwEvent(-1, -1, 0, 0);
    }
    return 0;
  }
}
