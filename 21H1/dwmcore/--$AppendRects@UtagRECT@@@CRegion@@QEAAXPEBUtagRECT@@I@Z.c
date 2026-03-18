/*
 * XREFs of ??$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x180078100
 * Callers:
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180013828 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x1800773B8 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1800779AC (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIUnknown@@AEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1800E8C2C (-BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIUnknown@.c)
 *     ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x1801C7134 (-ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDA.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007802C (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800785F0 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180078DB0 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x180079394 (-Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180079A00 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x180178BB8 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CRegion::AppendRects<tagRECT>(
        const struct FastRegion::Internal::CRgnData **this,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v3; // r15d
  unsigned int v4; // r12d
  const struct FastRegion::Internal::CRgnData **v5; // r13
  unsigned int v6; // edi
  int *v7; // rax
  int v8; // r8d
  int v9; // r9d
  int v10; // r10d
  int v11; // r11d
  _DWORD *v12; // rbx
  int *v13; // rsi
  int v14; // edx
  const struct FastRegion::Internal::CRgnData *v15; // rbx
  int v16; // r8d
  int v17; // eax
  int v18; // r9d
  int v19; // r10d
  int v20; // eax
  FastRegion::Internal::CRgnData *v21; // rcx
  char *v22; // rdi
  int v23; // r14d
  int *v24; // rbx
  int v25; // r12d
  int v26; // eax
  int v27; // r14d
  int v28; // ecx
  int v29; // r14d
  __int64 v30; // r9
  int *v31; // rax
  signed __int64 v32; // rcx
  int v33; // r13d
  _DWORD *v34; // r11
  __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r9
  const struct FastRegion::Internal::CRgnData *v40; // rbx
  const struct FastRegion::Internal::CRgnData *v41; // rdi
  int *v42; // r14
  int v43; // esi
  int v44; // eax
  int v45; // ebx
  int v46; // eax
  FastRegion::Internal::CRgnData *v47; // rcx
  const struct FastRegion::Internal::CRgnData *v48; // rdi
  FastRegion::Internal::CRgnData *v49; // rax
  FastRegion::Internal::CRgnData *v50; // rax
  int v51; // ebx
  unsigned int v52; // [rsp+28h] [rbp-E0h]
  __int64 v54; // [rsp+30h] [rbp-D8h]
  void *lpMem; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v57[18]; // [rsp+50h] [rbp-B8h] BYREF
  void *v58; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v59[3]; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD v60[2]; // [rsp+ACh] [rbp-5Ch] BYREF
  _DWORD v61[13]; // [rsp+B4h] [rbp-54h] BYREF
  int v62; // [rsp+E8h] [rbp-20h] BYREF
  void *v63; // [rsp+F0h] [rbp-18h]
  _BYTE v64[16]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v65[240]; // [rsp+108h] [rbp+0h] BYREF
  void *retaddr; // [rsp+230h] [rbp+128h]

  v3 = 0;
  v54 = a2;
  v4 = a3;
  lpMem = v57;
  v5 = this;
  v57[0] = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v6 = v3 + 5;
      if ( v4 < v3 + 5 )
        v6 = v4;
      v7 = (int *)(a2 + 16LL * v3);
      v52 = v6;
      v8 = *v7;
      v9 = v7[2];
      v10 = v7[1];
      v11 = v7[3];
      if ( *v7 >= v9 || v10 >= v11 )
      {
        *(_DWORD *)lpMem = 0;
      }
      else
      {
        v12 = lpMem;
        *((_DWORD *)lpMem + 7) = v8;
        v12[8] = v9;
        v12[3] = v10;
        *v12 = 2;
        v12[1] = v8;
        v12[2] = v9;
        v12[5] = v11;
        v12[4] = 16;
        v12[6] = 16;
        a2 = v54;
      }
      if ( ++v3 < v6 )
      {
        v13 = (int *)(16LL * v3 + a2 + 8);
        while ( 1 )
        {
          v14 = *(v13 - 2);
          v15 = (const struct FastRegion::Internal::CRgnData *)v59;
          v16 = *v13;
          v17 = *(v13 - 1);
          v18 = v13[1];
          v58 = v59;
          if ( v14 >= v16 || v17 >= v18 )
          {
            v19 = 0;
          }
          else
          {
            v60[0] = v17;
            v59[1] = v14;
            v59[2] = v16;
            v61[2] = v14;
            v60[1] = (unsigned int)v65 - 76 - (unsigned int)v60;
            v19 = 2;
            v61[3] = v16;
            v61[0] = v18;
            v61[1] = (unsigned int)v65 - 76 - (unsigned int)v61 + 8;
          }
          v59[0] = v19;
          if ( v19 )
            break;
LABEL_33:
          ++v3;
          v13 += 4;
          if ( v3 >= v6 )
          {
            v4 = a3;
            v5 = this;
            goto LABEL_35;
          }
        }
        if ( *(_DWORD *)lpMem )
        {
          v20 = FastRegion::Internal::CRgnData::EstimateSizeUnion(
                  (const struct FastRegion::Internal::CRgnData *)lpMem,
                  (const struct FastRegion::Internal::CRgnData *)v59);
          v21 = (FastRegion::Internal::CRgnData *)v64;
          v63 = v64;
          v62 = v20;
          if ( (unsigned __int64)v20 > 0x100 )
          {
            v50 = (FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v20);
            v21 = v50;
            if ( !v50 )
            {
              FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v62);
              v23 = -2147024882;
LABEL_69:
              ModuleFailFastForHRESULT((unsigned int)v23, retaddr);
            }
            v15 = (const struct FastRegion::Internal::CRgnData *)v58;
            v63 = v50;
          }
          FastRegion::Internal::CRgnData::Union(v21, (const struct FastRegion::Internal::CRgnData *)lpMem, v15);
          v22 = (char *)v63;
          v23 = 0;
          if ( *(_DWORD *)v63 )
          {
            if ( v64 == v63 )
            {
              v24 = (int *)lpMem;
              v25 = (_DWORD)v63 + 12;
              v26 = v57[0];
              v27 = *((_DWORD *)v63 + 2 * *(_DWORD *)v63 + 2)
                  - *((_DWORD *)v63 + 4)
                  + 8 * *(_DWORD *)v63
                  - 12
                  + 8 * (*(_DWORD *)v63 - 1)
                  + 24;
              if ( v57 == lpMem )
                v26 = 60;
              if ( v26 < v27 )
              {
                v24 = (int *)DefaultHeap::Alloc(v27);
                if ( v24 )
                {
                  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&lpMem);
                  lpMem = v24;
                  v57[0] = v27;
                  goto LABEL_20;
                }
                v23 = -2147024882;
              }
              else
              {
LABEL_20:
                v28 = *(_DWORD *)v22;
                v29 = 0;
                *v24 = *(_DWORD *)v22;
                v24[1] = *((_DWORD *)v22 + 1);
                v24[2] = *((_DWORD *)v22 + 2);
                v30 = (__int64)&v22[*((int *)v22 + 4) + 12];
                v31 = &v24[2 * v28 + 3];
                v32 = ((char *)&v24[2 * v28] - &v22[*((int *)v22 + 4)]) >> 2;
                if ( *v24 > 0 )
                {
                  v33 = 4 * v32;
                  v34 = v24 + 3;
                  do
                  {
                    *v34 = *(_DWORD *)((char *)v34 + v22 - (char *)v24);
                    v34 += 2;
                    v35 = v29++;
                    v24[2 * v35 + 4] = v33
                                     + (_DWORD)v22
                                     + 8 * v35
                                     + *(_DWORD *)&v22[8 * v35 + 16]
                                     - ((_DWORD)v24
                                      + 8 * v35);
                  }
                  while ( v29 < *v24 );
                }
                v36 = (__int64)&v22[8 * *(_DWORD *)v22 + 4];
                v37 = (unsigned __int64)((int)v36 + *(_DWORD *)(v36 + 4) - *((_DWORD *)v22 + 4) - v25) >> 2;
                v38 = (int)v37;
                if ( (int)v37 > 0 )
                {
                  v39 = v30 - (_QWORD)v31;
                  do
                  {
                    *v31 = *(int *)((char *)v31 + v39);
                    ++v31;
                    --v38;
                  }
                  while ( v38 );
                }
                v23 = 0;
              }
            }
            else
            {
              v51 = v62;
              v63 = v64;
              v62 = 0;
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&lpMem);
              lpMem = v22;
              v57[0] = v51;
            }
          }
          else
          {
            *(_DWORD *)lpMem = 0;
          }
          if ( v64 != v63 )
            operator delete(v63);
          v6 = v52;
        }
        else
        {
          v23 = FastRegion::CRegion::Copy(
                  (FastRegion::Internal::CRgnData **)&lpMem,
                  (FastRegion::Internal::CRgnData **)&v58);
        }
        if ( v23 < 0 )
          goto LABEL_69;
        if ( v59 != v58 )
          operator delete(v58);
        goto LABEL_33;
      }
LABEL_35:
      v40 = (const struct FastRegion::Internal::CRgnData *)lpMem;
      if ( *(_DWORD *)lpMem )
        break;
LABEL_44:
      if ( v3 >= v4 )
      {
        if ( v57 != lpMem )
          operator delete(lpMem);
        return;
      }
      a2 = v54;
    }
    v41 = *v5;
    if ( *(_DWORD *)*v5 )
    {
      v46 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*v5, (const struct FastRegion::Internal::CRgnData *)lpMem);
      v47 = (FastRegion::Internal::CRgnData *)v64;
      v63 = v64;
      v62 = v46;
      if ( (unsigned __int64)v46 > 0x100 )
      {
        v49 = (FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v46);
        v47 = v49;
        if ( !v49 )
        {
          FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v62);
          v45 = -2147024882;
LABEL_71:
          ModuleFailFastForHRESULT((unsigned int)v45, retaddr);
        }
        v41 = *v5;
        v63 = v49;
      }
      FastRegion::Internal::CRgnData::Union(v47, v41, (const struct FastRegion::Internal::CRgnData *)lpMem);
      v45 = FastRegion::CRegion::SaveResult((FastRegion::CRegion *)v5, (struct FastRegion::Internal::CWorkBuffer *)&v62);
      if ( v64 != v63 )
        operator delete(v63);
      goto LABEL_43;
    }
    if ( v5 != (const struct FastRegion::Internal::CRgnData **)&lpMem )
    {
      v42 = (int *)(v5 + 1);
      v43 = *((_DWORD *)lpMem + 2 * *(_DWORD *)lpMem + 2)
          - *((_DWORD *)lpMem + 4)
          + 8 * *(_DWORD *)lpMem
          - 12
          + 8 * (*(_DWORD *)lpMem - 1)
          + 24;
      if ( v5 + 1 == (const struct FastRegion::Internal::CRgnData **)v41 )
        v44 = 60;
      else
        v44 = *v42;
      if ( v44 < v43 )
      {
        v48 = (const struct FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v43);
        if ( !v48 )
        {
          v45 = -2147024882;
LABEL_43:
          if ( v45 < 0 )
            goto LABEL_71;
          goto LABEL_44;
        }
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v5);
        *v5 = v48;
        *v42 = v43;
        v41 = *v5;
      }
      FastRegion::Internal::CRgnData::Copy(v41, v40);
    }
    v45 = 0;
    goto LABEL_43;
  }
}
