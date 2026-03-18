/*
 * XREFs of ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180082730
 * Callers:
 *     ?SetDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@@Z @ 0x18001883C (-SetDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV-$span@$$CBUtagRECT@@$0-0@gsl@@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180063748 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180069D54 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x180081B1C (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?AddTransientDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z @ 0x1801AF69C (-AddTransientDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x18008257C (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180082B80 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800832B8 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x1800837CC (-Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z.c)
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x180083EA8 (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180083EF4 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x1801903C8 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 */

__int64 __fastcall CRegion::TryAddRectangles(CRegion *this, const struct tagRECT *a2, unsigned int a3)
{
  int v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // r14d
  FastRegion::CRegion *v6; // r15
  __int64 v7; // r13
  const struct FastRegion::Internal::CRgnData *v8; // rbx
  const struct tagRECT *v9; // rax
  LONG right; // ecx
  LONG left; // edx
  LONG bottom; // r8d
  int v13; // r10d
  int v14; // r9d
  int v15; // eax
  FastRegion::Internal::CRgnData *v16; // rcx
  FastRegion::Internal::CRgnData *v17; // rdi
  _DWORD *v18; // rbx
  int v19; // r12d
  int v20; // eax
  int v21; // esi
  int v22; // ecx
  int v23; // r11d
  __int64 v24; // r9
  _DWORD *v25; // rax
  _DWORD *v26; // r10
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r9
  int v32; // eax
  signed int v33; // ebx
  int v34; // eax
  struct FastRegion::Internal::CRgnData *v36; // rdi
  FastRegion::Internal::CRgnData *v37; // rax
  int v38; // ebx
  const struct tagRECT *v41; // [rsp+38h] [rbp-D0h]
  struct FastRegion::Internal::CRgnData *v42; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v43[18]; // [rsp+50h] [rbp-B8h] BYREF
  void *v44; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v45[3]; // [rsp+A0h] [rbp-68h] BYREF
  LONG top; // [rsp+ACh] [rbp-5Ch] BYREF
  int v47; // [rsp+B0h] [rbp-58h]
  _DWORD v48[13]; // [rsp+B4h] [rbp-54h] BYREF
  int v49; // [rsp+E8h] [rbp-20h] BYREF
  FastRegion::Internal::CRgnData *v50; // [rsp+F0h] [rbp-18h]
  _BYTE v51[16]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v52[240]; // [rsp+108h] [rbp+0h] BYREF

  v3 = 0;
  v4 = a3;
  v5 = 0;
  v6 = this;
  v41 = a2;
  v42 = (struct FastRegion::Internal::CRgnData *)v43;
  v43[0] = 0;
  if ( !a3 )
    goto LABEL_44;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (const struct FastRegion::Internal::CRgnData *)v45;
    v9 = &a2[v7];
    v44 = v45;
    right = v9->right;
    left = v9->left;
    bottom = v9->bottom;
    if ( v9->left >= right || v9->top >= bottom )
    {
      v14 = v47;
      v13 = 0;
    }
    else
    {
      top = v9->top;
      v45[2] = right;
      v13 = 2;
      v48[3] = right;
      v45[1] = left;
      v14 = 16;
      v48[2] = left;
      v47 = 16;
      v48[0] = bottom;
      v48[1] = (unsigned int)v52 - 76 - (unsigned int)v48 + 8;
    }
    v45[0] = v13;
    if ( !v13 )
    {
      v3 = 0;
      goto LABEL_27;
    }
    if ( *(_DWORD *)v42 )
    {
      v15 = FastRegion::Internal::CRgnData::EstimateSizeUnion(v42, (const struct FastRegion::Internal::CRgnData *)v45);
      v16 = (FastRegion::Internal::CRgnData *)v51;
      v50 = (FastRegion::Internal::CRgnData *)v51;
      v49 = v15;
      if ( (unsigned __int64)v15 > 0x100 )
      {
        v37 = (FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v15);
        v16 = v37;
        if ( !v37 )
        {
          FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v49);
          v3 = -2147024882;
          goto LABEL_63;
        }
        v8 = (const struct FastRegion::Internal::CRgnData *)v44;
        v50 = v37;
      }
      FastRegion::Internal::CRgnData::Union(v16, v42, v8);
      v17 = v50;
      v3 = 0;
      if ( *(_DWORD *)v50 )
      {
        if ( v51 == (_BYTE *)v50 )
        {
          v18 = v42;
          v19 = (_DWORD)v50 + 12;
          v20 = v43[0];
          v21 = *((_DWORD *)v50 + 2 * *(_DWORD *)v50 + 2)
              - *((_DWORD *)v50 + 4)
              + 8 * *(_DWORD *)v50
              - 12
              + 8 * (*(_DWORD *)v50 - 1)
              + 24;
          if ( v43 == (_DWORD *)v42 )
            v20 = 60;
          if ( v20 >= v21 )
            goto LABEL_14;
          v18 = DefaultHeap::Alloc(v21);
          if ( v18 )
          {
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v42);
            v42 = (struct FastRegion::Internal::CRgnData *)v18;
            v43[0] = v21;
LABEL_14:
            v22 = *(_DWORD *)v17;
            v23 = 0;
            *v18 = *(_DWORD *)v17;
            v18[1] = *((_DWORD *)v17 + 1);
            v18[2] = *((_DWORD *)v17 + 2);
            v24 = (__int64)v17 + *((int *)v17 + 4) + 12;
            v25 = &v18[2 * v22 + 3];
            if ( (int)*v18 > 0 )
            {
              v26 = v18 + 3;
              do
              {
                *v26 = *(_DWORD *)((char *)v26 + v17 - (FastRegion::Internal::CRgnData *)v18);
                v26 += 2;
                v27 = v23++;
                v18[2 * v27 + 4] = 4 * (((__int64)v25 - v24) >> 2)
                                 + (_DWORD)v17
                                 + 8 * v27
                                 + *((_DWORD *)v17 + 2 * v27 + 4)
                                 - ((_DWORD)v18
                                  + 8 * v27);
              }
              while ( v23 < *v18 );
              v6 = this;
            }
            v28 = (__int64)v17 + 8 * *(_DWORD *)v17 + 4;
            v29 = (unsigned __int64)((int)v28 + *(_DWORD *)(v28 + 4) - *((_DWORD *)v17 + 4) - v19) >> 2;
            v30 = (int)v29;
            if ( (int)v29 > 0 )
            {
              v31 = v24 - (_QWORD)v25;
              do
              {
                *v25 = *(_DWORD *)((char *)v25 + v31);
                ++v25;
                --v30;
              }
              while ( v30 );
            }
            v3 = 0;
            goto LABEL_22;
          }
          v3 = -2147024882;
        }
        else
        {
          v38 = v49;
          v50 = (FastRegion::Internal::CRgnData *)v51;
          v49 = 0;
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v42);
          v42 = v17;
          v43[0] = v38;
        }
      }
      else
      {
        *(_DWORD *)v42 = 0;
      }
