/*
 * XREFs of ??1?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@MEAA@XZ @ 0x1801ED4E8
 * Callers:
 *     ??_GCSceneVisual@@UEAAPEAXI@Z @ 0x1801ED520 (--_GCSceneVisual@@UEAAPEAXI@Z.c)
 *     ??_GCSuperWetInkVisual@@UEAAPEAXI@Z @ 0x1801EF210 (--_GCSuperWetInkVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034D4C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSceneVisualGeneratedT<CSceneVisual,CVisual>::~CSceneVisualGeneratedT<CSceneVisual,CVisual>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[77]);
  this[77] = 0LL;
  CVisual::~CVisual((CVisual *)this);
}
