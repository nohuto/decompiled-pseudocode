/*
 * XREFs of ??1Edge@@QEAA@XZ @ 0x18017704C
 * Callers:
 *     _Edges::AddOrUpdate_::_1_::dtor$0 @ 0x180178A68 (_Edges--AddOrUpdate_--_1_--dtor$0.c)
 *     _Edges::AddOrUpdate_::_1_::dtor$0_0 @ 0x180178B55 (_Edges--AddOrUpdate_--_1_--dtor$0_0.c)
 * Callees:
 *     ??1?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800492F4 (--1-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEdgyCo.c)
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F397C (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Edge::~Edge(Edge *this)
{
  std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::~vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>();
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease((__int64 *)this + 5);
  std::wstring::_Tidy_deallocate((__int64)this + 8);
}
