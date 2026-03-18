/*
 * XREFs of ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18005AAF0
 * Callers:
 *     ?GetBounds@CRenderData@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005A9F4 (-GetBounds@CRenderData@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18005AAAC (-Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18005AAD0 (-AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x180044998 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV?$span@$$CBE$0?0@gsl@@@Z @ 0x18005B20C (-DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV-$span@$$CBE$0-0@gsl@.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18005B470 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18005B9CC (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x18005BA94 (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D75D0 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180105110 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801E37E0 (-clear_region@-$vector_facade@GV-$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0HI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801E38A8 (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 */

__int64 __fastcall CRenderData::Draw(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  _QWORD *v5; // rdi
  _QWORD *v6; // rcx
  struct CDrawListCache *v7; // rbx
  _BYTE *v8; // rdx
  struct CDrawingContext *v9; // r13
  struct CTreeData *v10; // r14
  unsigned int *v11; // r12
  _QWORD *v12; // r15
  __int64 v13; // rdi
  unsigned int *v14; // r10
  unsigned __int64 v15; // rcx
  unsigned int *v16; // rax
  unsigned int v17; // r11d
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  int i; // r14d
  _QWORD *v21; // rbx
  _QWORD *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  _BYTE *v25; // rbx
  _BYTE *v26; // rbx
  _BYTE *v27; // rbx
  __int64 v28; // rcx
  _BYTE *v29; // rbx
  __int64 v30; // rcx
  __int64 v32; // rax
  struct _LIST_ENTRY *v33; // r15
  CVisual *v34; // rsi
  struct _LIST_ENTRY *Flink; // rcx
  __int128 v36; // xmm6
  int v37; // eax
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  int DrawListCacheForCommandRun; // eax
  unsigned int v41; // ecx
  int v42; // eax
  int NextItemSafe; // eax
  int v44; // eax
  unsigned int v45; // ecx
  int v46; // eax
  int v47; // eax
  int v48; // eax
  unsigned int v49; // ecx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  unsigned int v51; // eax
  int v52; // eax
  unsigned int v53; // ecx
  HANDLE ProcessHeap; // rax
  HANDLE v55; // rax
  HANDLE v56; // rax
  HANDLE v57; // rax
  char v58; // [rsp+40h] [rbp-C0h]
  _BYTE v59[11]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v60; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v61[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct CDrawListCache *v62; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v63; // [rsp+60h] [rbp-A0h]
  unsigned int *v64; // [rsp+68h] [rbp-98h]
  CRenderData *v65; // [rsp+70h] [rbp-90h]
  void *v66[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v67; // [rsp+90h] [rbp-70h]
  _QWORD *v68; // [rsp+98h] [rbp-68h]
  _BYTE *v69; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *v70; // [rsp+A8h] [rbp-58h]
  unsigned int v71; // [rsp+B0h] [rbp-50h]
  __int128 v72; // [rsp+C0h] [rbp-40h]
  _OWORD v73[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v74; // [rsp+F0h] [rbp-10h]
  LPVOID v75; // [rsp+F8h] [rbp-8h]
  _BYTE *v76; // [rsp+100h] [rbp+0h]
  __int64 *v77; // [rsp+108h] [rbp+8h]
  _BYTE v78[32]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v79; // [rsp+130h] [rbp+30h] BYREF
  LPVOID v80; // [rsp+140h] [rbp+40h] BYREF
  _BYTE *v81; // [rsp+148h] [rbp+48h]
  LPVOID *v82; // [rsp+150h] [rbp+50h]
  _BYTE v83[1920]; // [rsp+160h] [rbp+60h] BYREF
  LPVOID v84; // [rsp+8E0h] [rbp+7E0h] BYREF
  _BYTE *v85; // [rsp+8E8h] [rbp+7E8h]
  int *v86; // [rsp+8F0h] [rbp+7F0h]
  _BYTE v87[1920]; // [rsp+900h] [rbp+800h] BYREF
  int v88; // [rsp+1080h] [rbp+F80h] BYREF
  LPVOID lpMem; // [rsp+1088h] [rbp+F88h] BYREF
  _BYTE *v90; // [rsp+1090h] [rbp+F90h]
  _BYTE *v91; // [rsp+1098h] [rbp+F98h]
  _BYTE v92[348]; // [rsp+10A0h] [rbp+FA0h] BYREF
  _BYTE v93[4]; // [rsp+11FCh] [rbp+10FCh] BYREF
  __int64 v94; // [rsp+1200h] [rbp+1100h]
  __int64 v95; // [rsp+1210h] [rbp+1110h]
  int v96; // [rsp+1218h] [rbp+1118h]
  char v97; // [rsp+121Ch] [rbp+111Ch]

  *(_QWORD *)v61 = a2;
  v4 = 0;
  v65 = (CRenderData *)a1;
  v63 = a3;
  v75 = v78;
  v5 = a1 + 9;
  v6 = (_QWORD *)a1[13];
  v76 = v78;
  v77 = &v79;
  v80 = v83;
  v81 = v83;
  v82 = &v84;
  v84 = v87;
  v85 = v87;
  v86 = &v88;
  lpMem = v92;
  v90 = v92;
  v74 = 0LL;
  v7 = 0LL;
  v79 = 0LL;
  v8 = v93;
  v91 = v93;
  v9 = 0LL;
  v88 = 0;
  v10 = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  v96 = 0;
  v97 = 0;
  *(_DWORD *)&v59[3] = 0;
  v62 = 0LL;
  v58 = 0;
  memset(v73, 0, sizeof(v73));
  if ( v6 )
  {
    v8 = (_BYTE *)v5[1];
    if ( *(_QWORD **)v8 != v5 )
      __fastfail(3u);
    *v6 = v5;
    v6[1] = v8;
    *(_QWORD *)v8 = v6;
    v5[1] = v6;
    v5[4] = 0LL;
  }
  v11 = 0LL;
  v67 = v5;
  v68 = 0LL;
  *(_DWORD *)&v59[7] = 0;
  *(_QWORD *)&v72 = 0LL;
  if ( !(_DWORD)a3 )
  {
    if ( a2 )
      v9 = (struct CDrawingContext *)(a2 - 16);
    v32 = (*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)v9 + 3) + 32LL))((_QWORD *)v9 + 3);
    v33 = (struct _LIST_ENTRY *)*((_QWORD *)v9 + 991);
    v34 = (CVisual *)v32;
    if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v33->Flink[11].Blink)(v33) )
    {
      v10 = (CVisual *)((char *)v34 + 336);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v34);
      if ( TreeDataListHead )
      {
        Flink = TreeDataListHead->Flink;
        if ( TreeDataListHead->Flink != TreeDataListHead )
        {
          while ( 1 )
          {
            v10 = (struct CTreeData *)&Flink[-24];
            if ( Flink[2].Flink == v33 )
              break;
            Flink = Flink->Flink;
            if ( Flink == TreeDataListHead )
              goto LABEL_97;
          }
        }
      }
    }
    if ( !v10 )
    {
LABEL_97:
      v4 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, -2003292412, 0xDEu, 0LL);
      goto LABEL_4;
    }
    a3 = v63;
    v4 = 0;
  }
  v12 = (_QWORD *)*v5;
  if ( v5 == (_QWORD *)*v5 )
  {
LABEL_4:
    v13 = *(_QWORD *)v61;
    goto LABEL_18;
  }
  v14 = (unsigned int *)(v12 + 3);
  v71 = *((_DWORD *)v12 + 5);
  v64 = (unsigned int *)(v12 + 3);
  v69 = v12 + 3;
  if ( v71 )
  {
    if ( v71 < 8uLL || (v15 = *v14, (unsigned int)v15 < 8) || (v15 & 3) != 0 || v15 > v71 )
    {
      v17 = v61[0];
      v19 = 2147500037LL;
      v16 = (unsigned int *)v66[0];
      v18 = 2147500037LL;
    }
    else
    {
      v16 = (unsigned int *)v12 + 7;
      v60 = *((_DWORD *)v12 + 7);
      v17 = v15 - 4;
      v64 = (unsigned int *)((char *)v14 + v15);
      v18 = 0LL;
      v19 = 0LL;
    }
  }
  else
  {
    v19 = 1LL;
    v17 = 0;
    v18 = 1LL;
    v16 = 0LL;
    if ( (_QWORD *)*v12 != v5 )
    {
      v4 = -2147467259;
      LODWORD(v18) = -2147467259;
LABEL_100:
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xE3u, 0LL);
      goto LABEL_4;
    }
  }
  if ( !(_DWORD)v19 )
  {
    v19 = v17;
    if ( !v16 && v17 )
    {
      ((void (__fastcall *)(_QWORD, _BYTE *, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
        v17,
        v8,
        a3,
        v18);
      __debugbreak();
    }
    *(_QWORD *)&v72 = v17;
    v11 = v16;
  }
  v4 = v18;
  if ( (int)v18 < 0 )
    goto LABEL_100;
  v13 = *(_QWORD *)v61;
  if ( (_DWORD)v18 )
  {
LABEL_16:
    if ( v4 == 1 )
      v4 = 0;
    goto LABEL_18;
  }
  while ( 1 )
  {
    *((_QWORD *)&v72 + 1) = v11;
    v36 = v72;
    if ( v7 || (_DWORD)a3 )
    {
      v59[0] = 0;
      if ( (_DWORD)a3 )
        goto LABEL_56;
    }
    else
    {
      Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v62);
      DrawListCacheForCommandRun = CRenderData::GetDrawListCacheForCommandRun(
                                     v65,
                                     v9,
                                     v10,
                                     *(unsigned int *)&v59[7],
                                     &v62);
      v4 = DrawListCacheForCommandRun;
      if ( DrawListCacheForCommandRun < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, DrawListCacheForCommandRun, 0xF1u, 0LL);
        v7 = v62;
        goto LABEL_18;
      }
      v7 = v62;
      v58 = 0;
      v59[0] = 0;
    }
    *(_OWORD *)v66 = v36;
    v42 = CRenderData::TryDrawCommandAsDrawList(v65, v9, v60, (__int64)v66, (__int64)v59);
    v4 = v42;
    if ( v42 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v42, 0xFDu, 0LL);
      goto LABEL_18;
    }
    if ( v59[0] )
    {
      v58 = 1;
      goto LABEL_61;
    }
