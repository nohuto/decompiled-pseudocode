/*
 * XREFs of ?AERTDestroyHeap@@YAXPEAX@Z @ 0x180131FDC
 * Callers:
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x180132074 (-AERTMemoryShutdown@@YAJXZ.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x180132268 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

void __fastcall AERTDestroyHeap(void *a1, int a2, int a3)
{
  char v3; // bl

  v3 = (char)a1;
  if ( a1 )
    RtlDestroyMemoryBlockLookaside();
  if ( (byte_18019F941 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer((_DWORD)a1, a2, a3, 4, v3, 0, 0, 0);
}
