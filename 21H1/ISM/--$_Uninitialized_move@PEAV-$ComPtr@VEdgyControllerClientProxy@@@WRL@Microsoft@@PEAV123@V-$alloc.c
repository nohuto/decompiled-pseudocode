/*
 * XREFs of ??$_Uninitialized_move@PEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x180049B38
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVEdgyControllerClientProxy@@@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV234@AEAPEAVEdgyControllerClientProxy@@@Z @ 0x180049978 (--$_Emplace_reallocate@AEAPEAVEdgyControllerClientProxy@@@-$vector@V-$ComPtr@VEdgyControllerClie.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800498CC (--$_Destroy_range@V-$allocator@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<Microsoft::WRL::ComPtr<EdgyControllerClientProxy> *,Microsoft::WRL::ComPtr<EdgyControllerClientProxy> *,std::allocator<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *i; // rax

  for ( i = a1; i != a2; ++i )
  {
    *a3 = 0LL;
    if ( a3 != i )
    {
      *a3 = *i;
      *i = 0LL;
    }
    ++a3;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>((__int64)a3, (__int64)a3);
  return a3;
}
