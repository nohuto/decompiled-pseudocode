/*
 * XREFs of PnpDeviceCompletionProcessCompletedRequests @ 0x1407275D8
 * Callers:
 *     PipProcessDevNodeTree @ 0x140726FC0 (PipProcessDevNodeTree.c)
 * Callees:
 *     PnpDeviceCompletionQueueIsEmpty @ 0x14036B1F4 (PnpDeviceCompletionQueueIsEmpty.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x14037D628 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140728E04 (PnpDeviceCompletionProcessCompletedRequest.c)
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
    if ( !dword_140C4498C && (!a2 || !a1 && *a3) )
      break;
    CompletedRequest = PnpDeviceCompletionQueueGetCompletedRequest();
    v9 = PnpDeviceCompletionProcessCompletedRequest(CompletedRequest);
    *a3 = 1;
    if ( v9 == -1073741106 )
      v6 = -1073741106;
  }
  return v6;
}
