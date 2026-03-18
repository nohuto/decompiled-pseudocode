/*
 * XREFs of ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C00105B0
 * Callers:
 *     imp_WdfRequestReuse @ 0x1C0010520 (imp_WdfRequestReuse.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C00799DC (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C00387CE (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C005CC6C (WPP_IFR_SF_qdd.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0064138 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0068628 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

__int64 __fastcall FxRequest::Reuse(FxRequest *this, _WDF_REQUEST_REUSE_PARAMS *ReuseParams)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxRequest *v4; // rdi
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  _IRP *m_Irp; // rbx
  FxRequestContext *m_RequestContext; // rcx
  unsigned __int8 m_IrpAllocation; // al
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // r8
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *_a2; // rdx
  const void *_a1; // rcx
  _IRP *v15; // rcx
  unsigned __int64 v16; // rax
  unsigned int v17; // ebp
  __int16 v18; // r8
  unsigned __int16 v19; // r9
  unsigned __int64 v20; // rax
  int v21; // edx
  const void *v22; // rax
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v4 = this;
  if ( m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)ReuseParams, 9u)
     || m_Globals->FxVerifyDownlevel) )
  {
    irql = 0;
    FxNonPagedObject::Lock(v4, &irql, v10);
    if ( _bittest16(&v4->m_VerifierFlags, 8u) )
    {
      FxObject::GetObjectHandleUnchecked(v4->m_Target);
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v4);
      _a1 = v4;
      if ( ObjectHandleUnchecked )
        _a1 = (const void *)ObjectHandleUnchecked;
      WPP_IFR_SF_qq(m_Globals, 2u, 0x10u, 0x2Au, WPP_FxRequest_cpp_Traceguids, _a1, _a2);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    FxNonPagedObject::Unlock(v4, irql, v11);
  }
  WdfBindInfo = m_Globals->WdfBindInfo;
  if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 9 )
  {
    v4->m_CompletionRoutine.m_Completion = 0LL;
    v4->m_TargetCompletionContext = 0LL;
  }
  m_Irp = v4->m_Irp.m_Irp;
  if ( !m_Irp )
  {
LABEL_11:
    if ( (ReuseParams->Flags & 1) != 0 )
    {
      m_Irp = ReuseParams->NewIrp;
      if ( v4->m_IrpAllocation == 1 )
      {
        v15 = v4->m_Irp.m_Irp;
        v4->m_Irp.m_Irp = m_Irp;
        if ( v15 )
          IoFreeIrp(v15);
      }
      else
      {
        v4->m_Irp.m_Irp = m_Irp;
      }
      v4->m_IrpAllocation = 2;
    }
    if ( v4->m_IrpAllocation == 1 && m_Irp )
    {
      IoReuseIrp(m_Irp, ReuseParams->Status);
      m_Irp->Cancel = 0;
    }
    if ( (ReuseParams->Flags & 2) == 0 )
    {
      v4->m_CanComplete = 0;
      *(_WORD *)&v4->m_Completed = 0;
      if ( m_Globals->FxVerifierOn )
        FxRequestBase::ClearVerifierFlags(v4, 1);
      return 0LL;
    }
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, (unsigned int)ReuseParams, 0xBu) )
    {
      if ( m_Irp )
      {
        if ( v4->m_IrpAllocation != 1 )
        {
          if ( v4->m_Refcnt == 1 )
          {
            if ( m_Irp->CurrentLocation <= m_Irp->StackCount )
            {
              FxObject::AddRef(v4, (void *)0x43524344, 2395, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
              v4->m_SystemBuffer.m_Buffer = 0LL;
              v4->m_OutputBuffer.m_Buffer = 0LL;
              FxRequestBase::ClearFieldsForReuse(v4);
              v4->m_CanComplete = 1;
              if ( m_Globals->FxVerifierOn )
                FxRequestBase::SetVerifierFlags(v4, 1);
              return 0LL;
            }
            v22 = (const void *)FxObject::GetObjectHandleUnchecked(v4);
            v17 = -1073741808;
            WPP_IFR_SF_qqd(m_Globals, 2u, 0x10u, 0x2Fu, WPP_FxRequest_cpp_Traceguids, m_Irp, v22, -1073741808);
          }
          else
          {
            v20 = FxObject::GetObjectHandleUnchecked(v4);
            v17 = -1073741808;
            if ( v20 )
              v4 = (FxRequest *)v20;
            WPP_IFR_SF_qdd(m_Globals, 2u, 0x10u, 0x2Eu, WPP_FxRequest_cpp_Traceguids, v4, v21, 0xC0000010);
          }
          goto LABEL_54;
        }
        v16 = FxObject::GetObjectHandleUnchecked(v4);
        v17 = -1073741808;
        v19 = 45;
      }
      else
      {
        v16 = FxObject::GetObjectHandleUnchecked(v4);
        v17 = -1073741811;
        v19 = 44;
      }
    }
    else
    {
      v16 = FxObject::GetObjectHandleUnchecked(v4);
      v17 = -1073741808;
      v19 = v18 + 32;
    }
    if ( v16 )
      v4 = (FxRequest *)v16;
    WPP_IFR_SF_qL(m_Globals, 2u, 0x10u, v19, WPP_FxRequest_cpp_Traceguids, v4, v17);
LABEL_54:
    FxVerifierDbgBreakPoint(m_Globals);
    return v17;
  }
  m_RequestContext = v4->m_RequestContext;
  if ( m_RequestContext )
    m_RequestContext->ReleaseAndRestore(m_RequestContext, v4);
  m_IrpAllocation = v4->m_IrpAllocation;
  if ( m_IrpAllocation )
  {
    if ( m_IrpAllocation == 2 && v4->m_CanComplete && !v4->m_Completed )
    {
      if ( m_Globals->FxVerifierOn )
        FxRequestBase::ClearVerifierFlags(v4, 1);
      v4->Release(v4, (void *)1129464644, 2242, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
    goto LABEL_11;
  }
  if ( (ReuseParams->Flags & 1) == 0 )
  {
    m_Irp->IoStatus.Status = ReuseParams->Status;
    m_Irp->Cancel = 0;
    *(_WORD *)&v4->m_Completed = 0;
    return 0LL;
  }
  return 3223323144LL;
}
