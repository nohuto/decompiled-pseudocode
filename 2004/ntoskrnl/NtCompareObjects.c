/*
 * XREFs of NtCompareObjects @ 0x1406EE2D0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCompareObjects(HANDLE FirstObjectHandle, HANDLE SecondObjectHandle)
{
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS result; // eax
  signed int v5; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp+18h] BYREF
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  DmaAdapter = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(FirstObjectHandle, 0, 0LL, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( result >= 0 )
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(SecondObjectHandle, 0, 0LL, PreviousMode, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v5 = Object != DmaAdapter ? 0xC00001AC : 0;
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    }
    HalPutDmaAdapter(DmaAdapter);
    return v5;
  }
  return result;
}
