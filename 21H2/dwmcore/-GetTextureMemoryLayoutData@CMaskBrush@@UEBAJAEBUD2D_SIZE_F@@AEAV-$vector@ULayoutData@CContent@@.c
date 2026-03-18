/*
 * XREFs of ?GetTextureMemoryLayoutData@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x180224920
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

__int64 __fastcall CMaskBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  _BYTE *v4; // rbx
  unsigned int v6; // r14d
  __int64 v8; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  void *v15; // r15
  _BYTE *v16; // r12
  unsigned __int64 v17; // rdx
  void *v18; // rcx
  __int64 v19; // rax
  _BYTE *v21; // [rsp+30h] [rbp-30h] BYREF
  _BYTE *v22; // [rsp+38h] [rbp-28h]
  __int64 v23; // [rsp+40h] [rbp-20h]
  __int128 v24; // [rsp+48h] [rbp-18h] BYREF
  __int64 v25; // [rsp+58h] [rbp-8h]
  __int64 v26; // [rsp+90h] [rbp+30h] BYREF

  v3 = *a3;
  v4 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v6 = 0;
  a3[1] = v3;
  v8 = *(_QWORD *)(a1 + 96);
  v21 = 0LL;
  if ( v8 )
  {
    v25 = 0LL;
    v24 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v8 + 272LL))(v8, a2, &v24);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x4Fu);
      v18 = (void *)v24;
      if ( !(_QWORD)v24 )
        return v6;
      v19 = v25 - v24;
      goto LABEL_17;
    }
    std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,0>(
      &v21,
      &v26,
      0LL,
      (const void *)v24,
      *((__int64 *)&v24 + 1));
    if ( (_QWORD)v24 )
      std::_Deallocate<16,0>((void *)v24, 8 * ((v25 - (__int64)v24) >> 3));
    v4 = v21;
  }
  v12 = *(_QWORD *)(a1 + 88);
  if ( !v12 )
    goto LABEL_11;
  v25 = 0LL;
  v24 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v12 + 272LL))(v12, a2, &v24);
  v6 = v13;
  if ( v13 >= 0 )
  {
    std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,0>(
      &v21,
      &v26,
      v22,
      (const void *)v24,
      *((__int64 *)&v24 + 1));
    if ( (_QWORD)v24 )
      std::_Deallocate<16,0>((void *)v24, 8 * ((v25 - (__int64)v24) >> 3));
    v4 = v21;
LABEL_11:
    if ( a3 != (__int64 *)&v21 )
    {
      v15 = (void *)*a3;
      v16 = (_BYTE *)(v22 - v4);
      v17 = 0xCCCCCCCCCCCCCCCDuLL * ((v22 - v4) >> 3);
      if ( v17 > 0xCCCCCCCCCCCCCCCDuLL * ((a3[2] - *a3) >> 3) )
      {
        std::vector<CContent::LayoutData>::_Clear_and_reserve_geometric(a3, v17);
        v15 = (void *)*a3;
      }
      memmove_0(v15, v4, (size_t)v16);
      a3[1] = (__int64)v15 + (_QWORD)v16;
    }
    goto LABEL_15;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x56u);
  if ( (_QWORD)v24 )
    std::_Deallocate<16,0>((void *)v24, 8 * ((v25 - (__int64)v24) >> 3));
LABEL_15:
  if ( v4 )
  {
    v18 = v4;
    v19 = v23 - (_QWORD)v4;
LABEL_17:
    std::_Deallocate<16,0>(v18, 8 * (v19 >> 3));
  }
  return v6;
}
