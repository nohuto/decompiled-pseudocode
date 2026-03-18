/*
 * XREFs of ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180047DD4
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180048ABC (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180053160 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180095B40 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800C7F80 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800284CC (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x1800765BC (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180077E4C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800785F0 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180078DB0 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180079A00 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x180178BB8 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CRegion::AppendRects<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>>(
        const struct FastRegion::Internal::CRgnData **this,
        __int64 a2,
        unsigned int a3)
{
  _DWORD *v3; // rbx
  unsigned int v4; // edi
  unsigned int v5; // r15d
  unsigned int v7; // esi
  int *v8; // rax
  int v9; // r10d
  int v10; // r11d
  int v11; // r8d
  int v12; // r9d
  const struct FastRegion::Internal::CRgnData *v13; // r8
  int v14; // r13d
  int *v15; // r12
  int v16; // esi
  int v17; // eax
  int v18; // edx
  int v19; // r15d
  __int64 v20; // r10
  _DWORD *v21; // r9
  _DWORD *v22; // rsi
  int v23; // r12d
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r10
  int v29; // esi
  __int64 v30; // rbx
  int v31; // eax
  const struct FastRegion::Internal::CRgnData *v32; // r15
  int v33; // eax
  __int64 v35; // [rsp+30h] [rbp-D8h]
  struct tagRECT v36; // [rsp+38h] [rbp-D0h] BYREF
  void *lpMem; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v38[18]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v39[80]; // [rsp+98h] [rbp-70h] BYREF
  int v40; // [rsp+E8h] [rbp-20h] BYREF
  FastRegion::Internal::CRgnData *v41; // [rsp+F0h] [rbp-18h]
  _BYTE v42[256]; // [rsp+F8h] [rbp-10h] BYREF
  void *retaddr; // [rsp+230h] [rbp+128h]

  v38[0] = 0;
  v3 = v38;
  v4 = 0;
  v35 = a2;
  v5 = a3;
  lpMem = v38;
  if ( a3 )
  {
    while ( 1 )
    {
      v7 = v4 + 5;
      if ( v5 < v4 + 5 )
        v7 = v5;
      v8 = (int *)(a2 + 16LL * v4);
      v9 = v8[1];
      v10 = v8[3];
      v11 = *v8;
      v12 = v8[2];
      if ( v9 >= v10 || v11 >= v12 )
      {
        *v3 = 0;
      }
      else
      {
        *v3 = 2;
        v3[7] = v11;
        v3[8] = v12;
        v3[1] = v11;
        v3[4] = 16;
        v3[2] = v12;
        v3[3] = v9;
        v3[6] = 16;
        a2 = v35;
        v3[5] = v10;
      }
      if ( ++v4 < v7 )
      {
        v30 = 16LL * v4 + a2 + 8;
        do
        {
          v36 = *(struct tagRECT *)(v30 - 8);
          FastRegion::CRegion::CRegion((FastRegion::CRegion *)v39, &v36);
          v31 = FastRegion::CRegion::Union((FastRegion::CRegion *)&lpMem, (const struct CRegion *)v39);
          if ( v31 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v31, retaddr);
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v39);
          ++v4;
          v30 += 16LL;
        }
        while ( v4 < v7 );
      }
      v3 = lpMem;
      if ( *(_DWORD *)lpMem )
        break;
LABEL_24:
      if ( v4 >= v5 )
      {
        if ( v38 != v3 )
          operator delete(v3);
        return;
      }
      a2 = v35;
    }
    v13 = *this;
    if ( *(_DWORD *)*this )
    {
      v33 = FastRegion::Internal::CRgnData::EstimateSizeUnion(
              *this,
              (const struct FastRegion::Internal::CRgnData *)lpMem);
      v40 = 0;
      v41 = (FastRegion::Internal::CRgnData *)v42;
      v29 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v40, v33);
      if ( v29 >= 0 )
      {
        FastRegion::Internal::CRgnData::Union(v41, *this, (const struct FastRegion::Internal::CRgnData *)lpMem);
        v29 = FastRegion::CRegion::SaveResult(
                (FastRegion::CRegion *)this,
                (struct FastRegion::Internal::CWorkBuffer *)&v40);
        if ( v42 != (_BYTE *)v41 )
          operator delete(v41);
      }
      else
      {
        FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v40);
      }
      v3 = lpMem;
      goto LABEL_23;
    }
    if ( this != (const struct FastRegion::Internal::CRgnData **)&lpMem )
    {
      v14 = (_DWORD)lpMem + 12;
      v15 = (int *)(this + 1);
      v16 = *((_DWORD *)lpMem + 2 * *(_DWORD *)lpMem + 2)
          + 8 * *(_DWORD *)lpMem
          - *((_DWORD *)lpMem + 4)
          - 12
          + 8 * (*(_DWORD *)lpMem - 1)
          + 24;
      v17 = 60;
      if ( this + 1 != (const struct FastRegion::Internal::CRgnData **)v13 )
        v17 = *v15;
      if ( v17 < v16 )
      {
        v32 = (const struct FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v16);
        if ( !v32 )
        {
          v3 = lpMem;
          v29 = -2147024882;
          goto LABEL_22;
        }
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
        *this = v32;
        *v15 = v16;
        v13 = *this;
      }
      v18 = *v3;
      v19 = 0;
      *(_DWORD *)v13 = *v3;
      *((_DWORD *)v13 + 1) = v3[1];
      *((_DWORD *)v13 + 2) = v3[2];
      v20 = (__int64)v3 + v3[4] + 12;
      v21 = (_DWORD *)((char *)v13 + 8 * v18 + 12);
      if ( v18 > 0 )
      {
        v22 = (_DWORD *)((char *)v13 + 12);
        v23 = 4
            * (((const struct FastRegion::Internal::CRgnData *)((char *)v13 + 8 * v18)
              - (const struct FastRegion::Internal::CRgnData *)((char *)v3 + (int)v3[4])) >> 2);
        do
        {
          *v22 = *(_DWORD *)((char *)v22 + (char *)v3 - (char *)v13);
          v22 += 2;
          v24 = v19++;
          *((_DWORD *)v13 + 2 * v24 + 4) = (_DWORD)v3 + 8 * v24 + v23 + v3[2 * v24 + 4] - ((_DWORD)v13 + 8 * v24);
        }
        while ( v19 < *(_DWORD *)v13 );
      }
      v25 = (__int64)&v3[2 * *v3 + 1];
      v26 = (unsigned __int64)((int)v25 + *(_DWORD *)(v25 + 4) - v3[4] - v14) >> 2;
      v27 = (int)v26;
      if ( (int)v26 > 0 )
      {
        v28 = v20 - (_QWORD)v21;
        do
        {
          *v21 = *(_DWORD *)((char *)v21 + v28);
          ++v21;
          --v27;
        }
        while ( v27 );
      }
      v3 = lpMem;
    }
    v29 = 0;
LABEL_22:
    v5 = a3;
LABEL_23:
    if ( v29 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v29, retaddr);
    goto LABEL_24;
  }
}
