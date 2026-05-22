/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800492BC
 * Callers:
 *     ?_Destroy@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@0@Z @ 0x180049300 (-_Destroy@-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180049314 (-_Tidy@-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEd.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x180049528 (--$_Uninitialized_move@PEAV-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@PEAV123@V-$alloc.c)
 *     ??0?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180049660 (--0-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEdgyCo.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@_K1@Z @ 0x1800497A8 (-_Change_array@-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$Co.c)
 *     ?erase@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x180049830 (-erase@-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEd.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F397C (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(v3);
      v3 += 8LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
