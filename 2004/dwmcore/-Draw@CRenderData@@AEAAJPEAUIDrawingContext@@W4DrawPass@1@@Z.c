/*
 * XREFs of ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x180081270
 * Callers:
 *     ?GetBounds@CRenderData@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007F888 (-GetBounds@CRenderData@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008122C (-Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180081250 (-AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800574D0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180066514 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x180081160 (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV?$span@$$CBE$0?0@gsl@@@Z @ 0x180081AC8 (-DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV-$span@$$CBE$0-0@gsl@.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180081CEC (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x180082404 (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800830F8 (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800984F8 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7F90 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019E638 (-clear_region@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019E7A4 (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 */

__int64 __fastcall CRenderData::Draw(__int64 *a1, __int64 a2, int a3)
{
  __m128i v3; // rax
  __int64 v4; // r9
  __int64 *v5; // rdi
  __int64 **v6; // rax
  __int64 v7; // rcx
  struct CDrawListCache *v8; // rbx
  int v10; // r12d
  __int64 v11; // r14
  __m128i v12; // xmm6
  unsigned int *v13; // r15
  int v14; // esi
  _QWORD *v15; // rbx
  _QWORD *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  _BYTE *v19; // rbx
  _BYTE *v20; // rbx
  _BYTE *v21; // rbx
  Mesh::MeshGraph *v22; // rcx
  __int64 v23; // rcx
  void *v24; // rbx
  bool v25; // zf
  __int64 v26; // rcx
  CVisual *v28; // rsi
  __int64 v29; // r15
  int v30; // eax
  __int64 v31; // rcx
  int v32; // r8d
  __int64 v33; // r8
  bool v34; // sf
  int v35; // eax
  __int64 v36; // rcx
  unsigned int *v37; // rax
  __int64 **v38; // r8
  unsigned __int64 v39; // rcx
  __int64 v40; // r8
  int DrawListCacheForCommandRun; // eax
  int v42; // eax
  __int64 v43; // rcx
  unsigned int **TreeDataListHead; // rax
  HANDLE v45; // rax
  unsigned int *v46; // rcx
  unsigned __int32 v47; // eax
  __int64 v48; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v50; // rax
  HANDLE v51; // rax
  unsigned __int8 v52; // [rsp+40h] [rbp-C0h]
  char v53[3]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v54; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v55; // [rsp+48h] [rbp-B8h]
  struct CDrawListCache *v56; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v57; // [rsp+58h] [rbp-A8h] BYREF
  struct CTreeData *v58; // [rsp+60h] [rbp-A0h]
  __int64 v59; // [rsp+68h] [rbp-98h]
  void *v60; // [rsp+70h] [rbp-90h] BYREF
  CRenderData *v61; // [rsp+78h] [rbp-88h]
  unsigned int *v62; // [rsp+80h] [rbp-80h]
  __m128i v63; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v64; // [rsp+A0h] [rbp-60h]
  unsigned int *v65; // [rsp+A8h] [rbp-58h]
  __int64 v66; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v67; // [rsp+B8h] [rbp-48h]
  unsigned __int32 v68; // [rsp+C0h] [rbp-40h]
  __m128i v69; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v70[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v71; // [rsp+100h] [rbp+0h]
  _BYTE *v72; // [rsp+108h] [rbp+8h]
  _BYTE *v73; // [rsp+110h] [rbp+10h]
  int *v74; // [rsp+118h] [rbp+18h]
  _BYTE v75[32]; // [rsp+120h] [rbp+20h] BYREF
  int v76; // [rsp+140h] [rbp+40h] BYREF
  void *v77; // [rsp+148h] [rbp+48h]
  __int64 v78; // [rsp+150h] [rbp+50h]
  Mesh::MeshGraph *v79; // [rsp+158h] [rbp+58h]
  __int64 v80; // [rsp+160h] [rbp+60h]
  Mesh::MeshGraph *v81; // [rsp+168h] [rbp+68h]
  __int64 v82; // [rsp+178h] [rbp+78h]
  int v83; // [rsp+180h] [rbp+80h]
  char v84; // [rsp+194h] [rbp+94h]
  __int64 v85; // [rsp+198h] [rbp+98h]
  LPVOID v86; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE *v87; // [rsp+1A8h] [rbp+A8h]
  LPVOID *v88; // [rsp+1B0h] [rbp+B0h]
  _BYTE v89[960]; // [rsp+1C0h] [rbp+C0h] BYREF
  LPVOID v90; // [rsp+580h] [rbp+480h] BYREF
  _BYTE *v91; // [rsp+588h] [rbp+488h]
  int *v92; // [rsp+590h] [rbp+490h]
  _BYTE v93[960]; // [rsp+5A0h] [rbp+4A0h] BYREF
  int v94; // [rsp+960h] [rbp+860h] BYREF
  LPVOID lpMem; // [rsp+968h] [rbp+868h] BYREF
  _BYTE *v96; // [rsp+970h] [rbp+870h]
  unsigned int *v97; // [rsp+978h] [rbp+878h]
  _BYTE v98[60]; // [rsp+980h] [rbp+880h] BYREF
  unsigned int v99; // [rsp+9BCh] [rbp+8BCh] BYREF
  __int64 v100; // [rsp+9C0h] [rbp+8C0h]
  CDrawListEntry *v101; // [rsp+9D0h] [rbp+8D0h]
  __int16 v102; // [rsp+9D8h] [rbp+8D8h]
  char v103; // [rsp+9DAh] [rbp+8DAh]

  v3.m128i_i64[1] = a2;
  v61 = (CRenderData *)a1;
  v59 = v3.m128i_i64[1];
  v71 = 0LL;
  v72 = v75;
  LOBYTE(v4) = 0;
  v76 = 0;
  v73 = v75;
  v5 = a1 + 8;
  v6 = (__int64 **)a1[12];
  v74 = &v76;
  v86 = v89;
  v87 = v89;
  v88 = &v90;
  v90 = v93;
  v91 = v93;
  v92 = &v94;
  lpMem = v98;
  v96 = v98;
  v77 = 0LL;
  v7 = (__int64)&v99;
  v97 = &v99;
  v8 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v10 = 0;
  v81 = 0LL;
  v11 = 0LL;
  v80 = 0LL;
  v82 = 0LL;
  v83 = 0;
  v84 = 5;
  v85 = 0LL;
  v94 = 0;
  v100 = 0LL;
  v101 = 0LL;
  v102 = 0;
  v103 = 0;
  v58 = 0LL;
  v56 = 0LL;
  v52 = 0;
  memset(v70, 0, sizeof(v70));
  if ( v6 )
  {
    v7 = v5[1];
    if ( *(__int64 **)v7 != v5 )
      __fastfail(3u);
    *v6 = v5;
    v6[1] = (__int64 *)v7;
    *(_QWORD *)v7 = v6;
    v5[1] = (__int64)v6;
    v5[4] = 0LL;
  }
  v12 = 0LL;
  v63 = 0LL;
  v64 = v5;
  v62 = 0LL;
  v55 = 0;
  if ( a3 )
    goto LABEL_3;
  v11 = v3.m128i_i64[1] - 16;
  v28 = 0LL;
  if ( !v3.m128i_i64[1] )
    v11 = 0LL;
  if ( *(_BYTE *)(v11 + 5920) )
  {
    if ( *(_BYTE *)(v11 + 5921) )
      v28 = *(CVisual **)(v11 + 3304);
    else
      v28 = *(CVisual **)(*(_QWORD *)(v11 + 5928) + 56LL);
  }
  v29 = *(_QWORD *)(v11 + 5928);
  v58 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v29 + 200LL))(v29) )
  {
    v3.m128i_i64[1] = (__int64)v28 + 320;
  }
  else
  {
    TreeDataListHead = (unsigned int **)CVisual::GetTreeDataListHead(v28);
    if ( !TreeDataListHead || (v7 = (__int64)*TreeDataListHead, *TreeDataListHead == (unsigned int *)TreeDataListHead) )
    {
LABEL_115:
      v3.m128i_i64[1] = 0LL;
      goto LABEL_56;
    }
    while ( 1 )
    {
      v3.m128i_i64[1] = v7 - 288;
      if ( *(_QWORD *)(v7 + 32) == v29 )
        break;
      v7 = *(_QWORD *)v7;
      if ( (unsigned int **)v7 == TreeDataListHead )
        goto LABEL_115;
    }
  }
  v58 = (struct CTreeData *)v3.m128i_i64[1];
