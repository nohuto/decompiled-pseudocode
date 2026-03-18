/*
 * XREFs of ??$_Insert@AEAPEAVCProjectedShadowCaster@@@?$list@UCasterEntry@CProjectedShadowScene@@V?$allocator@UCasterEntry@CProjectedShadowScene@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UCasterEntry@CProjectedShadowScene@@@std@@@std@@U_Iterator_base0@2@@1@AEAPEAVCProjectedShadowCaster@@@Z @ 0x18000BBDC
 * Callers:
 *     ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z @ 0x18000BAF8 (-ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::list<CProjectedShadowScene::CasterEntry>::_Insert<CProjectedShadowCaster * &>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v6; // r14
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi

  if ( *(_QWORD *)(a1 + 8) == 0x1745D1745D1745DLL )
    std::_Xlength_error("list<T> too long");
  v6 = *(__int64 **)(a2 + 8);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0xB0uLL);
  v8 = *a3;
  v9 = result;
  *(_QWORD *)(result + 16) = *a3;
  if ( v8 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  *(_QWORD *)(v9 + 24) = 0LL;
  *(_DWORD *)(v9 + 96) = 0;
  *(_DWORD *)(v9 + 164) = 0;
  *(_BYTE *)(v9 + 168) = 0;
  *(_QWORD *)v9 = a2;
  *(_QWORD *)(v9 + 8) = v6;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v9;
  *v6 = v9;
  return result;
}
