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

__int64 __fastcall NtReleaseSemaphore(void *a1, int a2, LONG *a3)
{
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v6; // edi
  LONG v7; // r8d
  struct _DMA_ADAPTER *v8; // rsi
  LONG v9; // r15d
  __int64 v11; // rdx
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a3 && PreviousMode )
  {
    v11 = (__int64)a3;
    if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v11 = *(_DWORD *)v11;
  }
  if ( a2 <= 0 )
    return 3221225485LL;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a1, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, PreviousMode, &Object, 0LL);
  if ( v6 >= 0 )
  {
    v7 = a2;
    v8 = (struct _DMA_ADAPTER *)Object;
    v9 = KeReleaseSemaphore((PRKSEMAPHORE)Object, 1, v7, 0);
    HalPutDmaAdapter(v8);
    if ( a3 )
      *a3 = v9;
  }
  return (unsigned int)v6;
}
