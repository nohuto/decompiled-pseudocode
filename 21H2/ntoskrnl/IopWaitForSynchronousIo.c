/*
 * XREFs of IopWaitForSynchronousIo @ 0x1402A41A4
 * Callers:
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     IopQueryXxxInformation @ 0x14071E6BC (IopQueryXxxInformation.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IopWaitForSynchronousIoEvent @ 0x140417B94 (IopWaitForSynchronousIoEvent.c)
 *     IopCheckIrpCancelled @ 0x140556608 (IopCheckIrpCancelled.c)
 *     FeatureServicing_40851744_EnableKey @ 0x14065863C (FeatureServicing_40851744_EnableKey.c)
 *     IopCancelAlertedRequest @ 0x140661B8C (IopCancelAlertedRequest.c)
 */

__int64 __fastcall IopWaitForSynchronousIo(PIRP Irp, unsigned int *a2, char a3)
{
  int v3; // eax
  int v7; // ebx
  NTSTATUS v8; // eax

  v3 = EnableFeatureServicing_40851744;
  if ( (unsigned int)EnableFeatureServicing_40851744 >= 2 )
    v3 = (unsigned __int8)FeatureServicing_40851744_EnableKey();
  if ( v3 )
  {
    IopWaitForSynchronousIoEvent(Irp);
  }
  else
  {
    v7 = a2[20] & 4;
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
