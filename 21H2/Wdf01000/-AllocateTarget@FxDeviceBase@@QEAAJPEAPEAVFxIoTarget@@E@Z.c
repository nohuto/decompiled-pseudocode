/*
 * XREFs of ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C0026C24
 * Callers:
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1C0026B98 (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C0066F20 (imp_WdfDeviceMiniportCreate.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C0026D34 (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C0026E08 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z @ 0x1C0073AB8 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z.c)
 */

__int64 __fastcall FxDeviceBase::AllocateTarget(FxDeviceBase *this, FxIoTarget **Target, unsigned __int8 SelfTarget)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxIoTarget *v6; // rax
  FxIoTarget *v7; // rax
  FxIoTarget *v8; // rbx
  int v9; // edi
  FxIoTarget *v11; // rax
  const void *_a1; // rax
  const _GUID *v13; // rdx
  unsigned int v14; // r8d
  _FX_DRIVER_GLOBALS *v15; // r10
  unsigned __int16 v16; // r11
  unsigned int _a2; // r9d
  const void *ObjectHandleUnchecked; // rax
  FxPoolTypeOrPoolFlags v19; // [rsp+40h] [rbp-28h] BYREF

  *(_QWORD *)&v19.UsePoolType = 0LL;
  v19.u.PoolFlags = 64LL;
  m_Globals = this->m_Globals;
  if ( !SelfTarget )
  {
    v6 = (FxIoTarget *)FxObjectHandleAllocCommon(m_Globals, &v19, 0x158uLL, 0, 0LL, 0, FxObjectTypeExternal);
    if ( !v6 )
    {
      v8 = 0LL;
      goto LABEL_17;
    }
    FxIoTarget::FxIoTarget(v6, this->m_Globals, 0x158u);
    v8 = v7;
LABEL_4:
    if ( v8 )
      goto LABEL_5;
LABEL_17:
    v9 = -1073741670;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0x12u, 0xDu, WPP_FxDeviceBase_cpp_Traceguids, ObjectHandleUnchecked, 0xC000009A);
    goto LABEL_9;
  }
  v11 = (FxIoTarget *)FxObjectHandleAllocCommon(m_Globals, &v19, 0x160uLL, 0, 0LL, 0, FxObjectTypeExternal);
  v8 = v11;
  if ( !v11 )
  {
    v8 = 0LL;
    goto LABEL_4;
  }
  FxIoTarget::FxIoTarget(v11, this->m_Globals, 0x160u, 0x1205u);
  v8[1].__vftable = 0LL;
  v8->__vftable = (FxIoTarget_vtbl *)FxIoTargetSelf::`vftable';
LABEL_5:
  v9 = this->AddIoTarget(this, v8);
  if ( v9 < 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    _a2 = v9;
LABEL_15:
    WPP_IFR_SF_qL(v15, 2u, v14, v16, v13, _a1, _a2);
    FxObject::ClearEvtCallbacks(v8);
    v8->DeleteObject(v8);
    v8 = 0LL;
    goto LABEL_9;
  }
  v9 = FxIoTarget::Init(v8, this);
  if ( v9 < 0 || (v9 = FxObject::Commit(v8, 0LL, 0LL, this, 1u), v9 < 0) )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    goto LABEL_15;
  }
  v9 = 0;
LABEL_9:
  *Target = v8;
  return (unsigned int)v9;
}
