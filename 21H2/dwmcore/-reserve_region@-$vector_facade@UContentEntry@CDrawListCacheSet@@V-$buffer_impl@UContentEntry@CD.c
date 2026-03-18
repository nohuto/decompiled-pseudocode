/*
 * XREFs of ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x1800C8450
 * Callers:
 *     ??$emplace@IIW4DXGI_COLOR_SPACE_TYPE@@V?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@1@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@1@IIW4DXGI_COLOR_SPACE_TYPE@@V?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800C83AC (--$emplace@IIW4DXGI_COLOR_SPACE_TYPE@@V-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@.c)
 * Callees:
 *     ??$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSet@@0@Z @ 0x1800C854C (--$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSe.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800C858C (-ensure_extra_capacity@-$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_p.c)
 *     ??$move_backward@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1801E6EB4 (--$move_backward@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_array_ite.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r9
  signed __int64 v7; // r8
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r10
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int128 v18; // [rsp+20h] [rbp-40h] BYREF
  __int64 v19; // [rsp+30h] [rbp-30h]
  __int128 v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v5 = *a1;
  v6 = a1[1];
  *((_QWORD *)&v18 + 1) = 1LL;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((v6 - v5) >> 3);
  v8 = v7 - a2;
  v9 = v5 + 8 * ((v6 - v5) >> 3);
  *(_QWORD *)&v18 = v9;
  if ( !v9 )
    goto LABEL_19;
  v19 = 1LL;
  v10 = v7 - a2;
  if ( v8 > 1 )
    v10 = 1LL;
  v20 = v18;
  v21 = 1LL;
  v11 = 24 * v10;
  v12 = v6 - v11;
  if ( v6 != v6 - v11 )
  {
    v16 = v21;
    v4 = v9 + 32;
    do
    {
      v6 -= 24LL;
      if ( !(_QWORD)v20 )
        goto LABEL_19;
      if ( !v16 )
        goto LABEL_19;
      --v16;
      v4 -= 24LL;
      if ( v16 >= *((_QWORD *)&v20 + 1) )
        goto LABEL_19;
      *(_DWORD *)(v4 - 8) = *(_DWORD *)v6;
      *(_DWORD *)(v4 - 4) = *(_DWORD *)(v6 + 4);
      *(_DWORD *)v4 = *(_DWORD *)(v6 + 8);
      v17 = *(_QWORD *)(v6 + 16);
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)(v4 + 8) = v17;
    }
    while ( v6 != v12 );
  }
  if ( v8 <= 1 )
    goto LABEL_6;
  *(_QWORD *)&v20 = v5;
  *((_QWORD *)&v20 + 1) = v7;
  if ( v7 && (!v5 || v7 < 0) )
  {
LABEL_19:
    _o__invalid_parameter_noinfo_noreturn(v4);
    __debugbreak();
    JUMPOUT(0x18016716BLL);
  }
  v21 = v7;
  v18 = v20;
  v19 = v7;
  ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move_backward<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>)(
    &v20,
    v5 + 24 * a2,
    v5 + 24 * (v7 - 1),
    &v18);
LABEL_6:
  v13 = v5 + 24 * (a2 + 1);
  v14 = v5 + 24 * a2;
  if ( v9 < v13 )
    v13 = v9;
  detail::destruct_range<CDrawListCacheSet::ContentEntry>(v14, v13);
  a1[1] += 24LL;
  return v14;
}
