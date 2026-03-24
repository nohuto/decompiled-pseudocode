/*
 * XREFs of ?Initialize@CManipulationContext@@QEAAJ_NK@Z @ 0x180234740
 * Callers:
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x180225910 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180225FC4 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x1802357A4 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18009F358 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D44F4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1800E0D94 (--0CInteractionProcessor@@QEAA@XZ.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1801C64B4 (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CManipulationContext::Initialize(CManipulationContext *this, char a2, int a3)
{
  CInteractionRoot *v6; // rax
  CInteractionRoot *v7; // rbx
  CInteractionRoot *v8; // rcx
  __int64 v9; // rdx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 26) = 0;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 14);
  *((_DWORD *)this + 30) = 0;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 16);
  *((_BYTE *)this + 28) &= ~1u;
  *((_BYTE *)this + 28) |= a2;
  *((_DWORD *)this + 8) = a3;
  v6 = (CInteractionRoot *)DefaultHeap::AllocClear(0x570uLL);
  v7 = v6;
  if ( !v6 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  memset_0(v6, 0, 0x570uLL);
  *((_QWORD *)v7 + 3) = 0LL;
  *(_QWORD *)v7 = &CInteractionRoot::`vftable'{for `IInteractionResource'};
  *((_DWORD *)v7 + 4) = 0;
  *((_QWORD *)v7 + 1) = &CInteractionRoot::`vftable'{for `CMILRefCountBase'};
  CInteractionProcessor::CInteractionProcessor((CInteractionRoot *)((char *)v7 + 32));
  v8 = (CInteractionRoot *)*((_QWORD *)this + 17);
  if ( v8 != v7 )
  {
    (**(void (__fastcall ***)(void *))v7)(v7);
    v9 = *((_QWORD *)this + 17);
    v8 = v7;
    *((_QWORD *)this + 17) = v7;
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v8 = (CInteractionRoot *)*((_QWORD *)this + 17);
    }
  }
  if ( v8 )
    return CInteractionRoot::Initialize(v8, this, a2);
  else
    return 2147942414LL;
}
