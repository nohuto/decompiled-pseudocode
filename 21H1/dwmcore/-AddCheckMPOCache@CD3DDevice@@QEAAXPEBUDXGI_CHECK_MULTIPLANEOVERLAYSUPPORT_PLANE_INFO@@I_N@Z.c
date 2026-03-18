/*
 * XREFs of ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x1800EAD58
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180239FC0 (-CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT.c)
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18024A130 (-CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV.c)
 *     ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18024A3E8 (-CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_P.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ??_GCCheckMPOCache@@QEAAPEAXI@Z @ 0x1800EA3DC (--_GCCheckMPOCache@@QEAAPEAXI@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800EA8BC (--$_Emplace_reallocate@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@.c)
 *     ??0CCheckMPOCache@@QEAA@PEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x1800EAC30 (--0CCheckMPOCache@@QEAA@PEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z.c)
 */

void __fastcall CD3DDevice::AddCheckMPOCache(
        CD3DDevice *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2)
{
  __int64 *v2; // rbx
  CCheckMPOCache *v4; // rax
  CCheckMPOCache **v5; // rdx
  CCheckMPOCache *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 1368);
  v4 = (CCheckMPOCache *)operator new(0x388uLL);
  if ( v4 )
    v4 = CCheckMPOCache::CCheckMPOCache(v4, a2);
  v5 = (CCheckMPOCache **)v2[1];
  v6 = v4;
  if ( (CCheckMPOCache **)v2[2] == v5 )
  {
    std::vector<std::unique_ptr<CCheckMPOCache>>::_Emplace_reallocate<std::unique_ptr<CCheckMPOCache>>(
      v2,
      (__int64)v5,
      (__int64 *)&v6);
    if ( v6 )
      CCheckMPOCache::`scalar deleting destructor'((CCheckMPOCache **)v6);
  }
  else
  {
    *v5 = v4;
    v2[1] += 8LL;
  }
}
