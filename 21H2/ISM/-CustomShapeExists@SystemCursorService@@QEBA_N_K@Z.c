/*
 * XREFs of ?CustomShapeExists@SystemCursorService@@QEBA_N_K@Z @ 0x18013C4EC
 * Callers:
 *     ?DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x18013C8E0 (-DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerSt.c)
 *     ?Cleanup@CustomCursorApplication@@QEAAXXZ @ 0x18013EDFC (-Cleanup@CustomCursorApplication@@QEAAXXZ.c)
 *     ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x18013F4C8 (-CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z.c)
 * Callees:
 *     ?find@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x18013D90C (-find@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$allocato.c)
 */

bool __fastcall SystemCursorService::CustomShapeExists(SystemCursorService *this, __int64 a2)
{
  char v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  return *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::find(
                      (char *)this + 152,
                      &v3,
                      &v4) != *((_QWORD *)this + 19);
}
