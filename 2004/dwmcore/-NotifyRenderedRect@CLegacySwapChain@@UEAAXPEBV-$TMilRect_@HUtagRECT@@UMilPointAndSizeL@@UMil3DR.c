/*
 * XREFs of ?NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800430D0
 * Callers:
 *     ?NotifyRenderedRect@CLegacySwapChain@@$4PPPPPPPM@A@EAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800F1BA0 (-NotifyRenderedRect@CLegacySwapChain@@$4PPPPPPPM@A@EAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSi.c)
 *     ?NotifyRenderedRect@CLegacySwapChain@@$4PPPPPPPM@BI@EAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800F2040 (-NotifyRenderedRect@CLegacySwapChain@@$4PPPPPPPM@BI@EAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndS.c)
 *     ?CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ @ 0x18024D62C (-CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ.c)
 * Callees:
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x1800400E4 (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180042230 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800429F0 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180043640 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18004380C (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180043D48 (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180044474 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180092D88 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x180175FA8 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CLegacySwapChain::NotifyRenderedRect(__int64 a1, __int64 a2)
{
  void (__fastcall ***v4)(_QWORD, __int64 *); // rcx
  int v5; // eax
  int v6; // r11d
  int v7; // esp
  unsigned int v8; // r9d
  int v9; // r10d
  const struct FastRegion::Internal::CRgnData **v10; // rbx
  const struct FastRegion::Internal::CRgnData *v11; // r8
  int *v12; // rsi
  signed int v13; // r14d
  int v14; // eax
  int v15; // ebx
  signed int v16; // edx
  char *v17; // r11
  char *v18; // r9
  int *v19; // r10
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r11
  int v24; // esi
  __int64 v25; // rbx
  const struct FastRegion::Internal::CRgnData *v26; // r14
  int v27; // eax
  FastRegion::Internal::CRgnData *v28; // rcx
  int v29; // ebx
  unsigned int v30; // ebx
  struct FastRegion::Internal::CRgnData *v31; // rsi
  const struct FastRegion::Internal::CRgnData **v32; // r15
  const struct FastRegion::Internal::CRgnData *v33; // r14
  int v34; // eax
  FastRegion::Internal::CRgnData *v35; // rcx
  int v36; // esi
  char *v37; // r10
  int *v38; // r12
  int v39; // r13d
  int v40; // eax
  int v41; // edx
  int v42; // r15d
  char *v43; // r9
  char *v44; // r8
  _DWORD *v45; // r11
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  signed __int64 v50; // r9
  int v51; // eax
  const struct FastRegion::Internal::CRgnData *v52; // r15
  FastRegion::Internal::CRgnData *v53; // rax
  const struct FastRegion::Internal::CRgnData *v54; // r14
  FastRegion::Internal::CRgnData *v55; // rax
  __int64 v56; // r8
  unsigned int v57; // r9d
  int *v58; // rax
  int v59; // r11d
  int v60; // ebx
  int v61; // esi
  int v62; // r14d
  _DWORD *v63; // rdx
  __int64 v64; // [rsp+20h] [rbp-E0h] BYREF
  struct FastRegion::Internal::CRgnData *v65; // [rsp+30h] [rbp-D0h] BYREF
  int v66; // [rsp+38h] [rbp-C8h] BYREF
  int v67; // [rsp+3Ch] [rbp-C4h]
  int v68; // [rsp+40h] [rbp-C0h]
  int v69; // [rsp+44h] [rbp-BCh] BYREF
  signed int v70; // [rsp+48h] [rbp-B8h]
  _DWORD v71[13]; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v72; // [rsp+80h] [rbp-80h] BYREF
  __int64 v73; // [rsp+88h] [rbp-78h]
  int v74; // [rsp+90h] [rbp-70h] BYREF
  void *lpMem; // [rsp+98h] [rbp-68h]
  _BYTE v76[256]; // [rsp+A0h] [rbp-60h] BYREF
  void *retaddr; // [rsp+1D8h] [rbp+D8h]

  v4 = (void (__fastcall ***)(_QWORD, __int64 *))(*(int *)(*(_QWORD *)(*(_QWORD *)(a1 - 272) + 8LL) + 16LL)
                                                + *(_QWORD *)(a1 - 272)
                                                + 8LL);
  (**v4)(v4, &v64);
  v5 = v64;
  v6 = HIDWORD(v64);
  v73 = v64;
  v72 = 0LL;
  if ( !a2 )
  {
    if ( (int)v64 <= 0 || SHIDWORD(v64) <= 0 )
    {
      **(_DWORD **)(a1 - 160) = 0;
    }
    else
    {
      v56 = *(_QWORD *)(a1 - 160);
      *(_DWORD *)(v56 + 32) = v64;
      *(_DWORD *)(v56 + 28) = 0;
      *(_DWORD *)(v56 + 12) = 0;
      *(_DWORD *)(v56 + 8) = v5;
      *(_QWORD *)v56 = 2LL;
      *(_DWORD *)(v56 + 20) = v6;
      *(_DWORD *)(v56 + 16) = 16;
      *(_DWORD *)(v56 + 24) = 16;
    }
    v57 = 0;
    for ( **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1 - 248) + 8LL * *(unsigned int *)(a1 - 224)) + 16LL) = 0;
          v57 < *(_DWORD *)(a1 - 176);
          ++v57 )
    {
      if ( v57 != *(_DWORD *)(a1 - 224) )
      {
        v58 = *(int **)(*(_QWORD *)(a1 - 248) + 8LL * v57);
        v59 = *v58;
        v60 = v58[2];
        v61 = v58[1];
        v62 = v58[3];
        if ( *v58 >= v60 || v61 >= v62 )
        {
          **((_DWORD **)v58 + 2) = 0;
        }
        else
        {
          v63 = (_DWORD *)*((_QWORD *)v58 + 2);
          v63[7] = v59;
          v63[8] = v60;
          v63[3] = v61;
          *v63 = 2;
          v63[1] = v59;
          v63[2] = v60;
          v63[5] = v62;
          v63[4] = 16;
          v63[6] = 16;
        }
      }
    }
    return;
  }
  if ( !(unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v72, a2) )
    return;
  v65 = (struct FastRegion::Internal::CRgnData *)&v66;
  if ( (int)v72 >= (int)v73 || SHIDWORD(v72) >= SHIDWORD(v73) )
  {
    v8 = v70;
    v9 = 0;
    v66 = 0;
  }
  else
  {
    v69 = HIDWORD(v72);
    v67 = v72;
    v71[2] = v72;
    v8 = v7 + 84 - (unsigned int)&v69;
    v68 = v73;
    v70 = v8;
    v71[0] = HIDWORD(v73);
    v71[3] = v73;
    v9 = 2;
    v71[1] = v7 + 84 - (unsigned int)v71 + 8;
    v66 = 2;
  }
  v10 = (const struct FastRegion::Internal::CRgnData **)(a1 - 160);
  if ( v9 )
  {
    v11 = *v10;
    if ( *(_DWORD *)*v10 )
    {
      v51 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*v10, (const struct FastRegion::Internal::CRgnData *)&v66);
      v74 = 0;
      lpMem = v76;
      v24 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v74, v51);
      if ( v24 < 0 )
      {
        FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v74);
      }
      else
      {
        FastRegion::Internal::CRgnData::Union((FastRegion::Internal::CRgnData *)lpMem, *v10, v65);
        v24 = FastRegion::CRegion::SaveResult(
                (FastRegion::CRegion *)(a1 - 160),
                (struct FastRegion::Internal::CWorkBuffer *)&v74);
        if ( v76 != lpMem )
          operator delete(lpMem);
      }
      goto LABEL_20;
    }
    if ( v10 != &v65 )
    {
      v12 = (int *)(v10 + 1);
      v13 = *(&v69 + 2 * v9 - 1) + 8 * v9 - v8 - (unsigned int)&v69 + (unsigned int)(&v69 + 2 * v9 - 2) + 12;
      if ( v10 + 1 == (const struct FastRegion::Internal::CRgnData **)v11 )
        v14 = 60;
      else
        v14 = *v12;
      if ( v14 < v13 )
      {
        v52 = (const struct FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v13);
        if ( !v52 )
        {
          v24 = -2147024882;
LABEL_20:
          if ( v24 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v24, retaddr);
          goto LABEL_21;
        }
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)(a1 - 160));
        v9 = v66;
        *v10 = v52;
        *v12 = v13;
        v11 = *v10;
      }
      *(_DWORD *)v11 = v9;
      *((_DWORD *)v11 + 1) = v67;
      v15 = 0;
      *((_DWORD *)v11 + 2) = v68;
      v16 = v70;
      v17 = (char *)&v69 + v70;
      v18 = (char *)v11 + 8 * v9 + 12;
      if ( v9 > 0 )
      {
        v19 = &v69;
        do
        {
          *(int *)((char *)v19 + v11 - (const struct FastRegion::Internal::CRgnData *)&v69 + 12) = *v19;
          v19 += 2;
          v20 = v15++;
          *((_DWORD *)v11 + 2 * v20 + 4) = 4 * ((v18 - v17) >> 2)
                                         + (unsigned int)(&v69 + 2 * v20)
                                         + *(&v69 + 2 * v20 + 1)
                                         - ((_DWORD)v11
                                          + 8 * v20
                                          + 12);
        }
        while ( v15 < *(_DWORD *)v11 );
        v16 = v70;
      }
      v21 = (unsigned __int64)(int)(*(&v69 + 2 * v66 - 1) - v16 - (unsigned int)&v69 + (unsigned int)(&v69 + 2 * v66 - 2)) >> 2;
      v22 = (int)v21;
      if ( (int)v21 > 0 )
      {
        v23 = v17 - v18;
        do
        {
          *(_DWORD *)v18 = *(_DWORD *)&v18[v23];
          v18 += 4;
          --v22;
        }
        while ( v22 );
      }
    }
    v24 = 0;
    goto LABEL_20;
  }
LABEL_21:
  v25 = *(_QWORD *)(*(_QWORD *)(a1 - 248) + 8LL * *(unsigned int *)(a1 - 224));
  if ( *(_DWORD *)v65 )
  {
    v26 = *(const struct FastRegion::Internal::CRgnData **)(v25 + 16);
    if ( *(_DWORD *)v26 )
    {
      v27 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(
              *(const struct FastRegion::Internal::CRgnData **)(v25 + 16),
              v65);
      v28 = (FastRegion::Internal::CRgnData *)v76;
      lpMem = v76;
      v74 = v27;
      if ( (unsigned __int64)v27 > 0x100 )
      {
        v53 = (FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v27);
        v28 = v53;
        if ( !v53 )
        {
          FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v74);
          v29 = -2147024882;
          goto LABEL_64;
        }
        v26 = *(const struct FastRegion::Internal::CRgnData **)(v25 + 16);
        lpMem = v53;
      }
      FastRegion::Internal::CRgnData::Subtract(v28, v26, v65);
      v29 = FastRegion::CRegion::SaveResult(
              (FastRegion::CRegion *)(v25 + 16),
              (struct FastRegion::Internal::CWorkBuffer *)&v74);
      if ( v76 != lpMem )
        operator delete(lpMem);
      if ( v29 >= 0 )
        goto LABEL_27;
LABEL_64:
      ModuleFailFastForHRESULT((unsigned int)v29, retaddr);
    }
  }
LABEL_27:
  v30 = 0;
  if ( *(_DWORD *)(a1 - 176) )
  {
    while ( 1 )
    {
      if ( v30 != *(_DWORD *)(a1 - 224) )
      {
        v31 = v65;
        v32 = (const struct FastRegion::Internal::CRgnData **)(*(_QWORD *)(*(_QWORD *)(a1 - 248) + 8LL * v30) + 16LL);
        if ( *(_DWORD *)v65 )
          break;
      }
LABEL_35:
      if ( ++v30 >= *(_DWORD *)(a1 - 176) )
        goto LABEL_36;
    }
    v33 = *v32;
    if ( *(_DWORD *)*v32 )
    {
      v34 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*v32, v65);
      v35 = (FastRegion::Internal::CRgnData *)v76;
      lpMem = v76;
      v74 = v34;
      if ( (unsigned __int64)v34 > 0x100 )
      {
        v55 = (FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v34);
        v35 = v55;
        if ( !v55 )
        {
          FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v74);
          v36 = -2147024882;
LABEL_71:
          ModuleFailFastForHRESULT((unsigned int)v36, retaddr);
        }
        v33 = *v32;
        lpMem = v55;
      }
      FastRegion::Internal::CRgnData::Union(v35, v33, v65);
      v36 = FastRegion::CRegion::SaveResult(
              (FastRegion::CRegion *)v32,
              (struct FastRegion::Internal::CWorkBuffer *)&v74);
      if ( v76 != lpMem )
        operator delete(lpMem);
      goto LABEL_34;
    }
    if ( v32 != &v65 )
    {
      v37 = (char *)v65 + 12;
      v38 = (int *)(*(_QWORD *)(*(_QWORD *)(a1 - 248) + 8LL * v30) + 24LL);
      v39 = *((_DWORD *)v65 + 2 * *(_DWORD *)v65 + 2)
          + 8 * *(_DWORD *)v65
          - *((_DWORD *)v65 + 4)
          - 12
          + 8 * (*(_DWORD *)v65 - 1)
          + 24;
      if ( v38 == (int *)v33 )
        v40 = 60;
      else
        v40 = *v38;
      if ( v40 < v39 )
      {
        v54 = (const struct FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v39);
        if ( !v54 )
        {
          v36 = -2147024882;
LABEL_34:
          if ( v36 < 0 )
            goto LABEL_71;
          goto LABEL_35;
        }
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v32);
        *v32 = v54;
        v37 = (char *)v31 + 12;
        *v38 = v39;
        v33 = *v32;
      }
      v41 = *(_DWORD *)v31;
      v42 = 0;
      *(_DWORD *)v33 = *(_DWORD *)v31;
      *((_DWORD *)v33 + 1) = *((_DWORD *)v31 + 1);
      *((_DWORD *)v33 + 2) = *((_DWORD *)v31 + 2);
      v43 = &v37[*((int *)v37 + 1)];
      v44 = (char *)v33 + 8 * v41 + 12;
      if ( v41 > 0 )
      {
        v45 = (_DWORD *)((char *)v33 + 12);
        do
        {
          *v45 = *(_DWORD *)((char *)v45 + v31 - v33);
          v45 += 2;
          v46 = v42++;
          *((_DWORD *)v33 + 2 * v46 + 4) = (_DWORD)v31
                                         + 8 * v46
                                         + 4 * ((v44 - v43) >> 2)
                                         + *((_DWORD *)v31 + 2 * v46 + 4)
                                         - ((_DWORD)v33
                                          + 8 * v46);
        }
        while ( v42 < *(_DWORD *)v33 );
        LODWORD(v37) = (_DWORD)v31 + 12;
      }
      v47 = (__int64)v31 + 8 * *(_DWORD *)v31 + 4;
      v48 = (unsigned __int64)((int)v47 + *(_DWORD *)(v47 + 4) - *((_DWORD *)v31 + 4) - (int)v37) >> 2;
      v49 = (int)v48;
      if ( (int)v48 > 0 )
      {
        v50 = v43 - v44;
        do
        {
          *(_DWORD *)v44 = *(_DWORD *)&v44[v50];
          v44 += 4;
          --v49;
        }
        while ( v49 );
      }
    }
    v36 = 0;
    goto LABEL_34;
  }
LABEL_36:
  if ( &v66 != (int *)v65 )
    operator delete(v65);
}
