/*
 * XREFs of ?OnCursorDestroyed@SystemCursorService@@UEAAJUCursorId@@UCursorDestroyData@@@Z @ 0x1801402C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18004B267 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?CursorExists@SystemCursorService@@QEAA_N_K@Z @ 0x18013C468 (-CursorExists@SystemCursorService@@QEAA_N_K@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x180140E90 (-erase@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor@@@std@@V-$_Uhash_compa_ea_180140E90.c)
 */

__int64 __fastcall SystemCursorService::OnCursorDestroyed(SystemCursorService *a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ebx
  _QWORD *v8; // rdx
  _QWORD *i; // rdi
  _OWORD *j; // rax
  size_t v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 64LL);
  if ( v4
    && (v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v4 + 8) + 32LL))(v4 + 8, a2), v6 = v5, v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x158,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    v6 = 0;
  }
  if ( v6 >= 0 )
  {
    v8 = (_QWORD *)*((_QWORD *)a1 + 14);
    for ( i = (_QWORD *)*((_QWORD *)a1 + 13); i != v8 && *i != v3; i += 2 )
      ;
    if ( i != v8 )
    {
      for ( j = i + 2; j != (_OWORD *)v8; ++j )
      {
        if ( *(_QWORD *)j != v3 )
        {
          *(_OWORD *)i = *j;
          i += 2;
        }
      }
    }
    v11 = *((_QWORD *)a1 + 14) - (_QWORD)v8;
    memmove_0(i, v8, v11);
    *((_QWORD *)a1 + 14) = (char *)i + v11;
    if ( SystemCursorService::CursorExists(a1, v3) )
    {
      v13 = v3;
      std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>,0>>::erase(
        (char *)a1 + 40,
        &v13);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x116,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
}
