/*
 * XREFs of ?EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ @ 0x18020179C
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180235174 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18018579C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x180201868 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowCaster::EnsureNoInvalidIntermediates(CProjectedShadowCaster *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int (__fastcall ***v4)(_QWORD); // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = **((_QWORD **)this + 10);
  v5 = v2;
  while ( v2 != *((_QWORD *)this + 10) )
  {
    v3 = *(_QWORD *)(v2 + 80);
    if ( v3 )
    {
      v4 = (int (__fastcall ***)(_QWORD))(v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 8LL));
      if ( (**v4)(v4) < 0 )
      {
        CProjectedShadowCaster::InvalidateMaskContent(this);
        return;
      }
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v5);
    v2 = v5;
  }
}
