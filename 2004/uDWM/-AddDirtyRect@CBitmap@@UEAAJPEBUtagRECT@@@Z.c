/*
 * XREFs of ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x1800C0360
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800C0C8C (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CBitmap::AddDirtyRect(CBitmap *this, const struct tagRECT *a2)
{
  int v4; // esi
  LONG right; // eax
  LONG bottom; // eax
  __int64 v7; // rdx
  LONG *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  char IsEmpty; // al
  __int64 v13; // rdx
  __int64 v14; // r8
  char v15; // r9
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rdx
  char v23; // r8
  unsigned int top; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  bool v29; // zf
  int v30; // eax

  v4 = 0;
  if ( a2 )
  {
    if ( a2->left < 0
      || a2->top < 0
      || (right = a2->right, right <= a2->left)
      || (unsigned int)right > *((_DWORD *)this + 40)
      || (bottom = a2->bottom, bottom <= a2->top)
      || (unsigned int)bottom > *((_DWORD *)this + 41) )
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x1C3u);
      goto LABEL_57;
    }
  }
  if ( *((_DWORD *)this + 14) )
  {
    if ( *((_BYTE *)this + 212) || *((_DWORD *)this + 52) != *((_DWORD *)this + 36) )
    {
      *((_DWORD *)this + 50) = 0;
      *((_BYTE *)this + 212) = 0;
    }
    if ( !a2 || a2->right - a2->left == *((_DWORD *)this + 40) && a2->bottom - a2->top == *((_DWORD *)this + 41) )
    {
      *((_DWORD *)this + 50) = 0;
      goto LABEL_57;
    }
    v7 = *((unsigned int *)this + 50);
    if ( (_DWORD)v7 )
    {
      if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(
                              a2,
                              v7,
                              *((_QWORD *)this + 24))
        || a2->left >= (unsigned int)*v8
        && a2->top >= (unsigned int)v8[1]
        && a2->right <= (unsigned int)v8[2]
        && a2->bottom <= (unsigned int)v8[3] )
      {
        goto LABEL_57;
      }
    }
    else
    {
      *((_DWORD *)this + 51) = *((_DWORD *)this + 36);
    }
    if ( (unsigned int)v7 < 5 )
    {
      v27 = *((_QWORD *)this + 24);
      if ( !v27 )
      {
        v27 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                80LL);
        *((_QWORD *)this + 24) = v27;
        if ( !v27 )
        {
          v4 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x205u);
          goto LABEL_57;
        }
        LODWORD(v7) = *((_DWORD *)this + 50);
      }
      *(struct tagRECT *)(v27 + 16LL * (unsigned int)v7) = *a2;
      ++*((_DWORD *)this + 50);
    }
    else
    {
      do
      {
        v9 = *((_QWORD *)this + 24);
        *((_DWORD *)this + 50) = v7 - 1;
        TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v9, v9, v9 + 16LL * (unsigned int)(v7 - 1));
        IsEmpty = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v11, v10, v11);
        if ( v15 )
        {
          if ( IsEmpty )
          {
            *(_QWORD *)(v13 + 8) = 0LL;
            *(_QWORD *)v13 = 0LL;
          }
          else
          {
            *(_OWORD *)v13 = *(_OWORD *)v14;
          }
        }
        else if ( !IsEmpty )
        {
          if ( *(_DWORD *)v14 < *(_DWORD *)v13 )
            *(_DWORD *)v13 = *(_DWORD *)v14;
          v16 = *(_DWORD *)(v14 + 4);
          if ( v16 < *(_DWORD *)(v13 + 4) )
            *(_DWORD *)(v13 + 4) = v16;
          v17 = *(_DWORD *)(v14 + 8);
          if ( v17 > *(_DWORD *)(v13 + 8) )
            *(_DWORD *)(v13 + 8) = v17;
          v18 = *(_DWORD *)(v14 + 12);
          if ( v18 > *(_DWORD *)(v13 + 12) )
            *(_DWORD *)(v13 + 12) = v18;
        }
        LODWORD(v7) = *((_DWORD *)this + 50);
      }
      while ( (unsigned int)v7 > 1 );
      LOBYTE(v19) = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(
                      *((_QWORD *)this + 24),
                      *((_QWORD *)this + 24),
                      v14);
      v21 = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2, v20, v19);
      if ( v23 )
      {
        if ( v21 )
        {
          *(_QWORD *)(v22 + 8) = 0LL;
          *(_QWORD *)v22 = 0LL;
        }
        else
        {
          *(struct tagRECT *)v22 = *a2;
        }
      }
      else if ( !v21 )
      {
        if ( a2->left < *(_DWORD *)v22 )
          *(_DWORD *)v22 = a2->left;
        top = a2->top;
        if ( top < *(_DWORD *)(v22 + 4) )
          *(_DWORD *)(v22 + 4) = top;
        v25 = a2->right;
        if ( v25 > *(_DWORD *)(v22 + 8) )
          *(_DWORD *)(v22 + 8) = v25;
        v26 = a2->bottom;
        if ( v26 > *(_DWORD *)(v22 + 12) )
          *(_DWORD *)(v22 + 12) = v26;
      }
    }
  }
LABEL_57:
  v28 = *((_DWORD *)this + 36);
  v29 = v28 == -1;
  v30 = v28 + 1;
  *((_DWORD *)this + 36) = v30;
  if ( v29 )
  {
    *((_DWORD *)this + 36) = 1;
    v30 = 1;
  }
  if ( v4 < 0 )
    *((_DWORD *)this + 50) = 0;
  else
    *((_DWORD *)this + 52) = v30;
  return (unsigned int)v4;
}
