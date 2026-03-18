/*
 * XREFs of FeatureServicing_40851744_EnableKey @ 0x14065863C
 * Callers:
 *     IopFreeIrpExtension @ 0x14020B888 (IopFreeIrpExtension.c)
 *     IoReuseIrp @ 0x14020BE20 (IoReuseIrp.c)
 *     IopWaitForSynchronousIo @ 0x1402A41A4 (IopWaitForSynchronousIo.c)
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     IopCompleteIrpInFileObjectList @ 0x1403117B0 (IopCompleteIrpInFileObjectList.c)
 *     IopCompleteRequest @ 0x140347E10 (IopCompleteRequest.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x140459D9C (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     NtReadFile @ 0x14073A320 (NtReadFile.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 *     IopCreateFile @ 0x1407ADB90 (IopCreateFile.c)
 * Callees:
 *     Feature_Servicing_CopyFileImprovement__private_IsEnabled @ 0x140417818 (Feature_Servicing_CopyFileImprovement__private_IsEnabled.c)
 */

char FeatureServicing_40851744_EnableKey()
{
  int IsEnabled; // eax
  char v1; // cl

  IsEnabled = Feature_Servicing_CopyFileImprovement__private_IsEnabled();
  v1 = 0;
  if ( IsEnabled )
  {
    EnableFeatureServicing_40851744 = 1;
    return 1;
  }
  else
  {
    EnableFeatureServicing_40851744 = 0;
  }
  return v1;
}
