/*
 * XREFs of ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14004661C
 * Callers:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000AEF0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x14001AD40 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 * Callees:
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x140046890 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x140046A68 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

void __fastcall AERTAddMemoryToHeap(void *a1, unsigned __int64 a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  if ( (unsigned int)((__int64 (*)(void))RtlExtendMemoryBlockLookaside)() == -1073741663
    && (int)IncreaseProcessWorkingSet(a2) >= 0 )
  {
    RtlExtendMemoryBlockLookaside(a1, a2);
  }
  if ( (byte_140085401 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v5, v4, v6, 5, (char)a1, a2, 0, 0);
}