LABEL_56:
    if ( v58 )
    {
      v48 = CRenderData::FlushDrawListCache((CRenderData *)v19, v9, v7, (struct CDrawListEntryBuilder *)v73);
      v4 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0x10Du, 0LL);
        goto LABEL_18;
      }
      Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v62);
      v7 = v62;
      v58 = 0;
    }
    if ( v60 == 465 )
    {
      v46 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 104LL))(
              v13,
              *(_QWORD *)(*((_QWORD *)v65 + 17) + 8LL * v11[1]));
      v4 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v46, 0x11Du, 0LL);
        goto LABEL_18;
      }
      ++*(_DWORD *)&v59[3];
    }
    else if ( v60 == 464 )
    {
      if ( !*(_DWORD *)&v59[3] )
      {
        v4 = -2003292412;
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2003292412, 0x12Du, 0LL);
        goto LABEL_18;
      }
      v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 96LL))(v13);
      v4 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v47, 0x127u, 0LL);
        goto LABEL_18;
      }
      --*(_DWORD *)&v59[3];
    }
    else
    {
      *(_OWORD *)v66 = v36;
      v37 = CRenderData::DrawCommandAsLegacy((_DWORD)v65, v13, a3, v60, (__int64)v66);
      v4 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v37, 0x132u, 0LL);
        goto LABEL_18;
      }
    }
    if ( v4 == 1 )
      goto LABEL_77;
