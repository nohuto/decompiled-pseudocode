/*
 * XREFs of ?AERTMemoryShutdown@@YAJXZ @ 0x1400467A0
 * Callers:
 *     WinMain @ 0x140014F40 (WinMain.c)
 * Callees:
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x1400466B0 (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x140046A68 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 AERTMemoryShutdown(void)
{
  int v0; // edx
  int v1; // ecx
  int v2; // r8d
  WINBOOL fPending; // [rsp+70h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+78h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&gRTHeapInitOnce, 1u, &fPending, &Context) && !fPending )
    AERTDestroyHeap(Context, v0, v2);
  if ( (byte_140085401 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v1, v0, v2, 2, (char)Context, 0, 0, 0);
  return 0LL;
}
