/*
 * XREFs of ??1?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@MEAA@XZ @ 0x18019DA44
 * Callers:
 *     ??_GCSuperWetInkVisual@@UEAAPEAXI@Z @ 0x18019F930 (--_GCSuperWetInkVisual@@UEAAPEAXI@Z.c)
 *     ??_GCSceneVisual@@UEAAPEAXI@Z @ 0x180202520 (--_GCSceneVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSceneVisualGeneratedT<CSceneVisual,CVisual>::~CSceneVisualGeneratedT<CSceneVisual,CVisual>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[91]);
  this[91] = 0LL;
  CVisual::~CVisual((CVisual *)this);
}
