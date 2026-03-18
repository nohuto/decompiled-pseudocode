/*
 * XREFs of ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C004CCEC
 * Callers:
 *     imp_WdfDeviceMiniportCreate @ 0x1C004C500 (imp_WdfDeviceMiniportCreate.c)
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1C0083CD8 (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00595BC (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C0063DB8 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z @ 0x1C0063E3C (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C0064D1C (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 */

__int64 __fastcall FxDeviceBase::AllocateTarget(FxDeviceBase *this, FxIoTarget **Target, unsigned __int8 SelfTarget)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxIoTarget *v6; // rax
  FxIoTarget *v7; // rbx
  FxIoTarget *v8; // rax
  FxIoTarget *v9; // rax
  signed int _a2; // edi
  const void *_a1; // rax
  const void *ObjectHandleUnchecked; // rax
  unsigned __int16 v13; // r9
  __int64 result; // rax

  m_Globals = this->m_Globals;
  if ( SelfTarget )
  {
    v6 = (FxIoTarget *)FxObjectHandleAlloc(
                         m_Globals,
                         ExDefaultNonPagedPoolType,
                         0x160uLL,
                         0,
                         0LL,
                         0,
                         FxObjectTypeExternal);
    v7 = v6;
    if ( v6 )
    {
      FxIoTarget::FxIoTarget(v6, this->m_Globals, 0x160u, 0x1205u);
      v7[1].__vftable = 0LL;
      v7->__vftable = (FxIoTarget_vtbl *)FxIoTargetSelf::`vftable';
      goto LABEL_7;
    }
  }
  else
  {
    v8 = (FxIoTarget *)FxObjectHandleAlloc(
                         m_Globals,
                         ExDefaultNonPagedPoolType,
                         0x158uLL,
                         0,
                         0LL,
                         0,
                         FxObjectTypeExternal);
    if ( v8 )
    {
      FxIoTarget::FxIoTarget(v8, this->m_Globals, 0x158u);
      v7 = v9;
      goto LABEL_7;
    }
  }
  v7 = 0LL;
LABEL_7:
  if ( !v7 )
  {
    _a2 = -1073741670;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0x12u, 0xDu, WPP_FxDeviceBase_cpp_Traceguids, _a1, 0xC000009A);
    goto LABEL_19;
  }
  _a2 = this->AddIoTarget(this, v7);
  if ( _a2 < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v13 = 14;
LABEL_11:
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0x12u, v13, WPP_FxDeviceBase_cpp_Traceguids, ObjectHandleUnchecked, _a2);
    goto $Done_31;
  }
  _a2 = FxIoTarget::Init(v7, this);
  if ( _a2 < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v13 = 15;
    goto LABEL_11;
  }
  _a2 = FxObject::Commit(v7, 0LL, 0LL, this, 1u);
  if ( _a2 < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v13 = 16;
    goto LABEL_11;
  }
  _a2 = 0;
$Done_31:
  if ( _a2 < 0 )
  {
    FxObject::ClearEvtCallbacks(v7);
    v7->DeleteObject(v7);
    v7 = 0LL;
  }
LABEL_19:
  result = (unsigned int)_a2;
  *Target = v7;
  return result;
}
