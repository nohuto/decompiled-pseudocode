/*
 * XREFs of ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z @ 0x18007A834
 * Callers:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180077A6C (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 * Callees:
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180029AC8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007AA50 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007ACF4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x18007AD94 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18007CF48 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18008AA6C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

void __fastcall CWindowNode::NotifyDirtySurface(
        CWindowNode *this,
        FastRegion::Internal::CRgnData **a2,
        __int64 a3,
        char a4)
{
  _DWORD *v4; // r11
  int v7; // edx
  int v8; // ecx
  int v9; // r12d
  int v10; // r13d
  bool v11; // zf
  __int64 v12; // r8
  char v13; // r10
  char *v14; // r11
  char *v15; // rdx
  __int64 v16; // rsi
  int v17; // edi
  _DWORD *v18; // r14
  _DWORD *v19; // r15
  __int64 v20; // rcx
  __int64 i; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  char *v25; // [rsp+38h] [rbp-A1h]
  __int64 v26; // [rsp+40h] [rbp-99h] BYREF
  char v27[8]; // [rsp+48h] [rbp-91h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-89h]
  _DWORD *v29; // [rsp+58h] [rbp-81h]
  char *v30; // [rsp+60h] [rbp-79h]
  int v31; // [rsp+68h] [rbp-71h]
  int v32; // [rsp+6Ch] [rbp-6Dh]
  __int128 v33; // [rsp+78h] [rbp-61h] BYREF
  _DWORD v34[10]; // [rsp+88h] [rbp-51h] BYREF
  char v35[16]; // [rsp+B0h] [rbp-29h] BYREF
  __int64 *v36; // [rsp+C0h] [rbp-19h]
  __int64 v37; // [rsp+C8h] [rbp-11h]
  __int128 *v38; // [rsp+D0h] [rbp-9h]
  __int64 v39; // [rsp+D8h] [rbp-1h]
  char *v40; // [rsp+E0h] [rbp+7h]
  __int64 v41; // [rsp+E8h] [rbp+Fh]

  v34[0] = 0;
  v4 = (_DWORD *)((char *)this + 688);
  v34[1] = 0;
  v7 = *((_DWORD *)this + 160);
  v8 = *((_DWORD *)this + 161);
  v9 = v7 - *v4;
  v10 = v8 - *((_DWORD *)this + 173);
  v34[2] = *((_DWORD *)this + 162) - v7;
  v11 = *((_BYTE *)this + 914) == 0;
  v34[3] = *((_DWORD *)this + 163) - v8;
  if ( !v11 )
    *((_BYTE *)this + 915) = 0;
  FastRegion::Internal::CRgnData::BeginIterator(*a2, (struct FastRegion::CRegion::Iterator *)v27);
  v15 = v30;
  LODWORD(v16) = v32;
  v17 = v31;
  v18 = v29;
  v25 = v30;
  while ( (unsigned __int64)v18 < v28 )
  {
    v19 = v18 + 2;
    v33 = 0LL;
    DWORD1(v33) = *v18;
    HIDWORD(v33) = v18[2];
    v20 = 2 * v17;
    LODWORD(v33) = *(_DWORD *)&v15[4 * v20];
    DWORD2(v33) = *(_DWORD *)&v15[4 * v20 + 4];
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v26 = *((_QWORD *)this + 77);
      v37 = 8LL;
      v36 = &v26;
      v39 = 16LL;
      v38 = &v33;
      v40 = v14;
      v41 = 16LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DWMUPDATEWINDOW,
        v12,
        4LL,
        v35);
      v13 = a4;
    }
    if ( !*((_BYTE *)this + 914) && (!*((_BYTE *)this + 913) || !v13) )
    {
      if ( TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v33, v34) )
      {
        LODWORD(v33) = v9 + v33;
        DWORD1(v33) += v10;
        DWORD2(v33) += v9;
        HIDWORD(v33) += v10;
        for ( i = 0LL; i < 4; ++i )
          *(float *)&v34[i + 4] = (float)(int)v34[i - 4];
        CVisual::AddAdditionalDirtyRect(this);
      }
    }
    v13 = a4;
    v14 = (char *)this + 688;
    v15 = v25;
    if ( ++v17 >= (int)v16 )
    {
      while ( 1 )
      {
        v18 = v19;
        v22 = (int)v19[3];
        v15 = (char *)v19 + (int)v19[1];
        v19 += 2;
        v25 = v15;
        v16 = ((__int64)v19 + v22 - (__int64)v15) >> 3;
        if ( (_DWORD)v16 )
          break;
        if ( (unsigned __int64)v18 >= v28 )
          goto LABEL_16;
      }
      v17 = 0;
LABEL_16:
      v14 = (char *)this + 688;
    }
  }
  if ( *((_BYTE *)this + 914) )
  {
    v23 = 8LL;
    goto LABEL_24;
  }
  if ( *((_BYTE *)this + 913) && v13 )
  {
    *((_BYTE *)this + 912) = 0;
    v23 = 5LL;
LABEL_24:
    CVisual::PropagateFlags(this, v23);
  }
  CWindowNode::ProcessReadyGdiSpriteBitmaps(this);
}
