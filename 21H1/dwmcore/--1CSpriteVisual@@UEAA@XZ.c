/*
 * XREFs of ??1CSpriteVisual@@UEAA@XZ @ 0x1800A9FC4
 * Callers:
 *     ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x1800A9F80 (--_GCSpriteVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x1800AA054 (-RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x1800AA3DC (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BCC1C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CSpriteVisual::~CSpriteVisual(CSpriteVisual *this)
{
  CDropShadow *DropShadow; // rbx
  _DWORD *v3; // r10
  __int64 v4; // rcx
  unsigned int Slot; // eax
  __int64 v6; // r10

  *(_QWORD *)this = &CSpriteVisual::`vftable';
  if ( (**((_DWORD **)this + 28) & 0x10000) != 0 )
  {
    DropShadow = CSpriteVisual::GetDropShadow(this);
    CDropShadow::RemoveVisualFromCache(DropShadow, this);
    CResource::UnRegisterNotifierInternal(this, DropShadow);
    v3 = (_DWORD *)*((_QWORD *)this + 28);
    if ( (*v3 & 0x10000) != 0 )
    {
      v4 = *((_QWORD *)this + 28);
      *v3 &= ~0x10000u;
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v4, 16LL);
      if ( Slot < *(_DWORD *)(v6 + 4) )
        *(_BYTE *)(Slot + v6 + 8) = 0;
    }
  }
  CVisual::~CVisual(this);
}
