/*
 * XREFs of ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x180016684
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000A1C0 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800125A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@AEAI@Z @ 0x180016598 (-GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$unique_ptr@$$.c)
 *     ?_Reallocate_exactly@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z @ 0x18001884C (-_Reallocate_exactly@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180044AD8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     wprintf @ 0x180045704 (wprintf.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DoWorkOnGameConfigStore(__int64 *a1, __int64 a2)
{
  void *v4; // rbx
  int v5; // eax
  unsigned int v6; // esi
  const char *v7; // r9
  int v8; // eax
  const struct std::nothrow_t *v9; // rdx
  void *v10; // rcx
  const struct std::nothrow_t *v11; // rdx
  unsigned int v13; // r14d
  unsigned int v14; // esi
  int GameFromGameConfigStore; // eax
  void *v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  void *v19[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v20; // [rsp+30h] [rbp-58h] BYREF
  __int128 v21; // [rsp+40h] [rbp-48h] BYREF
  __int64 v22; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v24; // [rsp+90h] [rbp+8h] BYREF
  int v25; // [rsp+A0h] [rbp+18h] BYREF
  void *v26; // [rsp+A8h] [rbp+20h] BYREF

  v24 = 0;
  v4 = 0LL;
  v26 = 0LL;
  v25 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned int *))(*a1 + 48))(a1, 0LL, &v24);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  if ( !v24 )
  {
    wprintf(L"GameConfigStore is empty\n");
    return 0;
  }
  v21 = 0LL;
  v22 = 0LL;
  try
  {
    std::vector<_GUID>::_Reallocate_exactly(&v21);
  }
  catch ( ... )
  {
    LODWORD(v26) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x79,
                     (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
                     v7);
    v10 = (void *)v21;
    if ( !(_QWORD)v21 )
      return (unsigned int)v26;
    v11 = (const struct std::nothrow_t *)((v22 - v21) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned __int64)v11 < 0x1000
      || (v11 = (const struct std::nothrow_t *)((char *)v11 + 39),
          v10 = *(void **)(v21 - 8),
          (unsigned __int64)(v21 - (_QWORD)v10 - 8) <= 0x1F) )
    {
LABEL_34:
      operator delete(v10, v11);
      return (unsigned int)v26;
    }
LABEL_33:
    _o__invalid_parameter_noinfo_noreturn(v10, v11);
    __debugbreak();
    goto LABEL_34;
  }
  v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned int *))(*a1 + 48))(a1, v21, &v24);
  v6 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v8);
    v10 = (void *)v21;
    if ( !(_QWORD)v21 )
      return v6;
    v11 = (const struct std::nothrow_t *)((v22 - v21) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned __int64)v11 < 0x1000
      || (v11 = (const struct std::nothrow_t *)((char *)v11 + 39),
          v10 = *(void **)(v21 - 8),
          (unsigned __int64)(v21 - (_QWORD)v10 - 8) <= 0x1F) )
    {
      operator delete(v10, v11);
      return v6;
    }
    goto LABEL_33;
  }
  v13 = 0;
  v14 = 0;
  if ( v24 )
  {
    while ( 1 )
    {
      *(_OWORD *)v19 = *(_OWORD *)(v21 + 16LL * v14);
      GameFromGameConfigStore = GetGameFromGameConfigStore(a1, (__int128 *)v19, &v26, &v25);
      v13 = GameFromGameConfigStore;
      if ( GameFromGameConfigStore < 0 )
        break;
      v16 = v26;
      v4 = 0LL;
      v26 = 0LL;
      v19[0] = v16;
      v20 = *(_OWORD *)(v21 + 16LL * v14);
      v17 = *(_QWORD *)(a2 + 56);
      if ( !v17 )
      {
        std::_Xbad_function_call();
        break;
      }
      v18 = (*(__int64 (__fastcall **)(__int64, __int128 *, void **))(*(_QWORD *)v17 + 16LL))(v17, &v20, v19);
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8F,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v18);
      if ( v19[0] )
        operator delete(v19[0], v9);
      if ( ++v14 >= v24 )
        goto LABEL_23;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)GameFromGameConfigStore);
    v4 = v26;
  }
LABEL_23:
  v10 = (void *)v21;
  if ( (_QWORD)v21 )
  {
    v11 = (const struct std::nothrow_t *)((v22 - v21) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned __int64)v11 >= 0x1000 )
    {
      v11 = (const struct std::nothrow_t *)((char *)v11 + 39);
      v10 = *(void **)(v21 - 8);
      if ( (unsigned __int64)(v21 - (_QWORD)v10 - 8) > 0x1F )
        goto LABEL_33;
    }
    operator delete(v10, v11);
    v21 = 0LL;
    v22 = 0LL;
  }
  if ( v4 )
    operator delete(v4, v9);
  return v13;
}
