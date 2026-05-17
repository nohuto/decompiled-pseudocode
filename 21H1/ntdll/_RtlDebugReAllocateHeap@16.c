/*
 * XREFs of _RtlDebugReAllocateHeap@16 @ 0x4B35FC56
 * Callers:
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 *     @RtlpReAllocateHeap@16 @ 0x4B2C2870 (@RtlpReAllocateHeap@16.c)
 * Callees:
 *     _RtlpValidateHeapEntry@12 @ 0x4B2A74FF (_RtlpValidateHeapEntry@12.c)
 *     _RtlpCheckHeapSignature@8 @ 0x4B2A7622 (_RtlpCheckHeapSignature@8.c)
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlReAllocateHeap@16 @ 0x4B2C26C0 (_RtlReAllocateHeap@16.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _RtlLogStackBackTraceEx@4 @ 0x4B2DFD89 (_RtlLogStackBackTraceEx@4.c)
 *     _RtlpGetExtraStuffPointer@4 @ 0x4B2E3AB9 (_RtlpGetExtraStuffPointer@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpGetTagName@8 @ 0x4B35809A (_RtlpGetTagName@8.c)
 *     _RtlDebugReAllocateHeap@16 @ 0x4B35FC56 (_RtlDebugReAllocateHeap@16.c)
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 *     _RtlpValidateHeapHeaders@8 @ 0x4B360B86 (_RtlpValidateHeapHeaders@8.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 */

int __fastcall RtlDebugReAllocateHeap(unsigned int a1, int a2, int a3, unsigned int a4)
{
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // eax
  int v10; // edi
  unsigned int v11; // edx
  int v12; // ecx
  struct _PEB *v13; // eax
  _BYTE *v14; // edx
  unsigned __int16 v15; // ax
  wchar_t *TagName; // eax
  int Heap; // eax
  _BYTE *v18; // edi
  _WORD *ExtraStuffPointer; // eax
  unsigned __int16 v20; // ax
  int v21; // edx
  struct _PEB *v22; // eax
  wchar_t *v23; // eax
  int v24; // [esp+2Ch] [ebp-34h]
  int v25; // [esp+30h] [ebp-30h]
  _WORD *v26; // [esp+30h] [ebp-30h]
  _BYTE *v27; // [esp+34h] [ebp-2Ch]
  _BYTE *v28; // [esp+38h] [ebp-28h]
  int v29; // [esp+3Ch] [ebp-24h]
  unsigned __int16 v30; // [esp+40h] [ebp-20h]
  char v31; // [esp+47h] [ebp-19h]

  v31 = 0;
  v29 = 0;
  if ( (*(_DWORD *)(a1 + 68) & 0x1000000) != 0 )
    return dword_4B3A374C(dword_4B3A374C, a1, a2, a3, a4);
  if ( !RtlpCheckHeapSignature((_DWORD *)a1, "RtlReAllocateHeap") )
    goto LABEL_71;
  v7 = a2 | *(_DWORD *)(a1 + 68);
  v25 = v7;
  v24 = v7 | 0x10000100;
  if ( a4 )
    v8 = a4;
  else
    v8 = 1;
  v9 = (*(_DWORD *)(a1 + 152) & (v8 + *(_DWORD *)(a1 + 148))) + 8;
  if ( v9 < a4 || v9 > *(_DWORD *)(a1 + 120) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a4, *(_DWORD *)(a1 + 120));
LABEL_71:
    v29 = 0;
    goto LABEL_72;
  }
  v30 = 0;
  if ( (v7 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_DWORD *)(a1 + 200));
    v31 = 1;
    v24 = v25 | 0x10000101;
  }
  LOBYTE(v8) = 0;
  RtlpValidateHeap(a1, v8);
  v10 = a3;
  v11 = a3 - 8;
  if ( *(_BYTE *)(a3 - 8 + 7) == 5 )
    v11 -= 8 * *(unsigned __int8 *)(v11 + 6);
  v27 = (_BYTE *)v11;
  v28 = (_BYTE *)v11;
  if ( RtlpValidateHeapEntry(a1, v11, "RtlReAllocateHeap") )
  {
    v13 = NtCurrentPeb();
    if ( a3 == dword_4B3A47C8 )
    {
      if ( v13->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to reallocate block at %p to %Ix bytes\n", (const void *)dword_4B3A47C8, a4);
      goto LABEL_19;
    }
    if ( (v13->NtGlobalFlag & 0x800) != 0 && dword_4B3A47CC )
    {
      v14 = v27;
      if ( *(_DWORD *)(a1 + 76) )
      {
        *(_DWORD *)v28 ^= *(_DWORD *)(a1 + 80);
        if ( v28[3] != (*v27 ^ (unsigned __int8)(v27[1] ^ v27[2])) )
        {
          RtlpAnalyzeHeapFailure(v12);
          v14 = v27;
        }
      }
      if ( (v28[2] & 2) != 0 )
        v15 = *((_WORD *)RtlpGetExtraStuffPointer(v28) + 1);
      else
        v15 = (unsigned __int8)v28[3];
      v30 = v15;
      if ( *(_DWORD *)(a1 + 76) )
      {
        v28[3] = *v14 ^ v14[1] ^ v14[2];
        *(_DWORD *)v28 ^= *(_DWORD *)(a1 + 80);
      }
      if ( v15 && __PAIR32__(*(_WORD *)(a1 + 124), v15) == dword_4B3A47CC )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        TagName = RtlpGetTagName(a1, v30);
        v10 = a3;
        DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, TagName);
LABEL_19:
        if ( NtCurrentPeb()->BeingDebugged )
        {
          RtlpHeapInvalidBadAddress = 0;
          __debugbreak();
          RtlpHeapInvalidBreakPoint = 0;
        }
        goto LABEL_38;
      }
      v10 = a3;
    }
