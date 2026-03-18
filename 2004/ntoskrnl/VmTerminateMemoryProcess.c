/*
 * XREFs of VmTerminateMemoryProcess @ 0x14092BC50
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     PsTerminateMinimalProcess @ 0x14090793C (PsTerminateMinimalProcess.c)
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
