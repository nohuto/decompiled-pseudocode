/*
 * XREFs of ?InitializeSpectreComponent@CSceneMeshRendererComponent@@MEAAJPEAX@Z @ 0x1801EAB70
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyMaterialToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z @ 0x1801EA83C (-ApplyMaterialToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z.c)
 *     ?ApplyMeshToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z @ 0x1801EA8EC (-ApplyMeshToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z.c)
 */

__int64 __fastcall CSceneMeshRendererComponent::InitializeSpectreComponent(
        CSceneMeshRendererComponent *this,
        struct ISpectreMeshComponent *a2)
{
  CSceneMeshRendererComponent::ApplyMeshToMeshComponent(this, a2);
  CSceneMeshRendererComponent::ApplyMaterialToMeshComponent(this, a2);
  return 0LL;
}
