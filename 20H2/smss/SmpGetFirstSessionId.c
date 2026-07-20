/*
 * XREFs of SmpGetFirstSessionId @ 0x140005630
 * Callers:
 *     wmain @ 0x140001840 (wmain.c)
 *     SmscpParseArgs @ 0x140005378 (SmscpParseArgs.c)
 * Callees:
 *     <none>
 */

__int64 SmpGetFirstSessionId()
{
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval.QuadPart = -2500000LL;
  while ( 1 )
  {
    result = RtlGetCurrentServiceSessionId();
    if ( (_DWORD)result != -1 )
      break;
    NtDelayExecution(0, &Interval);
  }
  return result;
}
