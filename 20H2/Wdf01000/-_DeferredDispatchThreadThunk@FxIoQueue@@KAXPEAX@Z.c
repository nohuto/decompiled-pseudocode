/*
 * XREFs of ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C000C420
 * Callers:
 *     <none>
 * Callees:
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0004224 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0031C84 (WPP_IFR_SF_.c)
 */

void __fastcall FxIoQueue::_DeferredDispatchThreadThunk(char *Parameter)
{
  _FX_DRIVER_GLOBALS *v2; // rcx
  unsigned __int8 v3; // dl
  unsigned __int16 v4; // r9
  unsigned __int8 PreviousIrql; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)Parameter + 2);
  if ( v2->FxVerboseOn )
    WPP_IFR_SF_(v2, 5u, 0xDu, 0x68u, WPP_FxIoQueue_cpp_Traceguids);
  PreviousIrql = 0;
  FxNonPagedObject::Lock((FxNonPagedObject *)Parameter, &PreviousIrql);
  v3 = PreviousIrql;
  Parameter[866] = 0;
  FxIoQueue::DispatchEvents((FxIoQueue *)Parameter, v3, 0LL, v4);
  FxNonPagedObject::Lock((FxNonPagedObject *)Parameter, &PreviousIrql);
  if ( Parameter[142]
    || !Parameter[866]
    || !FxSystemWorkItem::EnqueueWorker(
          *((FxSystemWorkItem **)Parameter + 107),
          FxIoQueue::_DeferredDispatchThreadThunk,
          Parameter,
          1u) )
  {
    *(_WORD *)(Parameter + 865) = 0;
  }
  FxNonPagedObject::Unlock((FxNonPagedObject *)Parameter, PreviousIrql);
}
