/*
 * XREFs of ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180178F60
 * Callers:
 *     ?OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180177B70 (-OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800363CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ??1?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180049904 (--1-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEdgyCo.c)
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F3E3C (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$emplace_back@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@Z @ 0x180178A00 (--$emplace_back@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@.c)
 *     ??0Edge@@QEAA@PEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180178C20 (--0Edge@@QEAA@PEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x18017907C (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180179DA4 (-Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Edges::AddOrUpdate(Edges *this, const struct EdgyCompositionConfigurationUpdateEx *a2)
{
  unsigned int v4; // ebx
  int Edge; // eax
  _BYTE v7[8]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v8[32]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v9[8]; // [rsp+58h] [rbp-70h] BYREF

  v4 = 0;
  Edge = Edges::FindEdge(this, (const unsigned __int16 *)a2 + 12);
  if ( Edge < 0 )
  {
    Edge::Edge((Edge *)v7, a2);
    try
    {
      std::vector<Edge>::emplace_back<Edge const &>((__int64 *)this, (__int64)v7);
    }
    catch ( ... )
    {
      v4 = -2147024882;
    }
    std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::~vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>();
    Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(v9);
    std::wstring::_Tidy_deallocate((__int64)v8);
  }
  else
  {
    Edge::Set((Edge *)(*(_QWORD *)this + ((__int64)Edge << 7)), a2);
  }
  return v4;
}
