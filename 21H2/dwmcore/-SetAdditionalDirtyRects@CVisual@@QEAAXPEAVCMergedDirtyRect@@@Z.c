/*
 * XREFs of ?SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedDirtyRect@@@Z @ 0x1800E5180
 * Callers:
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180085064 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x18004C27C (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18004D2F4 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CVisual::SetAdditionalDirtyRects(CVisual *this, struct CMergedDirtyRect *a2)
{
  __int64 *v2; // rcx
  _QWORD *v3; // r11
  unsigned int *v5; // r10
  int v6; // eax
  __int64 v7; // rcx
  unsigned int Slot; // eax
  __int64 v9; // r10
  char v10; // r11
  __int64 v11; // rcx
  _BYTE *v12; // rdx
  unsigned int v13; // eax

  v2 = (__int64 *)((char *)this + 232);
  v3 = 0LL;
  v5 = (unsigned int *)*v2;
  v6 = *(_DWORD *)*v2;
  if ( a2 )
  {
    if ( (v6 & 0x40000000) == 0 )
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(v2, 2) = a2;
      return;
    }
    v11 = v5[1];
    v12 = v5 + 2;
    v13 = 0;
    if ( (_DWORD)v11 )
    {
      while ( *v12 != 2 )
      {
        ++v13;
        ++v12;
        if ( v13 >= (unsigned int)v11 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      if ( v13 >= (unsigned int)v11 )
      {
LABEL_13:
        *v3 = a2;
        return;
      }
    }
    v3 = (_QWORD *)((char *)v5 + 8LL * v13 - (((_BYTE)v11 + 15) & 7) + v11 + 15);
    goto LABEL_13;
  }
  if ( (v6 & 0x40000000) != 0 )
  {
    v7 = *v2;
    *v5 = v6 & 0xBFFFFFFF;
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v7, 2);
    if ( Slot < *(_DWORD *)(v9 + 4) )
      *(_BYTE *)(Slot + v9 + 8) = v10;
  }
}
