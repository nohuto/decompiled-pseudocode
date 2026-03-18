/*
 * XREFs of PopDirectedDripsNotifyTransitionFailed @ 0x1408E00D0
 * Callers:
 *     PoBroadcastSystemState @ 0x14098F324 (PoBroadcastSystemState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027746C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopDirectedDripsDiagTraceBroadcastFailureDevice @ 0x1408F4C1C (PopDirectedDripsDiagTraceBroadcastFailureDevice.c)
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
  byte_140C24BF4 = 1;
  return result;
}
