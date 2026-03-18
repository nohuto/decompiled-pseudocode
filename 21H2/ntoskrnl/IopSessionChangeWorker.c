/*
 * XREFs of IopSessionChangeWorker @ 0x140232710
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyWithProcessing @ 0x140232788 (ExNotifyWithProcessing.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     MmSetSessionObjectIoEvent @ 0x1406A958C (MmSetSessionObjectIoEvent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall IopSessionChangeWorker(PVOID *P)
{
  PVOID v2; // rcx

  ExNotifyWithProcessing(IopSessionCallbackObject, P, 0LL, 0LL);
  MmSetSessionObjectIoEvent(P[7]);
  ObfDereferenceObjectWithTag(P[7], 0x746C6644u);
  v2 = P[6];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
