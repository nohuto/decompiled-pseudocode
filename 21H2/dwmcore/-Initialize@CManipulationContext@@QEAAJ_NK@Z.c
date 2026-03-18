/*
 * XREFs of ?Initialize@CManipulationContext@@QEAAJ_NK@Z @ 0x180182CE0
 * Callers:
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x18017D2A0 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18017D980 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180183F68 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1800E04DC (--0CInteractionProcessor@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EA9A4 (-InternalRelease@-$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1801F23C4 (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CManipulationContext::Initialize(CManipulationContext *this, bool a2, int a3)
{
  CInteractionRoot *v6; // rax
  CInteractionRoot *v7; // rbx
  CInteractionRoot *v8; // rcx
  __int64 v9; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 26) = 0;
  Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((__int64 *)this + 14);
  *((_DWORD *)this + 30) = 0;
  Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((__int64 *)this + 16);
  *((_BYTE *)this + 28) &= ~1u;
  *((_BYTE *)this + 28) |= a2;
  *((_DWORD *)this + 8) = a3;
  v6 = (CInteractionRoot *)DefaultHeap::AllocClear(0x568uLL);
  v7 = v6;
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  memset_0(v6, 0, 0x568uLL);
  *(_QWORD *)v7 = &CInteractionRoot::`vftable';
  CInteractionProcessor::CInteractionProcessor((CInteractionRoot *)((char *)v7 + 24));
  v8 = (CInteractionRoot *)*((_QWORD *)this + 17);
  if ( v8 != v7 )
  {
    (**(void (__fastcall ***)(CInteractionRoot *))v7)(v7);
    v9 = *((_QWORD *)this + 17);
    v8 = v7;
    *((_QWORD *)this + 17) = v7;
    if ( !v9 )
      return CInteractionRoot::Initialize(v8, this, a2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v8 = (CInteractionRoot *)*((_QWORD *)this + 17);
  }
  if ( !v8 )
    return 2147942414LL;
  return CInteractionRoot::Initialize(v8, this, a2);
}
