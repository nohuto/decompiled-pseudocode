/*
 * XREFs of RtlpHpAllocateHeap @ 0x18000776C
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x18000798C (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpCheckAllocationSizeLimit @ 0x180007650 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlpHpCalculateAllocSize @ 0x180007698 (RtlpHpCalculateAllocSize.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800076C4 (RtlpHpAllocateHeapInternal.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpFreeHeap @ 0x180024920 (RtlpHpFreeHeap.c)
 *     RtlpCallInterceptRoutine @ 0x1800F32B4 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapAllocateEvent @ 0x180109B50 (RtlpLogHeapAllocateEvent.c)
 *     RtlpHpExtrasAppend @ 0x18010DFF8 (RtlpHpExtrasAppend.c)
 */

__int64 __fastcall RtlpHpAllocateHeap(unsigned int *BaseAddress, unsigned __int64 a2, int a3, __int16 a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned int v9; // ebp
  int v10; // esi
  unsigned __int64 v11; // r14
  __int64 HeapInternal; // rax
  int v13; // r9d
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  __int64 v19; // [rsp+90h] [rbp+18h] BYREF

  v7 = (a3 | BaseAddress[5]) & 0x93000F0B;
  if ( !(unsigned int)RtlpHpCheckAllocationSizeLimit(a2, (int)BaseAddress, (__int64)(BaseAddress + 8)) )
    goto LABEL_14;
  v8 = 0LL;
  v9 = 0;
  v18 = 0LL;
  if ( (v7 & 0x1000000) == 0 )
  {
    v9 = BaseAddress[6];
    if ( v9 )
    {
      v7 |= 8u;
      if ( (int)RtlpCallInterceptRoutine(v9, (_DWORD)BaseAddress, 0, 1, (__int64)&v18) >= 0 )
      {
        v8 = v18;
        goto LABEL_3;
      }
LABEL_14:
      v11 = 0LL;
LABEL_13:
      LODWORD(v19) = 0;
      goto LABEL_21;
    }
  }
LABEL_3:
  v10 = v7 | 8;
  if ( !a4 )
    v10 = v7;
  v11 = RtlpHpCalculateAllocSize(v8 + a2, v10);
  if ( v11 < a2 || a2 > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_13;
  HeapInternal = RtlpHpAllocateHeapInternal(BaseAddress, a2, v11, v10 & 0x13000003, (int *)&v19);
  v14 = HeapInternal;
  if ( !HeapInternal )
    goto LABEL_9;
  if ( (v10 & 0x30000F08) == 0 )
    goto LABEL_9;
  v17 = RtlpHpExtrasAppend((_DWORD)BaseAddress, HeapInternal, a2, v13, v18, v10, a4);
  if ( !v9 )
    goto LABEL_9;
  *(_BYTE *)(v17 + 2) &= 0xF0u;
  *(_BYTE *)(v17 + 2) |= v9 & 0xF;
  if ( (int)RtlpCallInterceptRoutine(v9, (_DWORD)BaseAddress, v14, 2, v17 + 16) >= 0 )
    goto LABEL_9;
  RtlpHpFreeHeap((_DWORD)BaseAddress, v14, v10, 0, 0LL);
LABEL_21:
  v14 = 0LL;
LABEL_9:
  if ( RtlGetCurrentServiceSessionId() )
    v15 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v15 = 2147353472LL;
  if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapAllocateEvent(BaseAddress, v14, v11, (unsigned int)v19);
  return v14;
}
