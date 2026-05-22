/*
 * XREFs of ?_Tidy@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180049924
 * Callers:
 *     ??1?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180049904 (--1-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEdgyCo.c)
 *     ??4?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180049D64 (--4-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEdgyCo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800498CC (--$_Destroy_range@V-$allocator@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::_Tidy(__int64 *a1)
{
  void *v1; // rdi

  v1 = (void *)*a1;
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>(*a1, a1[1]);
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)((a1[2] - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
