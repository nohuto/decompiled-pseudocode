/*
 * XREFs of imp_WdfIoQueueStopAndPurge @ 0x1C0073CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0014EBC (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?FatalError@FxIoQueue@@QEAAXJ@Z @ 0x1C00757A4 (-FatalError@FxIoQueue@@QEAAXJ@Z.c)
 */

void __fastcall imp_WdfIoQueueStopAndPurge(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        void (__fastcall *StopAndPurgeComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  int v6; // eax
  void *PPObject; // [rsp+30h] [rbp+8h] BYREF

  PPObject = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, (unsigned __int64)Queue, 0x1003u, &PPObject);
  v6 = FxIoQueue::QueueIdle((FxIoQueue *)PPObject, 1u, StopAndPurgeComplete, Context);
  if ( v6 < 0 )
    FxIoQueue::FatalError((FxIoQueue *)PPObject, v6);
}
