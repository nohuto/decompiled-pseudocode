/*
 * XREFs of @EtwpRelogEvent@8 @ 0x4B380EC6
 * Callers:
 *     @EtwpTraceUmEvent@20 @ 0x4B381076 (@EtwpTraceUmEvent@20.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _EtwpReserveTraceBuffer@20 @ 0x4B2EFD10 (_EtwpReserveTraceBuffer@20.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     @EtwpRelogEvent@8 @ 0x4B380EC6 (@EtwpRelogEvent@8.c)
 */

int __fastcall EtwpRelogEvent(_DWORD *a1, int a2)
{
  int v4; // esi
  int v5; // edx
  int v7; // ecx
  unsigned int v8; // ebx
  char v9; // dl
  PVOID v10; // ecx
  PVOID Heap; // ecx
  unsigned int v12; // ecx
  void *v13; // ecx
  SIZE_T v14; // [esp-4h] [ebp-3Ch]
  size_t v15; // [esp-4h] [ebp-3Ch]
  size_t v16; // [esp-4h] [ebp-3Ch]
  int v17; // [esp+14h] [ebp-24h] BYREF
  int v18; // [esp+18h] [ebp-20h]
  int v19; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v19 = a2;
  v4 = 0;
  v17 = 0;
  v5 = 0;
  v18 = 0;
  if ( *(_WORD *)v19 < 0x58u )
    return 87;
  v7 = a1[53] & 0x1000;
  if ( (a1[53] & 0x1000) != 0 )
  {
    v5 = *(unsigned __int16 *)(a2 + 82);
    v18 = v5;
  }
  v8 = *(_DWORD *)(a2 + 76);
  if ( !v8 )
  {
    ++a1[68];
    ++*(_DWORD *)(a1[89] + 12 * v5 + 4);
    return 87;
  }
  v9 = *(_BYTE *)(a2 + 4);
  if ( v9 != 80 || a1[90] || v8 < 0x30 )
  {
    if ( v9 == 82 && !v7 && !a1[92] && v8 >= 4 && !*(_BYTE *)(*(_DWORD *)(a2 + 72) + 7) )
    {
      LODWORD(v14) = *(_DWORD *)(a2 + 76);
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v14);
      a1[92] = Heap;
      if ( !Heap )
        return 1450;
      LODWORD(v16) = v8;
      memcpy(Heap, *(const void **)(v19 + 72), v16);
      a1[93] = v8;
    }
  }
  else if ( !*(_BYTE *)(*(_DWORD *)(a2 + 72) + 7) )
  {
    LODWORD(v14) = *(_DWORD *)(a2 + 76);
    v10 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v14);
    a1[90] = v10;
    if ( !v10 )
      return 1450;
    LODWORD(v15) = v8;
    memcpy(v10, *(const void **)(v19 + 72), v15);
    a1[91] = v8;
  }
  v12 = *(_WORD *)(v19 + 80) & 0x7FF;
  if ( (a1[53] & 0x1000) != 0 )
    v12 = *(unsigned __int16 *)(*(_DWORD *)(a1[88] + 4 * v18) + 2 * v12);
  v13 = (void *)EtwpReserveTraceBuffer((int)a1, v8, v12, 0, &v17);
  if ( v13 )
  {
    ms_exc.registration.TryLevel = 0;
    LODWORD(v14) = v8;
    memcpy(v13, *(const void **)(v19 + 72), v14);
    ms_exc.registration.TryLevel = -2;
    _InterlockedDecrement((volatile signed __int32 *)(v17 + 12));
  }
  else if ( v8 <= 0xFFF8 )
  {
    return a1[36] < v8 ? 234 : 8;
  }
  else
  {
    return 534;
  }
  return v4;
}
