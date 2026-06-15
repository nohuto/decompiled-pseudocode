/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@0@@Z @ 0x1800EFDB4
 * Callers:
 *     _std::vector_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____std::allocator_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext_______::_Emplace_reallocate_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext______::_1_::catch$46 @ 0x1800F0085 (_std--vector_std--unique_ptr_CAppSubmixClientContext_std--default_delete_CAppSubmixClientContext.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@PEAV12@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@0@@Z @ 0x1800F0274 (--$_Uninitialized_move@PEAV-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixC.c)
 *     ??_GCProcessSubmixManager@@UEAAPEAXI@Z @ 0x1800F0750 (--_GCProcessSubmixManager@@UEAAPEAXI@Z.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@2@_K1@Z @ 0x1800F1438 (-_Change_array@-$vector@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixCli.c)
 *     ?erase@?$vector@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800F159C (-erase@-$vector@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixClientConte.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAppSubmixClientContext@@QEAA@XZ @ 0x1800F05FC (--1CAppSubmixClientContext@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClientContext>>>(
        CAppSubmixClientContext **a1,
        CAppSubmixClientContext **a2)
{
  CAppSubmixClientContext **v3; // rbx
  CAppSubmixClientContext *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        CAppSubmixClientContext::~CAppSubmixClientContext(*v3);
        operator delete(v4, (const struct std::nothrow_t *)0x48);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
}
