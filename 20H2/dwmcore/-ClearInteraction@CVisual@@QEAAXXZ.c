/*
 * XREFs of ?ClearInteraction@CVisual@@QEAAXXZ @ 0x1800AAA40
 * Callers:
 *     ?Release@CVisual@@UEAAKXZ @ 0x1800AA9A0 (-Release@CVisual@@UEAAKXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x1800AB15C (--1CVisual@@MEAA@XZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800DCA94 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x1800AABC0 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800C248C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::ClearInteraction(CVisual *this)
{
  struct CInteraction *InteractionInternal; // rax
  _DWORD *v3; // r10
  __int64 v4; // rcx
  unsigned int Slot; // eax
  __int64 v6; // r10

  InteractionInternal = CVisual::GetInteractionInternal(this);
  if ( InteractionInternal )
    (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)InteractionInternal + 8LL))(InteractionInternal);
  v3 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v3 & 0x800000) != 0 )
  {
    v4 = *((_QWORD *)this + 28);
    *v3 &= ~0x800000u;
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v4, 9LL);
    if ( Slot < *(_DWORD *)(v6 + 4) )
      *(_BYTE *)(Slot + v6 + 8) = 0;
  }
}
