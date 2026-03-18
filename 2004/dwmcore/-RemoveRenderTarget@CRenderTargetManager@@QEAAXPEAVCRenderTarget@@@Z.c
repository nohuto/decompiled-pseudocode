/*
 * XREFs of ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800D9FAC
 * Callers:
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x18005806C (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?Present@CRenderTargetManager@@QEAAJXZ @ 0x18005AB04 (-Present@CRenderTargetManager@@QEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18005BFE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18005DE00 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?FinalRelease@CRenderTarget@@MEAAXXZ @ 0x1800DBEE0 (-FinalRelease@CRenderTarget@@MEAAXXZ.c)
 *     ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x180187AD4 (-ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRE.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18018B740 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801F32B0 (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 *     ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x1802522A4 (-ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ.c)
 *     ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x18025490C (-ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005ADB0 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     memmove_0 @ 0x1800EED27 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEAPEAVCRenderTarget@@@?$vector@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCRenderTarget@@@Z @ 0x180165254 (--$_Emplace_reallocate@AEAPEAVCRenderTarget@@@-$vector@V-$com_ptr_t@VCRenderTarget@@Uerr_returnc.c)
 */

void __fastcall CRenderTargetManager::RemoveRenderTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  struct CRenderTarget **v2; // r8
  struct CRenderTarget **i; // rcx
  struct CRenderTarget **j; // rdi
  _QWORD *v7; // rdx
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  struct CRenderTarget *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v2 = (struct CRenderTarget **)*((_QWORD *)this + 5);
  for ( i = (struct CRenderTarget **)*((_QWORD *)this + 4); i != v2 && *i != a2; ++i )
    ;
  if ( i == v2 )
  {
    if ( *((_BYTE *)this + 128) )
    {
      v7 = (_QWORD *)*((_QWORD *)this + 8);
      if ( *((_QWORD **)this + 9) == v7 )
      {
        std::vector<wil::com_ptr_t<CRenderTarget,wil::err_returncode_policy>>::_Emplace_reallocate<CRenderTarget * &>(
          (char *)this + 56,
          v7,
          &v9,
          a2);
      }
      else
      {
        *v7 = a2;
        if ( a2 )
          (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)a2 + 8LL))(a2);
        *((_QWORD *)this + 8) += 8LL;
      }
    }
    else
    {
      for ( j = (struct CRenderTarget **)*((_QWORD *)this + 1); j != *((struct CRenderTarget ***)this + 2) && *j != a2; ++j )
        ;
      if ( j != *((struct CRenderTarget ***)this + 2) )
      {
        v8 = 0LL;
        if ( (int)CMILCOMBase::InternalQueryInterface(a2, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v8) >= 0 )
          *((_BYTE *)this + 130) = 1;
        memmove_0(j, j + 1, *((_QWORD *)this + 2) - (_QWORD)(j + 1));
        *((_QWORD *)this + 2) -= 8LL;
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v8);
      }
    }
  }
  else
  {
    memmove_0(i, i + 1, (char *)v2 - (char *)(i + 1));
    *((_QWORD *)this + 5) -= 8LL;
  }
}
