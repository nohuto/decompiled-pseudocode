/*
 * XREFs of ?GetTextureMemoryLayoutData@CClipBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801B94F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??$_Assign_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXPEAULayoutData@CContent@@0Uforward_iterator_tag@1@@Z @ 0x1801B8B3C (--$_Assign_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutDa.c)
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@std@@X@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V21@1@Z @ 0x1801B8DF0 (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULayoutData@CContent@@@std@@@std@@.c)
 */

__int64 __fastcall CClipBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rax
  unsigned int v4; // esi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  void *v10; // rcx
  unsigned __int64 v11; // rdx
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h]
  __int128 v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+58h] [rbp-8h]
  __int64 v17; // [rsp+70h] [rbp+10h] BYREF

  v3 = *(char **)a3;
  v4 = 0;
  v14 = 0LL;
  *(_QWORD *)(a3 + 8) = v3;
  v6 = *(_QWORD *)(a1 + 80);
  v13 = 0LL;
  if ( v6 )
  {
    v16 = 0LL;
    v15 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v6 + 272LL))(v6, a2, &v15);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x4Eu, 0LL);
      v10 = (void *)v15;
      if ( !(_QWORD)v15 )
        return v4;
      v9 = v16 - v15;
      goto LABEL_9;
    }
    std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,void>(
      &v13,
      &v17,
      0LL,
      (const void *)v15,
      *((__int64 *)&v15 + 1));
    if ( (_QWORD)v15 )
      std::_Deallocate<16,0>((void *)v15, 40 * ((v16 - (__int64)v15) / 40));
  }
  if ( (__int128 *)a3 != &v13 )
    std::vector<CContent::LayoutData>::_Assign_range<CContent::LayoutData *>(
      (char **)a3,
      (const void *)v13,
      *((__int64 *)&v13 + 1));
  if ( (_QWORD)v13 )
  {
    v9 = v14 - v13;
    v10 = (void *)v13;
LABEL_9:
    v11 = (__int64)((unsigned __int128)(v9 * (__int128)0x6666666666666667LL) >> 64) >> 4;
    std::_Deallocate<16,0>(v10, 40 * ((v11 >> 63) + v11));
  }
  return v4;
}
