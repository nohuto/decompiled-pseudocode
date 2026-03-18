/*
 * XREFs of ?DisconnectInternal@FxInterrupt@@QEAAXXZ @ 0x1C00049BC
 * Callers:
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C00048C0 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxInterrupt::DisconnectInternal(FxInterrupt *this)
{
  struct _KINTERRUPT *m_Interrupt; // rdx
  __int64 v2; // r8
  _IO_DISCONNECT_INTERRUPT_PARAMETERS params; // [rsp+20h] [rbp-18h] BYREF

  m_Interrupt = this->m_Interrupt;
  v2 = *(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  this->m_Interrupt = 0LL;
  *(&params.Version + 1) = 0;
  params.ConnectionContext.Generic = m_Interrupt;
  params.Version = unk_1C00A9F60 != 0 ? 4 : 1;
  (*(void (__fastcall **)(_IO_DISCONNECT_INTERRUPT_PARAMETERS *))(v2 + 1152))(&params);
}
