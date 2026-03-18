/*
 * XREFs of ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x180012500
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18001232C (-CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_P.c)
 *     ?CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18027A060 (-CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT.c)
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18028AB2C (-CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV.c)
 * Callees:
 *     ??_GCCheckMPOCache@@QEAAPEAXI@Z @ 0x180012250 (--_GCCheckMPOCache@@QEAAPEAXI@Z.c)
 *     ??0CCheckMPOCache@@QEAA@PEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x18001259C (--0CCheckMPOCache@@QEAA@PEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180012834 (--$_Emplace_reallocate@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 */

void __fastcall CD3DDevice::AddCheckMPOCache(
        CD3DDevice *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool a4)
{
  char *v5; // rbx
  CCheckMPOCache *v9; // rax
  CCheckMPOCache **v10; // rdx
  CCheckMPOCache *v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = (char *)this + 1448;
  v9 = (CCheckMPOCache *)operator new(0x388uLL);
  if ( v9 )
    v9 = CCheckMPOCache::CCheckMPOCache(v9, a2, a3, a4);
  v10 = (CCheckMPOCache **)*((_QWORD *)this + 182);
  v11 = v9;
  if ( v10 == *((CCheckMPOCache ***)this + 183) )
  {
    std::vector<std::unique_ptr<CCheckMPOCache>>::_Emplace_reallocate<std::unique_ptr<CCheckMPOCache>>(v5, v10, &v11);
    if ( v11 )
      CCheckMPOCache::`scalar deleting destructor'((CCheckMPOCache **)v11);
  }
  else
  {
    *v10 = v9;
    *((_QWORD *)v5 + 1) += 8LL;
  }
}
