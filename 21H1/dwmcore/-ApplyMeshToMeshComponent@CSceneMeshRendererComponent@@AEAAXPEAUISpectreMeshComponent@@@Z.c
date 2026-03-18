/*
 * XREFs of ?ApplyMeshToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z @ 0x1801ED26C
 * Callers:
 *     ?ApplyMeshToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ @ 0x1801ED2B0 (-ApplyMeshToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ.c)
 *     ?InitializeSpectreComponent@CSceneMeshRendererComponent@@MEAAJPEAX@Z @ 0x1801ED4F0 (-InitializeSpectreComponent@CSceneMeshRendererComponent@@MEAAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSceneMeshRendererComponent::ApplyMeshToMeshComponent(
        CSceneMeshRendererComponent *this,
        struct ISpectreMeshComponent *a2)
{
  __int64 v3; // rdx

  v3 = *((_QWORD *)this + 10);
  if ( v3 )
    v3 = *(_QWORD *)(v3 + 152);
  (**(void (__fastcall ***)(struct ISpectreMeshComponent *, __int64))a2)(a2, v3);
  (*(void (__fastcall **)(struct ISpectreMeshComponent *))(*(_QWORD *)a2 + 16LL))(a2);
}