LABEL_56:
  if ( !v3.m128i_i64[1] )
  {
    v14 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003292412, 0xE0u, 0LL);
    goto LABEL_9;
  }
  LOBYTE(v4) = 0;
LABEL_3:
  v3.m128i_i64[0] = *v5;
  if ( v5 == (__int64 *)*v5 )
  {
    v13 = v67;
    v14 = 1;
    goto LABEL_5;
  }
  v3.m128i_i64[1] = *(unsigned int *)(v3.m128i_i64[0] + 20);
  v13 = (unsigned int *)(v3.m128i_i64[0] + 24);
  v62 = (unsigned int *)*v5;
  v38 = (__int64 **)v3.m128i_i64[0];
  v66 = v3.m128i_i64[0] + 24;
  v3.m128i_i32[0] = -2147467259;
  v68 = v3.m128i_u32[2];
  if ( v3.m128i_i64[1] )
  {
    if ( v3.m128i_i64[1] < 8uLL
      || (v39 = *v13, (unsigned int)v39 < 8)
      || (v39 & 3) != 0
      || (v40 = (unsigned int)v39, v39 > v3.m128i_i64[1]) )
    {
      v7 = v55;
      v3.m128i_i64[1] = (__int64)v60;
    }
    else
    {
      v3.m128i_i64[1] = (__int64)(v13 + 1);
      v7 = (unsigned int)(v39 - 4);
      v54 = v13[1];
      v3.m128i_i32[0] = 0;
      v13 = (unsigned int *)((char *)v13 + v40);
    }
    v14 = v3.m128i_i32[0];
  }
  else
  {
    v3.m128i_i32[0] = 1;
    v7 = 0LL;
    v14 = 1;
    v3.m128i_i64[1] = 0LL;
    if ( *v38 != v5 )
    {
      v14 = -2147467259;
      goto LABEL_5;
    }
  }
  if ( !v3.m128i_i32[0] )
  {
    v3.m128i_i64[0] = (int)v7;
    if ( (int)v7 < 0 || !v3.m128i_i64[1] && (_DWORD)v7 )
    {
      ((void (__fastcall *)(__int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(v7, v3.m128i_i64[1]);
      __debugbreak();
    }
    v63 = v3;
    v12 = _mm_load_si128(&v63);
  }
LABEL_5:
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v14, 0xE5u, 0LL);
    goto LABEL_9;
  }
  if ( v14 )
  {
LABEL_7:
    if ( v14 == 1 )
      v14 = 0;
    goto LABEL_9;
  }
  while ( 1 )
  {
    if ( !v8 && !a3 )
    {
      Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v56);
      DrawListCacheForCommandRun = CRenderData::GetDrawListCacheForCommandRun(
                                     v61,
                                     (const struct IDeviceTarget **)v11,
                                     v58,
                                     v55,
                                     &v56);
      v14 = DrawListCacheForCommandRun;
      if ( DrawListCacheForCommandRun < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, DrawListCacheForCommandRun, 0xF3u, 0LL);
        v8 = v56;
        goto LABEL_9;
      }
      v8 = v56;
      LOBYTE(v4) = 0;
      v52 = 0;
    }
    v53[0] = 0;
    if ( a3 )
      break;
    v69 = v12;
    v3.m128i_i32[0] = CRenderData::TryDrawCommandAsDrawList(
                        v61,
                        (struct CDrawingContext *)v11,
                        v10 != 0,
                        v54,
                        (__int64)&v69,
                        (__int64)v53);
    v14 = v3.m128i_i32[0];
    if ( v3.m128i_i32[0] < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v3.m128i_i32[0], 0x100u, 0LL);
      goto LABEL_9;
    }
    if ( !v53[0] )
    {
      LOBYTE(v4) = v52;
      break;
    }
    LOBYTE(v4) = 1;
    v52 = 1;
