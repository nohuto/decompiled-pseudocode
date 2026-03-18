/*
 * XREFs of ??$_Insert@AEAPEAVCProjectedShadowReceiver@@@?$list@UReceiverEntry@CProjectedShadowScene@@V?$allocator@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@U_Iterator_base0@2@@1@AEAPEAVCProjectedShadowReceiver@@@Z @ 0x18000BF54
 * Callers:
 *     ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x18000BE6C (-ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHAD.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::list<CProjectedShadowScene::ReceiverEntry>::_Insert<CProjectedShadowReceiver * &>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x222222222222222LL )
    std::_Xlength_error("list<T> too long");
  v6 = *(__int64 **)(a2 + 8);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x78uLL);
  v8 = *a3;
  v9 = v7;
  *(_QWORD *)(v7 + 16) = *a3;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  *(_QWORD *)(v9 + 24) = 0LL;
  *(_QWORD *)(v9 + 32) = 0LL;
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  *(_QWORD *)(v9 + 24) = result;
  *(_QWORD *)(v9 + 40) = 0LL;
  *(_DWORD *)(v9 + 112) = 0;
  *(_BYTE *)(v9 + 116) = 0;
  *(_QWORD *)v9 = a2;
  *(_QWORD *)(v9 + 8) = v6;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v9;
  *v6 = v9;
  return result;
}
