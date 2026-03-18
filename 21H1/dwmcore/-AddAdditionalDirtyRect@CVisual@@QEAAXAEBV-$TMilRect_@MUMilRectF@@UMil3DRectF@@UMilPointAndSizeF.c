/*
 * XREFs of ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007AA50
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180026420 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18003CCB0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PreCompute@CVisualTree@@IEAAJXZ @ 0x180069908 (-PreCompute@CVisualTree@@IEAAJXZ.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z @ 0x18007A834 (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x18007C838 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18007CF48 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B3290 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ??0CMergedDirtyRect@@QEAA@XZ @ 0x1800C7DF4 (--0CMergedDirtyRect@@QEAA@XZ.c)
 *     ?SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedDirtyRect@@@Z @ 0x1800CA670 (-SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedDirtyRect@@@Z.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::AddAdditionalDirtyRect(CVisual *this, float *a2)
{
  _DWORD *v4; // r8
  __int64 v5; // rax
  _BYTE *v6; // rdx
  unsigned int i; // ecx
  struct CMergedDirtyRect **v8; // rsi
  struct CMergedDirtyRect *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rbx
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rbp
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  CMergedDirtyRect *v25; // rax
  CMergedDirtyRect *v26; // rsi
  struct CMergedDirtyRect *v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rbp
  __int64 v30; // rax

  if ( (*((_BYTE *)this + 88) & 4) == 0 && a2[2] > *a2 && a2[3] > a2[1] )
  {
    v4 = (_DWORD *)*((_QWORD *)this + 28);
    if ( (*v4 & 0x40000000) == 0 )
      goto LABEL_40;
    v5 = (unsigned int)v4[1];
    v6 = v4 + 2;
    for ( i = 0; i < (unsigned int)v5; ++v6 )
    {
      if ( *v6 == 2 )
        break;
      ++i;
    }
    v8 = i >= (unsigned int)v5
       ? 0LL
       : (struct CMergedDirtyRect **)((char *)v4 + 8LL * i - (((_BYTE)v5 + 15) & 7) + v5 + 15);
    v9 = *v8;
    if ( !v9 )
    {
LABEL_40:
      v25 = (CMergedDirtyRect *)DefaultHeap::Alloc(0x60uLL);
      v26 = v25;
      if ( !v25 || (memset_0(v25, 0, 0x60uLL), v27 = CMergedDirtyRect::CMergedDirtyRect(v26), (v9 = v27) == 0LL) )
      {
        CVisual::PropagateFlags(this, 4LL);
        return;
      }
      CVisual::SetAdditionalDirtyRects(this, v27);
    }
    (*(void (__fastcall **)(struct CMergedDirtyRect *, float *))(*(_QWORD *)v9 + 16LL))(v9, a2);
    v10 = *((_QWORD *)this + 3);
    if ( (v10 & 2) != 0 )
      v10 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v10) = v10 & 1;
    if ( (_DWORD)v10 )
    {
      v28 = 0LL;
      v29 = (unsigned int)v10;
      do
      {
        v30 = CPtrArrayBase::operator[]((char *)this + 24, v28);
        if ( v30 != *((_QWORD *)this + 10) )
          (*(void (__fastcall **)(__int64, __int64, CVisual *))(*(_QWORD *)v30 + 72LL))(v30, 1LL, this);
        ++v28;
        --v29;
      }
      while ( v29 );
    }
    v11 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 168LL))(this);
    *((_BYTE *)this + 88) |= 8u;
    v12 = v11;
    if ( v11 )
      ++*(_DWORD *)(v11 + 28);
    v13 = *((_QWORD *)this + 10);
    if ( (*((_BYTE *)this + 95) & 2) != 0 )
    {
      do
      {
        if ( !v13 )
          break;
        v14 = *(_BYTE *)(v13 + 88);
        if ( v14 < 0 )
          break;
        *(_BYTE *)(v13 + 88) = v14 | 0x80;
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 168LL))(v13);
        v16 = v15;
        if ( v15 )
        {
          if ( v15 != v12 )
            ++*(_DWORD *)(v15 + 24);
        }
        else
        {
          v16 = v12;
        }
        v17 = *(_QWORD *)(v13 + 24);
        if ( (v17 & 2) != 0 )
          v17 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v17) = v17 & 1;
        if ( (_DWORD)v17 )
        {
          v19 = 0LL;
          v20 = (unsigned int)v17;
          v21 = 16LL;
          do
          {
            v22 = *(_QWORD *)(v13 + 24);
            if ( (v22 & 2) != 0 )
              v23 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              v23 = *(_QWORD *)(v13 + 24) & 1LL;
            if ( v19 >= v23 )
            {
              v24 = 0LL;
            }
            else if ( v23 == 1 )
            {
              v24 = v22 & 0xFFFFFFFFFFFFFFFCuLL;
            }
            else
            {
              _mm_lfence();
              v24 = *(_QWORD *)((*(_QWORD *)(v13 + 24) & 0xFFFFFFFFFFFFFFFCuLL) + v21);
            }
            if ( v24 != *(_QWORD *)(v13 + 80) )
              (*(void (__fastcall **)(unsigned __int64, __int64, __int64))(*(_QWORD *)v24 + 72LL))(v24, 1LL, v13);
            ++v19;
            v21 += 8LL;
            --v20;
          }
          while ( v20 );
        }
        v18 = v13;
        v12 = v16;
        v13 = *(_QWORD *)(v13 + 80);
      }
      while ( (*(_BYTE *)(v18 + 95) & 2) != 0 );
    }
  }
}
