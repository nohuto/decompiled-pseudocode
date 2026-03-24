/*
 * XREFs of ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x180068DB0
 * Callers:
 *     ?Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180068D68 (-Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180068D8C (-AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetBounds@CRenderData@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006B328 (-GetBounds@CRenderData@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 * Callees:
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x180037FD8 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x18004F4EC (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800520D0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800683E0 (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x180068ADC (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV?$span@$$CBE$0?0@gsl@@@Z @ 0x180069608 (-DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV-$span@$$CBE$0-0@gsl@.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18006982C (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x180069E34 (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007A590 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019D388 (-clear_region@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019D4F4 (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 */

__int64 __fastcall CRenderData::Draw(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  __int64 *v4; // rdi
  __int64 **v5; // rax
  __int64 v6; // rcx
  struct CDrawListCache *v7; // rbx
  int v9; // r12d
  __int64 v10; // r14
  __m128i v11; // xmm6
  __m128i v12; // rax
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
  struct CTreeData *v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  int v33; // r8d
  int v34; // eax
  unsigned __int64 v35; // rdx
  __int64 v36; // r8
  unsigned __int64 v37; // rax
  unsigned int v38; // eax
  bool v39; // sf
  int v40; // eax
  __int64 v41; // rcx
  unsigned int *v42; // rax
  __int64 **v43; // r8
  unsigned __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // eax
  int DrawListCacheForCommandRun; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  __int64 v51; // rcx
  unsigned int **TreeDataListHead; // rax
  HANDLE v53; // rax
  unsigned int *v54; // rcx
  unsigned __int32 v55; // eax
  int NextItemSafe; // eax
  int v57; // eax
  __int64 v58; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v60; // rax
  HANDLE v61; // rax
  unsigned __int8 v62; // [rsp+40h] [rbp-C0h]
  char v63[3]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v64; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v65; // [rsp+48h] [rbp-B8h]
  struct CDrawListCache *v66; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v67; // [rsp+58h] [rbp-A8h] BYREF
  struct CTreeData *v68; // [rsp+60h] [rbp-A0h]
  __int64 v69; // [rsp+68h] [rbp-98h]
  void *v70; // [rsp+70h] [rbp-90h] BYREF
  CRenderData *v71; // [rsp+78h] [rbp-88h]
  unsigned int *v72; // [rsp+80h] [rbp-80h]
  __m128i v73; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v74; // [rsp+A0h] [rbp-60h]
  unsigned int *v75; // [rsp+A8h] [rbp-58h]
  __int64 v76; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v77; // [rsp+B8h] [rbp-48h]
  unsigned __int32 v78; // [rsp+C0h] [rbp-40h]
  __m128i v79; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v80[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v81; // [rsp+100h] [rbp+0h]
  _BYTE *v82; // [rsp+108h] [rbp+8h]
  _BYTE *v83; // [rsp+110h] [rbp+10h]
  int *v84; // [rsp+118h] [rbp+18h]
  _BYTE v85[32]; // [rsp+120h] [rbp+20h] BYREF
  int v86; // [rsp+140h] [rbp+40h] BYREF
  void *v87; // [rsp+148h] [rbp+48h]
  __int64 v88; // [rsp+150h] [rbp+50h]
  Mesh::MeshGraph *v89; // [rsp+158h] [rbp+58h]
  __int64 v90; // [rsp+160h] [rbp+60h]
  Mesh::MeshGraph *v91; // [rsp+168h] [rbp+68h]
  __int64 v92; // [rsp+178h] [rbp+78h]
  int v93; // [rsp+180h] [rbp+80h]
  char v94; // [rsp+194h] [rbp+94h]
  __int64 v95; // [rsp+198h] [rbp+98h]
  LPVOID v96; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE *v97; // [rsp+1A8h] [rbp+A8h]
  LPVOID *v98; // [rsp+1B0h] [rbp+B0h]
  _BYTE v99[960]; // [rsp+1C0h] [rbp+C0h] BYREF
  LPVOID v100; // [rsp+580h] [rbp+480h] BYREF
  _BYTE *v101; // [rsp+588h] [rbp+488h]
  int *v102; // [rsp+590h] [rbp+490h]
  _BYTE v103[960]; // [rsp+5A0h] [rbp+4A0h] BYREF
  int v104; // [rsp+960h] [rbp+860h] BYREF
  LPVOID lpMem; // [rsp+968h] [rbp+868h] BYREF
  _BYTE *v106; // [rsp+970h] [rbp+870h]
  unsigned int *v107; // [rsp+978h] [rbp+878h]
  _BYTE v108[60]; // [rsp+980h] [rbp+880h] BYREF
  unsigned int v109; // [rsp+9BCh] [rbp+8BCh] BYREF
  __int64 v110; // [rsp+9C0h] [rbp+8C0h]
  CDrawListEntry *v111; // [rsp+9D0h] [rbp+8D0h]
  __int16 v112; // [rsp+9D8h] [rbp+8D8h]
  char v113; // [rsp+9DAh] [rbp+8DAh]

  v71 = (CRenderData *)a1;
  v69 = a2;
  v81 = 0LL;
  v82 = v85;
  LOBYTE(v3) = 0;
  v86 = 0;
  v83 = v85;
  v4 = a1 + 8;
  v5 = (__int64 **)a1[12];
  v84 = &v86;
  v96 = v99;
  v97 = v99;
  v98 = &v100;
  v100 = v103;
  v101 = v103;
  v102 = &v104;
  lpMem = v108;
  v106 = v108;
  v87 = 0LL;
  v6 = (__int64)&v109;
  v107 = &v109;
  v7 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v9 = 0;
  v91 = 0LL;
  v10 = 0LL;
  v90 = 0LL;
  v92 = 0LL;
  v93 = 0;
  v94 = 5;
  v95 = 0LL;
  v104 = 0;
  v110 = 0LL;
  v111 = 0LL;
  v112 = 0;
  v113 = 0;
  v68 = 0LL;
  v66 = 0LL;
  v62 = 0;
  memset(v80, 0, sizeof(v80));
  if ( v5 )
  {
    v6 = v4[1];
    if ( *(__int64 **)v6 != v4 )
      __fastfail(3u);
    *v5 = v4;
    v5[1] = (__int64 *)v6;
    *(_QWORD *)v6 = v5;
    v4[1] = (__int64)v5;
    v4[4] = 0LL;
  }
  v11 = 0LL;
  v73 = 0LL;
  v74 = v4;
  v72 = 0LL;
  v65 = 0;
  if ( a3 )
    goto LABEL_3;
  v10 = a2 - 16;
  v28 = 0LL;
  if ( !a2 )
    v10 = 0LL;
  if ( *(_BYTE *)(v10 + 5920) )
  {
    if ( *(_BYTE *)(v10 + 5921) )
      v28 = *(CVisual **)(v10 + 3304);
    else
      v28 = *(CVisual **)(*(_QWORD *)(v10 + 5928) + 56LL);
  }
  v29 = *(_QWORD *)(v10 + 5928);
  v68 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v29 + 200LL))(v29) )
  {
    v30 = (CVisual *)((char *)v28 + 320);
  }
  else
  {
    TreeDataListHead = (unsigned int **)CVisual::GetTreeDataListHead(v28);
    if ( !TreeDataListHead || (v6 = (__int64)*TreeDataListHead, *TreeDataListHead == (unsigned int *)TreeDataListHead) )
    {
LABEL_115:
      v30 = 0LL;
      goto LABEL_56;
    }
    while ( 1 )
    {
      v30 = (struct CTreeData *)(v6 - 288);
      if ( *(_QWORD *)(v6 + 32) == v29 )
        break;
      v6 = *(_QWORD *)v6;
      if ( (unsigned int **)v6 == TreeDataListHead )
        goto LABEL_115;
    }
  }
  v68 = v30;
