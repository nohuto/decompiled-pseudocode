/*
 * XREFs of ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0038434
 * Callers:
 *     VidSchiMarkDeviceAsError @ 0x1C0014160 (VidSchiMarkDeviceAsError.c)
 *     ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00385F8 (-VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000A2C0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C000EBF8 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00384F0 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 *     ?VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z @ 0x1C00386D0 (-VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z.c)
 */

void __fastcall VidSchiRundownHardwareContext(struct HwQueueStagingList *a1, struct VIDSCH_HW_CONTEXT *a2)
{
  char *v2; // r14
  char *i; // rdi
  _QWORD *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = (char *)a2 + 224;
  for ( i = (char *)*((_QWORD *)a2 + 28); i != v2; i = *(char **)i )
  {
    v6 = i + 152;
    *((_QWORD *)i + 25) = i + 152;
    while ( (_QWORD *)*v6 != v6 )
      VidSchiRundownHardwarePacket(a1, (struct _VIDSCH_QUEUE_PACKET *)(*v6 - 32LL), (struct VIDSCH_HW_QUEUE *)(i - 8));
    VidSchiSetHwQueueState(i - 8, 0LL);
  }
  v7 = *((_QWORD *)a2 + 20);
  if ( *((_QWORD *)a2 + 21) != v7 )
  {
    v8 = *((_QWORD *)a2 + 1);
    v9 = *(_QWORD *)(v8 + 32);
    *((_QWORD *)a2 + 21) = v7;
    --*(_DWORD *)(v9 + 64);
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v8 + 168));
  }
  VidSchiCheckPendingDeviceCommand(*((_QWORD **)a2 + 1));
}