LABEL_61:
    v38 = (unsigned __int64)&v69[v71 - (_QWORD)v64];
    if ( !v38 )
      break;
    if ( v38 < 8 )
      goto LABEL_115;
    v19 = *v64;
    if ( (unsigned int)v19 < 8 )
      goto LABEL_115;
    if ( (v19 & 3) != 0 )
      goto LABEL_115;
    v39 = (unsigned int)v19;
    if ( v19 > v38 )
      goto LABEL_115;
    v11 = v64 + 1;
    v19 = (unsigned int)(v19 - 4);
    v60 = v64[1];
    v64 = (unsigned int *)((char *)v64 + v39);
LABEL_67:
    if ( !v11 && (_DWORD)v19 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    ++*(_DWORD *)&v59[7];
    LODWORD(a3) = v63;
    *(_QWORD *)&v72 = (unsigned int)v19;
  }
  v8 = (_BYTE *)*v12;
  NextItemSafe = 1;
  v66[0] = 0LL;
  v61[0] = 0;
  if ( v8 == v67 )
    goto LABEL_75;
  v51 = *((_DWORD *)v8 + 5);
  v69 = v8 + 24;
  v70 = (unsigned int *)(v8 + 24);
  v68 = v8;
  v71 = v51;
  NextItemSafe = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)&v69, &v60, v66, v61);
  v12 = v68;
  if ( NextItemSafe != 1 )
  {
    v19 = (unsigned __int64)v70;
    v64 = v70;
    if ( NextItemSafe )
      goto LABEL_75;
    v11 = (unsigned int *)v66[0];
    v19 = v61[0];
    goto LABEL_67;
  }
  LODWORD(v19) = (_DWORD)v67;
  if ( (_BYTE *)*v68 != v67 )
  {
LABEL_115:
    NextItemSafe = -2147467259;
    v4 = -2147467259;
    goto LABEL_116;
  }
  v19 = (unsigned __int64)v70;
  v64 = v70;
