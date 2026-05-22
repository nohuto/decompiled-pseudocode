/*
 * XREFs of ?_Destroy@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@0@Z @ 0x180049300
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_EdgyControllerClientProxy__std::allocator_Microsoft::WRL::ComPtr_EdgyControllerClientProxy_____::_Emplace_reallocate_EdgyControllerClientProxy___&__::_1_::catch$32 @ 0x18004947A (_std--vector_Microsoft--WRL--ComPtr_EdgyControllerClientProxy__std--allocator_Microsoft--WRL--Co.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::_Destroy(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>(a2, a3);
}
