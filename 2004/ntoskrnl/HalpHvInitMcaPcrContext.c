/*
 * XREFs of HalpHvInitMcaPcrContext @ 0x1403C2620
 * Callers:
 *     HalpMceInit @ 0x14099D5FC (HalpMceInit.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x1402C9B50 (KeGetCurrentProcessorNumberEx.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402DE650 (KeQueryMaximumProcessorCountEx.c)
 *     KeSetTargetProcessorDpcEx @ 0x14035E9A0 (KeSetTargetProcessorDpcEx.c)
 *     HalpMmAllocCtxAlloc @ 0x14037AA88 (HalpMmAllocCtxAlloc.c)
 *     HalpGetMcaPcrContext @ 0x14039DE38 (HalpGetMcaPcrContext.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void HalpHvInitMcaPcrContext()
{
  KPCR *Pcr; // rdi
  ULONG CurrentProcessorNumber; // r15d
  size_t v2; // rbx
  void *v3; // rax
  _DWORD *PoolWithTag; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // r12d
  __int64 v8; // rbx
  __int64 McaPcrContext; // r14
  int v10; // edi
  unsigned int i; // r13d
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // edi
  int v15; // r15d
  __int64 v16; // rax
  __int64 j; // rbx
  unsigned int v18; // [rsp+70h] [rbp+40h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+78h] [rbp+48h] BYREF
  __int64 v20; // [rsp+80h] [rbp+50h]

  v18 = 0;
  Pcr = KeGetPcr();
  ProcNumber = 0;
  if ( HalpHvWheaEnlightenedCpuManager )
  {
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(&ProcNumber);
    if ( !CurrentProcessorNumber && !HalpHvVpMcaPcrContextData )
    {
      v2 = 184 * KeQueryMaximumProcessorCountEx(0xFFFFu);
      v3 = (void *)HalpMmAllocCtxAlloc(v2, v2);
      HalpHvVpMcaPcrContextData = (__int64)v3;
      if ( !v3 )
        KeBugCheckEx(0xACu, (unsigned int)v2, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\hv\\hvintel.c", 0x49FuLL);
      memset(v3, 0, v2);
    }
    if ( !*(_QWORD *)&Pcr->HalReserved[6] )
    {
      PoolWithTag = 0LL;
      if ( qword_140C4A250 )
        v5 = qword_140C4A250(4294967294LL, &v18, 0LL);
      else
        v5 = -1073741823;
      if ( v5 == -1073741789 )
      {
        v6 = 8 * v18;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v18, 0x206C6148u);
        if ( !PoolWithTag )
          KeBugCheckEx(0xACu, v6, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\hv\\hvintel.c", 0x4BAuLL);
        if ( qword_140C4A250 )
          v5 = qword_140C4A250(4294967294LL, &v18, PoolWithTag);
        else
          v5 = -1073741823;
      }
      if ( v5 < 0 || !v18 )
        KeBugCheckEx(0x5Cu, 0x8200uLL, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\hv\\hvintel.c", 0x4C6uLL);
      v7 = 0;
      v20 = *PoolWithTag & 0x7FFFFFFF;
      v8 = v20;
      McaPcrContext = HalpGetMcaPcrContext(v20);
      *(_QWORD *)(McaPcrContext + 176) = 0LL;
      *(_QWORD *)(McaPcrContext + 164) = v8;
      *(_QWORD *)&Pcr->HalReserved[6] = McaPcrContext;
      v10 = 0;
      for ( i = 1; i < v18; McaPcrContext = v13 )
      {
        v7 &= ~1u;
        HIDWORD(v20) = v7;
        v10 = v7;
        LODWORD(v20) = PoolWithTag[i] & 0x7FFFFFFF;
        v12 = v20;
        v13 = HalpGetMcaPcrContext(v20);
        ++i;
        *(_QWORD *)(v13 + 176) = 0LL;
        *(_QWORD *)(v13 + 164) = v12;
        *(_QWORD *)(McaPcrContext + 176) = v13;
      }
      v14 = v10 | 1;
      v15 = CurrentProcessorNumber & 0x7FFFFFFF;
      v20 = __PAIR64__(v14, v15);
      v16 = HalpGetMcaPcrContext(__SPAIR64__(v14, v15));
      *(_QWORD *)(v16 + 176) = 0LL;
      *(_QWORD *)(v16 + 164) = __PAIR64__(v14, v15);
      *(_QWORD *)(McaPcrContext + 176) = v16;
      ExFreePoolWithTag(PoolWithTag, 0x206C6148u);
    }
    for ( j = *(_QWORD *)&KeGetPcr()->HalReserved[6]; j; j = *(_QWORD *)(j + 176) )
    {
      if ( !*(_BYTE *)(j + 152) )
      {
        *(_DWORD *)(j + 40) = 275;
        *(_QWORD *)(j + 64) = HalpCmciDeferredRoutine;
        *(_QWORD *)(j + 72) = j;
        *(_QWORD *)(j + 96) = 0LL;
        *(_QWORD *)(j + 56) = 0LL;
        KeSetTargetProcessorDpcEx((PKDPC)(j + 40), &ProcNumber);
        *(_BYTE *)(j + 152) = 1;
      }
    }
  }
}
