/*
 * XREFs of ??$emplace_back@AEAPEAVEdgyControllerClientProxy@@@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@AEAPEAVEdgyControllerClientProxy@@@Z @ 0x18004A1D0
 * Callers:
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180179C24 (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::emplace_back<EdgyControllerClientProxy * &>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax

  v3 = (__int64 *)a1[1];
  if ( (__int64 *)a1[2] == v3 )
    return std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::_Emplace_reallocate<EdgyControllerClientProxy * &>(
             a1,
             (__int64)v3,
             a2);
  v4 = *a2;
  *v3 = *a2;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 24));
  result = a1[1];
  a1[1] = result + 8;
  return result;
}
