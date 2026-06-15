/*
 * XREFs of ?CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z @ 0x18010AD4C
 * Callers:
 *     ?GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180106C9C (-GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ @ 0x18010B128 (-GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ.c)
 *     ?ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z @ 0x18010B6B4 (-ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z.c)
 * Callees:
 *     ?GetAvailableDynamicObjectCount@CStreamResource@Sarm@@QEBAIXZ @ 0x18010AFBC (-GetAvailableDynamicObjectCount@CStreamResource@Sarm@@QEBAIXZ.c)
 */

unsigned int __fastcall Sarm::CStreamResource::CalculateDynamicObjectGrantCount(
        Sarm::CStreamResource *this,
        unsigned int a2)
{
  unsigned int AvailableDynamicObjectCount; // eax

  AvailableDynamicObjectCount = Sarm::CStreamResource::GetAvailableDynamicObjectCount(this);
  return Sarm::CStreamResource::CalculateDynamicObjectGrantCount(this, a2, AvailableDynamicObjectCount);
}
