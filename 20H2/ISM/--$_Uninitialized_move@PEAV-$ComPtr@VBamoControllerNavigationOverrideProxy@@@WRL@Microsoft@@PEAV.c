/*
 * XREFs of ??$_Uninitialized_move@PEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@0@@Z @ 0x18011C2F0
 * Callers:
 *     ??$_Emplace_reallocate@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18011C0E0 (--$_Emplace_reallocate@V-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@-$vect.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800F0E70 (--$_Destroy_range@V-$allocator@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@YAX.c)
 */

__int64 *__fastcall std::_Uninitialized_move<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy> *,Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy> *,std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rax

  for ( i = a1; i != a2; ++i )
  {
    *a3 = 0LL;
    if ( a3 != i )
    {
      *a3 = *i;
      *i = 0LL;
    }
    ++a3;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSiteElementProxy>>>(a3, a3);
  return a3;
}
