/*
 * XREFs of ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x18005EE0C
 * Callers:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18005EAE0 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ??$emplace@IIVDisplayId@@W4DXGI_COLOR_SPACE_TYPE@@V?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@1@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@1@IIVDisplayId@@W4DXGI_COLOR_SPACE_TYPE@@V?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180265CB0 (--$emplace@IIVDisplayId@@W4DXGI_COLOR_SPACE_TYPE@@V-$com_ptr_t@VCDrawListCache@@Uerr_returncode_.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18005EF34 (-ensure_extra_capacity@-$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_p.c)
 *     ??_GContentEntry@CDrawListCacheSet@@QEAAPEAXI@Z @ 0x1800D7EB4 (--_GContentEntry@CDrawListCacheSet@@QEAAPEAXI@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x180265D64 (--$move_backward@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_array_ite.c)
 */

CDrawListCacheSet::ContentEntry *__fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r11
  CDrawListCacheSet::ContentEntry *v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r10
  CDrawListCacheSet::ContentEntry *v13; // rdi
  CDrawListCacheSet::ContentEntry *v14; // rsi
  CDrawListCacheSet::ContentEntry *i; // rbx
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  bool v19; // sf
  __int128 v20; // [rsp+20h] [rbp-40h] BYREF
  __int64 v21; // [rsp+30h] [rbp-30h]
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v4 = *a1;
  v5 = a1[1];
  *((_QWORD *)&v20 + 1) = 1LL;
  v21 = 0LL;
  v6 = (unsigned __int128)((v5 - v4) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v23 = 0LL;
  v7 = (v5 - v4) / 24;
  v8 = v7 - a2;
  v9 = (CDrawListCacheSet::ContentEntry *)(v4 + 24 * v7);
  *(_QWORD *)&v20 = v9;
  v22 = v20;
  if ( !v9 )
    goto LABEL_24;
  v23 = 1LL;
  v10 = (v5 - v4) / 24 - a2;
  if ( v8 > 1 )
    v10 = 1LL;
  v21 = 1LL;
  v11 = 24 * v10;
  v12 = v5 - v11;
  if ( v5 != v5 - v11 )
  {
    v17 = v21;
    v6 = v22 + 32;
    do
    {
      v5 -= 24LL;
      if ( !(_QWORD)v20 )
        goto LABEL_24;
      if ( !v17 )
        goto LABEL_24;
      --v17;
      v6 -= 24LL;
      if ( v17 >= *((_QWORD *)&v20 + 1) )
        goto LABEL_24;
      *(_DWORD *)(v6 - 8) = *(_DWORD *)v5;
      *(_DWORD *)(v6 - 4) = *(_DWORD *)(v5 + 4);
      *(_DWORD *)v6 = *(_DWORD *)(v5 + 8);
      *(_DWORD *)(v6 + 4) = *(_DWORD *)(v5 + 12);
      v18 = *(_QWORD *)(v5 + 16);
      *(_QWORD *)(v5 + 16) = 0LL;
      *(_QWORD *)(v6 + 8) = v18;
    }
    while ( v5 != v12 );
  }
  if ( v8 <= 1 )
    goto LABEL_6;
  *(_QWORD *)&v22 = v4;
  *((_QWORD *)&v22 + 1) = v7;
  v19 = v7 < 0;
  if ( v7 )
  {
    if ( !v4 )
      goto LABEL_24;
    v19 = v7 < 0;
  }
  if ( v19 && v7 )
  {
LABEL_24:
    _o__invalid_parameter_noinfo_noreturn(v7, v6);
    __debugbreak();
    JUMPOUT(0x180115EA6LL);
  }
  v23 = v7;
  v20 = v22;
  v21 = v7;
  ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move_backward<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>)(
    &v22,
    v4 + 24 * a2,
    v4 + 24 * (v7 - 1),
    &v20);
LABEL_6:
  v13 = (CDrawListCacheSet::ContentEntry *)(v4 + 24 * (a2 + 1));
  v14 = (CDrawListCacheSet::ContentEntry *)(v4 + 24 * a2);
  if ( v9 < v13 )
    v13 = v9;
  for ( i = v14; i != v13; i = (CDrawListCacheSet::ContentEntry *)((char *)i + 24) )
    CDrawListCacheSet::ContentEntry::`scalar deleting destructor'(i, v6);
  a1[1] += 24LL;
  return v14;
}