LABEL_56:
  if ( !v30 )
  {
    v14 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003292412, 0xE0u, 0LL);
    goto LABEL_9;
  }
  LOBYTE(v3) = 0;
LABEL_3:
  v12.m128i_i64[0] = *v4;
  if ( v4 == (__int64 *)*v4 )
  {
    v13 = v77;
    v14 = 1;
    goto LABEL_5;
  }
  v12.m128i_i64[1] = *(unsigned int *)(v12.m128i_i64[0] + 20);
  v13 = (unsigned int *)(v12.m128i_i64[0] + 24);
  v72 = (unsigned int *)*v4;
  v43 = (__int64 **)v12.m128i_i64[0];
  v76 = v12.m128i_i64[0] + 24;
  v12.m128i_i32[0] = -2147467259;
  v78 = v12.m128i_u32[2];
  if ( v12.m128i_i64[1] )
  {
    if ( v12.m128i_i64[1] < 8uLL
      || (v44 = *v13, (unsigned int)v44 < 8)
      || (v44 & 3) != 0
      || (v45 = (unsigned int)v44, v44 > v12.m128i_i64[1]) )
    {
      v6 = v65;
      v12.m128i_i64[1] = (__int64)v70;
    }
    else
    {
      v12.m128i_i64[1] = (__int64)(v13 + 1);
      v6 = (unsigned int)(v44 - 4);
      v64 = v13[1];
      v12.m128i_i32[0] = 0;
      v13 = (unsigned int *)((char *)v13 + v45);
    }
    v14 = v12.m128i_i32[0];
  }
  else
  {
    v12.m128i_i32[0] = 1;
    v6 = 0LL;
    v14 = 1;
    v12.m128i_i64[1] = 0LL;
    if ( *v43 != v4 )
    {
      v14 = -2147467259;
      goto LABEL_5;
    }
  }
  if ( !v12.m128i_i32[0] )
  {
    v12.m128i_i64[0] = (int)v6;
    if ( (int)v6 < 0 || !v12.m128i_i64[1] && (_DWORD)v6 )
    {
      ((void (__fastcall *)(__int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(v6, v12.m128i_i64[1]);
      __debugbreak();
    }
    v73 = v12;
    v11 = _mm_load_si128(&v73);
  }
LABEL_5:
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v14, 0xE5u, 0LL);
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
    if ( !v7 && !a3 )
    {
      Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v66);
      DrawListCacheForCommandRun = CRenderData::GetDrawListCacheForCommandRun(
                                     v71,
                                     (struct CDrawingContext *)v10,
                                     v68,
                                     v65,
                                     &v66);
      v14 = DrawListCacheForCommandRun;
      if ( DrawListCacheForCommandRun < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, DrawListCacheForCommandRun, 0xF3u, 0LL);
        v7 = v66;
        goto LABEL_9;
      }
      v7 = v66;
      LOBYTE(v3) = 0;
      v62 = 0;
    }
    v63[0] = 0;
    if ( a3 )
      break;
    v79 = v11;
    v46 = CRenderData::TryDrawCommandAsDrawList(
            v71,
            (struct CDrawingContext *)v10,
            v9 != 0,
            v64,
            (__int64)&v79,
            (__int64)v63);
    v14 = v46;
    if ( v46 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v46, 0x100u, 0LL);
      goto LABEL_9;
    }
    if ( !v63[0] )
    {
      LOBYTE(v3) = v62;
      break;
    }
    LOBYTE(v3) = 1;
    v62 = 1;
