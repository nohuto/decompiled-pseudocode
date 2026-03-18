/*
 * XREFs of ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x1800CC3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180041AC4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180092DEC (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180092E3C (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CBitmap::AddDirtyRect(CBitmap *this, struct tagRECT *a2)
{
  int v4; // ebp
  LONG right; // eax
  LONG bottom; // eax
  int v7; // eax
  bool v8; // zf
  int v9; // eax
  unsigned int v11; // r10d
  char *v12; // rsi
  char *v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  _DWORD *v16; // r8
  bool IsEmpty; // al
  __int64 v18; // rdx
  __int64 v19; // r8
  char v20; // r9
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  bool v24; // al
  __int64 v25; // rdx
  char v26; // r8
  unsigned int top; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax

  v4 = 0;
  if ( a2 )
  {
    if ( a2->left < 0
      || a2->top < 0
      || (right = a2->right, right <= a2->left)
      || (unsigned int)right > *((_DWORD *)this + 36)
      || (bottom = a2->bottom, bottom <= a2->top)
      || (unsigned int)bottom > *((_DWORD *)this + 37) )
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x1CFu, 0LL);
      goto LABEL_9;
    }
  }
  if ( !*((_DWORD *)this + 14) )
    goto LABEL_9;
  if ( *((_BYTE *)this + 196) || *((_DWORD *)this + 48) != *((_DWORD *)this + 22) )
  {
    *((_DWORD *)this + 46) = 0;
    *((_BYTE *)this + 196) = 0;
  }
  if ( !a2 || a2->right - a2->left == *((_DWORD *)this + 36) && a2->bottom - a2->top == *((_DWORD *)this + 37) )
  {
    *((_DWORD *)this + 46) = 0;
  }
  else
  {
    v11 = *((_DWORD *)this + 46);
    if ( v11 )
    {
      if ( TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(
             *((_QWORD *)this + 22),
             (__int64)a2) )
      {
        goto LABEL_9;
      }
    }
    else
    {
      *((_DWORD *)this + 47) = *((_DWORD *)this + 22);
    }
    if ( v11 >= 5 )
    {
      do
      {
        v15 = (_DWORD *)*((_QWORD *)this + 22);
        *((_DWORD *)this + 46) = v11 - 1;
        TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v15);
        IsEmpty = TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v16);
        if ( v20 )
        {
          if ( IsEmpty )
          {
            *(_QWORD *)(v18 + 8) = 0LL;
            *(_QWORD *)v18 = 0LL;
          }
          else
          {
            *(_OWORD *)v18 = *(_OWORD *)v19;
          }
        }
        else if ( !IsEmpty )
        {
          if ( *(_DWORD *)v19 < *(_DWORD *)v18 )
            *(_DWORD *)v18 = *(_DWORD *)v19;
          v21 = *(_DWORD *)(v19 + 4);
          if ( v21 < *(_DWORD *)(v18 + 4) )
            *(_DWORD *)(v18 + 4) = v21;
          v22 = *(_DWORD *)(v19 + 8);
          if ( v22 > *(_DWORD *)(v18 + 8) )
            *(_DWORD *)(v18 + 8) = v22;
          v23 = *(_DWORD *)(v19 + 12);
          if ( v23 > *(_DWORD *)(v18 + 12) )
            *(_DWORD *)(v18 + 12) = v23;
        }
        v11 = *((_DWORD *)this + 46);
      }
      while ( v11 > 1 );
      TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(*((_DWORD **)this + 22));
      v24 = TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(a2);
      if ( v26 )
      {
        if ( v24 )
        {
          *(_QWORD *)(v25 + 8) = 0LL;
          *(_QWORD *)v25 = 0LL;
        }
        else
        {
          *(struct tagRECT *)v25 = *a2;
        }
      }
      else if ( !v24 )
      {
        if ( a2->left < *(_DWORD *)v25 )
          *(_DWORD *)v25 = a2->left;
        top = a2->top;
        if ( top < *(_DWORD *)(v25 + 4) )
          *(_DWORD *)(v25 + 4) = top;
        v28 = a2->right;
        if ( v28 > *(_DWORD *)(v25 + 8) )
          *(_DWORD *)(v25 + 8) = v28;
        v29 = a2->bottom;
        if ( v29 > *(_DWORD *)(v25 + 12) )
          *(_DWORD *)(v25 + 12) = v29;
      }
    }
    else
    {
      v12 = (char *)*((_QWORD *)this + 22);
      if ( !v12 )
      {
        v13 = (char *)DefaultHeap::Alloc(0x50uLL);
        v12 = v13;
        if ( v13 )
          `vector constructor iterator'(
            v13,
            16LL,
            5LL,
            (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
        else
          v12 = 0LL;
        *((_QWORD *)this + 22) = v12;
        if ( !v12 )
        {
          v4 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x20Eu, 0LL);
          goto LABEL_9;
        }
        v11 = *((_DWORD *)this + 46);
      }
      *(struct tagRECT *)&v12[16 * v11] = *a2;
      ++*((_DWORD *)this + 46);
    }
  }
LABEL_9:
  v7 = *((_DWORD *)this + 22);
  v8 = v7 == -1;
  v9 = v7 + 1;
  *((_DWORD *)this + 22) = v9;
  if ( v8 )
  {
    *((_DWORD *)this + 22) = 1;
    v9 = 1;
  }
  if ( v4 < 0 )
    *((_DWORD *)this + 46) = 0;
  else
    *((_DWORD *)this + 48) = v9;
  return (unsigned int)v4;
}
