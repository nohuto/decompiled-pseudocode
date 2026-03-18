/*
 * XREFs of IopWaitForSynchronousIoEvent @ 0x1403F057C
 * Callers:
 *     IopWaitForSynchronousIo @ 0x14020AD88 (IopWaitForSynchronousIo.c)
 *     NtCopyFileChunk @ 0x1405CBD40 (NtCopyFileChunk.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     IopCheckIrpCancelled @ 0x1404FEAF0 (IopCheckIrpCancelled.c)
 *     IopCancelAlertedRequest @ 0x140893ABC (IopCancelAlertedRequest.c)
 */

__int64 __fastcall IopWaitForSynchronousIoEvent(PIRP Irp, char a2, char a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  NTSTATUS v9; // eax

  v8 = 0;
  while ( (*(_BYTE *)a4 & 0x7F) != 0 || !a4[1] )
  {
    v9 = KeWaitForSingleObject(a4, Executive, a3 != 0 ? a2 : 0, 1u, 0LL);
    v8 = v9;
    if ( v9 != 257 && v9 != 192 )
      break;
    if ( a3
      || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0
      || (unsigned __int8)IopCheckIrpCancelled(a4, Irp) )
    {
      IopCancelAlertedRequest(a4, Irp);
      return (unsigned int)-1073741536;
    }
  }
  return v8;
}
