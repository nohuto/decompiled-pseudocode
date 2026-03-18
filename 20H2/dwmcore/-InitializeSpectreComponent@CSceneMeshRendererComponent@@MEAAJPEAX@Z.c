/*
 * XREFs of ?InitializeSpectreComponent@CSceneMeshRendererComponent@@MEAAJPEAX@Z @ 0x1801E8D30
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyMaterialToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z @ 0x1801E89FC (-ApplyMaterialToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z.c)
 *     ?ApplyMeshToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z @ 0x1801E8AAC (-ApplyMeshToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z.c)
 */

__int64 __fastcall CSceneMeshRendererComponent::InitializeSpectreComponent(
        CSceneMeshRendererComponent *this,
        struct ISpectreMeshComponent *a2)
{
  CSceneMeshRendererComponent::ApplyMeshToMeshComponent(this, a2);
  CSceneMeshRendererComponent::ApplyMaterialToMeshComponent(this, a2);
  return 0LL;
}
