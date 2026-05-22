/*
 * XREFs of ?SetVisible@SystemCursor@@QEAAJ_N@Z @ 0x1801409C4
 * Callers:
 *     ?OnCursorVisibilityChanged@SystemCursorService@@UEAAJUCursorId@@UCursorVisibilityData@@@Z @ 0x180140590 (-OnCursorVisibilityChanged@SystemCursorService@@UEAAJUCursorId@@UCursorVisibilityData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Lbound@_K@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@1@AEB_K@Z @ 0x18013B1B4 (--$_Lbound@_K@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$.c)
 *     ?ShapeExists@SystemCursor@@QEBA_N_K@Z @ 0x18013D210 (-ShapeExists@SystemCursor@@QEBA_N_K@Z.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18013E2C0 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap.c)
 *     ?SetVisible@SystemCursorShape@@QEAAJ_N@Z @ 0x180140A80 (-SetVisible@SystemCursorShape@@QEAAJ_N@Z.c)
 */

__int64 __fastcall SystemCursor::SetVisible(SystemCursor *this, char a2)
{
  _QWORD *v4; // r14
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 *v7; // r9
  int v8; // eax
  unsigned int v9; // esi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  if ( *((_BYTE *)this + 16) != a2 )
  {
    if ( !*((_BYTE *)this + 17) )
    {
      v4 = (_QWORD *)((char *)this + 48);
      v5 = *((_QWORD *)this + 6);
      if ( SystemCursor::ShapeExists(this, v5) )
      {
        v6 = (__int64)std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Lbound<unsigned __int64>(
                        (__int64 *)this + 4,
                        v4);
        if ( v6 == *v7 || v5 < *(_QWORD *)(v6 + 32) )
        {
          v12 = v4;
          v6 = *std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
                  v7,
                  &v13,
                  (__int64 *)v6,
                  (__int64)v7,
                  &v12);
        }
        v8 = SystemCursorShape::SetVisible(*(SystemCursorShape **)(v6 + 40), a2);
        v9 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1D2,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib"
                     "\\systemcursorservice.cpp",
            (const char *)(unsigned int)v8);
          return v9;
        }
      }
    }
    *((_BYTE *)this + 16) = a2;
  }
  return 0LL;
}
