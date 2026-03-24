/*
 * XREFs of ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x18000E874
 * Callers:
 *     ??_ECProjectedShadowReceiver@@MEAAPEAXI@Z @ 0x18000E8E0 (--_ECProjectedShadowReceiver@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x18000CFEC (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001B590 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180045210 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8E4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CProjectedShadowReceiver::~CProjectedShadowReceiver(CVisual **this)
{
  CVisual *v2; // rcx

  *this = (CVisual *)&CProjectedShadowReceiver::`vftable';
  CProjectedShadowReceiver::SetReceivingVisual(this, 0LL);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(this + 13);
  v2 = this[8];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (this[10] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    this[8] = 0LL;
    this[9] = 0LL;
    this[10] = 0LL;
  }
  CResource::~CResource((CResource *)this);
}
