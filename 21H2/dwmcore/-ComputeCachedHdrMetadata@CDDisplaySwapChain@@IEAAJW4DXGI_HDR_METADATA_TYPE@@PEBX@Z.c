/*
 * XREFs of ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x18027A42C
 * Callers:
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18027C130 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLAN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800B69E4 (--$_Resize@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag.c)
 *     memcmp_0 @ 0x180105173 (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateHdrMetadata@CDDisplayManager@@QEAAJW4DXGI_HDR_METADATA_TYPE@@PEBXPEAPEAUIDisplayHdrMetadata@Core@Display@Devices@Windows@@@Z @ 0x180284370 (-CreateHdrMetadata@CDDisplayManager@@QEAAJW4DXGI_HDR_METADATA_TYPE@@PEBXPEAPEAUIDisplayHdrMetada.c)
 */

__int64 __fastcall CDDisplaySwapChain::ComputeCachedHdrMetadata(
        CDDisplaySwapChain *this,
        enum DXGI_HDR_METADATA_TYPE a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  enum DXGI_HDR_METADATA_TYPE v5; // edi
  __int64 v7; // rcx
  CDDisplayManager *v8; // rcx
  int HdrMetadata; // eax
  __int64 v10; // rcx

  v3 = 0;
  v5 = a2;
  if ( a2 != *((_DWORD *)this + 116)
    || a3 && a2 == DXGI_HDR_METADATA_TYPE_HDR10 && memcmp_0(*((const void **)this + 59), a3, 0x1CuLL) )
  {
    if ( v5 )
    {
      if ( v5 == DXGI_HDR_METADATA_TYPE_HDR10 )
      {
        if ( a3 )
        {
          std::vector<unsigned char>::_Resize<std::_Value_init_tag>((__int64 *)this + 59, 0x1CuLL);
          v7 = *((_QWORD *)this + 59);
          *(_OWORD *)v7 = *(_OWORD *)a3;
          *(_QWORD *)(v7 + 16) = a3[2];
          *(_DWORD *)(v7 + 24) = *((_DWORD *)a3 + 6);
        }
        else
        {
          v5 = DXGI_HDR_METADATA_TYPE_NONE;
        }
      }
    }
    else
    {
      *((_QWORD *)this + 60) = *((_QWORD *)this + 59);
    }
    v8 = (CDDisplayManager *)*((_QWORD *)this + 62);
    *((_QWORD *)this + 62) = 0LL;
    *((_DWORD *)this + 116) = v5;
    if ( v8 )
      (*(void (__fastcall **)(CDDisplayManager *))(*(_QWORD *)v8 + 16LL))(v8);
    HdrMetadata = CDDisplayManager::CreateHdrMetadata(
                    v8,
                    v5,
                    a3,
                    (struct Windows::Devices::Display::Core::IDisplayHdrMetadata **)this + 62);
    v3 = HdrMetadata;
    if ( HdrMetadata < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, HdrMetadata, 0x94u);
  }
  return v3;
}
