/*
 * XREFs of ??$_Uninitialized_move@PEAVHString@Wrappers@WRL@Microsoft@@PEAV1234@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@YAPEAVHString@Wrappers@WRL@Microsoft@@QEAV1234@0PEAV1234@AEAV?$allocator@VHString@Wrappers@WRL@Microsoft@@@0@@Z @ 0x1800C55E0
 * Callers:
 *     ??$_Emplace_reallocate@VHString@Wrappers@WRL@Microsoft@@@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAAPEAVHString@Wrappers@WRL@Microsoft@@QEAV2345@$$QEAV2345@@Z @ 0x1800C4894 (--$_Emplace_reallocate@VHString@Wrappers@WRL@Microsoft@@@-$vector@VHString@Wrappers@WRL@Microsof.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@YAXPEAVHString@Wrappers@WRL@Microsoft@@0AEAV?$allocator@VHString@Wrappers@WRL@Microsoft@@@0@@Z @ 0x1800C4850 (--$_Destroy_range@V-$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@YAXPEAVHString@Wrapp.c)
 */

HSTRING *__fastcall std::_Uninitialized_move<Microsoft::WRL::Wrappers::HString *,Microsoft::WRL::Wrappers::HString *,std::allocator<Microsoft::WRL::Wrappers::HString>>(
        HSTRING *a1,
        HSTRING *a2,
        HSTRING *a3)
{
  while ( a1 != a2 )
  {
    *a3++ = *a1;
    *a1++ = 0LL;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::Wrappers::HString>>(a3, a3);
  return a3;
}
