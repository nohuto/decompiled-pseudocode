/*
 * XREFs of ?reserve_region@?$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@_K0@Z @ 0x180012734
 * Callers:
 *     ??$emplace@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@?$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@1@V?$basic_iterator@$$CBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@1@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@Z @ 0x18001268C (--$emplace@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@-$vector_facade@UDXGI_CHECK_MULTIPL.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@V?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@V?$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@0@0V12@@Z @ 0x180279E40 (--$move@V-$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@V-$checked_ar.c)
 *     ??$move_backward@V?$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@V?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@V?$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@0@0V12@@Z @ 0x18027FE1C (--$move_backward@V-$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@V-$c.c)
 */

char *__fastcall detail::vector_facade<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,detail::buffer_impl<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,6,1,detail::liberal_expansion_policy>>::reserve_region(
        void **a1,
        __int64 a2)
{
  char *v2; // rsi
  _BYTE *v5; // rdx
  detail::liberal_expansion_policy *v6; // rcx
  char *v7; // rdi
  __int64 v8; // r8
  signed __int64 v9; // r8
  unsigned __int64 v10; // rdx
  char *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  char *v14; // r10
  __int64 v15; // rbx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdi
  void *v20; // rax
  void *v21; // r8
  void *v22; // rdx
  void *v23; // rbx
  void *v24; // rcx
  bool v25; // zf
  unsigned __int64 v26; // r9
  _OWORD *v27; // r11
  __int128 v28; // [rsp+20h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-30h]
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h]

  v2 = (char *)a1[1];
  v5 = a1[2];
  v6 = (detail::liberal_expansion_policy *)0x8E38E38E38E38E39LL;
  if ( !(0x8E38E38E38E38E39uLL * ((v5 - v2) >> 4)) )
  {
    v17 = 0x8E38E38E38E38E39uLL * ((v2 - (_BYTE *)*a1) >> 4);
    v18 = v17 + 1;
    if ( v17 + 1 < v17 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v19 = detail::liberal_expansion_policy::expand(v6, (_QWORD)v6 * ((v5 - (_BYTE *)*a1) >> 4), v18);
    v20 = operator new(saturated_mul(v19, 0x90uLL));
    v21 = a1[1];
    v22 = *a1;
    *(_QWORD *)&v28 = v20;
    v23 = v20;
    *((_QWORD *)&v28 + 1) = v17;
    v29 = 0LL;
    v30 = v28;
    v31 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::move<std::move_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>,stdext::checked_array_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>>)(
      &v28,
      v22,
      v21,
      &v30);
    v24 = *a1;
    v25 = *a1 == a1 + 3;
    *a1 = v23;
    if ( v25 )
      v24 = 0LL;
    DefaultHeap::Free(v24);
    v2 = (char *)*a1 + 144 * v17;
    a1[2] = (char *)*a1 + 144 * v19;
    a1[1] = v2;
  }
  v7 = (char *)*a1;
  v8 = v2 - (_BYTE *)*a1;
  *((_QWORD *)&v28 + 1) = 1LL;
  v9 = 0x8E38E38E38E38E39uLL * (v8 >> 4);
  v10 = v9 - a2;
  v11 = &v7[144 * v9];
  *(_QWORD *)&v28 = v11;
  if ( !v11 )
    goto LABEL_24;
  v29 = 1LL;
  v12 = v9 - a2;
  if ( v10 > 1 )
    v12 = 1LL;
  v30 = v28;
  v31 = 1LL;
  v13 = 144 * v12;
  v14 = &v2[-v13];
  if ( v2 != &v2[-v13] )
  {
    v26 = v31;
    v27 = v11 + 144;
    do
    {
      v2 -= 144;
      if ( !(_QWORD)v30 )
        goto LABEL_24;
      if ( !v26 )
        goto LABEL_24;
      --v26;
      v27 -= 9;
      if ( v26 >= *((_QWORD *)&v30 + 1) )
        goto LABEL_24;
      *v27 = *(_OWORD *)v2;
      v27[1] = *((_OWORD *)v2 + 1);
      v27[2] = *((_OWORD *)v2 + 2);
      v27[3] = *((_OWORD *)v2 + 3);
      v27[4] = *((_OWORD *)v2 + 4);
      v27[5] = *((_OWORD *)v2 + 5);
      v27[6] = *((_OWORD *)v2 + 6);
      v27[7] = *((_OWORD *)v2 + 7);
      v27[8] = *((_OWORD *)v2 + 8);
    }
    while ( v2 != v14 );
  }
  if ( v10 > 1 )
  {
    *(_QWORD *)&v30 = v7;
    *((_QWORD *)&v30 + 1) = v9;
    if ( !v9 || v7 && v9 >= 0 )
    {
      v31 = v9;
      v15 = 144 * a2;
      v28 = v30;
      v29 = v9;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>,stdext::checked_array_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>>)(
        &v30,
        &v7[144 * a2],
        &v7[144 * v9 - 144],
        &v28);
      goto LABEL_8;
    }
LABEL_24:
    _o__invalid_parameter_noinfo_noreturn(v11);
    __debugbreak();
    JUMPOUT(0x18011E2A1LL);
  }
  v15 = 144 * a2;
LABEL_8:
  a1[1] = (char *)a1[1] + 144;
  return &v7[v15];
}
