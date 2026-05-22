/*
 * XREFs of ??$_Destroy_range@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedInputObjectEntry@InputSite@@0AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@@Z @ 0x180001F18
 * Callers:
 *     ?RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x180001E84 (-RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z.c)
 *     ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x18000A6D0 (--$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@.c)
 *     ??_EInputSite@@UEAAPEAXI@Z @ 0x18000B6A0 (--_EInputSite@@UEAAPEAXI@Z.c)
 *     _std::vector_InputSite::AttachedInputObjectEntry_std::allocator_InputSite::AttachedInputObjectEntry___::_Emplace_reallocate_InputSite::AttachedInputObjectEntry__::_1_::catch$61 @ 0x18004DA90 (_std--vector_InputSite--AttachedInputObjectEntry_std--allocator_InputSite--AttachedInputObjectEn.c)
 *     ??$_Uninitialized_move@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAPEAUAttachedInputObjectEntry@InputSite@@QEAU12@0PEAU12@AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@@Z @ 0x1800F1E34 (--$_Uninitialized_move@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@V-$allocator@UAttachedInpu.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<InputSite::AttachedInputObjectEntry>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3 + 8);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
