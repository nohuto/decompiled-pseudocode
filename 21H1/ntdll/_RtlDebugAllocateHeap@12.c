/*
 * XREFs of _RtlDebugAllocateHeap@12 @ 0x4B35EF05
 * Callers:
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 * Callees:
 *     _RtlpCheckHeapSignature@8 @ 0x4B2A7622 (_RtlpCheckHeapSignature@8.c)
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _RtlLogStackBackTraceEx@4 @ 0x4B2DFD89 (_RtlLogStackBackTraceEx@4.c)
 *     _RtlpGetExtraStuffPointer@4 @ 0x4B2E3AB9 (_RtlpGetExtraStuffPointer@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpGetTagName@8 @ 0x4B35809A (_RtlpGetTagName@8.c)
 *     _RtlDebugAllocateHeap@12 @ 0x4B35EF05 (_RtlDebugAllocateHeap@12.c)
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 *     _RtlpValidateHeapHeaders@8 @ 0x4B360B86 (_RtlpValidateHeapHeaders@8.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 */

int __fastcall RtlDebugAllocateHeap(int a1, int a2, unsigned int Size)
{
  int v6; // ecx
  ULONG v7; // edi
  unsigned int v8; // eax
  unsigned int v9; // eax
  char *Heap; // edi
  char *v11; // edi
  _WORD *ExtraStuffPointer; // eax
  __int16 v13; // ax
  struct _PEB *v14; // eax
  int v15; // edx
  int TagName; // eax
  SIZE_T v17; // [esp-4h] [ebp-60h]
  int v19; // [esp+30h] [ebp-2Ch]
  __int16 v20; // [esp+30h] [ebp-2Ch]
  _WORD *v21; // [esp+34h] [ebp-28h]
  char *v22; // [esp+38h] [ebp-24h]
  int v23; // [esp+3Ch] [ebp-20h]
  __int16 v24; // [esp+3Ch] [ebp-20h]
  char v25; // [esp+43h] [ebp-19h]

  v25 = 0;
  if ( (*(_DWORD *)(a1 + 68) & 0x1000000) != 0 )
    return dword_4B3A3748(dword_4B3A3748, a1, a2, Size);
  if ( !RtlpCheckHeapSignature((_DWORD *)a1, "RtlAllocateHeap") )
    goto LABEL_47;
  v6 = a2 | *(_DWORD *)(a1 + 68);
  v19 = v6;
  v7 = v6 | 0x10000100;
  v23 = Size;
  if ( !Size )
    v23 = 1;
  v8 = *(_DWORD *)(a1 + 152) & (v23 + *(_DWORD *)(a1 + 148));
  if ( v8 < 0x10 )
    v8 = 16;
  v9 = v8 + 8;
  if ( v9 < Size || v9 > *(_DWORD *)(a1 + 120) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", Size, *(_DWORD *)(a1 + 120));
LABEL_47:
    v22 = 0;
    goto LABEL_48;
  }
  if ( (v6 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 200));
    v25 = 1;
    v7 = v19 | 0x10000101;
  }
  RtlpValidateHeap((PVOID)a1);
  LODWORD(v17) = Size;
  Heap = (char *)RtlAllocateHeap((PVOID)a1, v7, v17);
  v22 = Heap;
  RtlpValidateHeapHeaders((void *)a1);
  if ( !Heap )
    goto LABEL_48;
  v11 = Heap - 8;
  if ( v11[7] == 5 )
    v11 -= 8 * (unsigned __int8)v11[6];
  if ( *(_DWORD *)(a1 + 76) )
  {
    *(_DWORD *)v11 ^= *(_DWORD *)(a1 + 80);
    if ( v11[3] != ((unsigned __int8)*v11 ^ (unsigned __int8)(v11[1] ^ v11[2])) )
      RtlpAnalyzeHeapFailure(v11);
  }
  if ( (v11[2] & 2) != 0 )
  {
    ExtraStuffPointer = RtlpGetExtraStuffPointer(v11);
    v21 = ExtraStuffPointer;
    if ( (*(_DWORD *)(a1 + 64) & 0x8000000) != 0 )
    {
      *ExtraStuffPointer = RtlLogStackBackTraceEx((void *)1);
      ExtraStuffPointer = v21;
    }
    else
    {
      *ExtraStuffPointer = 0;
    }
    v13 = ExtraStuffPointer[1];
  }
  else
  {
    v13 = (unsigned __int8)v11[3];
  }
  v20 = v13;
  v24 = v13;
  if ( *(_DWORD *)(a1 + 76) )
  {
    v11[3] = *v11 ^ v11[1] ^ v11[2];
    *(_DWORD *)v11 ^= *(_DWORD *)(a1 + 80);
  }
  if ( (*(_DWORD *)(a1 + 64) & 0x20000000) != 0 )
    RtlpValidateHeap((PVOID)a1);
  v14 = NtCurrentPeb();
  if ( v22 == (char *)RtlpHeapStopOn )
  {
    if ( v14->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Just allocated block at %p for %Ix bytes\n", (const void *)RtlpHeapStopOn, Size);
    goto LABEL_33;
  }
  if ( (v14->NtGlobalFlag & 0x800) != 0 && v20 && v20 == word_4B3A47C4 && *(_WORD *)(a1 + 124) == word_4B3A47C6 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    LOWORD(v15) = v24;
    TagName = RtlpGetTagName(a1, v15);
    DbgPrint("Just allocated block at %p for 0x%Ix bytes with tag %ws\n", v22, Size, TagName);
LABEL_33:
    if ( NtCurrentPeb()->BeingDebugged )
    {
      RtlpHeapInvalidBadAddress = 0;
      __debugbreak();
      RtlpHeapInvalidBreakPoint = 0;
    }
  }
LABEL_48:
  if ( v25 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 200));
  return (int)v22;
}
