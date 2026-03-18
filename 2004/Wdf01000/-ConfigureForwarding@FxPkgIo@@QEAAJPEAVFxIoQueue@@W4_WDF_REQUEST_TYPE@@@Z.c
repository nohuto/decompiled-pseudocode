/*
 * XREFs of ?ConfigureForwarding@FxPkgIo@@QEAAJPEAVFxIoQueue@@W4_WDF_REQUEST_TYPE@@@Z @ 0x1C0074BD8
 * Callers:
 *     imp_WdfDeviceConfigureRequestDispatching @ 0x1C0047540 (imp_WdfDeviceConfigureRequestDispatching.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C003BBCC (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_Lqd @ 0x1C0075314 (WPP_IFR_SF_Lqd.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C0076748 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 */

__int64 __fastcall FxPkgIo::ConfigureForwarding(FxPkgIo *this, FxIoQueue *TargetQueue, _WDF_REQUEST_TYPE RequestType)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int64 _a3; // r14
  unsigned int v7; // ebx
  FxObject *v8; // rcx
  unsigned __int8 v9; // r8
  const void *globals; // rax
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  FxIoQueue *m_DefaultQueue; // rax
  const void *ObjectHandleUnchecked; // rax
  FxIoQueue *v15; // rdx
  const void *v16; // rax
  unsigned __int8 v17; // dl
  unsigned int v18; // r8d
  unsigned __int8 v19; // r8
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  _a3 = RequestType;
  v7 = 0;
  irql = 0;
  if ( FxIoQueue::IsIoEventHandlerRegistered(TargetQueue, RequestType) )
  {
    FxNonPagedObject::Lock(this, &irql, v9);
    m_DefaultQueue = this->m_DefaultQueue;
    if ( TargetQueue == m_DefaultQueue )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(TargetQueue);
      v7 = -1073741808;
      WPP_IFR_SF_qL(
        m_Globals,
        2u,
        0xDu,
        0x19u,
        (const _GUID *)&WPP_FxPkgIo_cpp_Traceguids,
        ObjectHandleUnchecked,
        0xC0000010);
    }
    else
    {
      v15 = this->m_DispatchTable[_a3];
      if ( !v15 || v15 == m_DefaultQueue )
      {
        this->m_DispatchTable[_a3] = TargetQueue;
        FxObject::MarkNoDeleteDDI(TargetQueue, ObjectLock);
        goto LABEL_10;
      }
      v16 = (const void *)FxObject::GetObjectHandleUnchecked(TargetQueue);
      v7 = -1071644156;
      WPP_IFR_SF_Lqd(m_Globals, v17, v18, 0x1Au, (const _GUID *)&WPP_FxPkgIo_cpp_Traceguids, _a3, v16, -1071644156);
    }
    FxVerifierDbgBreakPoint(m_Globals);
LABEL_10:
    FxNonPagedObject::Unlock(this, irql, v19);
    return v7;
  }
  globals = (const void *)FxObject::GetObjectHandleUnchecked(v8);
  v7 = -1073741808;
  WPP_IFR_SF_Lqd(m_Globals, v11, v12, 0x18u, (const _GUID *)&WPP_FxPkgIo_cpp_Traceguids, _a3, globals, -1073741808);
  FxVerifierDbgBreakPoint(m_Globals);
  return v7;
}
