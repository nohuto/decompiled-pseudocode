/*
 * XREFs of _RtlDebugFreeHeap@12 @ 0x4B35F758
 * Callers:
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 * Callees:
 *     _RtlpValidateHeapEntry@12 @ 0x4B2A74FF (_RtlpValidateHeapEntry@12.c)
 *     _RtlpCheckHeapSignature@8 @ 0x4B2A7622 (_RtlpCheckHeapSignature@8.c)
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _RtlpGetExtraStuffPointer@4 @ 0x4B2E3AB9 (_RtlpGetExtraStuffPointer@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpGetTagName@8 @ 0x4B35809A (_RtlpGetTagName@8.c)
 *     _RtlDebugFreeHeap@12 @ 0x4B35F758 (_RtlDebugFreeHeap@12.c)
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 *     _RtlpValidateHeapHeaders@8 @ 0x4B360B86 (_RtlpValidateHeapHeaders@8.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 */

int __fastcall RtlDebugFreeHeap(unsigned int a1, int a2, int a3)
{
  int v4; // edi
  int v6; // edx
  unsigned int v7; // edx
  int v8; // ecx
  struct _PEB *v9; // eax
  _BYTE *v10; // edx
  unsigned __int16 v11; // ax
  wchar_t *TagName; // eax
  int v13; // edx
  int v15; // [esp+20h] [ebp-34h]
  int v17; // [esp+28h] [ebp-2Ch]
  _BYTE *v18; // [esp+28h] [ebp-2Ch]
  _BYTE *v19; // [esp+30h] [ebp-24h]
  unsigned __int16 v20; // [esp+34h] [ebp-20h]
  char v21; // [esp+3Bh] [ebp-19h]

  v4 = 0;
  v21 = 0;
  if ( (*(_DWORD *)(a1 + 68) & 0x1000000) != 0 )
    return (unsigned __int8)dword_4B3A3750(dword_4B3A3750, a1, a2, a3);
  if ( !RtlpCheckHeapSignature((_DWORD *)a1, "RtlFreeHeap") )
  {
    v4 = 0;
    goto LABEL_34;
  }
  v17 = a2 | *(_DWORD *)(a1 + 68);
  v15 = v17 | 0x10000000;
  if ( (v17 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_DWORD *)(a1 + 200));
    v21 = 1;
    v15 = v17 | 0x10000001;
  }
  LOBYTE(v6) = 0;
  RtlpValidateHeap(a1, v6);
  v7 = a3 - 8;
  if ( *(_BYTE *)(a3 - 8 + 7) == 5 )
    v7 -= 8 * *(unsigned __int8 *)(v7 + 6);
  v19 = (_BYTE *)v7;
  v18 = (_BYTE *)v7;
  if ( !RtlpValidateHeapEntry(a1, v7, "RtlFreeHeap") )
    goto LABEL_34;
  v9 = NtCurrentPeb();
  if ( a3 == dword_4B3A47D0 )
  {
    if ( v9->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("About to free block at %p\n", (const void *)dword_4B3A47D0);
  }
  else
  {
    if ( (v9->NtGlobalFlag & 0x800) == 0 || !dword_4B3A47D4 )
      goto LABEL_32;
    v10 = v19;
    if ( *(_DWORD *)(a1 + 76) )
    {
      *(_DWORD *)v18 ^= *(_DWORD *)(a1 + 80);
      if ( v18[3] != (*v19 ^ (unsigned __int8)(v19[1] ^ v19[2])) )
      {
        RtlpAnalyzeHeapFailure(v8);
        v10 = v19;
      }
    }
    if ( (v18[2] & 2) != 0 )
      v11 = *((_WORD *)RtlpGetExtraStuffPointer(v18) + 1);
    else
      v11 = (unsigned __int8)v18[3];
    v20 = v11;
    if ( *(_DWORD *)(a1 + 76) )
    {
      v18[3] = *v10 ^ v10[1] ^ v10[2];
      *(_DWORD *)v18 ^= *(_DWORD *)(a1 + 80);
    }
    if ( !v11 || __PAIR32__(*(_WORD *)(a1 + 124), v11) != dword_4B3A47D4 )
      goto LABEL_32;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName(a1, v20);
    DbgPrint("About to free block at %p with tag %ws\n", a3, TagName);
  }
  if ( NtCurrentPeb()->BeingDebugged )
  {
    RtlpHeapInvalidBadAddress = 0;
    __debugbreak();
    RtlpHeapInvalidBreakPoint = 0;
  }
LABEL_32:
  v4 = RtlFreeHeap(a1, v15, a3);
  RtlpValidateHeapHeaders((void *)a1);
  LOBYTE(v13) = 0;
  RtlpValidateHeap(a1, v13);
LABEL_34:
  if ( v21 )
    RtlLeaveCriticalSection(*(_DWORD *)(a1 + 200));
  return v4;
}
