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

int __fastcall RtlDebugAllocateHeap(int a1, int a2, unsigned int a3)
{
  int v6; // ecx
  int v7; // edi
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // eax
  int Heap; // edi
  int v12; // edx
  _BYTE *v13; // edi
  _WORD *ExtraStuffPointer; // eax
  unsigned __int16 v15; // ax
  struct _PEB *v16; // eax
  wchar_t *TagName; // eax
  int v19; // [esp+30h] [ebp-2Ch]
  unsigned __int16 v20; // [esp+30h] [ebp-2Ch]
  _WORD *v21; // [esp+34h] [ebp-28h]
  int v22; // [esp+38h] [ebp-24h]
  int v23; // [esp+3Ch] [ebp-20h]
  unsigned __int16 v24; // [esp+3Ch] [ebp-20h]
  char v25; // [esp+43h] [ebp-19h]

  v25 = 0;
  if ( (*(_DWORD *)(a1 + 68) & 0x1000000) != 0 )
    return dword_4B3A3748(dword_4B3A3748, a1, a2, a3);
  if ( !RtlpCheckHeapSignature((_DWORD *)a1, "RtlAllocateHeap") )
    goto LABEL_47;
  v6 = a2 | *(_DWORD *)(a1 + 68);
  v19 = v6;
  v7 = v6 | 0x10000100;
  v8 = a3;
  v23 = a3;
  if ( !a3 )
    v23 = 1;
  v9 = *(_DWORD *)(a1 + 152) & (v23 + *(_DWORD *)(a1 + 148));
  if ( v9 < 0x10 )
    v9 = 16;
  v10 = v9 + 8;
  if ( v10 < a3 || v10 > *(_DWORD *)(a1 + 120) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a3, *(_DWORD *)(a1 + 120));
LABEL_47:
    v22 = 0;
    goto LABEL_48;
  }
  if ( (v6 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_DWORD *)(a1 + 200));
    v25 = 1;
    v7 = v19 | 0x10000101;
  }
  LOBYTE(v8) = 0;
  RtlpValidateHeap(a1, v8);
  Heap = RtlAllocateHeap(a1, v7, a3);
  v22 = Heap;
  RtlpValidateHeapHeaders((void *)a1);
  if ( !Heap )
    goto LABEL_48;
  v13 = (_BYTE *)(Heap - 8);
  if ( v13[7] == 5 )
    v13 -= 8 * (unsigned __int8)v13[6];
  if ( *(_DWORD *)(a1 + 76) )
  {
    *(_DWORD *)v13 ^= *(_DWORD *)(a1 + 80);
    if ( v13[3] != (*v13 ^ (unsigned __int8)(v13[1] ^ v13[2])) )
      RtlpAnalyzeHeapFailure(v13);
  }
  if ( (v13[2] & 2) != 0 )
  {
    ExtraStuffPointer = RtlpGetExtraStuffPointer(v13);
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
    v15 = ExtraStuffPointer[1];
  }
  else
  {
    v15 = (unsigned __int8)v13[3];
  }
  v20 = v15;
  v24 = v15;
  if ( *(_DWORD *)(a1 + 76) )
  {
    v13[3] = *v13 ^ v13[1] ^ v13[2];
    *(_DWORD *)v13 ^= *(_DWORD *)(a1 + 80);
  }
  if ( (*(_DWORD *)(a1 + 64) & 0x20000000) != 0 )
  {
    LOBYTE(v12) = 0;
    RtlpValidateHeap(a1, v12);
  }
  v16 = NtCurrentPeb();
  if ( v22 == RtlpHeapStopOn )
  {
    if ( v16->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Just allocated block at %p for %Ix bytes\n", (const void *)RtlpHeapStopOn, a3);
    goto LABEL_33;
  }
  if ( (v16->NtGlobalFlag & 0x800) != 0 && v20 && v20 == word_4B3A47C4 && *(_WORD *)(a1 + 124) == word_4B3A47C6 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName(a1, v24);
    DbgPrint("Just allocated block at %p for 0x%Ix bytes with tag %ws\n", v22, a3, TagName);
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
    RtlLeaveCriticalSection(*(_DWORD *)(a1 + 200));
  return v22;
}
