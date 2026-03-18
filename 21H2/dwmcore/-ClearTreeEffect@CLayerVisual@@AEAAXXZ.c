/*
 * XREFs of ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x18022355C
 * Callers:
 *     ??1CLayerVisual@@UEAA@XZ @ 0x1800F4F14 (--1CLayerVisual@@UEAA@XZ.c)
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x1802239BC (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CLayerVisual::ClearTreeEffect(struct CResource ***this)
{
  __int64 v2; // rdx
  struct CResource **v3; // rdi
  struct CResource *v4; // rcx

  CResource::UnRegisterNotifierInternal((CResource *)this, *this[92]);
  v3 = this[92];
  if ( v3 )
  {
    v4 = *v3;
    if ( *v3 )
    {
      *v3 = 0LL;
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v4 + 16LL))(v4);
    }
    DefaultHeap::Free(v3);
  }
  this[92] = 0LL;
  CLayerVisual::UpdateBackdropBlurFlagForTreeEffect((CLayerVisual *)this, v2);
}
