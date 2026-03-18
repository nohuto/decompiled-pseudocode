/*
 * XREFs of ?_InterruptDpcThunk@FxInterrupt@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C0003850
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0004224 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxInterrupt::_InterruptDpcThunk(
        _KDPC *Dpc,
        FxObject *DeferredContext,
        void *SystemArgument1,
        void *SystemArgument2)
{
  FxSystemWorkItem *Flink; // rcx
  void (__fastcall *v6)($97AD7B22C0497F425CAB25F6A5CFEF63 *, __int64, __int64, __int64, char); // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _LIST_ENTRY *Blink; // rcx
  $97AD7B22C0497F425CAB25F6A5CFEF63 *v9; // rdi
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v12; // rdx
  bool v13; // zf
  unsigned __int16 v14; // ax
  unsigned __int64 v15; // rbx
  void *ObjectHandleUnchecked; // rax
  __int64 v17; // rdx
  char v18; // [rsp+48h] [rbp+10h] BYREF

  Flink = (FxSystemWorkItem *)DeferredContext[2].m_ChildListHead.Flink;
  if ( Flink )
  {
    FxSystemWorkItem::EnqueueWorker(Flink, FxInterrupt::_InterruptWorkItemCallback, DeferredContext, 0);
  }
  else
  {
    v6 = *(void (__fastcall **)($97AD7B22C0497F425CAB25F6A5CFEF63 *, __int64, __int64, __int64, char))(unk_1C00A9FA0 + 8LL);
    if ( v6 )
      v6(&DeferredContext[3].24, 8LL, 2164260864LL, 3938LL, 2);
    m_Globals = DeferredContext->m_Globals;
    if ( m_Globals->FxTrackDriverForMiniDumpLog )
      *(_FX_DRIVER_GLOBALS *volatile *)((char *)&stru_1C00A9F68.m_DriverUsage->FxDriverGlobals
                                      + stru_1C00A9F68.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    Blink = DeferredContext[2].m_ChildListHead.Blink;
    v9 = &DeferredContext[3].24;
    if ( Blink )
    {
      v18 = 0;
      ((void (__fastcall *)(_LIST_ENTRY *, char *, void *, void *))Blink->Flink[1].Flink)(
        Blink,
        &v18,
        SystemArgument1,
        SystemArgument2);
      FxObject::GetObjectHandleUnchecked(DeferredContext->m_DeviceBase);
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(DeferredContext);
      (*(void (__fastcall **)(void *))&v9->m_ObjectFlags)(ObjectHandleUnchecked);
      LOBYTE(v17) = v18;
      ((void (__fastcall *)(_LIST_ENTRY *, __int64))DeferredContext[2].m_ChildListHead.Blink->Flink[1].Blink)(
        DeferredContext[2].m_ChildListHead.Blink,
        v17);
    }
    else
    {
      m_DeviceBase = DeferredContext->m_DeviceBase;
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      v12 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
      v13 = m_ObjectSize == 0;
      v14 = DeferredContext->m_ObjectSize;
      if ( v13 )
        v12 = 0LL;
      v15 = (unsigned __int64)DeferredContext ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v14 )
        v15 = 0LL;
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64, void *, void *))&v9->m_ObjectFlags)(
        v15,
        v12,
        SystemArgument1,
        SystemArgument2);
    }
  }
}
