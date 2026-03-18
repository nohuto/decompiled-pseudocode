/*
 * XREFs of ??1?$CSceneModelTransformGeneratedT@VCSceneModelTransform@@VCCompositionTransform@@@@MEAA@XZ @ 0x18016FF04
 * Callers:
 *     ??_ECSceneModelTransform@@UEAAPEAXI@Z @ 0x180172220 (--_ECSceneModelTransform@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSceneModelTransformGeneratedT<CSceneModelTransform,CCompositionTransform>::~CSceneModelTransformGeneratedT<CSceneModelTransform,CCompositionTransform>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[7]);
  this[7] = 0LL;
  CResource::~CResource((CResource *)this);
}
