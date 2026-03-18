/*
 * XREFs of ?SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z @ 0x1800E30E4
 * Callers:
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x1800E301C (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x18004C27C (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18004D2F4 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CVisual::SetEffectInternal(CVisual *this, struct CEffect *a2)
{
  __int64 *v2; // rcx
  _QWORD *v3; // r11
  unsigned int *v5; // r10
  int v6; // eax
  __int64 v7; // rcx
  _BYTE *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rcx
  unsigned int Slot; // eax
  __int64 v12; // r10
  char v13; // r11

  v2 = (__int64 *)((char *)this + 232);
  v3 = 0LL;
  v5 = (unsigned int *)*v2;
  v6 = *(_DWORD *)*v2;
  if ( a2 )
  {
    if ( (v6 & 0x400000) == 0 )
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(v2, 10) = a2;
      return;
    }
    v7 = v5[1];
    v8 = v5 + 2;
    v9 = 0;
    if ( (_DWORD)v7 )
    {
      while ( *v8 != 10 )
      {
        ++v9;
        ++v8;
        if ( v9 >= (unsigned int)v7 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      if ( v9 >= (unsigned int)v7 )
        goto LABEL_6;
    }
    v3 = (_QWORD *)((char *)v5 + 8LL * v9 - (((_BYTE)v7 + 15) & 7) + v7 + 15);
LABEL_6:
    *v3 = a2;
    return;
  }
  if ( (v6 & 0x400000) != 0 )
  {
    v10 = *v2;
    *v5 = v6 & 0xFFBFFFFF;
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v10, 10);
    if ( Slot < *(_DWORD *)(v12 + 4) )
      *(_BYTE *)(Slot + v12 + 8) = v13;
  }
}
