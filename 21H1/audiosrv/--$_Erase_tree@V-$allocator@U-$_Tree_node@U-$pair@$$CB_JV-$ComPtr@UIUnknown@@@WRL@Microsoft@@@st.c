/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1800D152C
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1800D152C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@@st.c)
 *     ??1DynamicAudioEndpointManager@@UEAA@XZ @ 0x1800D1854 (--1DynamicAudioEndpointManager@@UEAA@XZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA_KAEB_J@Z @ 0x180114758 (-erase@-$_Tree@V-$_Tmap_traits@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@st_ea_180114758.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AD8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1800D152C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@@st.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 *v6; // rbx

  v3 = a3;
  while ( !*(_BYTE *)(v3 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *>>>(
      a1,
      a2,
      *(_QWORD *)(v3 + 16));
    v6 = (__int64 *)v3;
    v3 = *(_QWORD *)v3;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v6 + 5);
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x30);
  }
}
