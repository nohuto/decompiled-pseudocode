/*
 * XREFs of AlpcCreateSecurityContext @ 0x1408BED50
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x140688570 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateSecurityContext @ 0x140689E64 (AlpcpCreateSecurityContext.c)
 */

__int64 __fastcall AlpcCreateSecurityContext(void *a1, struct _KTHREAD *a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int SecurityContext; // ebx
  struct _DMA_ADAPTER *v8; // rdi
  struct _SECURITY_QUALITY_OF_SERVICE *v9; // r9
  ULONG_PTR v10; // rcx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+38h] [rbp-10h] BYREF

  BugCheckParameter2[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a3 )
  {
    SecurityContext = -1073741811;
  }
  else
  {
    Object = 0LL;
    SecurityContext = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, 0, &Object, 0LL);
    if ( SecurityContext >= 0 )
    {
      v8 = (struct _DMA_ADAPTER *)Object;
      if ( !a4 || (v9 = *(struct _SECURITY_QUALITY_OF_SERVICE **)(a4 + 8)) == 0LL )
        v9 = (struct _SECURITY_QUALITY_OF_SERVICE *)((char *)Object + 260);
      SecurityContext = AlpcpCreateSecurityContext((volatile signed __int64 *)Object, a2, 1, v9, BugCheckParameter2);
      if ( SecurityContext >= 0 )
      {
        v10 = BugCheckParameter2[0];
        *(_QWORD *)(a4 + 16) = *(_QWORD *)(BugCheckParameter2[0] + 8);
        AlpcpDereferenceBlobEx(v10, 1);
      }
      HalPutDmaAdapter(v8);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)SecurityContext;
}
