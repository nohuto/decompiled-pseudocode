/*
 * XREFs of ??$emplace_back@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@Z @ 0x180178540
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801789B4 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180178AA0 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ??0?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180049660 (--0-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEdgyCo.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18006DBD8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x18017829C (--$_Emplace_reallocate@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall std::vector<Edge>::emplace_back<Edge const &>(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 result; // rax

  v4 = a1[1];
  if ( a1[2] == v4 )
    return std::vector<Edge>::_Emplace_reallocate<Edge const &>(a1, a1[1], a2);
  *(_QWORD *)v4 = *(_QWORD *)a2;
  std::wstring::wstring(v4 + 8, a2 + 8);
  v5 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(v4 + 40) = v5;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 24));
  *(_DWORD *)(v4 + 48) = *(_DWORD *)(a2 + 48);
  *(_OWORD *)(v4 + 52) = *(_OWORD *)(a2 + 52);
  *(_OWORD *)(v4 + 68) = *(_OWORD *)(a2 + 68);
  *(_QWORD *)(v4 + 84) = *(_QWORD *)(a2 + 84);
  *(_DWORD *)(v4 + 92) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(v4 + 96) = *(_DWORD *)(a2 + 96);
  std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>(
    (__int64 **)(v4 + 104),
    (__int64 **)(a2 + 104));
  result = a1[1];
  a1[1] = result + 128;
  return result;
}
