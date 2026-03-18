/*
 * XREFs of ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x1801B1F14
 * Callers:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x18016B71C (--1CFilterEffect@@MEAA@XZ.c)
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x1801B23B0 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FILTEREFFECT_UPDATEIN.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x1801B1CF0 (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 */

void __fastcall CFilterEffect::EmptyFilterInputMap(CFilterEffect *this)
{
  __int64 v1; // rsi
  __int64 i; // rbx
  InternalFilterInput *v4; // rcx

  v1 = *((int *)this + 32);
  if ( v1 > 0 )
  {
    for ( i = 0LL; i < v1; ++i )
    {
      CResource::UnRegisterNotifierInternal(
        this,
        *(struct CResource **)(*(_QWORD *)(*((_QWORD *)this + 15) + 8 * i) + 24LL));
      v4 = *(InternalFilterInput **)(*((_QWORD *)this + 15) + 8 * i);
      if ( v4 )
        InternalFilterInput::`scalar deleting destructor'(v4);
    }
  }
  CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::RemoveAll((__int64)this + 112);
}
