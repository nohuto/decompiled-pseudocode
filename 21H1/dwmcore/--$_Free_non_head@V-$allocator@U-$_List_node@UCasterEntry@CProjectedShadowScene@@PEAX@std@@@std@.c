/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@@@?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@1@PEAU01@@Z @ 0x18000B360
 * Callers:
 *     ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x18000B2C4 (-ClearCasters@CProjectedShadowScene@@AEAAXXZ.c)
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x18000CA34 (--1CProjectedShadowScene@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_List_node<CProjectedShadowScene::CasterEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rdi

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v4 = v3[2];
      v5 = (_QWORD *)*v3;
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      result = (_QWORD *)std::_Deallocate<16,0>(v3, 176LL);
      v3 = v5;
    }
    while ( v5 );
  }
  return result;
}