LABEL_68:
    v14 = -2147467259;
    v3.m128i_i64[0] = v66 + v68 - (_QWORD)v13;
    if ( v3.m128i_i64[0] )
    {
      if ( v3.m128i_i64[0] >= 8uLL )
      {
        v3.m128i_i64[1] = *v13;
        if ( v3.m128i_i32[2] >= 8u && (v3.m128i_i8[8] & 3) == 0 && v3.m128i_i64[1] <= (unsigned __int64)v3.m128i_i64[0] )
        {
          v3.m128i_i32[0] = v13[1];
          v7 = (__int64)(v13 + 1);
          v13 = (unsigned int *)((char *)v13 + v3.m128i_i64[1]);
          v54 = v3.m128i_i32[0];
          v60 = (void *)v7;
          v57 = v3.m128i_i32[2] - 4;
          v14 = 0;
        }
      }
    }
    else
    {
      v7 = (__int64)v62;
      v60 = 0LL;
      v57 = 0;
      v37 = *(unsigned int **)v62;
      v14 = 1;
      if ( *(__int64 **)v62 != v5 )
      {
        v46 = v37 + 6;
        v65 = *(unsigned int **)v62;
        v47 = v37[5];
        v66 = (__int64)v46;
        v67 = v46;
        v68 = v47;
        v3.m128i_i32[0] = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)&v66, &v54, &v60, &v57);
        v5 = v64;
        v14 = v3.m128i_i32[0];
        v13 = v67;
        v4 = v52;
        v62 = v65;
        if ( v3.m128i_i32[0] == 1 )
        {
          if ( *(__int64 **)v65 != v64 )
            v14 = -2147467259;
          goto LABEL_78;
        }
      }
    }
    v34 = v14 < 0;
    if ( !v14 )
    {
      if ( (v57 & 0x80000000) != 0 || !v60 && v57 )
      {
        ((void (__fastcall *)(__int64, __int64, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
          v7,
          v3.m128i_i64[1],
          v33,
          v4);
        __debugbreak();
      }
      v63.m128i_i64[0] = (int)v57;
      v63.m128i_i64[1] = (__int64)v60;
      v12 = _mm_load_si128(&v63);
LABEL_78:
      v34 = v14 < 0;
    }
    if ( v34 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v14, 0x146u, 0LL);
      goto LABEL_9;
    }
    ++v55;
    if ( v14 )
      goto LABEL_81;
  }
  if ( (_BYTE)v4 )
  {
    v42 = CRenderData::FlushDrawListCache(
            (CRenderData *)v7,
            (struct CDrawingContext *)v11,
            v8,
            (struct CDrawListEntryBuilder *)v70);
    v14 = v42;
    if ( v42 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x110u, 0LL);
      goto LABEL_9;
    }
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v56);
    v8 = v56;
    v52 = 0;
  }
  if ( v54 == 470 )
  {
    v3.m128i_i32[0] = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v59 + 104LL))(
                        v59,
                        *(_QWORD *)(*((_QWORD *)v61 + 16) + 8LL * *(unsigned int *)(v63.m128i_i64[1] + 4)));
    v14 = v3.m128i_i32[0];
    if ( v3.m128i_i32[0] < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v3.m128i_i32[0], 0x11Du, 0LL);
      goto LABEL_9;
    }
    ++v10;
  }
  else if ( v54 == 469 )
  {
    if ( !v10 )
    {
      v14 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003292412, 0x12Du, 0LL);
      goto LABEL_9;
    }
    v3.m128i_i32[0] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 96LL))(v59);
    v14 = v3.m128i_i32[0];
    if ( v3.m128i_i32[0] < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v3.m128i_i32[0], 0x127u, 0LL);
      goto LABEL_9;
    }
    --v10;
  }
  else
  {
    v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 112LL))(v59);
    v14 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x135u, 0LL);
      goto LABEL_9;
    }
    v69 = v12;
    v3.m128i_i32[0] = CRenderData::DrawCommandAsLegacy((_DWORD)v61, v59, v32, v54, (__int64)&v69);
    v14 = v3.m128i_i32[0];
    if ( v3.m128i_i32[0] < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v3.m128i_i32[0], 0x137u, 0LL);
      goto LABEL_9;
    }
  }
  if ( v14 != 1 )
  {
    v4 = v52;
    goto LABEL_68;
  }
