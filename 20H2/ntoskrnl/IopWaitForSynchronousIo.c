/*
 * XREFs of IopWaitForSynchronousIo @ 0x14020AD88
 * Callers:
 *     NtSetInformationFile @ 0x14020FE90 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x1405FB1C0 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x140634898 (IopQueryXxxInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     IopWaitForSynchronousIoEvent @ 0x1403F057C (IopWaitForSynchronousIoEvent.c)
 *     IopCheckIrpCancelled @ 0x1404FEAF0 (IopCheckIrpCancelled.c)
 *     FeatureServicing_40524482_EnableKey @ 0x1405CBC40 (FeatureServicing_40524482_EnableKey.c)
 *     IopCancelAlertedRequest @ 0x140893ABC (IopCancelAlertedRequest.c)
 */

__int64 __fastcall IopWaitForSynchronousIo(PIRP Irp, unsigned int *a2, char a3)
{
  int v3; // eax
  int v7; // edi
  NTSTATUS v8; // eax

  v3 = EnableFeatureServicing_40524482;
  if ( (unsigned int)EnableFeatureServicing_40524482 >= 2 )
    v3 = (unsigned __int8)FeatureServicing_40524482_EnableKey();
  v7 = a2[20] & 4;
  if ( v3 )
  {
    IopWaitForSynchronousIoEvent(Irp);
  }
  else
  {
    while ( (a2[38] & 0x7F) != 0 || !a2[39] )
    {
      v8 = KeWaitForSingleObject(a2 + 38, Executive, v7 != 0 ? a3 : 0, 1u, 0LL);
      if ( v8 != 257 && v8 != 192 )
        break;
      if ( v7
        || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0
        || (unsigned __int8)IopCheckIrpCancelled(a2 + 38, Irp) )
      {
        IopCancelAlertedRequest(a2 + 38, Irp);
        return a2[14];
      }
    }
  }
  return a2[14];
}
