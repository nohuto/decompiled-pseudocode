/*
 * XREFs of NtReleaseSemaphore @ 0x1406B7430
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeReleaseSemaphore @ 0x1402EE560 (KeReleaseSemaphore.c)
 *     KiFatalFilter @ 0x14050F070 (KiFatalFilter.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtReleaseSemaphore(HANDLE SemaphoreHandle, LONG ReleaseCount, PLONG PreviousCount)
{
  KPROCESSOR_MODE PreviousMode; // r14
  int v6; // edi
  LONG v7; // r8d
  struct _DMA_ADAPTER *v8; // rsi
  LONG v9; // r15d
  __int64 v11; // rdx
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousCount && PreviousMode )
  {
    v11 = (__int64)PreviousCount;
    if ( (unsigned __int64)PreviousCount >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v11 = *(_DWORD *)v11;
  }
  if ( ReleaseCount <= 0 )
    return -1073741811;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(SemaphoreHandle, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, PreviousMode, &Object, 0LL);
  if ( v6 >= 0 )
  {
    v7 = ReleaseCount;
    v8 = (struct _DMA_ADAPTER *)Object;
    v9 = KeReleaseSemaphore((PRKSEMAPHORE)Object, 1, v7, 0);
    HalPutDmaAdapter(v8);
    if ( PreviousCount )
      *PreviousCount = v9;
  }
  return v6;
}
