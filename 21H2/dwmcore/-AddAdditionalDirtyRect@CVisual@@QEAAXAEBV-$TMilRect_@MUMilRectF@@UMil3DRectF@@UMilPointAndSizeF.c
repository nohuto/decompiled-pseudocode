/*
 * XREFs of ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180085064
 * Callers:
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800486D0 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180048940 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x180084DC0 (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180115080 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ??0CMergedDirtyRect@@QEAA@XZ @ 0x1800E1584 (--0CMergedDirtyRect@@QEAA@XZ.c)
 *     ?SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedDirtyRect@@@Z @ 0x1800E5180 (-SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedDirtyRect@@@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CVisual::AddAdditionalDirtyRect(CVisual *this, float *a2)
{
  __int64 v2; // rax
  _DWORD *v5; // r8
  __int64 v6; // rcx
  _BYTE *v7; // rdx
  unsigned int v8; // eax
  struct CMergedDirtyRect **v9; // rsi
  struct CMergedDirtyRect *v10; // rsi
  unsigned int Count; // eax
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  CMergedDirtyRect *v16; // rax
  CMergedDirtyRect *v17; // rsi
  struct CMergedDirtyRect *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v2 = (__int64)&retaddr;
  if ( (*((_BYTE *)this + 96) & 4) != 0 || a2[2] <= *a2 || a2[3] <= a2[1] )
    return v2;
  v5 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v5 & 0x40000000) == 0 )
    goto LABEL_25;
  v6 = (unsigned int)v5[1];
  v7 = v5 + 2;
  v8 = 0;
  if ( (_DWORD)v6 )
  {
    while ( *v7 != 2 )
    {
      ++v8;
      ++v7;
      if ( v8 >= (unsigned int)v6 )
        goto LABEL_8;
    }
    goto LABEL_9;
  }
LABEL_8:
  if ( v8 < (unsigned int)v6 )
  {
LABEL_9:
    v9 = (struct CMergedDirtyRect **)((char *)v5 + 8LL * v8 - (((_BYTE)v6 + 15) & 7) + v6 + 15);
    goto LABEL_10;
  }
  v9 = 0LL;
LABEL_10:
  v10 = *v9;
  if ( !v10 )
  {
LABEL_25:
    v16 = (CMergedDirtyRect *)DefaultHeap::Alloc(0x60uLL);
    v17 = v16;
    if ( !v16 || (memset_0(v16, 0, 0x60uLL), v18 = CMergedDirtyRect::CMergedDirtyRect(v17), (v10 = v18) == 0LL) )
    {
      LOBYTE(v2) = CVisual::PropagateFlags((__int64)this, 4u);
      return v2;
    }
    CVisual::SetAdditionalDirtyRects(this, v18);
  }
  (*(void (__fastcall **)(struct CMergedDirtyRect *, float *))(*(_QWORD *)v10 + 16LL))(v10, a2);
  Count = CPtrArrayBase::GetCount((CVisual *)((char *)this + 24));
  if ( Count )
  {
    v22 = 0LL;
    v23 = Count;
    do
    {
      v24 = CPtrArrayBase::operator[]((char *)this + 24, v22);
      if ( v24 != *((_QWORD *)this + 11) )
        (*(void (__fastcall **)(__int64, __int64, CVisual *))(*(_QWORD *)v24 + 72LL))(v24, 1LL, this);
      ++v22;
      --v23;
    }
    while ( v23 );
  }
  v2 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 160LL))(this);
  *((_BYTE *)this + 96) |= 8u;
  v12 = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 28);
  v13 = *((_QWORD *)this + 11);
  if ( (*((_BYTE *)this + 103) & 2) != 0 )
  {
    do
    {
      if ( !v13 )
        break;
      LOBYTE(v2) = *(_BYTE *)(v13 + 96);
      if ( (v2 & 0x80u) != 0LL )
        break;
      *(_BYTE *)(v13 + 96) = v2 | 0x80;
      v14 = *(_QWORD *)(v13 + 24);
      if ( (v14 & 2) != 0 )
        v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v14) = v14 & 1;
      if ( (_DWORD)v14 )
      {
        v19 = 0LL;
        v20 = (unsigned int)v14;
        do
        {
          v21 = CPtrArrayBase::operator[](v13 + 24, v19);
          if ( v21 != *(_QWORD *)(v13 + 88) )
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 72LL))(v21, 1LL, v13);
          ++v19;
          --v20;
        }
        while ( v20 );
      }
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 160LL))(v13);
      if ( v15 && v12 != v15 )
      {
        ++*(_DWORD *)(v15 + 24);
        v12 = v15;
      }
      v2 = v13;
      v13 = *(_QWORD *)(v13 + 88);
    }
    while ( (*(_BYTE *)(v2 + 103) & 2) != 0 );
  }
  return v2;
}
