/*
 * XREFs of ?ShapeExists@SystemCursor@@QEBA_N_K@Z @ 0x18013D210
 * Callers:
 *     ?DestroyCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x18013C620 (-DestroyCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K.c)
 *     ?AddShape@SystemCursor@@QEAAJV?$shared_ptr@VSystemCursorShape@@@std@@@Z @ 0x18013EC48 (-AddShape@SystemCursor@@QEAAJV-$shared_ptr@VSystemCursorShape@@@std@@@Z.c)
 *     ?Cleanup@CustomCursorApplication@@QEAAXXZ @ 0x18013EDFC (-Cleanup@CustomCursorApplication@@QEAAXXZ.c)
 *     ?CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z @ 0x18013F320 (-CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z.c)
 *     ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x18013F4C8 (-CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z.c)
 *     ?GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ @ 0x18013FEE0 (-GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ.c)
 *     ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x1801406A0 (-RemoveShape@SystemCursor@@QEAAX_K@Z.c)
 *     ?SetShape@SystemCursor@@QEAAJ_K@Z @ 0x1801407D8 (-SetShape@SystemCursor@@QEAAJ_K@Z.c)
 *     ?SetSuppressionState@SystemCursor@@QEAAJ_N@Z @ 0x1801408F4 (-SetSuppressionState@SystemCursor@@QEAAJ_N@Z.c)
 *     ?SetVisible@SystemCursor@@QEAAJ_N@Z @ 0x1801409C4 (-SetVisible@SystemCursor@@QEAAJ_N@Z.c)
 * Callees:
 *     ?find@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x18013D90C (-find@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$allocato.c)
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