LABEL_68:
    v14 = -2147467259;
    v37 = v76 + v78 - (_QWORD)v13;
    if ( v37 )
    {
      if ( v37 >= 8 )
      {
        v35 = *v13;
        if ( (unsigned int)v35 >= 8 && (v35 & 3) == 0 && v35 <= v37 )
        {
          v38 = v13[1];
          v6 = (__int64)(v13 + 1);
          v13 = (unsigned int *)((char *)v13 + v35);
          v64 = v38;
          v70 = (void *)v6;
          v67 = v35 - 4;
          v14 = 0;
        }
      }
    }
    else
    {
      v6 = (__int64)v72;
      v70 = 0LL;
      v67 = 0;
      v42 = *(unsigned int **)v72;
      v14 = 1;
      if ( *(__int64 **)v72 != v4 )
      {
        v54 = v42 + 6;
        v75 = *(unsigned int **)v72;
        v55 = v42[5];
        v76 = (__int64)v54;
        v77 = v54;
        v78 = v55;
        NextItemSafe = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)&v76, &v64, &v70, &v67);
        v4 = v74;
        v14 = NextItemSafe;
        v13 = v77;
        v3 = v62;
        v72 = v75;
        if ( NextItemSafe == 1 )
        {
          if ( *(__int64 **)v75 != v74 )
            v14 = -2147467259;
          goto LABEL_78;
        }
      }
    }
    v39 = v14 < 0;
    if ( !v14 )
    {
      if ( (v67 & 0x80000000) != 0 || !v70 && v67 )
      {
        ((void (__fastcall *)(__int64, unsigned __int64, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
          v6,
          v35,
          v36,
          v3);
        __debugbreak();
      }
      v73.m128i_i64[0] = (int)v67;
      v73.m128i_i64[1] = (__int64)v70;
      v11 = _mm_load_si128(&v73);
LABEL_78:
      v39 = v14 < 0;
    }
    if ( v39 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v14, 0x146u, 0LL);
      goto LABEL_9;
    }
    ++v65;
    if ( v14 )
      goto LABEL_81;
  }
  if ( (_BYTE)v3 )
  {
    v50 = CRenderData::FlushDrawListCache(
            (CRenderData *)v6,
            (struct CDrawingContext *)v10,
            v7,
            (struct CDrawListEntryBuilder *)v80);
    v14 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x110u, 0LL);
      goto LABEL_9;
    }
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v66);
    v7 = v66;
    v62 = 0;
  }
  if ( v64 == 470 )
  {
    v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v69 + 104LL))(
            v69,
            *(_QWORD *)(*((_QWORD *)v71 + 16) + 8LL * *(unsigned int *)(v73.m128i_i64[1] + 4)));
    v14 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v48, 0x11Du, 0LL);
      goto LABEL_9;
    }
    ++v9;
  }
  else if ( v64 == 469 )
  {
    if ( !v9 )
    {
      v14 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003292412, 0x12Du, 0LL);
      goto LABEL_9;
    }
    v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 96LL))(v69);
    v14 = v49;
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v49, 0x127u, 0LL);
      goto LABEL_9;
    }
    --v9;
  }
  else
  {
    v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 112LL))(v69);
    v14 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x135u, 0LL);
      goto LABEL_9;
    }
    v79 = v11;
    v34 = CRenderData::DrawCommandAsLegacy((_DWORD)v71, v69, v33, v64, (__int64)&v79);
    v14 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v34, 0x137u, 0LL);
      goto LABEL_9;
    }
  }
  if ( v14 != 1 )
  {
    v3 = v62;
    goto LABEL_68;
  }
