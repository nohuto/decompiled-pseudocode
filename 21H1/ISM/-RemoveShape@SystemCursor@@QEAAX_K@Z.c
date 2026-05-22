/*
 * XREFs of ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x180140700
 * Callers:
 *     ?DestroyCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x18013C680 (-DestroyCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K.c)
 *     ?DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x18013C940 (-DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerSt.c)
 *     ?Cleanup@CustomCursorApplication@@QEAAXXZ @ 0x18013EE5C (-Cleanup@CustomCursorApplication@@QEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShapeExists@SystemCursor@@QEBA_N_K@Z @ 0x18013D270 (-ShapeExists@SystemCursor@@QEBA_N_K@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x18013D8B4 (-erase@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K_ea_18013D8B4.c)
 *     ?GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ @ 0x18013FF40 (-GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ.c)
 *     ?SetShape@SystemCursor@@QEAAJ_K@Z @ 0x180140838 (-SetShape@SystemCursor@@QEAAJ_K@Z.c)
 */

void __fastcall SystemCursor::RemoveShape(SystemCursor *this, __int64 a2)
{
  unsigned __int64 v4; // rax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( SystemCursor::ShapeExists(this, a2) )
  {
    if ( *((_QWORD *)this + 6) == a2 )
    {
      v4 = SystemCursor::GetAndValidateDefaultShapeId(this);
      if ( v4 )
      {
        v5 = SystemCursor::SetShape(this, v4);
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            521LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib"
                     "\\systemcursorservice.cpp",
            (const char *)(unsigned int)v5);
      }
      else
      {
        *((_QWORD *)this + 6) = 32512LL;
      }
    }
    if ( *((_QWORD *)this + 7) == a2 )
      *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::erase(
      (_QWORD *)this + 4,
      (unsigned __int64 *)&v7);
  }
}
