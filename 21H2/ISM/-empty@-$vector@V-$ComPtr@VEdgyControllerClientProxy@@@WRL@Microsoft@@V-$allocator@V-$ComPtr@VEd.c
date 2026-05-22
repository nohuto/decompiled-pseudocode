/*
 * XREFs of ?empty@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEBA_NXZ @ 0x18004A478
 * Callers:
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180179A10 (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::empty(_QWORD *a1)
{
  return *a1 == a1[1];
}
