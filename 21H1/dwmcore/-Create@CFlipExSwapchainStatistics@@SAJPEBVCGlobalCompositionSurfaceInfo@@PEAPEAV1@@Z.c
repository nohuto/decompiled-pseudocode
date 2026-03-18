/*
 * XREFs of ?Create@CFlipExSwapchainStatistics@@SAJPEBVCGlobalCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x180020D84
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18002CA74 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?AddRef@CProjectedShadowReceiver@@UEAAKXZ @ 0x18001FED0 (-AddRef@CProjectedShadowReceiver@@UEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007CC28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CFlipExSwapchainStatistics::Create(
        const struct CGlobalCompositionSurfaceInfo *a1,
        struct CFlipExSwapchainStatistics **a2)
{
  struct CFlipExSwapchainStatistics *v4; // rax
  struct CFlipExSwapchainStatistics *v5; // rbx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct CFlipExSwapchainStatistics *)DefaultHeap::AllocClear(0x28uLL);
  v5 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 9) = 0;
  *(_QWORD *)v4 = &CFlipExSwapchainStatistics::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)v4 + 2) = &CFlipExSwapchainStatistics::`vftable'{for `ICompositionSurfaceStatistics'};
  *((_QWORD *)v4 + 3) = a1;
  *((_DWORD *)v4 + 8) = 2;
  CProjectedShadowReceiver::AddRef(v4);
  result = 0LL;
  *a2 = v5;
  return result;
}
