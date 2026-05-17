/*
 * XREFs of LdrpProcessInitializationComplete @ 0x180080940
 * Callers:
 *     _LdrpInitialize @ 0x180074C8C (_LdrpInitialize.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     ZwSetEvent @ 0x18009D270 (ZwSetEvent.c)
 *     LdrpLogEtwEvent @ 0x1800CF2C0 (LdrpLogEtwEvent.c)
 */

unsigned int *LdrpProcessInitializationComplete()
{
  unsigned int *result; // rax
  __int64 v1; // rcx
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rcx

  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v1 = *((_QWORD *)result + 18) + 554LL;
  }
  else
  {
    v1 = 2147353476LL;
  }
  if ( *(_BYTE *)v1 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 4) != 0 )
    {
      result = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (unsigned int *)NtCurrentPeb();
        v4 = *((_QWORD *)result + 18) + 555LL;
      }
      else
      {
        v4 = 2147353477LL;
      }
      if ( (*(_BYTE *)v4 & 0x20) != 0 )
      {
        LOBYTE(v3) = -1;
        LOBYTE(v2) = -1;
        result = (unsigned int *)LdrpLogEtwEvent(5252, -1, v2, v3, 0LL, 0LL);
      }
    }
  }
  _InterlockedIncrement(&LdrpProcessInitialized);
  if ( LdrpInitCompleteEvent )
    return (unsigned int *)ZwSetEvent(LdrpInitCompleteEvent, 0LL);
  return result;
}
