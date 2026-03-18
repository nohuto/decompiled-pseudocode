/*
 * XREFs of NtAlpcCreateSecurityContext @ 0x1406BF430
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     AlpcpDereferenceBlobEx @ 0x1406103F0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x1406107EC (AlpcpDeleteBlob.c)
 *     AlpcpCreateSecurityContext @ 0x140611CE0 (AlpcpCreateSecurityContext.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAlpcCreateSecurityContext(HANDLE Handle, __int64 a2, __m128i *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v8; // rcx
  __m128i v9; // xmm1
  unsigned __int64 v10; // xmm1_8
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // edi
  struct _DMA_ADAPTER *v14; // r15
  ULONG_PTR v15; // rbx
  struct _SECURITY_QUALITY_OF_SERVICE *v17; // xmm1_8
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-48h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v19; // [rsp+38h] [rbp-40h] BYREF
  __int128 v20; // [rsp+48h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-20h]
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  *(_QWORD *)&v19.Length = 0LL;
  *(_DWORD *)&v19.ContextTrackingMode = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (_DWORD)a2 )
  {
    v13 = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)a3 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v8 = (__int64)a3;
      *(_BYTE *)v8 = *(_BYTE *)v8;
      *(_BYTE *)(v8 + 23) = *(_BYTE *)(v8 + 23);
      v9 = *a3;
      v21 = a3[1].m128i_i64[0];
      v10 = _mm_srli_si128(v9, 8).m128i_u64[0];
      v11 = v10;
      if ( v10 )
      {
        v12 = v10;
        if ( v10 >= 0x7FFFFFFF0000LL )
          v12 = 0x7FFFFFFF0000LL;
        v19 = *(struct _SECURITY_QUALITY_OF_SERVICE *)v12;
      }
    }
    else
    {
      v17 = (struct _SECURITY_QUALITY_OF_SERVICE *)_mm_srli_si128(*a3, 8).m128i_u64[0];
      v11 = (unsigned __int64)v17;
      if ( v17 )
        v19 = *v17;
    }
    Object = 0LL;
    v13 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v13 >= 0 )
    {
      if ( !v11 )
        v19 = *(struct _SECURITY_QUALITY_OF_SERVICE *)((char *)Object + 260);
      v14 = (struct _DMA_ADAPTER *)Object;
      v13 = AlpcpCreateSecurityContext(
              (volatile signed __int64 *)Object,
              KeGetCurrentThread(),
              1,
              &v19,
              &BugCheckParameter2);
      if ( v13 >= 0 )
      {
        v15 = BugCheckParameter2;
        a3[1].m128i_i64[0] = *(_QWORD *)(BugCheckParameter2 + 8);
        AlpcpDereferenceBlobEx(v15, 1);
      }
      HalPutDmaAdapter(v14);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), a2, (__int64)a3, a4);
  return (unsigned int)v13;
}
