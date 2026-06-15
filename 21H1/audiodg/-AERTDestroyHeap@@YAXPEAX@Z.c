/*
 * XREFs of ?AERTDestroyHeap@@YAXPEAX@Z @ 0x1400466B0
 * Callers:
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x1400467A0 (-AERTMemoryShutdown@@YAJXZ.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x140046A68 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

void __fastcall AERTDestroyHeap(void *a1, int a2, int a3)
{
  char v3; // bl

  v3 = (char)a1;
  if ( a1 )
    RtlDestroyMemoryBlockLookaside();
  if ( (byte_140085401 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer((_DWORD)a1, a2, a3, 4, v3, 0, 0, 0);
}
