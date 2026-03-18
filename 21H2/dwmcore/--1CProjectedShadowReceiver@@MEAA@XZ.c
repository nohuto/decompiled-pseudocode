/*
 * XREFs of ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x180235414
 * Callers:
 *     ??_ECProjectedShadowReceiver@@MEAAPEAXI@Z @ 0x180235480 (--_ECProjectedShadowReceiver@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F65A4 (-InternalRelease@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x180235B10 (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 */

void __fastcall CProjectedShadowReceiver::~CProjectedShadowReceiver(CProjectedShadowReceiver *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CProjectedShadowReceiver::`vftable';
  CProjectedShadowReceiver::SetReceivingVisual(this, 0LL);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 13));
  Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease((__int64 *)this + 14);
  v2 = (void *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 11) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  CResource::~CResource(this);
}