LABEL_81:
  if ( !v52 )
    goto LABEL_7;
  v35 = CRenderData::FlushDrawListCache(
          (CRenderData *)v7,
          (struct CDrawingContext *)v11,
          v8,
          (struct CDrawListEntryBuilder *)v70);
  v14 = v35;
  if ( v35 >= 0 )
  {
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v56);
    v8 = v56;
    goto LABEL_7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x14Fu, 0LL);
LABEL_9:
  while ( v10 )
  {
    v3.m128i_i32[0] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 96LL))(v59);
    v14 = v3.m128i_i32[0];
    if ( v3.m128i_i32[0] < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v3.m128i_i32[0], 0x15Eu, 0LL);
    else
      --v10;
  }
  if ( v8 )
    CDrawListEntry::Release(v8);
  v15 = v72;
  v16 = v73;
  while ( v15 != v16 )
  {
    if ( *v15 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 8LL))(*v15);
      *v15 = 0LL;
    }
    ++v15;
  }
  v17 = (v73 - v72) >> 3;
  if ( v17 )
  {
    v3.m128i_i32[2] = (_DWORD)v73 - 8 * v17;
    v73 -= 8 * v17;
  }
  v18 = v71;
  v76 = 0;
  if ( v71 )
  {
    v71 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  }
  if ( v101 )
    CDrawListEntry::Release(v101);
  v19 = lpMem;
  if ( (v96 - (_BYTE *)lpMem) >> 1 )
  {
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::clear_region(
      &lpMem,
      0LL);
    v19 = lpMem;
  }
  lpMem = 0LL;
  if ( v19 != v98 && v19 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v19);
  }
  v20 = v90;
  if ( (v91 - (_BYTE *)v90) >> 4 )
  {
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
      &v90,
      0LL);
    v20 = v90;
  }
  v90 = 0LL;
  if ( v20 != v93 && v20 )
  {
    v50 = GetProcessHeap();
    HeapFree(v50, 0, v20);
  }
  v21 = v86;
  if ( (v87 - (_BYTE *)v86) >> 4 )
  {
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
      &v86,
      0LL);
    v21 = v86;
  }
  v86 = 0LL;
  if ( v21 != v89 && v21 )
  {
    v51 = GetProcessHeap();
    HeapFree(v51, 0, v21);
  }
  if ( v85 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v85 + 16LL))(v85);
  v22 = v79;
  v80 = 0LL;
  HIDWORD(v78) = 0;
  v82 = 0LL;
  v83 = 0;
  if ( v79 )
  {
    *((_QWORD *)v79 + 8) = 0LL;
    *((_DWORD *)v22 + 8) = 0;
    *((_DWORD *)v22 + 14) = 0;
    *((_QWORD *)v22 + 11) = 0LL;
    *((_QWORD *)v22 + 12) = 0LL;
    *((_DWORD *)v22 + 26) = 0;
    *((_DWORD *)v22 + 32) = 0;
    v22 = v79;
  }
  v84 = v84 & 4 | 1;
  if ( v81 )
  {
    Mesh::MeshGraph::`scalar deleting destructor'(v81, v3.m128i_u32[2]);
    v22 = v79;
  }
  if ( v22 )
    Mesh::MeshGraph::`scalar deleting destructor'(v22, v3.m128i_u32[2]);
  if ( v77 )
    operator delete(v77);
  v23 = (v73 - v72) >> 3;
  if ( v23 )
    v73 -= 8 * v23;
  v24 = v72;
  v25 = v72 == v75;
  v72 = 0LL;
  if ( v25 )
    v24 = 0LL;
  if ( v24 )
  {
    v45 = GetProcessHeap();
    HeapFree(v45, 0, v24);
  }
  v26 = v71;
  if ( v71 )
  {
    v71 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
  }
  return (unsigned int)v14;
}
