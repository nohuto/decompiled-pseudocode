/*
 * XREFs of ?GetTextureMemoryLayoutData@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801D6510
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8E4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??$_Assign_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXPEAULayoutData@CContent@@0Uforward_iterator_tag@1@@Z @ 0x1801B760C (--$_Assign_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutDa.c)
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@std@@X@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V21@1@Z @ 0x1801B78C0 (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULayoutData@CContent@@@std@@@std@@.c)
 */

__int64 __fastcall CMaskBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rax
  unsigned int v4; // edi
  __int64 v6; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  void *v14; // rbx
  void *v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int128 v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+40h] [rbp-20h]
  __int128 v21; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22; // [rsp+58h] [rbp-8h]
  __int64 v23; // [rsp+80h] [rbp+20h] BYREF

  v3 = *(char **)a3;
  v4 = 0;
  v20 = 0LL;
  *(_QWORD *)(a3 + 8) = v3;
  v6 = *(_QWORD *)(a1 + 88);
  v19 = 0LL;
  if ( !v6 )
    goto LABEL_5;
  v22 = 0LL;
  v21 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v6 + 280LL))(v6, a2, &v21);
  v4 = v9;
  if ( v9 >= 0 )
  {
    std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,void>(
      &v19,
      &v23,
      0LL,
      (const void *)v21,
      *((__int64 *)&v21 + 1));
    if ( (_QWORD)v21 )
      std::_Deallocate<16,0>((void *)v21, 40 * ((v22 - (__int64)v21) / 40));
LABEL_5:
    v11 = *(_QWORD *)(a1 + 80);
    if ( v11 )
    {
      v22 = 0LL;
      v21 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v11 + 280LL))(v11, a2, &v21);
      v4 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x56u, 0LL);
        if ( (_QWORD)v21 )
          std::_Deallocate<16,0>((void *)v21, 40 * ((v22 - (__int64)v21) / 40));
        goto LABEL_15;
      }
      std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,void>(
        &v19,
        &v23,
        *((char **)&v19 + 1),
        (const void *)v21,
        *((__int64 *)&v21 + 1));
      if ( (_QWORD)v21 )
        std::_Deallocate<16,0>((void *)v21, 40 * ((v22 - (__int64)v21) / 40));
    }
    if ( (__int128 *)a3 != &v19 )
    {
      v14 = (void *)v19;
      std::vector<CContent::LayoutData>::_Assign_range<CContent::LayoutData *>(
        (char **)a3,
        (const void *)v19,
        *((__int64 *)&v19 + 1));
      goto LABEL_16;
    }
LABEL_15:
    v14 = (void *)v19;
LABEL_16:
    if ( v14 )
    {
      v15 = v14;
      v16 = v20 - (_QWORD)v14;
      goto LABEL_18;
    }
    return v4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x4Fu, 0LL);
  v15 = (void *)v21;
  if ( (_QWORD)v21 )
  {
    v16 = v22 - v21;
LABEL_18:
    v17 = (__int64)((unsigned __int128)(v16 * (__int128)0x6666666666666667LL) >> 64) >> 4;
    std::_Deallocate<16,0>(v15, 40 * ((v17 >> 63) + v17));
  }
  return v4;
}
