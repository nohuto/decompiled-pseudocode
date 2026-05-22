/*
 * XREFs of ?ShapeExists@SystemCursor@@QEBA_N_K@Z @ 0x18013D270
 * Callers:
 *     ?DestroyCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x18013C680 (-DestroyCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K.c)
 *     ?AddShape@SystemCursor@@QEAAJV?$shared_ptr@VSystemCursorShape@@@std@@@Z @ 0x18013ECA8 (-AddShape@SystemCursor@@QEAAJV-$shared_ptr@VSystemCursorShape@@@std@@@Z.c)
 *     ?Cleanup@CustomCursorApplication@@QEAAXXZ @ 0x18013EE5C (-Cleanup@CustomCursorApplication@@QEAAXXZ.c)
 *     ?CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z @ 0x18013F380 (-CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z.c)
 *     ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x18013F528 (-CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z.c)
 *     ?GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ @ 0x18013FF40 (-GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ.c)
 *     ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x180140700 (-RemoveShape@SystemCursor@@QEAAX_K@Z.c)
 *     ?SetShape@SystemCursor@@QEAAJ_K@Z @ 0x180140838 (-SetShape@SystemCursor@@QEAAJ_K@Z.c)
 *     ?SetSuppressionState@SystemCursor@@QEAAJ_N@Z @ 0x180140954 (-SetSuppressionState@SystemCursor@@QEAAJ_N@Z.c)
 *     ?SetVisible@SystemCursor@@QEAAJ_N@Z @ 0x180140A24 (-SetVisible@SystemCursor@@QEAAJ_N@Z.c)
 * Callees:
 *     ?find@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x18013D96C (-find@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$allocato.c)
 */

bool __fastcall SystemCursor::ShapeExists(SystemCursor *this, __int64 a2)
{
  char v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  return *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::find(
                      (char *)this + 32,
                      &v3,
                      &v4) != *((_QWORD *)this + 4);
}
