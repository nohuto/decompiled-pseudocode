/*
 * XREFs of ?SetShape@SystemCursor@@QEAAJ_K@Z @ 0x1801407D8
 * Callers:
 *     ?AddShape@SystemCursor@@QEAAJV?$shared_ptr@VSystemCursorShape@@@std@@@Z @ 0x18013EC48 (-AddShape@SystemCursor@@QEAAJV-$shared_ptr@VSystemCursorShape@@@std@@@Z.c)
 *     ?OnCursorGlyphChanged@SystemCursorService@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x1801403E0 (-OnCursorGlyphChanged@SystemCursorService@@UEAAJUCursorId@@UCursorGlyphData@@@Z.c)
 *     ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x1801406A0 (-RemoveShape@SystemCursor@@QEAAX_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShapeExists@SystemCursor@@QEBA_N_K@Z @ 0x18013D210 (-ShapeExists@SystemCursor@@QEBA_N_K@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x18013E258 (--$_Try_emplace@AEB_K$$V@-$map@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$allocat.c)
 *     ?GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ @ 0x18013FEE0 (-GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ.c)
 *     ?SetVisible@SystemCursorShape@@QEAAJ_N@Z @ 0x180140A80 (-SetVisible@SystemCursorShape@@QEAAJ_N@Z.c)
 */

__int64 __fastcall SystemCursor::SetShape(SystemCursor *this, __int64 a2)
{
  unsigned __int64 v2; // rdi
  int v5; // edi
  __int64 v6; // rdx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = a2;
  *((_QWORD *)this + 7) = a2;
  if ( !SystemCursor::ShapeExists(this, a2) )
  {
    v2 = SystemCursor::GetAndValidateDefaultShapeId(this);
    v9 = v2;
  }
  if ( !v2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x225,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  if ( *((_BYTE *)this + 16) && !*((_BYTE *)this + 17) )
  {
    if ( SystemCursor::ShapeExists(this, *((_QWORD *)this + 6)) )
    {
      std::map<unsigned __int64,std::shared_ptr<SystemCursorShape>>::_Try_emplace<unsigned __int64 const &,>(
        (__int64 *)this + 4,
        (__int64)v7,
        (_QWORD *)this + 6);
      v5 = SystemCursorShape::SetVisible(*(SystemCursorShape **)(v7[0] + 40LL), 0);
      if ( v5 < 0 )
      {
        v6 = 555LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorservice.cpp",
          (const char *)(unsigned int)v5);
        return (unsigned int)v5;
      }
    }
    std::map<unsigned __int64,std::shared_ptr<SystemCursorShape>>::_Try_emplace<unsigned __int64 const &,>(
      (__int64 *)this + 4,
      (__int64)v7,
      &v9);
    v5 = SystemCursorShape::SetVisible(*(SystemCursorShape **)(v7[0] + 40LL), 1);
    if ( v5 < 0 )
    {
      v6 = 558LL;
      goto LABEL_10;
    }
    v2 = v9;
  }
  *((_QWORD *)this + 6) = v2;
  return 0LL;
}
