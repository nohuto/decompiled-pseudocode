/*
 * XREFs of ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C00023E0
 * Callers:
 *     imp_WdfRequestReuse @ 0x1C0002340 (imp_WdfRequestReuse.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006C564 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0015188 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C002F42C (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qdd @ 0x1C003BFE8 (WPP_IFR_SF_qdd.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004943C (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004E408 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C0052C38 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequest::Reuse(FxRequest *this, _WDF_REQUEST_REUSE_PARAMS *ReuseParams)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int64 v4; // rdi
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  _IRP *NewIrp; // rbx
  FxRequestContext *v7; // rcx
  unsigned __int8 v8; // al
  unsigned __int64 v10; // rdx
  unsigned __int16 v11; // ax
  const void *_a2; // rdx
  bool v13; // zf
  const void *_a1; // rax
  unsigned __int64 v15; // rcx
  _IRP *v16; // rcx
  _FX_DRIVER_GLOBALS *v17; // rcx
  __int16 v18; // r8
  unsigned __int16 v19; // r9
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int16 v22; // ax
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rcx
  int v25; // edx
  unsigned __int64 v26; // rcx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v4 = (unsigned __int64)this;
  if ( m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)ReuseParams, 9u)
     || m_Globals->FxVerifyDownlevel) )
  {
    irql = 0;
    FxNonPagedObject::Lock((FxNonPagedObject *)v4, &irql);
    if ( (*(_WORD *)(v4 + 218) & 0x100) != 0 )
    {
      v10 = *(_QWORD *)(v4 + 160);
      v11 = *(_WORD *)(v10 + 10);
      _a2 = (const void *)(v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v13 = v11 == 0;
      _a1 = (const void *)v4;
      if ( v13 )
        _a2 = 0LL;
      v15 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*(_WORD *)(v4 + 10) )
        v15 = 0LL;
      if ( v15 )
        _a1 = (const void *)v15;
      WPP_IFR_SF_qq(m_Globals, 2u, 0x10u, 0x2Au, WPP_FxRequest_cpp_Traceguids, _a1, _a2);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    FxNonPagedObject::Unlock((FxNonPagedObject *)v4, irql);
  }
  WdfBindInfo = m_Globals->WdfBindInfo;
  if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 9 )
  {
    *(_QWORD *)(v4 + 192) = 0LL;
    *(_QWORD *)(v4 + 200) = 0LL;
  }
  NewIrp = *(_IRP **)(v4 + 152);
  if ( NewIrp )
  {
    v7 = *(FxRequestContext **)(v4 + 168);
    if ( v7 )
      v7->ReleaseAndRestore(v7, (FxRequestBase *)v4);
    v8 = *(_BYTE *)(v4 + 213);
    if ( !v8 )
    {
      if ( (ReuseParams->Flags & 1) == 0 )
      {
        NewIrp->IoStatus.Status = ReuseParams->Status;
        NewIrp->Cancel = 0;
        *(_WORD *)(v4 + 214) = 0;
        return 0LL;
      }
      return 3223323144LL;
    }
    if ( v8 == 2 && *(_BYTE *)(v4 + 238) && !*(_BYTE *)(v4 + 214) )
    {
      if ( m_Globals->FxVerifierOn )
        FxRequestBase::ClearVerifierFlags((FxRequestBase *)v4, 1);
      (*(void (__fastcall **)(unsigned __int64, void *, __int64, const char *))(*(_QWORD *)v4 + 16LL))(
        v4,
        (void *)1129464644,
        2242LL,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
  }
  if ( (ReuseParams->Flags & 1) != 0 )
  {
    NewIrp = ReuseParams->NewIrp;
    if ( *(_BYTE *)(v4 + 213) == 1 )
    {
      v16 = *(_IRP **)(v4 + 152);
      *(_QWORD *)(v4 + 152) = NewIrp;
      if ( v16 )
        IoFreeIrp(v16);
    }
    else
    {
      *(_QWORD *)(v4 + 152) = NewIrp;
    }
    *(_BYTE *)(v4 + 213) = 2;
  }
  if ( *(_BYTE *)(v4 + 213) == 1 && NewIrp )
  {
    IoReuseIrp(NewIrp, ReuseParams->Status);
    NewIrp->Cancel = 0;
  }
  if ( (ReuseParams->Flags & 2) == 0 )
  {
    *(_BYTE *)(v4 + 238) = 0;
    *(_WORD *)(v4 + 214) = 0;
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::ClearVerifierFlags((FxRequestBase *)v4, 1);
    return 0LL;
  }
  if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, (unsigned int)ReuseParams, 0xBu) )
  {
    v19 = v18 + 32;
    v20 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v4 + 10) )
      v20 = 0LL;
    if ( v20 )
      v4 = v20;
    goto LABEL_54;
  }
  if ( NewIrp )
  {
    if ( *(_BYTE *)(v4 + 213) != 1 )
    {
      v25 = *(_DWORD *)(v4 + 12);
      if ( v25 == 1 )
      {
        if ( NewIrp->CurrentLocation <= NewIrp->StackCount )
        {
          FxObject::AddRef(
            (FxObject *)v4,
            (void *)0x43524344,
            2395,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
          *(_QWORD *)(v4 + 264) = 0LL;
          *(_QWORD *)(v4 + 280) = 0LL;
          FxRequestBase::ClearFieldsForReuse((FxRequestBase *)v4);
          *(_BYTE *)(v4 + 238) = 1;
          if ( m_Globals->FxVerifierOn )
            FxRequestBase::SetVerifierFlags((FxRequestBase *)v4, 1);
          return 0LL;
        }
        v22 = *(_WORD *)(v4 + 10);
        v23 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !v22 )
          v23 = 0LL;
        WPP_IFR_SF_qid(v17, 2u, 0x10u, 0x2Fu, WPP_FxRequest_cpp_Traceguids, NewIrp, v23, -1073741808);
      }
      else
      {
        v26 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !*(_WORD *)(v4 + 10) )
          v26 = 0LL;
        if ( v26 )
          v4 = v26;
        WPP_IFR_SF_qdd(m_Globals, 2u, 0x10u, 0x2Eu, WPP_FxRequest_cpp_Traceguids, (const void *)v4, v25, 0xC0000010);
      }
      goto LABEL_58;
    }
    v19 = 45;
    v21 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v4 + 10) )
      v21 = 0LL;
    if ( v21 )
      v4 = v21;
    v17 = m_Globals;
LABEL_54:
    WPP_IFR_SF_qL(v17, 2u, 0x10u, v19, WPP_FxRequest_cpp_Traceguids, (const void *)v4, 0xC0000010);
LABEL_58:
    FxVerifierDbgBreakPoint(m_Globals);
    return 3221225488LL;
  }
  v24 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !*(_WORD *)(v4 + 10) )
    v24 = 0LL;
  if ( v24 )
    v4 = v24;
  WPP_IFR_SF_qL(m_Globals, 2u, 0x10u, 0x2Cu, WPP_FxRequest_cpp_Traceguids, (const void *)v4, 0xC000000D);
  FxVerifierDbgBreakPoint(m_Globals);
  return 3221225485LL;
}
