/*
 * XREFs of sub_18000A2B0 @ 0x18000A2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000A2B0(ULONG_PTR dwCompletionKey)
{
  signed int LastError; // ecx
  __int64 result; // rax

  if ( PostQueuedCompletionStatus(CompletionPort, 0, dwCompletionKey, 0LL) )
    return 0LL;
  LastError = GetLastError();
  result = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    return (unsigned int)LastError;
  return result;
}
