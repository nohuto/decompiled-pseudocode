/*
 * XREFs of ?ShouldAttachDevice@MPCMouseProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x18001F840
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMPCMouseDevice@MPCMouseProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x18001F8C0 (-IsMPCMouseDevice@MPCMouseProcessor@@SAHPEBUDeviceInfo@@@Z.c)
 *     ?AttachMouse@MPCMouseProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x18001F8F0 (-AttachMouse@MPCMouseProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     ??$_Eqrange@K@?$_Tree@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@std@@V12@@1@AEBK@Z @ 0x18003A264 (--$_Eqrange@K@-$_Tree@V-$_Tmap_traits@KU-$pair@PEAUDeviceInfo@@V-$ComPtr@UICursor@@@WRL@Microsof.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180069138 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 */

bool __fastcall MPCMouseProcessor::ShouldAttachDevice(MPCMouseProcessor *this, struct DeviceInfo *a2)
{
  int IsMPCMouseDevice; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  IsMPCMouseDevice = MPCMouseProcessor::IsMPCMouseDevice(a2);
  if ( IsMPCMouseDevice )
  {
    std::_Tree<std::_Tmap_traits<unsigned long,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>>,0>>::_Eqrange<unsigned long>(
      (char *)this + 6328,
      v9,
      a2);
    v6 = v9[0];
    v7 = 0LL;
    v11 = v9[0];
    while ( v6 != v9[1] )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(
        &v11,
        v5,
        v6,
        v7 + 1);
      v6 = v11;
    }
    if ( v7 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x16B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        v7);
      __debugbreak();
    }
    MPCMouseProcessor::AttachMouse((MPCMouseProcessor *)((char *)this - 16), a2);
    LOBYTE(IsMPCMouseDevice) = 1;
  }
  return IsMPCMouseDevice;
}
