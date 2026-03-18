/*
 * XREFs of NtAlpcCreateSecurityContext @ 0x1406DF9B0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x140688570 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x14068896C (AlpcpDeleteBlob.c)
 *     AlpcpCreateSecurityContext @ 0x140689E64 (AlpcpCreateSecurityContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAlpcCreateSecurityContext(HANDLE Handle, int a2, __m128i *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v7; // rcx
  __m128i v8; // xmm1
  unsigned __int64 v9; // xmm1_8
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // edi
  struct _DMA_ADAPTER *v13; // r15
  ULONG_PTR v14; // rbx
  struct _SECURITY_QUALITY_OF_SERVICE *v16; // xmm1_8
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-48h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v18; // [rsp+38h] [rbp-40h] BYREF
  __int128 v19; // [rsp+48h] [rbp-30h]
  __int64 v20; // [rsp+58h] [rbp-20h]
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  *(_QWORD *)&v18.Length = 0LL;
  *(_DWORD *)&v18.ContextTrackingMode = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
  {
    v12 = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)a3 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v7 = (__int64)a3;
      *(_BYTE *)v7 = *(_BYTE *)v7;
      *(_BYTE *)(v7 + 23) = *(_BYTE *)(v7 + 23);
      v8 = *a3;
      v20 = a3[1].m128i_i64[0];
      v9 = _mm_srli_si128(v8, 8).m128i_u64[0];
      v10 = v9;
      if ( v9 )
      {
        v11 = v9;
        if ( v9 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        v18 = *(struct _SECURITY_QUALITY_OF_SERVICE *)v11;
      }
    }
    else
    {
      v16 = (struct _SECURITY_QUALITY_OF_SERVICE *)_mm_srli_si128(*a3, 8).m128i_u64[0];
      v10 = (unsigned __int64)v16;
      if ( v16 )
        v18 = *v16;
    }
    Object = 0LL;
    v12 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v12 >= 0 )
    {
      if ( !v10 )
        v18 = *(struct _SECURITY_QUALITY_OF_SERVICE *)((char *)Object + 260);
      v13 = (struct _DMA_ADAPTER *)Object;
      v12 = AlpcpCreateSecurityContext(
              (volatile signed __int64 *)Object,
              KeGetCurrentThread(),
              1,
              &v18,
              &BugCheckParameter2);
      if ( v12 >= 0 )
      {
        v14 = BugCheckParameter2;
        a3[1].m128i_i64[0] = *(_QWORD *)(BugCheckParameter2 + 8);
        AlpcpDereferenceBlobEx(v14, 1);
      }
      HalPutDmaAdapter(v13);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v12;
}
