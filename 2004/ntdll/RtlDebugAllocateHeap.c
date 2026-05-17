/*
 * XREFs of RtlDebugAllocateHeap @ 0x1800F8640
 * Callers:
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpGetExtraStuffPointer @ 0x1800024B0 (RtlpGetExtraStuffPointer.c)
 *     RtlLogStackBackTraceEx @ 0x180011AA0 (RtlLogStackBackTraceEx.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x1800507F0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180050960 (DbgPrint.c)
 *     RtlpCheckHeapSignature @ 0x18005E4C0 (RtlpCheckHeapSignature.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     RtlpGetTagName @ 0x1800F3CD8 (RtlpGetTagName.c)
 *     RtlpBreakPointHeap @ 0x1800FA24C (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x1800FA274 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800FA854 (RtlpValidateHeapHeaders.c)
 *     RtlpAnalyzeHeapFailure @ 0x180107AF4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x18010DCF4 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugAllocateHeap(_DWORD *Src, int a2, unsigned __int64 a3)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 Heap; // rbx
  __int64 v14; // rbx
  _WORD *ExtraStuffPointer; // rax
  _WORD *v16; // r14
  unsigned __int16 v17; // ax
  struct _PEB *v18; // rax
  wchar_t *TagName; // rax
  char v20; // [rsp+20h] [rbp-38h]
  __int64 v21; // [rsp+28h] [rbp-30h]
  unsigned __int16 v22; // [rsp+78h] [rbp+20h]

  v20 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_1801649D0)();
  if ( !RtlpCheckHeapSignature(Src, "RtlAllocateHeap") )
    goto LABEL_46;
  v9 = Src[29] | 0x10000100 | a2;
  v10 = a3;
  if ( !a3 )
    v10 = 1LL;
  v11 = *((_QWORD *)Src + 33) & (*((_QWORD *)Src + 32) + v10);
  if ( v11 < 0x20 )
    v11 = 32LL;
  v12 = v11 + 16;
  if ( v12 < a3 || v12 > *((_QWORD *)Src + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a3, *((_QWORD *)Src + 25));
LABEL_46:
    Heap = 0LL;
    goto LABEL_47;
  }
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((_QWORD *)Src + 44));
    v20 = 1;
    v9 |= 1u;
  }
  RtlpValidateHeap(Src, 0LL);
  Heap = RtlAllocateHeap((__int64)Src, v9, a3);
  v21 = Heap;
  RtlpValidateHeapHeaders(Src);
  if ( !Heap )
    goto LABEL_47;
  v14 = Heap - 16;
  _m_prefetchw((const void *)v14);
  if ( *(_BYTE *)(v14 + 15) == 5 )
    v14 -= 16LL * *(unsigned __int8 *)(v14 + 14);
  if ( Src[31] )
  {
    *(_DWORD *)(v14 + 8) ^= Src[34];
    if ( *(_BYTE *)(v14 + 11) != (*(_BYTE *)(v14 + 8) ^ (unsigned __int8)(*(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10))) )
      RtlpAnalyzeHeapFailure(Src, v14);
  }
  if ( (*(_BYTE *)(v14 + 10) & 2) != 0 )
  {
    ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v14);
    v16 = ExtraStuffPointer;
    if ( (Src[28] & 0x8000000) != 0 )
      *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
    else
      *ExtraStuffPointer = 0;
    v17 = v16[1];
  }
  else
  {
    v17 = *(unsigned __int8 *)(v14 + 11);
  }
  v22 = v17;
  if ( Src[31] )
  {
    *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
    *(_DWORD *)(v14 + 8) ^= Src[34];
  }
  if ( (Src[28] & 0x20000000) != 0 )
    RtlpValidateHeap(Src, 0LL);
  v18 = NtCurrentPeb();
  Heap = v21;
  if ( v21 == RtlpHeapStopOn )
  {
    if ( v18->Ldr )
    {
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      Heap = v21;
    }
    else
    {
      DbgPrint("HEAP: ");
    }
    DbgPrint("Just allocated block at %p for %Ix bytes\n", (const void *)RtlpHeapStopOn, a3);
LABEL_33:
    RtlpBreakPointHeap();
    goto LABEL_47;
  }
  if ( (v18->NtGlobalFlag & 0x800) != 0 && v22 && v22 == word_180168C68 && *((_WORD *)Src + 104) == word_180168C6A )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName((__int64)Src, v22);
    Heap = v21;
    DbgPrint("Just allocated block at %p for 0x%Ix bytes with tag %ws\n", v21, a3, TagName);
    goto LABEL_33;
  }
LABEL_47:
  if ( v20 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44), v7, v8);
  return Heap;
}