LABEL_81:
  if ( !v62 )
    goto LABEL_7;
  v40 = CRenderData::FlushDrawListCache(
          (CRenderData *)v6,
          (struct CDrawingContext *)v10,
          v7,
          (struct CDrawListEntryBuilder *)v80);
  v14 = v40;
  if ( v40 >= 0 )
  {
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v66);
    v7 = v66;
    goto LABEL_7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x14Fu, 0LL);
LABEL_9:
  while ( v9 )
  {
    v57 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 96LL))(v69);
    v14 = v57;
    if ( v57 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x15Eu, 0LL);
    else
      --v9;
  }
  if ( v7 )
    CDrawListEntry::Release(v7);
  v15 = v82;
  v16 = v83;
  while ( v15 != v16 )
  {
    if ( *v15 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 8LL))(*v15);
      *v15 = 0LL;
    }
    ++v15;
  }
  v17 = (v83 - v82) >> 3;
  if ( v17 )
    v83 -= 8 * v17;
  v18 = v81;
  v86 = 0;
  if ( v81 )
  {
    v81 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  }
  if ( v111 )
    CDrawListEntry::Release(v111);
  v19 = lpMem;
  if ( (v106 - (_BYTE *)lpMem) >> 1 )
  {
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::clear_region(
      &lpMem,
      0LL);
    v19 = lpMem;
  }
  lpMem = 0LL;
  if ( v19 != v108 && v19 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v19);
  }
  v20 = v100;
  if ( (v101 - (_BYTE *)v100) >> 4 )
  {
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
      &v100,
      0LL);
    v20 = v100;
  }
  v100 = 0LL;
  if ( v20 != v103 && v20 )
  {
    v60 = GetProcessHeap();
    HeapFree(v60, 0, v20);
  }
  v21 = v96;
  if ( (v97 - (_BYTE *)v96) >> 4 )
  {
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
      &v96,
      0LL);
    v21 = v96;
  }
  v96 = 0LL;
  if ( v21 != v99 && v21 )
  {
    v61 = GetProcessHeap();
    HeapFree(v61, 0, v21);
  }
  if ( v95 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v95 + 16LL))(v95);
  v22 = v89;
  v90 = 0LL;
  HIDWORD(v88) = 0;
  v92 = 0LL;
  v93 = 0;
  if ( v89 )
  {
    *((_QWORD *)v89 + 8) = 0LL;
    *((_DWORD *)v22 + 8) = 0;
    *((_DWORD *)v22 + 14) = 0;
    *((_QWORD *)v22 + 11) = 0LL;
    *((_QWORD *)v22 + 12) = 0LL;
    *((_DWORD *)v22 + 26) = 0;
    *((_DWORD *)v22 + 32) = 0;
    v22 = v89;
  }
  v94 = v94 & 4 | 1;
  if ( v91 )
  {
    Mesh::MeshGraph::`scalar deleting destructor'(v91);
    v22 = v89;
  }
  if ( v22 )
    Mesh::MeshGraph::`scalar deleting destructor'(v22);
  if ( v87 )
    operator delete(v87);
  v23 = (v83 - v82) >> 3;
  if ( v23 )
    v83 -= 8 * v23;
  v24 = v82;
  v25 = v82 == v85;
  v82 = 0LL;
  if ( v25 )
    v24 = 0LL;
  if ( v24 )
  {
    v53 = GetProcessHeap();
    HeapFree(v53, 0, v24);
  }
  v26 = v81;
  if ( v81 )
  {
    v81 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
  }
  return (unsigned int)v14;
}
