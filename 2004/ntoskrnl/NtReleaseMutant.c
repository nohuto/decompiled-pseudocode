/*
 * XREFs of NtReleaseMutant @ 0x140673140
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeReleaseMutant @ 0x140285BF0 (KeReleaseMutant.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ExpReleaseCrossVmMutant @ 0x14095933C (ExpReleaseCrossVmMutant.c)
 */

NTSTATUS __cdecl NtReleaseMutant(HANDLE MutantHandle, PLONG PreviousCount)
{
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS v5; // eax
  int v6; // ebx
  struct _DMA_ADAPTER *v7; // rdi
  LONG v8; // eax
  __int64 v10; // rcx
  PVOID v11; // [rsp+40h] [rbp-48h] BYREF
  PVOID v12; // [rsp+48h] [rbp-40h]
  LONG v13; // [rsp+98h] [rbp+10h] BYREF
  NTSTATUS v14; // [rsp+A0h] [rbp+18h]
  PVOID Object; // [rsp+A8h] [rbp+20h] BYREF

  v13 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousCount && PreviousMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PreviousCount < 0x7FFFFFFF0000LL )
      v10 = (__int64)PreviousCount;
    *(_DWORD *)v10 = *(_DWORD *)v10;
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(MutantHandle, 0, ExMutantObjectType, PreviousMode, &Object, 0LL);
  v6 = v5;
  v7 = (struct _DMA_ADAPTER *)Object;
  v12 = Object;
  v14 = v5;
  if ( v5 < 0 )
  {
    if ( v5 == -1073741788 )
    {
      if ( ExCrossVmMutantObjectType )
      {
        v11 = 0LL;
        v6 = ObReferenceObjectByHandle(MutantHandle, 0, ExCrossVmMutantObjectType, PreviousMode, &v11, 0LL);
        v7 = (struct _DMA_ADAPTER *)v11;
        v12 = v11;
        v14 = v6;
        if ( v6 >= 0 )
        {
          v6 = ExpReleaseCrossVmMutant(v11, &v13);
          v14 = v6;
        }
      }
    }
    v8 = v13;
  }
  else
  {
    v8 = KeReleaseMutant((PRKMUTANT)Object, 1, 0, 0);
    v13 = v8;
  }
  if ( v6 >= 0 && PreviousCount )
    *PreviousCount = v8;
  if ( v7 )
    HalPutDmaAdapter(v7);
  return v6;
}
