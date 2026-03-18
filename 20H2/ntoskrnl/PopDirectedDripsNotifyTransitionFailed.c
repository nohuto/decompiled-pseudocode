/*
 * XREFs of PopDirectedDripsNotifyTransitionFailed @ 0x1408E5F10
 * Callers:
 *     PoBroadcastSystemState @ 0x1409952E0 (PoBroadcastSystemState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14036183C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopDirectedDripsDiagTraceBroadcastFailureDevice @ 0x1408FA82C (PopDirectedDripsDiagTraceBroadcastFailureDevice.c)
 */

LONG_PTR __fastcall PopDirectedDripsNotifyTransitionFailed(__int64 a1)
{
  LONG_PTR result; // rax
  void *v2; // rbx

  result = (LONG_PTR)IoGetDeviceAttachmentBaseRefWithTag(a1, 0x67696450u);
  v2 = (void *)result;
  if ( result )
  {
    if ( *(_QWORD *)(*(_QWORD *)(result + 312) + 40LL) )
      PopDirectedDripsDiagTraceBroadcastFailureDevice();
    result = ObfDereferenceObjectWithTag(v2, 0x67696450u);
  }
  byte_140C24D14 = 1;
  return result;
}
