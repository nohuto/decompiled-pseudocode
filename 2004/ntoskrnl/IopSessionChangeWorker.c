/*
 * XREFs of IopSessionChangeWorker @ 0x1403A3B90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ExNotifyWithProcessing @ 0x14033CEE8 (ExNotifyWithProcessing.c)
 *     MmSetSessionObjectIoEvent @ 0x14077B524 (MmSetSessionObjectIoEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall IopSessionChangeWorker(__int64 P)
{
  void *v2; // rcx

  ExNotifyWithProcessing((__int64)IopSessionCallbackObject, P, 0LL, 0LL);
  MmSetSessionObjectIoEvent(*(_QWORD *)(P + 56));
  ObfDereferenceObjectWithTag(*(PVOID *)(P + 56), 0x746C6644u);
  v2 = *(void **)(P + 48);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag((PVOID)P, 0);
}
