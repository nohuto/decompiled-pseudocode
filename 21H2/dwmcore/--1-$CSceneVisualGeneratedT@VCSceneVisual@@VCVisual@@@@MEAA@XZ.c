/*
 * XREFs of ??1?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@MEAA@XZ @ 0x1801EC3E8
 * Callers:
 *     ??_GCSceneVisual@@UEAAPEAXI@Z @ 0x1801EC420 (--_GCSceneVisual@@UEAAPEAXI@Z.c)
 *     ??_GCSuperWetInkVisual@@UEAAPEAXI@Z @ 0x1801EE110 (--_GCSuperWetInkVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180045210 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSceneVisualGeneratedT<CSceneVisual,CVisual>::~CSceneVisualGeneratedT<CSceneVisual,CVisual>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[77]);
  this[77] = 0LL;
  CVisual::~CVisual((CVisual *)this);
}
