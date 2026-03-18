/*
 * XREFs of PnpDeviceCompletionProcessCompletedRequests @ 0x140777B74
 * Callers:
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 * Callees:
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x14025BA80 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     PnpDeviceCompletionQueueIsEmpty @ 0x1402DE9D0 (PnpDeviceCompletionQueueIsEmpty.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1407730FC (PnpDeviceCompletionProcessCompletedRequest.c)
 */

__int64 __fastcall PnpDeviceCompletionProcessCompletedRequests(int a1, int a2, _BYTE *a3)
{
  unsigned int v6; // ebx
  __int64 CompletedRequest; // rax
  int v9; // eax

  *a3 = 0;
  v6 = 0;
  while ( !PnpDeviceCompletionQueueIsEmpty() )
  {
    if ( !dword_140C45FEC && (!a2 || !a1 && *a3) )
      break;
    CompletedRequest = PnpDeviceCompletionQueueGetCompletedRequest();
    v9 = PnpDeviceCompletionProcessCompletedRequest(CompletedRequest);
    *a3 = 1;
    if ( v9 == -1073741106 )
      v6 = -1073741106;
  }
  return v6;
}
