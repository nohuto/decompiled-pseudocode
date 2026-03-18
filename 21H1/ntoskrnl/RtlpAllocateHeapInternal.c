/*
 * XREFs of RtlpAllocateHeapInternal @ 0x14035EF08
 * Callers:
 *     RtlAllocateHeap @ 0x14035EEB0 (RtlAllocateHeap.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x140580B5C (RtlpHpAllocWithExceptionProtection.c)
 * Callees:
 *     RtlFreeHeap @ 0x14035EDC0 (RtlFreeHeap.c)
 *     RtlpHpVsContextAllocate @ 0x14035EF84 (RtlpHpVsContextAllocate.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x14035EFFC (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x14035FD60 (RtlpHpCheckAllocationSizeLimit.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     RtlpAllocateHeap @ 0x140583090 (RtlpAllocateHeap.c)
 *     RtlpAllocateHeapRaiseException @ 0x140583968 (RtlpAllocateHeapRaiseException.c)
 *     RtlpSetupExtendedBlock @ 0x140585E38 (RtlpSetupExtendedBlock.c)
 */

void *__fastcall RtlpAllocateHeapInternal(_DWORD *HeapHandle, unsigned __int64 a2, unsigned int a3, __int16 a4)
{
  unsigned __int64 v4; // rbx
  unsigned int v6; // eax
  void *v7; // rdi
  int v9; // r14d
  unsigned __int64 v10; // r15
  int v11; // ebp
  int v12; // r12d
  int v13; // eax
  unsigned __int64 v14; // rcx
  __int64 v15; // r15
  __int64 Heap; // rax
  int v17; // r9d
  __int64 v18; // r13
  unsigned __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+88h] [rbp+20h]

  LOWORD(v20) = a4;
  v4 = a2;
  if ( HeapHandle[4] == -857879331 )
  {
    if ( a2 > 0x20000 )
      return 0LL;
    v6 = RtlpHpConvertFlagsToSegmentFlags(a3);
    return (void *)RtlpHpVsContextAllocate(HeapHandle + 16, (unsigned int)v4, (unsigned int)v4, HeapHandle[5] | v6);
  }
  v9 = HeapHandle[29] | a3;
  v10 = 0LL;
  v20 = 0;
  v19 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL || !(unsigned int)RtlpHpCheckAllocationSizeLimit(a2, HeapHandle, HeapHandle + 94) )
    goto LABEL_24;
  v11 = HeapHandle[36];
  v12 = -1073741823;
  if ( v11 )
  {
    if ( (v9 & 0x3C000102) != 0 )
    {
      v11 = 0;
    }
    else
    {
      if ( (_WORD)v11 == 1 )
        v13 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, __int64, unsigned __int64 *))RtlpInterceptorRoutines)(
                HeapHandle,
                0LL,
                1LL,
                &v19);
      else
        v13 = -1073741823;
      if ( v13 < 0 )
        goto LABEL_24;
      v14 = (v19 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      v4 += v14 + 16;
      v19 = v14 + 16;
    }
  }
  v15 = 1LL;
  if ( v4 )
    v15 = v4;
  v10 = (v15 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
  Heap = RtlpAllocateHeap((_DWORD)HeapHandle);
  v7 = (void *)Heap;
  if ( !Heap )
    goto LABEL_25;
  if ( v11 )
  {
    v18 = Heap;
    v4 -= v19;
    v7 = (void *)RtlpSetupExtendedBlock((_DWORD)HeapHandle, v9, Heap, v17, v19, v11);
    if ( (_WORD)v11 == 1 )
      v12 = ((__int64 (__fastcall *)(_DWORD *, void *, __int64, __int64))RtlpInterceptorRoutines)(
              HeapHandle,
              v7,
              2LL,
              v18);
    if ( v12 < 0 )
    {
      RtlFreeHeap(HeapHandle, 0, v7);
LABEL_24:
      v7 = 0LL;
LABEL_25:
      if ( (v9 & 4) != 0 )
      {
        if ( v10 )
          v4 = v10;
        RtlpAllocateHeapRaiseException(v4);
      }
    }
  }
  return v7;
}