LABEL_75:
  v4 = NextItemSafe;
  if ( NextItemSafe < 0 )
  {
LABEL_116:
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, NextItemSafe, 0x141u, 0LL);
    goto LABEL_18;
  }
  ++*(_DWORD *)&v59[7];
  *((_QWORD *)&v72 + 1) = v11;
LABEL_77:
  if ( !v58 )
    goto LABEL_16;
  v44 = CRenderData::FlushDrawListCache((CRenderData *)v19, v9, v7, (struct CDrawListEntryBuilder *)v73);
  v4 = v44;
  if ( v44 >= 0 )
  {
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v62);
    v7 = v62;
    goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x14Au, 0LL);
LABEL_18:
  for ( i = *(_DWORD *)&v59[3]; i; *(_DWORD *)&v59[3] = i )
  {
    v52 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)v13 + 96LL))(v13, v8, a3);
    v4 = v52;
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x159u, 0LL);
      goto LABEL_18;
    }
    --i;
  }
  if ( v7 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v7);
  v21 = v75;
  v22 = v76;
  while ( v21 != v22 )
  {
    if ( *v21 )
    {
      (*(void (__fastcall **)(_QWORD, _BYTE *, __int64))(*(_QWORD *)*v21 + 8LL))(*v21, v8, a3);
      *v21 = 0LL;
    }
    ++v21;
  }
  v23 = (v76 - (_BYTE *)v75) >> 3;
  if ( v23 )
  {
    v8 = &v76[-8 * v23];
    v76 = v8;
  }
  v24 = v74;
  LOBYTE(v96) = 0;
  if ( v74 )
  {
    v74 = 0LL;
    (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)v24 + 8LL))(v24, v8, a3);
  }
  if ( v95 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v95);
  v25 = lpMem;
  if ( (v90 - (_BYTE *)lpMem) >> 1 )
  {
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,174,1,detail::liberal_expansion_policy>>::clear_region(
      &lpMem,
      0LL,
      (v90 - (_BYTE *)lpMem) >> 1);
    v25 = lpMem;
  }
  lpMem = 0LL;
  if ( v25 != v92 && v25 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v25);
  }
  v26 = v84;
  if ( (v85 - (_BYTE *)v84) >> 4 )
  {
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,120,1,detail::liberal_expansion_policy>>::clear_region(
      &v84,
      0LL);
    v26 = v84;
  }
  v84 = 0LL;
  if ( v26 != v87 && v26 )
  {
    v55 = GetProcessHeap();
    HeapFree(v55, 0, v26);
  }
  v27 = v80;
  if ( (v81 - (_BYTE *)v80) >> 4 )
  {
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,120,1,detail::liberal_expansion_policy>>::clear_region(
      &v80,
      0LL);
    v27 = v80;
  }
  v80 = 0LL;
  if ( v27 != v83 && v27 )
  {
    v56 = GetProcessHeap();
    HeapFree(v56, 0, v27);
  }
  if ( v79 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v79 + 16LL))(v79);
  v28 = (v76 - (_BYTE *)v75) >> 3;
  if ( v28 )
    v76 -= 8 * v28;
  v29 = v75;
  v75 = 0LL;
  if ( v29 != v78 && v29 )
  {
    v57 = GetProcessHeap();
    HeapFree(v57, 0, v29);
  }
  v30 = v74;
  if ( v74 )
  {
    v74 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
  }
  return v4;
}
