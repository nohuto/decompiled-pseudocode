/*
 * XREFs of RtlDebugReAllocateHeap @ 0x1800F99D0
 * Callers:
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlpGetExtraStuffPointer @ 0x1800024B0 (RtlpGetExtraStuffPointer.c)
 *     RtlLogStackBackTraceEx @ 0x180011AA0 (RtlLogStackBackTraceEx.c)
 *     RtlReAllocateHeap @ 0x180023640 (RtlReAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     RtlpValidateHeapEntry @ 0x18005F850 (RtlpValidateHeapEntry.c)
 *     RtlpCheckHeapSignature @ 0x18005FAC0 (RtlpCheckHeapSignature.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 *     RtlpGetTagName @ 0x1800F4078 (RtlpGetTagName.c)
 *     RtlpBreakPointHeap @ 0x1800FA5EC (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x1800FA614 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800FABF4 (RtlpValidateHeapHeaders.c)
 *     RtlpAnalyzeHeapFailure @ 0x180107EA4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x18010E0A4 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugReAllocateHeap(_DWORD *Src, int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r14d
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  struct _PEB *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int16 v19; // dx
  unsigned __int16 v20; // cx
  wchar_t *TagName; // rax
  __int64 Heap; // rax
  __int64 v23; // r14
  _WORD *ExtraStuffPointer; // rax
  _WORD *v25; // r15
  unsigned __int16 v26; // ax
  struct _PEB *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  wchar_t *v30; // rax
  char v31; // [rsp+30h] [rbp-48h]
  unsigned __int16 v32; // [rsp+34h] [rbp-44h]
  __int64 v33; // [rsp+38h] [rbp-40h]
  __int64 v34; // [rsp+40h] [rbp-38h]
  unsigned int v35; // [rsp+88h] [rbp+10h]

  v31 = 0;
  v8 = 0LL;
  v33 = 0LL;
  if ( (Src[29] & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_180166408)();
  if ( !RtlpCheckHeapSignature(Src, "RtlReAllocateHeap") )
    goto LABEL_68;
  v12 = Src[29] | 0x10000100 | a2;
  v35 = v12;
  v13 = a4;
  if ( !a4 )
    v13 = 1LL;
  v14 = (*((_QWORD *)Src + 33) & (*((_QWORD *)Src + 32) + v13)) + 16;
  if ( v14 < a4 || v14 > *((_QWORD *)Src + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a4, *((_QWORD *)Src + 25));
LABEL_68:
    v8 = 0LL;
    goto LABEL_69;
  }
  v32 = 0;
  if ( (v12 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((_QWORD *)Src + 44));
    v31 = 1;
    v35 = v12 | 1;
  }
  RtlpValidateHeap(Src, 0LL);
  v15 = a3 - 16;
  _m_prefetchw((const void *)(a3 - 16));
  if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
    v15 -= 16LL * *(unsigned __int8 *)(v15 + 14);
  v34 = v15;
  if ( RtlpValidateHeapEntry((unsigned __int64)Src, v15, "RtlReAllocateHeap") )
  {
    v16 = NtCurrentPeb();
    if ( a3 == qword_18016AC70 )
    {
      if ( v16->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to reallocate block at %p to %Ix bytes\n", (const void *)qword_18016AC70, a4);
    }
    else
    {
      if ( (v16->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_36;
      v19 = dword_18016AC78;
      if ( !dword_18016AC78 )
        goto LABEL_36;
      if ( Src[31] )
      {
        *(_DWORD *)(v34 + 8) ^= Src[34];
        if ( *(_BYTE *)(v34 + 11) != (*(_BYTE *)(v34 + 8) ^ (unsigned __int8)(*(_BYTE *)(v34 + 9) ^ *(_BYTE *)(v34 + 10))) )
        {
          RtlpAnalyzeHeapFailure(Src, v34);
          v19 = dword_18016AC78;
        }
      }
      if ( (*(_BYTE *)(v34 + 10) & 2) != 0 )
        v20 = *(_WORD *)(RtlpGetExtraStuffPointer(v34) + 2);
      else
        v20 = *(unsigned __int8 *)(v34 + 11);
      v32 = v20;
      if ( Src[31] )
      {
        *(_BYTE *)(v34 + 11) = *(_BYTE *)(v34 + 8) ^ *(_BYTE *)(v34 + 9) ^ *(_BYTE *)(v34 + 10);
        *(_DWORD *)(v34 + 8) ^= Src[34];
      }
      if ( !v20 || v20 != v19 || *((_WORD *)Src + 104) != HIWORD(dword_18016AC78) )
        goto LABEL_36;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName((__int64)Src, v32);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, TagName);
    }
    RtlpBreakPointHeap(v18, v17);
LABEL_36:
    Heap = RtlReAllocateHeap((__int64)Src, v35, a3, a4);
    v8 = Heap;
    v33 = Heap;
    if ( Heap )
    {
      v23 = Heap - 16;
      _m_prefetchw((const void *)(Heap - 16));
      if ( *(_BYTE *)(Heap - 16 + 15) == 5 )
        v23 -= 16LL * *(unsigned __int8 *)(v23 + 14);
      if ( Src[31] )
      {
        *(_DWORD *)(v23 + 8) ^= Src[34];
        if ( *(_BYTE *)(v23 + 11) != (*(_BYTE *)(v23 + 8) ^ (unsigned __int8)(*(_BYTE *)(v23 + 9) ^ *(_BYTE *)(v23 + 10))) )
          RtlpAnalyzeHeapFailure(Src, v23);
      }
      if ( (*(_BYTE *)(v23 + 10) & 2) != 0 )
      {
        ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v23);
        v25 = ExtraStuffPointer;
        if ( (Src[28] & 0x8000000) != 0 )
          *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
        else
          *ExtraStuffPointer = 0;
        v26 = v25[1];
      }
      else
      {
        v26 = *(unsigned __int8 *)(v23 + 11);
      }
      v32 = v26;
      if ( Src[31] )
      {
        *(_BYTE *)(v23 + 11) = *(_BYTE *)(v23 + 8) ^ *(_BYTE *)(v23 + 9) ^ *(_BYTE *)(v23 + 10);
        *(_DWORD *)(v23 + 8) ^= Src[34];
      }
    }
    RtlpValidateHeapHeaders(Src);
    RtlpValidateHeap(Src, 0LL);
  }
  if ( v8 )
  {
    v27 = NtCurrentPeb();
    v8 = v33;
    if ( v33 == qword_18016AC70 )
    {
      if ( v27->Ldr )
      {
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        v8 = v33;
      }
      else
      {
        DbgPrint("HEAP: ");
      }
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_18016AC70, a4);
LABEL_57:
      RtlpBreakPointHeap(v29, v28);
      goto LABEL_69;
    }
    if ( (v27->NtGlobalFlag & 0x800) != 0 && __PAIR32__(*((_WORD *)Src + 104), v32) == dword_18016AC78 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v30 = RtlpGetTagName((__int64)Src, v32);
      v8 = v33;
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v33, a4, v30);
      goto LABEL_57;
    }
  }
LABEL_69:
  if ( v31 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44), v10, v11);
  return v8;
}
