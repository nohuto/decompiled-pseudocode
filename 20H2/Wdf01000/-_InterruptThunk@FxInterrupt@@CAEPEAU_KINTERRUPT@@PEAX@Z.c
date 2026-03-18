/*
 * XREFs of ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C0003C30
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C0003DA4 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C0003E54 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?WakeInterruptIsr@FxInterrupt@@QEAAEXZ @ 0x1C0089354 (-WakeInterruptIsr@FxInterrupt@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall FxInterrupt::_InterruptThunk(struct _KINTERRUPT *Interrupt, FxInterrupt *ServiceContext)
{
  void (__fastcall *v3)(unsigned __int8 (__fastcall **)(WDFINTERRUPT__ *, unsigned int), __int64, __int64, __int64, char); // rax
  unsigned __int64 v4; // rcx
  unsigned __int8 v5; // di
  void (__fastcall *v7)(unsigned __int8 (__fastcall **)(WDFINTERRUPT__ *, unsigned int), __int64, __int64, __int64, char); // rax
  void (__fastcall *v8)(unsigned __int8 (__fastcall **)(WDFINTERRUPT__ *, unsigned int), __int64, __int64, __int64, char); // rax
  WDFINTERRUPT__ *ObjectHandleUnchecked; // rax
  char v10; // [rsp+20h] [rbp-18h]
  char v11; // [rsp+20h] [rbp-18h]
  char v12; // [rsp+20h] [rbp-18h]

  if ( ServiceContext->m_IsEdgeTriggeredNonMsiInterrupt != 1 )
  {
    if ( ServiceContext->m_Interrupt )
      goto LABEL_3;
    return 0;
  }
  if ( ServiceContext->m_Disconnecting == 1 )
    return 0;
  ServiceContext->m_InterruptCaptured = Interrupt;
LABEL_3:
  if ( ServiceContext->m_WakeInterruptMachine )
  {
    v7 = *(void (__fastcall **)(unsigned __int8 (__fastcall **)(WDFINTERRUPT__ *, unsigned int), __int64, __int64, __int64, char))(unk_1C00A9FA0 + 16LL);
    if ( v7 )
    {
      v10 = 2;
      v7(&ServiceContext->m_EvtInterruptIsr, 8LL, 2181038080LL, 3937LL, v10);
    }
    return FxInterrupt::WakeInterruptIsr(ServiceContext);
  }
  else
  {
    if ( ServiceContext->m_PassiveHandling )
    {
      FxInterrupt::AcquireLock(ServiceContext);
      v8 = *(void (__fastcall **)(unsigned __int8 (__fastcall **)(WDFINTERRUPT__ *, unsigned int), __int64, __int64, __int64, char))(unk_1C00A9FA0 + 16LL);
      if ( v8 )
      {
        v11 = 2;
        v8(&ServiceContext->m_EvtInterruptIsr, 8LL, 2181038080LL, 3937LL, v11);
      }
      ObjectHandleUnchecked = (WDFINTERRUPT__ *)FxObject::GetObjectHandleUnchecked(ServiceContext);
      v5 = ServiceContext->m_EvtInterruptIsr(ObjectHandleUnchecked, ServiceContext->m_InterruptInfo.MessageNumber);
      FxInterrupt::ReleaseLock(ServiceContext);
    }
    else
    {
      v3 = *(void (__fastcall **)(unsigned __int8 (__fastcall **)(WDFINTERRUPT__ *, unsigned int), __int64, __int64, __int64, char))(unk_1C00A9FA0 + 16LL);
      if ( v3 )
      {
        v12 = 2;
        v3(&ServiceContext->m_EvtInterruptIsr, 8LL, 2181038080LL, 3936LL, v12);
      }
      v4 = (unsigned __int64)ServiceContext ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !ServiceContext->m_ObjectSize )
        v4 = 0LL;
      return ServiceContext->m_EvtInterruptIsr((WDFINTERRUPT__ *)v4, ServiceContext->m_InterruptInfo.MessageNumber);
    }
    return v5;
  }
}
