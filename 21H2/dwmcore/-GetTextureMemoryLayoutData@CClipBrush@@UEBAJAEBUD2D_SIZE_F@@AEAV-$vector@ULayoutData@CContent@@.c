/*
 * XREFs of ?GetTextureMemoryLayoutData@CClipBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18020AEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@std@@$0A@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V21@1@Z @ 0x18020A834 (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULayoutData@CContent@@@std@@@std@@.c)
 *     ?_Clear_and_reserve_geometric@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAX_K@Z @ 0x18020B400 (-_Clear_and_reserve_geometric@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@.c)
 */

__int64 __fastcall CClipBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, const void **a3)
{
  char *v3; // rax
  const void *v4; // rbx
  unsigned int v5; // r14d
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  char *v10; // r15
  size_t v11; // r12
  void *v12; // rcx
  __int64 v13; // rax
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h]
  const void *v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  __int64 v19; // [rsp+58h] [rbp-8h]
  __int64 v20; // [rsp+90h] [rbp+30h] BYREF

  v3 = (char *)*a3;
  v4 = 0LL;
  v18 = 0LL;
  v5 = 0;
  v19 = 0LL;
  a3[1] = v3;
  v7 = *(_QWORD *)(a1 + 88);
  v17 = 0LL;
  if ( v7 )
  {
    v16 = 0LL;
    v15 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v7 + 272LL))(v7, a2, &v15);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x4Eu);
      v12 = (void *)v15;
      if ( !(_QWORD)v15 )
        return v5;
      v13 = v16 - v15;
      goto LABEL_12;
    }
    std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,0>(
      &v17,
      &v20,
      0LL,
      (const void *)v15,
      *((__int64 *)&v15 + 1));
    if ( (_QWORD)v15 )
      std::_Deallocate<16,0>((void *)v15, 8 * ((v16 - (__int64)v15) >> 3));
    v4 = v17;
  }
  if ( a3 != &v17 )
  {
    v10 = (char *)*a3;
    v11 = v18 - (_QWORD)v4;
    if ( 0xCCCCCCCCCCCCCCCDuLL * ((v18 - (__int64)v4) >> 3) > 0xCCCCCCCCCCCCCCCDuLL
                                                            * (((_BYTE *)a3[2] - (_BYTE *)*a3) >> 3) )
    {
      std::vector<CContent::LayoutData>::_Clear_and_reserve_geometric(a3);
      v10 = (char *)*a3;
    }
    memmove_0(v10, v4, v11);
    a3[1] = &v10[v11];
  }
  if ( v4 )
  {
    v12 = (void *)v4;
    v13 = v19 - (_QWORD)v4;
LABEL_12:
    std::_Deallocate<16,0>(v12, 8 * (v13 >> 3));
  }
  return v5;
}
