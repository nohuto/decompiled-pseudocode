/*
 * XREFs of ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x18023791C
 * Callers:
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180238C00 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLAN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180082FB8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     memcmp_0 @ 0x1800EED0F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?CreateHdrMetadata@CDDisplayManager@@QEAAJW4DXGI_HDR_METADATA_TYPE@@PEBXPEAPEAUIDisplayHdrMetadata@Core@Display@Devices@Windows@@@Z @ 0x180241EF8 (-CreateHdrMetadata@CDDisplayManager@@QEAAJW4DXGI_HDR_METADATA_TYPE@@PEBXPEAPEAUIDisplayHdrMetada.c)
 */

__int64 __fastcall CDDisplaySwapChain::ComputeCachedHdrMetadata(
        CDDisplaySwapChain *this,
        enum DXGI_HDR_METADATA_TYPE a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  CDDisplayManager *v11; // rcx
  int HdrMetadata; // eax
  __int64 v13; // rcx

  v3 = 0;
  if ( a2 != *((_DWORD *)this + 100)
    || a2 == DXGI_HDR_METADATA_TYPE_HDR10 && memcmp_0(*((const void **)this + 51), a3, 0x1CuLL) )
  {
    *((_DWORD *)this + 100) = a2;
    if ( a2 )
    {
      if ( a2 == DXGI_HDR_METADATA_TYPE_HDR10 )
      {
        v7 = *((_QWORD *)this + 51);
        v8 = *((_QWORD *)this + 52) - v7;
        if ( v8 <= 0x1C )
        {
          if ( v8 < 0x1C )
          {
            if ( (unsigned __int64)(*((_QWORD *)this + 53) - v7) >= 0x1C )
            {
              v9 = v7 + 28;
              memset_0(*((void **)this + 52), 0, v9 - *((_QWORD *)this + 52));
              *((_QWORD *)this + 52) = v9;
            }
            else
            {
              std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>((__int64)this + 408, 0x1CuLL);
            }
          }
        }
        else
        {
          *((_QWORD *)this + 52) = v7 + 28;
        }
        v10 = *((_QWORD *)this + 51);
        *(_OWORD *)v10 = *(_OWORD *)a3;
        *(_QWORD *)(v10 + 16) = a3[2];
        *(_DWORD *)(v10 + 24) = *((_DWORD *)a3 + 6);
      }
    }
    else
    {
      *((_QWORD *)this + 52) = *((_QWORD *)this + 51);
    }
    v11 = (CDDisplayManager *)*((_QWORD *)this + 54);
    *((_QWORD *)this + 54) = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(CDDisplayManager *))(*(_QWORD *)v11 + 16LL))(v11);
    HdrMetadata = CDDisplayManager::CreateHdrMetadata(
                    v11,
                    a2,
                    a3,
                    (struct Windows::Devices::Display::Core::IDisplayHdrMetadata **)this + 54);
    v3 = HdrMetadata;
    if ( HdrMetadata < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, HdrMetadata, 0x75u, 0LL);
  }
  return v3;
}
