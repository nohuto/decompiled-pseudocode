/*
 * XREFs of ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x180131E84
 * Callers:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x180131F18 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 * Callees:
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x1801320F4 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x180132268 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
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
  if ( (byte_18019F941 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v5, v4, v6, 5, (char)a1, a2, 0, 0);
}
