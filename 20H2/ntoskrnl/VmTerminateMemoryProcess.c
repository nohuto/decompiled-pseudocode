/*
 * XREFs of VmTerminateMemoryProcess @ 0x140931A80
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     PsTerminateMinimalProcess @ 0x14090D55C (PsTerminateMinimalProcess.c)
 */

NTSTATUS __fastcall VmTerminateMemoryProcess(void *a1, int a2)
{
  NTSTATUS result; // eax
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp+18h] BYREF

  DmaAdapter = 0LL;
  result = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)PsProcessType, 0, (PVOID *)&DmaAdapter, 0LL);
  if ( result >= 0 )
  {
    PsTerminateMinimalProcess(DmaAdapter, a2);
    HalPutDmaAdapter(DmaAdapter);
    return 0;
  }
  return result;
}
