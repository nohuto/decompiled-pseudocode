/*
 * XREFs of ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1801C7360
 * Callers:
 *     ?NotifyInvalidResource@CIndirectSwapchainRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801A1950 (-NotifyInvalidResource@CIndirectSwapchainRenderTarget@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x1801C6480 (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801C6B94 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?ProcessUnregister@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UNREGISTER@@@Z @ 0x1801C6F2C (-ProcessUnregister@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRE.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801C6FFC (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C7118 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801C7264 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x18019ABB4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUIDXGIResource@@V-$com_ptr_t@VIRenderTarget.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x1801C1710 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x1801C6ABC (-GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z.c)
 */

void __fastcall CIndirectSwapchainRenderTarget::Unregister(CIndirectSwapchainRenderTarget *this)
{
  char *v2; // rsi
  __int64 *j; // rbx
  __int64 v4; // rcx
  __int64 **v5; // rax
  __int64 *i; // rax
  __int64 *v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  void *v11; // [rsp+48h] [rbp+10h] BYREF

  COffScreenRenderTarget::ReleaseRenderTargets(this);
  if ( *((_QWORD *)this + 243) )
  {
    CIndirectSwapchainRenderTarget::GetMetaData(this, &v11, &v10);
    (*(void (__fastcall **)(_QWORD, _QWORD, void *))(**((_QWORD **)this + 242) + 64LL))(
      *((_QWORD *)this + 242),
      v10,
      v11);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 243) + 16LL))(*((_QWORD *)this + 243));
    *((_QWORD *)this + 243) = 0LL;
  }
  v2 = (char *)this + 1880;
  j = (__int64 *)**((_QWORD **)this + 235);
  while ( !*((_BYTE *)j + 25) )
  {
    v4 = j[5] + 8 + *(int *)(*(_QWORD *)(j[5] + 8) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 48LL))(v4, (char *)this + 1872);
    v5 = (__int64 **)j[2];
    if ( *((_BYTE *)v5 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v7 = *v5;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v7 + 25); v7 = (__int64 *)*v7 )
        j = v7;
    }
  }
  v8 = *(_QWORD **)v2;
  std::_Tree_val<std::_Tree_simple_types<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>,void *>>>(
    (__int64)this + 1880,
    (__int64)this + 1880,
    *(_QWORD *)(*(_QWORD *)v2 + 8LL));
  v8[1] = v8;
  *v8 = v8;
  v8[2] = v8;
  *((_QWORD *)this + 236) = 0LL;
  v9 = *((_QWORD *)this + 242);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 242) = 0LL;
  }
  *((_BYTE *)this + 1756) = 0;
  *((_WORD *)this + 964) = 0;
  *((_BYTE *)this + 1930) = 0;
  *((_DWORD *)this + 480) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1896, 1u);
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 216LL), this);
}
