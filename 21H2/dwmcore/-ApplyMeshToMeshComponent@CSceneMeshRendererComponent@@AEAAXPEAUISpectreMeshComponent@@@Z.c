/*
 * XREFs of ?ApplyMeshToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z @ 0x18023C518
 * Callers:
 *     ?ApplyMeshToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ @ 0x18023C588 (-ApplyMeshToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ.c)
 *     ?InitializeSpectreComponent@CSceneMeshRendererComponent@@MEAAJPEAX@Z @ 0x18023C7B0 (-InitializeSpectreComponent@CSceneMeshRendererComponent@@MEAAJPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSceneMeshRendererComponent::ApplyMeshToMeshComponent(
        CSceneMeshRendererComponent *this,
        struct ISpectreMeshComponent *a2)
{
  __int64 v3; // rdx
  void (__fastcall *v4)(struct ISpectreMeshComponent *, _QWORD); // rax

  v3 = *((_QWORD *)this + 11);
  v4 = **(void (__fastcall ***)(struct ISpectreMeshComponent *, _QWORD))a2;
  if ( v3 )
    v4(a2, *(_QWORD *)(v3 + 160));
  else
    v4(a2, 0LL);
  (*(void (__fastcall **)(struct ISpectreMeshComponent *))(*(_QWORD *)a2 + 16LL))(a2);
}
