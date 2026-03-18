/*
 * XREFs of ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x1800BCCB4
 * Callers:
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x1800BCBE4 (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETW.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x1800C23C4 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800C248C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CVisual::SetWindowBackgroundTreatmentInternal(CVisual *this, struct CWindowBackgroundTreatment *a2)
{
  _QWORD *v2; // r10
  _DWORD *v3; // r11
  int v5; // eax
  __int64 v6; // rcx
  _BYTE *v7; // rdx
  unsigned int i; // eax
  unsigned int Slot; // eax
  char v10; // r10
  __int64 v11; // r11

  v2 = 0LL;
  v3 = (_DWORD *)*((_QWORD *)this + 28);
  v5 = *v3 & 0x200000;
  if ( a2 )
  {
    if ( v5 )
    {
      v6 = (unsigned int)v3[1];
      v7 = v3 + 2;
      for ( i = 0; i < (unsigned int)v6; ++v7 )
      {
        if ( *v7 == 11 )
          break;
        ++i;
      }
      if ( i < (unsigned int)v6 )
        v2 = (_QWORD *)((char *)v3 + 8LL * i - (((_BYTE)v6 + 15) & 7) + v6 + 15);
      *v2 = a2;
    }
    else
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((char *)this + 224, 11LL) = a2;
    }
  }
  else if ( v5 )
  {
    *v3 &= ~0x200000u;
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v3, 11LL);
    if ( Slot < *(_DWORD *)(v11 + 4) )
      *(_BYTE *)(Slot + v11 + 8) = v10;
  }
}
