/*
 * XREFs of ??$_Destroy_range@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@YAXPEAVHString@Wrappers@WRL@Microsoft@@0AEAV?$allocator@VHString@Wrappers@WRL@Microsoft@@@0@@Z @ 0x1800C4390
 * Callers:
 *     _std::vector_Microsoft::WRL::Wrappers::HString_std::allocator_Microsoft::WRL::Wrappers::HString___::_Emplace_reallocate_Microsoft::WRL::Wrappers::HString__::_1_::catch$34 @ 0x1800C44EB (_std--vector_Microsoft--WRL--Wrappers--HString_std--allocator_Microsoft--WRL--Wrappers--HString_.c)
 *     ??$_Uninitialized_move@PEAVHString@Wrappers@WRL@Microsoft@@PEAV1234@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@YAPEAVHString@Wrappers@WRL@Microsoft@@QEAV1234@0PEAV1234@AEAV?$allocator@VHString@Wrappers@WRL@Microsoft@@@0@@Z @ 0x1800C5120 (--$_Uninitialized_move@PEAVHString@Wrappers@WRL@Microsoft@@PEAV1234@V-$allocator@VHString@Wrappe.c)
 *     ?EnumerateDevices@SpatialInteractionDevices@@YAJU_GUID@@PEAV?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800C5A70 (-EnumerateDevices@SpatialInteractionDevices@@YAJU_GUID@@PEAV-$vector@VHString@Wrappers@WRL@Micro.c)
 *     ?_Change_array@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@AEAAXQEAVHString@Wrappers@WRL@Microsoft@@_K1@Z @ 0x1800C6C24 (-_Change_array@-$vector@VHString@Wrappers@WRL@Microsoft@@V-$allocator@VHString@Wrappers@WRL@Micr.c)
 *     ?_Tidy@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800C6DC8 (-_Tidy@-$vector@VHString@Wrappers@WRL@Microsoft@@V-$allocator@VHString@Wrappers@WRL@Microsoft@@@.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::Wrappers::HString>>(HSTRING *a1, HSTRING *a2)
{
  HSTRING *v3; // rbx
  HRESULT result; // eax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = WindowsDeleteString(*v3);
      *v3++ = 0LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
