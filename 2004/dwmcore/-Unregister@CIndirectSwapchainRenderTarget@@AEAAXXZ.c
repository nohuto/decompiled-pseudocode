/*
 * XREFs of ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18018B740
 * Callers:
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E82C8 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?NotifyInvalidResource@CIndirectSwapchainRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801715D0 (-NotifyInvalidResource@CIndirectSwapchainRenderTarget@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x18018AA08 (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18018B0E4 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?ProcessUnregister@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UNREGISTER@@@Z @ 0x18018B434 (-ProcessUnregister@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRE.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18018B504 (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18018B658 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BC868 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x18016ABA0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUIDXGIResource@@V-$com_ptr_t@VIRenderTarget.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x180186F70 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x18018B010 (-GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z.c)
 */

void __fastcall CIndirectSwapchainRenderTarget::Unregister(CIndirectSwapchainRenderTarget *this)
{
  char *v2; // rsi
  _QWORD *v3; // r14
  _QWORD *j; // rbx
  __int64 v5; // rcx
  __int64 **v6; // rax
  __int64 i; // rax
  __int64 *v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  void *v12; // [rsp+48h] [rbp+10h] BYREF

  COffScreenRenderTarget::ReleaseRenderTargets(this);
  if ( *((_QWORD *)this + 245) )
  {
    CIndirectSwapchainRenderTarget::GetMetaData(this, &v12, &v11);
    (*(void (__fastcall **)(_QWORD, _QWORD, void *))(**((_QWORD **)this + 244) + 64LL))(
      *((_QWORD *)this + 244),
      v11,
      v12);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 245) + 16LL))(*((_QWORD *)this + 245));
    *((_QWORD *)this + 245) = 0LL;
  }
  v2 = (char *)this + 1896;
  v3 = (_QWORD *)*((_QWORD *)this + 237);
  j = (_QWORD *)*v3;
  while ( j != v3 )
  {
    v5 = j[5] + 8LL + *(int *)(*(_QWORD *)(j[5] + 8LL) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 48LL))(v5, (char *)this + 1888);
    v6 = (__int64 **)j[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        j = (_QWORD *)i;
      j = (_QWORD *)i;
    }
    else
    {
      v8 = *v6;
      for ( j = (_QWORD *)j[2]; !*((_BYTE *)v8 + 25); v8 = (__int64 *)*v8 )
        j = v8;
    }
  }
  v9 = *(_QWORD **)v2;
  std::_Tree_val<std::_Tree_simple_types<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>,void *>>>(
    (__int64)this + 1896,
    (__int64)this + 1896,
    *(_QWORD *)(*(_QWORD *)v2 + 8LL));
  v9[1] = v9;
  *v9 = v9;
  v9[2] = v9;
  *((_QWORD *)this + 238) = 0LL;
  v10 = *((_QWORD *)this + 244);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    *((_QWORD *)this + 244) = 0LL;
  }
  *((_BYTE *)this + 1772) = 0;
  *((_WORD *)this + 972) = 0;
  *((_BYTE *)this + 1946) = 0;
  *((_DWORD *)this + 484) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1912, 1u);
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 88LL), this);
}
