/*
 * XREFs of FeatureServicing_40524482_EnableKey @ 0x1405CBC40
 * Callers:
 *     IopWaitForSynchronousIo @ 0x14020AD88 (IopWaitForSynchronousIo.c)
 *     IopCompleteRequest @ 0x1402186C0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x140292590 (IopfCompleteRequest.c)
 *     IopCompleteIrpInFileObjectList @ 0x140294E84 (IopCompleteIrpInFileObjectList.c)
 *     IopFreeIrpExtension @ 0x1402F3AD0 (IopFreeIrpExtension.c)
 *     IoReuseIrp @ 0x1402F4000 (IoReuseIrp.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x1405061F0 (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     NtWriteFile @ 0x1405F84C0 (NtWriteFile.c)
 *     NtReadFile @ 0x1405F9240 (NtReadFile.c)
 *     IopCreateFile @ 0x1405FBD80 (IopCreateFile.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 * Callees:
 *     Feature_Servicing_CopyFileImprovement__private_IsEnabled @ 0x1403F022C (Feature_Servicing_CopyFileImprovement__private_IsEnabled.c)
 */

bool FeatureServicing_40524482_EnableKey()
{
  int IsEnabled; // eax

  IsEnabled = Feature_Servicing_CopyFileImprovement__private_IsEnabled();
  EnableFeatureServicing_40524482 = IsEnabled != 0;
  return IsEnabled != 0;
}
