/*
 * XREFs of RtlDebugReAllocateHeap @ 0x1800F9630
 * Callers:
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlpGetExtraStuffPointer @ 0x1800024B0 (RtlpGetExtraStuffPointer.c)
 *     RtlLogStackBackTraceEx @ 0x180011AA0 (RtlLogStackBackTraceEx.c)
 *     RtlReAllocateHeap @ 0x180023640 (RtlReAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x1800507F0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180050960 (DbgPrint.c)
 *     RtlpValidateHeapEntry @ 0x18005E250 (RtlpValidateHeapEntry.c)
 *     RtlpCheckHeapSignature @ 0x18005E4C0 (RtlpCheckHeapSignature.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     RtlpGetTagName @ 0x1800F3CD8 (RtlpGetTagName.c)
 *     RtlpBreakPointHeap @ 0x1800FA24C (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x1800FA274 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800FA854 (RtlpValidateHeapHeaders.c)
 *     RtlpAnalyzeHeapFailure @ 0x180107AF4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x18010DCF4 (RtlpHeapExceptionFilter.c)
 */

char *__fastcall RtlDebugReAllocateHeap(_DWORD *Src, int a2, char *a3, SIZE_T a4)
{
  char *v8; // rsi
  int v10; // r14d
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  struct _PEB *v14; // rax
  __int16 v15; // dx
  unsigned __int16 v16; // cx
  wchar_t *TagName; // rax
  char *Heap; // rax
  __int64 v19; // r14
  _WORD *ExtraStuffPointer; // rax
  _WORD *v21; // r15
  unsigned __int16 v22; // ax
  struct _PEB *v23; // rax
  wchar_t *v24; // rax
  char v25; // [rsp+30h] [rbp-48h]
  unsigned __int16 v26; // [rsp+34h] [rbp-44h]
  char *v27; // [rsp+38h] [rbp-40h]
  __int64 v28; // [rsp+40h] [rbp-38h]
  int Flags; // [rsp+88h] [rbp+10h]

  v25 = 0;
  v8 = 0LL;
  v27 = 0LL;
  if ( (Src[29] & 0x1000000) != 0 )
    return (char *)((__int64 (*)(void))qword_1801649D8)();
  if ( !RtlpCheckHeapSignature(Src, "RtlReAllocateHeap") )
    goto LABEL_68;
  v10 = Src[29] | 0x10000100 | a2;
  Flags = v10;
  v11 = a4;
  if ( !a4 )
    v11 = 1LL;
  v12 = (*((_QWORD *)Src + 33) & (*((_QWORD *)Src + 32) + v11)) + 16;
  if ( v12 < a4 || v12 > *((_QWORD *)Src + 25) )
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
  v26 = 0;
  if ( (v10 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
    v25 = 1;
    Flags = v10 | 1;
  }
  RtlpValidateHeap((_DWORD)Src);
  v13 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  if ( *(a3 - 1) == 5 )
    v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
  v28 = v13;
  if ( RtlpValidateHeapEntry((unsigned __int64)Src, v13, "RtlReAllocateHeap") )
  {
    v14 = NtCurrentPeb();
    if ( a3 == (char *)qword_180168C70 )
    {
      if ( v14->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to reallocate block at %p to %Ix bytes\n", (const void *)qword_180168C70, a4);
    }
    else
    {
      if ( (v14->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_36;
      v15 = dword_180168C78;
      if ( !dword_180168C78 )
        goto LABEL_36;
      if ( Src[31] )
      {
        *(_DWORD *)(v28 + 8) ^= Src[34];
        if ( *(_BYTE *)(v28 + 11) != (*(_BYTE *)(v28 + 8) ^ (unsigned __int8)(*(_BYTE *)(v28 + 9) ^ *(_BYTE *)(v28 + 10))) )
        {
          RtlpAnalyzeHeapFailure(Src, v28);
          v15 = dword_180168C78;
        }
      }
      if ( (*(_BYTE *)(v28 + 10) & 2) != 0 )
        v16 = *(_WORD *)(RtlpGetExtraStuffPointer(v28) + 2);
      else
        v16 = *(unsigned __int8 *)(v28 + 11);
      v26 = v16;
      if ( Src[31] )
      {
        *(_BYTE *)(v28 + 11) = *(_BYTE *)(v28 + 8) ^ *(_BYTE *)(v28 + 9) ^ *(_BYTE *)(v28 + 10);
        *(_DWORD *)(v28 + 8) ^= Src[34];
      }
      if ( !v16 || v16 != v15 || *((_WORD *)Src + 104) != HIWORD(dword_180168C78) )
        goto LABEL_36;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName((__int64)Src, v26);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, TagName);
    }
    RtlpBreakPointHeap();
LABEL_36:
    Heap = (char *)RtlReAllocateHeap(Src, Flags, a3, a4);
    v8 = Heap;
    v27 = Heap;
    if ( Heap )
    {
      v19 = (__int64)(Heap - 16);
      _m_prefetchw(Heap - 16);
      if ( *(Heap - 1) == 5 )
        v19 -= 16LL * *(unsigned __int8 *)(v19 + 14);
      if ( Src[31] )
      {
        *(_DWORD *)(v19 + 8) ^= Src[34];
        if ( *(_BYTE *)(v19 + 11) != (*(_BYTE *)(v19 + 8) ^ (unsigned __int8)(*(_BYTE *)(v19 + 9) ^ *(_BYTE *)(v19 + 10))) )
          RtlpAnalyzeHeapFailure(Src, v19);
      }
      if ( (*(_BYTE *)(v19 + 10) & 2) != 0 )
      {
        ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v19);
        v21 = ExtraStuffPointer;
        if ( (Src[28] & 0x8000000) != 0 )
          *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
        else
          *ExtraStuffPointer = 0;
        v22 = v21[1];
      }
      else
      {
        v22 = *(unsigned __int8 *)(v19 + 11);
      }
      v26 = v22;
      if ( Src[31] )
      {
        *(_BYTE *)(v19 + 11) = *(_BYTE *)(v19 + 8) ^ *(_BYTE *)(v19 + 9) ^ *(_BYTE *)(v19 + 10);
        *(_DWORD *)(v19 + 8) ^= Src[34];
      }
    }
    RtlpValidateHeapHeaders(Src);
    RtlpValidateHeap((_DWORD)Src);
  }
  if ( v8 )
  {
    v23 = NtCurrentPeb();
    v8 = v27;
    if ( v27 == (char *)qword_180168C70 )
    {
      if ( v23->Ldr )
      {
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        v8 = v27;
      }
      else
      {
        DbgPrint("HEAP: ");
      }
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_180168C70, a4);
LABEL_57:
      RtlpBreakPointHeap();
      goto LABEL_69;
    }
    if ( (v23->NtGlobalFlag & 0x800) != 0 && __PAIR32__(*((_WORD *)Src + 104), v26) == dword_180168C78 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v24 = RtlpGetTagName((__int64)Src, v26);
      v8 = v27;
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v27, a4, v24);
      goto LABEL_57;
    }
  }
LABEL_69:
  if ( v25 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
  return v8;
}
