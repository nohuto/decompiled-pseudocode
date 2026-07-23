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

LOGICAL __fastcall RtlDebugFreeHeap(unsigned int a1, int a2, char *BaseAddress)
{
  LOGICAL v4; // edi
  char *v6; // edx
  int v7; // ecx
  struct _PEB *v8; // eax
  char *v9; // edx
  unsigned __int16 v10; // ax
  int v11; // edx
  int TagName; // eax
  int Flagsa; // [esp+20h] [ebp-34h]
  int v16; // [esp+28h] [ebp-2Ch]
  char *v17; // [esp+28h] [ebp-2Ch]
  char *v18; // [esp+30h] [ebp-24h]
  unsigned __int16 v19; // [esp+34h] [ebp-20h]
  char v20; // [esp+3Bh] [ebp-19h]

  v4 = 0;
  v20 = 0;
  if ( (*(_DWORD *)(a1 + 68) & 0x1000000) != 0 )
    return (unsigned __int8)dword_4B3A3750(dword_4B3A3750, a1, a2, BaseAddress);
  if ( !RtlpCheckHeapSignature((_DWORD *)a1, "RtlFreeHeap") )
  {
    v4 = 0;
    goto LABEL_34;
  }
  v16 = a2 | *(_DWORD *)(a1 + 68);
  Flagsa = v16 | 0x10000000;
  if ( (v16 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 200));
    v20 = 1;
    Flagsa = v16 | 0x10000001;
  }
  RtlpValidateHeap((PVOID)a1);
  v6 = BaseAddress - 8;
  if ( *(BaseAddress - 1) == 5 )
    v6 -= 8 * (unsigned __int8)v6[6];
  v18 = v6;
  v17 = v6;
  if ( !RtlpValidateHeapEntry(a1, (unsigned int)v6, "RtlFreeHeap") )
    goto LABEL_34;
  v8 = NtCurrentPeb();
  if ( BaseAddress == (char *)dword_4B3A47D0 )
  {
    if ( v8->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("About to free block at %p\n", (const void *)dword_4B3A47D0);
  }
  else
  {
    if ( (v8->NtGlobalFlag & 0x800) == 0 || !dword_4B3A47D4 )
      goto LABEL_32;
    v9 = v18;
    if ( *(_DWORD *)(a1 + 76) )
    {
      *(_DWORD *)v17 ^= *(_DWORD *)(a1 + 80);
      if ( v17[3] != ((unsigned __int8)*v18 ^ (unsigned __int8)(v18[1] ^ v18[2])) )
      {
        RtlpAnalyzeHeapFailure(v7);
        v9 = v18;
      }
    }
    if ( (v17[2] & 2) != 0 )
      v10 = *((_WORD *)RtlpGetExtraStuffPointer(v17) + 1);
    else
      v10 = (unsigned __int8)v17[3];
    v19 = v10;
    if ( *(_DWORD *)(a1 + 76) )
    {
      v17[3] = *v9 ^ v9[1] ^ v9[2];
      *(_DWORD *)v17 ^= *(_DWORD *)(a1 + 80);
    }
    if ( !v10 || __PAIR32__(*(_WORD *)(a1 + 124), v10) != dword_4B3A47D4 )
      goto LABEL_32;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    LOWORD(v11) = v19;
    TagName = RtlpGetTagName(a1, v11);
    DbgPrint("About to free block at %p with tag %ws\n", BaseAddress, TagName);
  }
  if ( NtCurrentPeb()->BeingDebugged )
  {
    RtlpHeapInvalidBadAddress = 0;
    __debugbreak();
    RtlpHeapInvalidBreakPoint = 0;
  }
LABEL_32:
  v4 = RtlFreeHeap((PVOID)a1, Flagsa, BaseAddress);
  RtlpValidateHeapHeaders((void *)a1);
  RtlpValidateHeap((PVOID)a1);
LABEL_34:
  if ( v20 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 200));
  return v4;
}
