/*
 * XREFs of ??0FxWaitLockInternal@@QEAA@XZ @ 0x1C00239E0
 * Callers:
 *     ??0FxSelfManagedIoMachine@@QEAA@PEAVFxPkgPnp@@@Z @ 0x1C0020C08 (--0FxSelfManagedIoMachine@@QEAA@PEAVFxPkgPnp@@@Z.c)
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C00231F8 (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C00233E4 (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C00234F4 (--0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ??0FxEventQueue@@QEAA@E@Z @ 0x1C0023998 (--0FxEventQueue@@QEAA@E@Z.c)
 *     ??0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C007BBAC (--0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxWaitLockInternal::FxWaitLockInternal(FxWaitLockInternal *this)
{
  this->m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_Event.m_Event, SynchronizationEvent, 1u);
  this->m_Event.m_DbgFlagIsInitialized = 1;
  this->m_OwningThread = 0LL;
}
