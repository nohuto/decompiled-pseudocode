/*
 * XREFs of PopDirectedDripsNotifyTransitionFailed @ 0x1408E3710
 * Callers:
 *     PoBroadcastSystemState @ 0x1409922E0 (PoBroadcastSystemState.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14028350C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     PopDirectedDripsDiagTraceBroadcastFailureDevice @ 0x1408F800C (PopDirectedDripsDiagTraceBroadcastFailureDevice.c)
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
  byte_140C24E54 = 1;
  return result;
}
