/*
 * XREFs of ?PostSpbApc@@YIXPAU_KAPC@@PAUtagWND@@K@Z @ 0x17E169
 * Callers:
 *     _FreeSpb@4 @ 0x17E3AE (_FreeSpb@4.c)
 * Callees:
 *     <none>
 */

void __fastcall PostSpbApc(struct _KAPC *a1, struct tagWND *a2, unsigned int a3)
{
  PKTHREAD CurrentThread; // eax

  CurrentThread = KeGetCurrentThread();
  KeInitializeApc(a1, CurrentThread, 0, SpbApcBegin, RundownAPCInvalidateCOMPOSITEDWnd, SpbApc, 0, 0);
  KeInsertQueueApc(a1, a2, a3, 0);
}
