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

int __fastcall RtlDebugReAllocateHeap(unsigned int a1, int a2, char *BaseAddress, unsigned int Size)
{
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // eax
  char *v10; // edi
  unsigned int v11; // edx
  int v12; // ecx
  struct _PEB *v13; // eax
  _BYTE *v14; // edx
  unsigned __int16 v15; // ax
  int v16; // edx
  int TagName; // eax
  char *Heap; // eax
  char *v19; // edi
  _WORD *ExtraStuffPointer; // eax
  unsigned __int16 v21; // ax
  struct _PEB *v22; // eax
  int v23; // edx
  int v24; // eax
  SIZE_T v25; // [esp-4h] [ebp-64h]
  int Flags; // [esp+2Ch] [ebp-34h]
  int v27; // [esp+30h] [ebp-30h]
  _WORD *v28; // [esp+30h] [ebp-30h]
  _BYTE *v29; // [esp+34h] [ebp-2Ch]
  _BYTE *v30; // [esp+38h] [ebp-28h]
  char *v31; // [esp+3Ch] [ebp-24h]
  unsigned __int16 v32; // [esp+40h] [ebp-20h]
  char v33; // [esp+47h] [ebp-19h]

  v33 = 0;
  v31 = 0;
  if ( (*(_DWORD *)(a1 + 68) & 0x1000000) != 0 )
    return dword_4B3A374C(dword_4B3A374C, a1, a2, BaseAddress, Size);
  if ( !RtlpCheckHeapSignature((_DWORD *)a1, "RtlReAllocateHeap") )
    goto LABEL_71;
  v7 = a2 | *(_DWORD *)(a1 + 68);
  v27 = v7;
  Flags = v7 | 0x10000100;
  if ( Size )
    v8 = Size;
  else
    v8 = 1;
  v9 = (*(_DWORD *)(a1 + 152) & (v8 + *(_DWORD *)(a1 + 148))) + 8;
  if ( v9 < Size || v9 > *(_DWORD *)(a1 + 120) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", Size, *(_DWORD *)(a1 + 120));
LABEL_71:
    v31 = 0;
    goto LABEL_72;
  }
  v32 = 0;
  if ( (v7 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 200));
    v33 = 1;
    Flags = v27 | 0x10000101;
  }
  RtlpValidateHeap((PVOID)a1);
  v10 = BaseAddress;
  v11 = (unsigned int)(BaseAddress - 8);
  if ( *(BaseAddress - 1) == 5 )
    v11 -= 8 * *(unsigned __int8 *)(v11 + 6);
  v29 = (_BYTE *)v11;
  v30 = (_BYTE *)v11;
  if ( RtlpValidateHeapEntry(a1, v11, "RtlReAllocateHeap") )
  {
    v13 = NtCurrentPeb();
    if ( BaseAddress == (char *)dword_4B3A47C8 )
    {
      if ( v13->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to reallocate block at %p to %Ix bytes\n", (const void *)dword_4B3A47C8, Size);
      goto LABEL_19;
    }
    if ( (v13->NtGlobalFlag & 0x800) != 0 && dword_4B3A47CC )
    {
      v14 = v29;
      if ( *(_DWORD *)(a1 + 76) )
      {
        *(_DWORD *)v30 ^= *(_DWORD *)(a1 + 80);
        if ( v30[3] != (*v29 ^ (unsigned __int8)(v29[1] ^ v29[2])) )
        {
          RtlpAnalyzeHeapFailure(v12);
          v14 = v29;
        }
      }
      if ( (v30[2] & 2) != 0 )
        v15 = *((_WORD *)RtlpGetExtraStuffPointer(v30) + 1);
      else
        v15 = (unsigned __int8)v30[3];
      v32 = v15;
      if ( *(_DWORD *)(a1 + 76) )
      {
        v30[3] = *v14 ^ v14[1] ^ v14[2];
        *(_DWORD *)v30 ^= *(_DWORD *)(a1 + 80);
      }
      if ( v15 && __PAIR32__(*(_WORD *)(a1 + 124), v15) == dword_4B3A47CC )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        LOWORD(v16) = v32;
        TagName = RtlpGetTagName(a1, v16);
        v10 = BaseAddress;
        DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", BaseAddress, Size, TagName);
LABEL_19:
        if ( NtCurrentPeb()->BeingDebugged )
        {
          RtlpHeapInvalidBadAddress = 0;
          __debugbreak();
          RtlpHeapInvalidBreakPoint = 0;
        }
        goto LABEL_38;
      }
      v10 = BaseAddress;
    }
LABEL_38:
    LODWORD(v25) = Size;
    Heap = (char *)RtlReAllocateHeap((PVOID)a1, Flags, v10, v25);
    v31 = Heap;
    if ( Heap )
    {
      v19 = Heap - 8;
      if ( *(Heap - 1) == 5 )
        v19 -= 8 * (unsigned __int8)v19[6];
      if ( *(_DWORD *)(a1 + 76) )
      {
        *(_DWORD *)v19 ^= *(_DWORD *)(a1 + 80);
        if ( v19[3] != ((unsigned __int8)*v19 ^ (unsigned __int8)(v19[1] ^ v19[2])) )
          RtlpAnalyzeHeapFailure(v19);
      }
      if ( (v19[2] & 2) != 0 )
      {
        ExtraStuffPointer = RtlpGetExtraStuffPointer(v19);
        v28 = ExtraStuffPointer;
        if ( (*(_DWORD *)(a1 + 64) & 0x8000000) != 0 )
        {
          *ExtraStuffPointer = RtlLogStackBackTraceEx((void *)1);
          ExtraStuffPointer = v28;
        }
        else
        {
          *ExtraStuffPointer = 0;
        }
        v21 = ExtraStuffPointer[1];
      }
      else
      {
        v21 = (unsigned __int8)v19[3];
      }
      v32 = v21;
      if ( *(_DWORD *)(a1 + 76) )
      {
        v19[3] = *v19 ^ v19[1] ^ v19[2];
        *(_DWORD *)v19 ^= *(_DWORD *)(a1 + 80);
      }
    }
    RtlpValidateHeapHeaders((void *)a1);
    RtlpValidateHeap((PVOID)a1);
  }
  if ( v31 )
  {
    v22 = NtCurrentPeb();
    if ( v31 == (char *)dword_4B3A47C8 )
    {
      if ( v22->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)dword_4B3A47C8, Size);
      goto LABEL_59;
    }
    if ( (v22->NtGlobalFlag & 0x800) != 0 && __PAIR32__(*(_WORD *)(a1 + 124), v32) == dword_4B3A47CC )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      LOWORD(v23) = v32;
      v24 = RtlpGetTagName(a1, v23);
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v31, Size, v24);
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
  if ( v33 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 200));
  return (int)v31;
}
