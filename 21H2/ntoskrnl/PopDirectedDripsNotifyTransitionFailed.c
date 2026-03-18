/*
 * XREFs of PopDirectedDripsNotifyTransitionFailed @ 0x14098C1E4
 * Callers:
 *     PoBroadcastSystemState @ 0x140A4A768 (PoBroadcastSystemState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14036B86C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopDirectedDripsDiagTraceBroadcastFailureDevice @ 0x14099E908 (PopDirectedDripsDiagTraceBroadcastFailureDevice.c)
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
  byte_140C24274 = 1;
  return result;
}
