/*
 * XREFs of ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000E8C0
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140005940 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400072E0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x140009CD0 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x14000A940 (-TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000BA40 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000C690 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000D5F0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x14000F400 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000F4B0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14001BC94 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D34C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14001DBE8 (memset_0.c)
 *     _CxxThrowException_0 @ 0x14001F427 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1400336CC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x140033928 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     WPP_SF_ @ 0x140034220 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14003424C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400432DC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CPipeInstance::CreateSubmixPipeInstance(
        struct IDeviceGraphObjectCache *a1,
        struct SUBMIX_DESCRIPTOR *a2,
        struct CPipeInstance **a3)
{
  int v5; // esi
  BOOL v6; // r12d
  int FxPropertyStore; // eax
  int v8; // eax
  __int64 v9; // rbx
  ATL::CAtlPlex *v10; // rcx
  ATL::CAtlPlex *v11; // rdx
  unsigned int i; // ebx
  int v13; // eax
  int v14; // eax
  HKEY v15; // rbx
  struct IAudioMediaType *v16; // rsi
  __int64 v17; // r14
  ATL::CAtlPlex *v18; // rax
  ATL::CAtlPlex *v19; // rcx
  CPipeInstance *v20; // rax
  CPipeInstance *v21; // r12
  _WORD *v22; // r14
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r15
  _WORD *v25; // rax
  int v26; // ecx
  unsigned __int64 v27; // rcx
  _WORD *v28; // rdx
  int v29; // r9d
  __int64 v30; // r8
  unsigned __int64 v31; // r15
  int v32; // ebx
  struct IDeviceGraphObjectCache *v33; // rcx
  __int64 v34; // rbx
  unsigned __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // r15
  __int64 *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  int v44; // r9d
  _QWORD *v45; // r8
  ATL::CAtlPlex *v46; // rcx
  unsigned int v47; // ebx
  int v49; // eax
  GUID *v50; // r15
  int v51; // r14d
  __int64 v52; // rdx
  int v53; // r14d
  __int64 v54; // r14
  ATL::CAtlPlex *v55; // rcx
  ATL::CAtlPlex *v56; // rdx
  const struct tWAVEFORMATEX *v57; // rax
  int v58; // eax
  __int128 v59; // [rsp+50h] [rbp-158h] BYREF
  __int64 v60; // [rsp+60h] [rbp-148h]
  ATL::CAtlPlex *v61[2]; // [rsp+68h] [rbp-140h]
  int v62; // [rsp+78h] [rbp-130h]
  struct IPropertyStore *v63; // [rsp+80h] [rbp-128h]
  HKEY v64; // [rsp+88h] [rbp-120h] BYREF
  __int64 v65; // [rsp+90h] [rbp-118h] BYREF
  struct IAudioMediaType *v66; // [rsp+98h] [rbp-110h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-108h] BYREF
  int pExceptionObject; // [rsp+A8h] [rbp-100h] BYREF
  int v69; // [rsp+ACh] [rbp-FCh] BYREF
  _DWORD v70[2]; // [rsp+B0h] [rbp-F8h] BYREF
  int v71; // [rsp+B8h] [rbp-F0h] BYREF
  int v72; // [rsp+BCh] [rbp-ECh] BYREF
  int v73; // [rsp+C0h] [rbp-E8h] BYREF
  int v74; // [rsp+C4h] [rbp-E4h] BYREF
  int v75; // [rsp+C8h] [rbp-E0h]
  int v76; // [rsp+CCh] [rbp-DCh]
  int v77; // [rsp+D0h] [rbp-D8h] BYREF
  struct IPropertyStore *v78; // [rsp+D8h] [rbp-D0h] BYREF
  __int64 v79; // [rsp+E0h] [rbp-C8h]
  _WORD *v80; // [rsp+E8h] [rbp-C0h]
  __int64 v81; // [rsp+F0h] [rbp-B8h]
  __int64 v82; // [rsp+F8h] [rbp-B0h]
  _QWORD *v83; // [rsp+100h] [rbp-A8h]
  __int64 v84; // [rsp+108h] [rbp-A0h] BYREF
  void *v85; // [rsp+110h] [rbp-98h]
  unsigned __int64 v86; // [rsp+118h] [rbp-90h]
  _WORD *v87; // [rsp+120h] [rbp-88h]
  unsigned __int64 v88; // [rsp+128h] [rbp-80h]
  unsigned __int64 v89; // [rsp+130h] [rbp-78h]
  GUID v90; // [rsp+150h] [rbp-58h] BYREF
  GUID v91; // [rsp+160h] [rbp-48h] BYREF
  CPipeInstance *v93; // [rsp+1B8h] [rbp+10h] BYREF
  struct CPipeInstance **v94; // [rsp+1C0h] [rbp+18h]
  BOOL v95; // [rsp+1C8h] [rbp+20h]

  v94 = a3;
  v5 = 0;
  v59 = 0LL;
  v60 = 0LL;
  *(_OWORD *)v61 = 0LL;
  v62 = 10;
  v6 = *(_DWORD *)a2 != 0;
  v95 = v6;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids);
  }
  *a3 = 0LL;
  v78 = 0LL;
  FxPropertyStore = TryGetFxPropertyStore(*((const unsigned __int16 **)a2 + 4), &v78);
  if ( FxPropertyStore < 0 )
  {
    pExceptionObject = FxPropertyStore;
    throw (long *)&pExceptionObject;
  }
  v67 = 0LL;
  v8 = CProcessNode::CreateDummyProcessNode(v6, *((const struct tWAVEFORMATEX **)a2 + 3), &v67);
  if ( v8 < 0 )
  {
    v69 = v8;
    throw (long *)&v69;
  }
  v9 = *((_QWORD *)&v59 + 1);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v59);
  v10 = v61[1];
  v11 = *(ATL::CAtlPlex **)v61[1];
  *((_QWORD *)v61[1] + 2) = v67;
  v61[1] = v11;
  *((_QWORD *)v10 + 1) = v9;
  *(_QWORD *)v10 = 0LL;
  ++v60;
  if ( *((_QWORD *)&v59 + 1) )
    **((_QWORD **)&v59 + 1) = v10;
  else
    *(_QWORD *)&v59 = v10;
  *((_QWORD *)&v59 + 1) = v10;
  v67 = 0LL;
  for ( i = 0; ; ++i )
  {
    v70[1] = i;
    if ( i >= *((_DWORD *)a2 + 22) )
      break;
    v93 = 0LL;
    v49 = *((_DWORD *)a2 + 16);
    if ( _bittest(&v49, i) )
    {
      v50 = (GUID *)((char *)a2 + 68);
      v51 = 2;
      v63 = v78;
      if ( v78 )
        ((void (__fastcall *)(struct IPropertyStore *))v78->lpVtbl->AddRef)(v78);
      v5 |= 1u;
      v52 = (__int64)v63;
    }
    else
    {
      v50 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v51 = 0;
      v79 = 0LL;
      v5 |= 2u;
      v52 = 0LL;
    }
    v90 = *v50;
    v53 = CAPOProcessNode::CreateAPOProcessNode(
            (const struct _GUID *)((char *)a2 + 16 * i + 92),
            v52,
            v6,
            0,
            v51,
            &v90,
            (HKEY *)&v93);
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      if ( v79 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v79 + 16LL))(v79);
    }
    if ( (v5 & 1) != 0 )
    {
      v5 &= ~1u;
      if ( v63 )
        ((void (__fastcall *)(struct IPropertyStore *))v63->lpVtbl->Release)(v63);
    }
    if ( v53 < 0 )
    {
      v70[0] = v53;
      throw (long *)v70;
    }
    v54 = *((_QWORD *)&v59 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v59);
    v55 = v61[1];
    v56 = *(ATL::CAtlPlex **)v61[1];
    *((_QWORD *)v61[1] + 2) = v93;
    v61[1] = v56;
    *((_QWORD *)v55 + 1) = v54;
    *(_QWORD *)v55 = 0LL;
    ++v60;
    if ( *((_QWORD *)&v59 + 1) )
      **((_QWORD **)&v59 + 1) = v55;
    else
      *(_QWORD *)&v59 = v55;
    *((_QWORD *)&v59 + 1) = v55;
    v93 = 0LL;
  }
  v66 = 0LL;
  v13 = CAudioMediaType::Create(*((const struct tWAVEFORMATEX **)a2 + 6), *((_DWORD *)a2 + 10), &v66, 0.0, 0);
  if ( v13 < 0 )
  {
    v71 = v13;
    throw (long *)&v71;
  }
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v65 = 0LL;
      v16 = v66;
      v57 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v66->lpVtbl->GetAudioFormat)(v66);
      v58 = CProcessNode::CreateDummyProcessNode(v6, v57, &v65);
      if ( v58 < 0 )
      {
        v73 = v58;
        throw (long *)&v73;
      }
      v84 = v65;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v59, &v84);
      v65 = 0LL;
    }
    else
    {
      v16 = v66;
    }
  }
  else
  {
    v64 = 0LL;
    v91 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v14 = CAPOProcessNode::CreateAPOProcessNode(&GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a, 0LL, v6, 1, 0, &v91, &v64);
    if ( v14 < 0 )
    {
      v72 = v14;
      throw (long *)&v72;
    }
    v15 = v64;
    v16 = v66;
    (*(void (__fastcall **)(HKEY, struct IAudioMediaType *))(*(_QWORD *)v64 + 24LL))(v64, v66);
    (*(void (__fastcall **)(HKEY, struct IAudioMediaType *))(*(_QWORD *)v15 + 32LL))(v15, v16);
    v17 = *((_QWORD *)&v59 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v59);
    v18 = v61[1];
    v19 = *(ATL::CAtlPlex **)v61[1];
    *((_QWORD *)v61[1] + 2) = v15;
    v61[1] = v19;
    *((_QWORD *)v18 + 1) = v17;
    *(_QWORD *)v18 = 0LL;
    ++v60;
    if ( *((_QWORD *)&v59 + 1) )
      **((_QWORD **)&v59 + 1) = v18;
    else
      *(_QWORD *)&v59 = v18;
    *((_QWORD *)&v59 + 1) = v18;
    v64 = 0LL;
  }
  v20 = (CPipeInstance *)operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
  v93 = v20;
  if ( v20 )
    v21 = CPipeInstance::CPipeInstance(v20, (enum PIPE_TYPE)*((_DWORD *)a2 + 2));
  else
    v21 = 0LL;
  v63 = (struct IPropertyStore *)v21;
  if ( !v21 )
  {
    v74 = -2147024882;
    throw (long *)&v74;
  }
  v22 = (_WORD *)*((_QWORD *)a2 + 4);
  v23 = -1LL;
  do
    ++v23;
  while ( v22[v23] );
  *((_QWORD *)v21 + 24) = 0LL;
  v24 = v23 + 1;
  if ( v23 + 1 < v23 )
  {
    v32 = -2147024362;
    goto LABEL_124;
  }
  if ( is_mul_ok(v24, 2uLL) )
  {
    v25 = CoTaskMemAlloc(2 * v24);
    *((_QWORD *)v21 + 24) = v25;
    if ( v25 )
    {
      v26 = 0;
      LODWORD(v93) = 0;
      v86 = v23;
      v85 = v22;
      if ( v24 > 0x7FFFFFFF )
        v26 = -2147024809;
      if ( v26 < 0 )
      {
        if ( v23 != -1LL )
LABEL_118:
          *v25 = 0;
      }
      else
      {
        v75 = 0;
        if ( v23 < 0x7FFFFFFF )
        {
          if ( !v22 )
          {
            v22 = &unk_140070AE8;
            v85 = &unk_140070AE8;
            v23 = 0LL;
            v86 = 0LL;
          }
          if ( v24 )
          {
            v82 = 0LL;
            v89 = v23;
            v87 = v22;
            v27 = v24;
            v88 = v24;
            v28 = v25;
            v80 = v25;
            v29 = 0;
            v30 = 0LL;
            v81 = 0LL;
            while ( v27 )
            {
              if ( !v23 || !*v22 )
                goto LABEL_35;
              *v28++ = *v22;
              v80 = v28;
              v87 = ++v22;
              v88 = --v27;
              v89 = --v23;
              v81 = ++v30;
            }
            v80 = --v28;
            v81 = --v30;
            v29 = -2147024774;
LABEL_35:
            *v28 = 0;
            v82 = v30;
            v31 = v24 - v30;
            if ( v29 >= 0 && v31 > 1 && 2 * v31 > 2 )
              memset_0(&v25[v82 + 1], 0, 2 * v31 - 2);
          }
          goto LABEL_37;
        }
        v75 = -2147024809;
        if ( v23 != -1LL )
          goto LABEL_118;
      }
LABEL_37:
      v32 = (int)v93;
      goto LABEL_38;
    }
    v32 = -2147024882;
LABEL_124:
    v77 = v32;
    throw (long *)&v77;
  }
  v32 = -2147024362;
  LODWORD(v93) = -2147024362;
LABEL_38:
  if ( v32 < 0 )
    goto LABEL_124;
  *((_DWORD *)v21 + 30) = *(_DWORD *)a2 == 2;
  *((_DWORD *)v21 + 3) = v95;
  *((_DWORD *)v21 + 33) = *((_DWORD *)a2 + 16) != 0;
  if ( *((_QWORD *)v21 + 19) )
    ATL::AtlComPtrAssign((struct IUnknown **)v21 + 19, 0LL);
  v33 = (struct IDeviceGraphObjectCache *)*((_QWORD *)v21 + 30);
  if ( v33 != a1 )
  {
    if ( a1 )
    {
      (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)a1 + 8LL))(a1);
      v33 = (struct IDeviceGraphObjectCache *)*((_QWORD *)v21 + 30);
    }
    if ( v33 )
      (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)v33 + 16LL))(v33);
    *((_QWORD *)v21 + 30) = a1;
  }
  *(_QWORD *)v21 = 0LL;
  *((_DWORD *)v21 + 2) = 1;
  v34 = *((_QWORD *)&v59 + 1);
  while ( 1 )
  {
    v35 = 0x1999999999999999LL;
    if ( !v34 )
      break;
    v36 = v34;
    v34 = *(_QWORD *)(v34 + 8);
    v37 = *((_QWORD *)v21 + 2);
    if ( !*((_QWORD *)v21 + 6) )
    {
      v41 = *((unsigned int *)v21 + 14);
      if ( *((_DWORD *)v21 + 14) )
      {
        if ( v41 != 10 )
          v35 = 0xFFFFFFFFFFFFFFFFuLL / v41;
        if ( v35 < 0x18 )
LABEL_120:
          ATL::AtlThrowImpl(-2147024882);
        v42 = 24 * v41;
      }
      else
      {
        v42 = 0LL;
      }
      if ( (unsigned __int64)~v42 < 8 )
        goto LABEL_120;
      v43 = malloc(v42 + 8);
      if ( !v43 )
        goto LABEL_120;
      *v43 = *((_QWORD *)v21 + 5);
      *((_QWORD *)v21 + 5) = v43;
      v83 = v43 + 1;
      v44 = *((_DWORD *)v21 + 14) - 1;
      v45 = &v43[3 * (unsigned int)v44 + 1];
      v83 = v45;
      while ( 1 )
      {
        v76 = v44;
        if ( v44 < 0 )
          break;
        *v45 = *((_QWORD *)v21 + 6);
        *((_QWORD *)v21 + 6) = v45;
        v45 -= 3;
        v83 = v45;
        --v44;
      }
    }
    v38 = (__int64 *)*((_QWORD *)v21 + 6);
    v39 = *v38;
    v38[2] = *(_QWORD *)(v36 + 16);
    *((_QWORD *)v21 + 6) = v39;
    v38[1] = 0LL;
    *v38 = v37;
    ++*((_QWORD *)v21 + 4);
    v40 = *((_QWORD *)v21 + 2);
    if ( v40 )
      *(_QWORD *)(v40 + 8) = v38;
    else
      *((_QWORD *)v21 + 3) = v38;
    *((_QWORD *)v21 + 2) = v38;
  }
  while ( v60 )
  {
    v46 = (ATL::CAtlPlex *)v59;
    if ( !(_QWORD)v59 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)&v59 = *(_QWORD *)v59;
    *(ATL::CAtlPlex **)v46 = v61[1];
    v61[1] = v46;
    if ( !--v60 )
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v59);
  }
  v59 = 0LL;
  v61[1] = 0LL;
  if ( v61[0] )
  {
    ATL::CAtlPlex::FreeDataChain(v61[0]);
    v61[0] = 0LL;
  }
  *((_DWORD *)v21 + 36) = (int)(float)((float)(int)((float)((float)*(int *)(*((_QWORD *)a2 + 6) + 8LL)
                                                          / (float)*(unsigned __int16 *)(*((_QWORD *)a2 + 6) + 12LL))
                                                  * (double)(int)*((_QWORD *)a2 + 7)
                                                  / 10000000.0
                                                  + 0.5)
                                     * 1.1);
  *((_DWORD *)v21 + 34) = 0;
  *((_DWORD *)v21 + 53) = 0;
  *(_OWORD *)((char *)v21 + 216) = *(_OWORD *)((char *)a2 + 68);
  *((_BYTE *)v21 + 317) = *((_BYTE *)a2 + 85);
  *v94 = v21;
  v63 = 0LL;
  if ( v16 )
    ((void (__fastcall *)(struct IAudioMediaType *))v16->lpVtbl->Release)(v16);
  v67 = 0LL;
  if ( v78 )
    ((void (__fastcall *)(struct IPropertyStore *))v78->lpVtbl->Release)(v78);
  v47 = (unsigned int)v93;
  if ( (int)v93 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids,
        (unsigned int)v93);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateSubmixPipeInstance", 0x1CFu, v47);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v59);
  return v47;
}
