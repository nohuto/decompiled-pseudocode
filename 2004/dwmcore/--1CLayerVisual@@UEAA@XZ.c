/*
 * XREFs of ??1CLayerVisual@@UEAA@XZ @ 0x1800D1804
 * Callers:
 *     ??_GCLayerVisual@@UEAAPEAXI@Z @ 0x1800D17C0 (--_GCLayerVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180020AF4 (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034D4C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CLayerVisual::~CLayerVisual(CLayerVisual *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 78) == 0LL;
  *(_QWORD *)this = &CLayerVisual::`vftable';
  if ( !v1 )
    CLayerVisual::ClearTreeEffect(this);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 77));
  *((_QWORD *)this + 77) = 0LL;
  CVisual::~CVisual(this);
}
