/*
 * XREFs of HalpDmaAllocateReservedMappingArray @ 0x140A8D8F4
 * Callers:
 *     HalpDmaAllocateMappingResources @ 0x140A66DA8 (HalpDmaAllocateMappingResources.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     HalpDmaAllocateReservedMapping @ 0x140A66ECC (HalpDmaAllocateReservedMapping.c)
 */

__int64 __fastcall HalpDmaAllocateReservedMappingArray(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rdi
  _SLIST_ENTRY *ReservedMapping; // rax
  __int64 v8; // rax

  if ( ((unsigned __int8)&stru_140CF68E0 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  qword_140CF68F0 = 0LL;
  stru_140CF68E0 = 0LL;
  qword_140C53F68 = HalpMmAllocCtxAlloc(a1, 8LL * (unsigned int)a1);
  v4 = qword_140C53F68;
  if ( qword_140C53F68 )
  {
    v5 = 0;
    if ( a2 )
    {
      v6 = 0LL;
      do
      {
        ReservedMapping = (_SLIST_ENTRY *)HalpDmaAllocateReservedMapping(v3);
        v4 = qword_140C53F68;
        *(_QWORD *)(v6 + qword_140C53F68) = ReservedMapping;
        if ( !ReservedMapping )
          break;
        RtlpInterlockedPushEntrySList(&stru_140CF68E0, ReservedMapping);
        v4 = qword_140C53F68;
        ++v5;
        v8 = *(_QWORD *)(v6 + qword_140C53F68);
        v6 += 8LL;
        *(_DWORD *)(v8 + 28) = 1;
      }
      while ( v5 < a2 );
      if ( v5 )
      {
        dword_140CF68F8 = v5;
        return 0LL;
      }
    }
    HalpMmAllocCtxFree(v3, v4);
  }
  return 3221225626LL;
}
