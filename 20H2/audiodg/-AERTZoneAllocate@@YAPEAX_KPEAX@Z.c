/*
 * XREFs of ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x14001AFF0
 * Callers:
 *     ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14006BF64 (-SetMapSize@CSparseIndexMapRT@@QEAAJI@Z.c)
 * Callees:
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x140050C9C (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x1400510E8 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall AERTZoneAllocate(unsigned __int64 a1, void *a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  unsigned __int64 v8; // rdx
  __int64 v9; // [rsp+80h] [rbp+18h] BYREF

  v9 = 0LL;
  RtlAllocateMemoryZone(a2, a1, &v9);
  if ( !v9 )
  {
    v8 = 0x100000LL;
    if ( a1 > 0x100000 )
      v8 = (a1 + 0x2000) & 0xFFFFFFFFFFFFE000uLL;
    AERTAddMemoryToHeap(a2, v8);
    RtlAllocateMemoryZone(a2, a1, &v9);
  }
  if ( (byte_140090541 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v5, v4, v6, 6, (char)a2, a1, 0, 0);
  return v9;
}