LABEL_22:
      if ( v51 != (_BYTE *)v50 )
        DefaultHeap::Free(v50);
      goto LABEL_24;
    }
    v32 = v43[0];
    v33 = (unsigned int)(&top + 2 * v13 - 2) + *(&top + 2 * v13 - 1) + 8 * v13 - v14 - ((unsigned int)v52 - 92) + 12;
    if ( v43 == (_DWORD *)v42 )
      v32 = 60;
    if ( v32 >= v33 )
      goto LABEL_36;
    v36 = (struct FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v33);
    if ( v36 )
    {
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v42);
      v42 = v36;
      v4 = a3;
      v43[0] = v33;
LABEL_36:
      FastRegion::Internal::CRgnData::Copy(v42, (const struct FastRegion::Internal::CRgnData *)v45);
      v3 = 0;
      goto LABEL_25;
    }
    v3 = -2147024882;
LABEL_24:
    v4 = a3;
LABEL_25:
    if ( v3 < 0 )
      goto LABEL_63;
    v8 = (const struct FastRegion::Internal::CRgnData *)v44;
LABEL_27:
    if ( v5 == 5 * (v5 / 5) || v5 == v4 - 1 )
      break;
LABEL_29:
    if ( v45 != (_DWORD *)v8 )
      DefaultHeap::Free(v8);
    ++v5;
    ++v7;
    if ( v5 >= v4 )
      goto LABEL_44;
    a2 = v41;
  }
  if ( !*(_DWORD *)v42 )
  {
    v3 = 0;
    goto LABEL_43;
  }
  if ( !**(_DWORD **)v6 )
  {
    v3 = FastRegion::CRegion::Copy(v6, (const struct CRegion *)&v42);
LABEL_42:
    if ( v3 < 0 )
      goto LABEL_63;
LABEL_43:
    *(_DWORD *)v42 = 0;
    v8 = (const struct FastRegion::Internal::CRgnData *)v44;
    goto LABEL_29;
  }
  v34 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*(const struct FastRegion::Internal::CRgnData **)v6, v42);
  v49 = 0;
  v50 = (FastRegion::Internal::CRgnData *)v51;
  v3 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v49, v34);
  if ( v3 >= 0 )
  {
    FastRegion::Internal::CRgnData::Union(v50, *(const struct FastRegion::Internal::CRgnData **)v6, v42);
    v3 = FastRegion::CRegion::SaveResult((FastRegion::CRegion **)v6, (struct FastRegion::Internal::CWorkBuffer *)&v49);
    if ( v51 != (_BYTE *)v50 )
      DefaultHeap::Free(v50);
    goto LABEL_42;
  }
  FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v49);
LABEL_63:
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v44);
LABEL_44:
  if ( v43 != (_DWORD *)v42 )
    DefaultHeap::Free(v42);
  return (unsigned int)v3;
}
