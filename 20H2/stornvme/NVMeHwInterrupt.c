/*
 * XREFs of NVMeHwInterrupt @ 0x1C0009820
 * Callers:
 *     <none>
 * Callees:
 *     RequestPendingCompletion @ 0x1C00049F0 (RequestPendingCompletion.c)
 *     ProcessCompletionQueues @ 0x1C001B1BC (ProcessCompletionQueues.c)
 */

char __fastcall NVMeHwInterrupt(__int64 a1)
{
  char v2; // di

  v2 = 0;
  if ( !(unsigned __int8)RequestPendingCompletion(a1, 0xFFFFLL) || (*(_DWORD *)(a1 + 24) & 8) != 0 )
  {
    ++*(_QWORD *)(a1 + 3832);
  }
  else
  {
    v2 = 1;
    ProcessCompletionQueues(a1, 0xFFFFLL, 0LL);
  }
  return v2;
}
