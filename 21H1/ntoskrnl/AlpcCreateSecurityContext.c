/*
 * XREFs of AlpcCreateSecurityContext @ 0x1408BDA00
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     AlpcpDereferenceBlobEx @ 0x1406103F0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateSecurityContext @ 0x140611CE0 (AlpcpCreateSecurityContext.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall AlpcCreateSecurityContext(void *a1, struct _KTHREAD *a2, __int64 a3, __int64 a4)
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
  if ( (_DWORD)a3 )
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  return (unsigned int)SecurityContext;
}
