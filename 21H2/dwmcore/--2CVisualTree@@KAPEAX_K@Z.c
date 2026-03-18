/*
 * XREFs of ??2CVisualTree@@KAPEAX_K@Z @ 0x1800644B4
 * Callers:
 *     ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z @ 0x180004DB0 (-Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z.c)
 *     ?Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180063FA0 (-Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

LPVOID __fastcall CVisualTree::operator new()
{
  LPVOID result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = DefaultHeap::AllocClear(0x1270uLL);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  return result;
}