LABEL_38:
    Heap = RtlReAllocateHeap(a1, v24, v10, a4);
    v29 = Heap;
    if ( Heap )
    {
      v18 = (_BYTE *)(Heap - 8);
      if ( *(_BYTE *)(Heap - 8 + 7) == 5 )
        v18 -= 8 * (unsigned __int8)v18[6];
      if ( *(_DWORD *)(a1 + 76) )
      {
        *(_DWORD *)v18 ^= *(_DWORD *)(a1 + 80);
        if ( v18[3] != (*v18 ^ (unsigned __int8)(v18[1] ^ v18[2])) )
          RtlpAnalyzeHeapFailure(v18);
      }
      if ( (v18[2] & 2) != 0 )
      {
        ExtraStuffPointer = RtlpGetExtraStuffPointer(v18);
        v26 = ExtraStuffPointer;
        if ( (*(_DWORD *)(a1 + 64) & 0x8000000) != 0 )
        {
          *ExtraStuffPointer = RtlLogStackBackTraceEx((void *)1);
          ExtraStuffPointer = v26;
        }
        else
        {
          *ExtraStuffPointer = 0;
        }
        v20 = ExtraStuffPointer[1];
      }
      else
      {
        v20 = (unsigned __int8)v18[3];
      }
      v30 = v20;
      if ( *(_DWORD *)(a1 + 76) )
      {
        v18[3] = *v18 ^ v18[1] ^ v18[2];
        *(_DWORD *)v18 ^= *(_DWORD *)(a1 + 80);
      }
    }
    RtlpValidateHeapHeaders((void *)a1);
    LOBYTE(v21) = 0;
    RtlpValidateHeap(a1, v21);
  }
  if ( v29 )
  {
    v22 = NtCurrentPeb();
    if ( v29 == dword_4B3A47C8 )
    {
      if ( v22->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)dword_4B3A47C8, a4);
      goto LABEL_59;
    }
    if ( (v22->NtGlobalFlag & 0x800) != 0 && __PAIR32__(*(_WORD *)(a1 + 124), v30) == dword_4B3A47CC )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v23 = RtlpGetTagName(a1, v30);
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v29, a4, v23);
LABEL_59:
      if ( NtCurrentPeb()->BeingDebugged )
      {
        RtlpHeapInvalidBadAddress = 0;
        __debugbreak();
        RtlpHeapInvalidBreakPoint = 0;
      }
    }
  }
LABEL_72:
  if ( v31 )
    RtlLeaveCriticalSection(*(_DWORD *)(a1 + 200));
  return v29;
}
