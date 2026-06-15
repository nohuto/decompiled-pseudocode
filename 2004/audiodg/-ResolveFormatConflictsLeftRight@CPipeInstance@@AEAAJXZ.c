/*
 * XREFs of ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000BD20
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B890 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x1400020E0 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x140002BC0 (-FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z.c)
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x1400031C0 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140005E18 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140009B30 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140009E10 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000BA40 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000C690 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000D5F0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x14000F400 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14000FC70 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x14001F427 (_CxxThrowException_0.c)
 *     memcpy_0 @ 0x14001F43F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1400336CC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x14003424C (WPP_SF_D.c)
 *     WPP_SF_q @ 0x14003A048 (WPP_SF_q.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObjectInternal@@$1?_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14003BC78 (--0-$CComQIPtr@UIAudioProcessingObjectInternal@@$1-_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3.c)
 *     ?InsertAfter@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x14003D058 (-InsertAfter@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPE.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x14003D0B0 (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14003D1CC (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     WPP_SF__guid_ @ 0x14003D538 (WPP_SF__guid_.c)
 *     WPP_SF_qs @ 0x14003D574 (WPP_SF_qs.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400432DC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=82
__int64 __fastcall CPipeInstance::ResolveFormatConflictsLeftRight(CPipeInstance *this)
{
  CPipeInstance *v1; // r14
  _QWORD *v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  int v5; // r8d
  int Converter; // edi
  unsigned __int16 *v7; // rsi
  __int64 v8; // rdi
  char *v9; // rax
  char *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rsi
  unsigned int *v14; // rbx
  _QWORD *v15; // r14
  int v16; // r12d
  __int64 v17; // r13
  unsigned int v18; // ebx
  int v19; // eax
  __int64 v20; // r13
  struct IAudioMediaType *v21; // rcx
  struct IAudioMediaType *v22; // rcx
  int v23; // eax
  struct IAudioMediaType *v24; // rdx
  struct IAudioMediaType *v25; // rdi
  _QWORD *v26; // r13
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rbx
  struct IAudioMediaType *v35; // rdx
  struct IAudioMediaType *v36; // r13
  _QWORD *Head; // rax
  int v38; // ecx
  __int128 *v39; // r14
  __int128 *v40; // rbx
  void (__fastcall ***v41)(_QWORD, __int64); // rbx
  int v42; // ebx
  const struct tWAVEFORMATEX *v43; // rax
  int v44; // ebx
  const struct tWAVEFORMATEX *v45; // rax
  __int64 v46; // rax
  const struct tWAVEFORMATEX *v47; // rbx
  const struct tWAVEFORMATEX *v48; // rax
  int v49; // ebx
  const struct tWAVEFORMATEX *v50; // rax
  int v51; // eax
  int v52; // eax
  const char *v53; // rax
  int ppv; // [rsp+20h] [rbp-198h]
  char v55; // [rsp+40h] [rbp-178h]
  struct IAudioMediaType *v57; // [rsp+50h] [rbp-168h] BYREF
  struct IAudioMediaType *v58; // [rsp+58h] [rbp-160h] BYREF
  struct IAudioMediaType *v59; // [rsp+60h] [rbp-158h] BYREF
  int v60; // [rsp+68h] [rbp-150h]
  void (__fastcall ***v61)(_QWORD, __int64); // [rsp+70h] [rbp-148h] BYREF
  unsigned int *v62; // [rsp+78h] [rbp-140h]
  __int64 v63; // [rsp+80h] [rbp-138h]
  _QWORD v64[2]; // [rsp+88h] [rbp-130h] BYREF
  unsigned int v65; // [rsp+98h] [rbp-120h]
  struct IMMDevice *v66; // [rsp+A0h] [rbp-118h] BYREF
  _QWORD *v67; // [rsp+A8h] [rbp-110h]
  struct IAudioMediaType *v68; // [rsp+B0h] [rbp-108h] BYREF
  _QWORD *v69; // [rsp+B8h] [rbp-100h]
  __int64 v70; // [rsp+C0h] [rbp-F8h] BYREF
  int v71; // [rsp+C8h] [rbp-F0h] BYREF
  __int64 v72; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v73; // [rsp+D8h] [rbp-E0h] BYREF
  _QWORD *v74; // [rsp+E0h] [rbp-D8h]
  int v75; // [rsp+E8h] [rbp-D0h] BYREF
  int v76; // [rsp+ECh] [rbp-CCh] BYREF
  int pExceptionObject; // [rsp+F0h] [rbp-C8h] BYREF
  LPVOID v78; // [rsp+F8h] [rbp-C0h] BYREF
  struct IAudioMediaType *v79[2]; // [rsp+100h] [rbp-B8h] BYREF
  struct _GUID v80; // [rsp+110h] [rbp-A8h] BYREF
  void (__fastcall ***v81)(_QWORD, __int64); // [rsp+120h] [rbp-98h] BYREF
  void (__fastcall ***v82)(_QWORD, __int64); // [rsp+128h] [rbp-90h] BYREF
  __int64 v83[6]; // [rsp+130h] [rbp-88h] BYREF
  struct _GUID v84; // [rsp+160h] [rbp-58h] BYREF
  __int128 v85; // [rsp+170h] [rbp-48h]

  v1 = this;
  v64[1] = this;
  v69 = 0LL;
  v73 = 0LL;
  v55 = 0;
  v65 = 1;
  v58 = 0LL;
  v64[0] = 0LL;
  v79[0] = 0LL;
  v78 = 0LL;
  v2 = *(_QWORD **)this;
  if ( v2 )
  {
    Head = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(v2 + 2);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*Head + 8LL))(*Head, v64);
  }
  else
  {
    v3 = *((_QWORD *)v1 + 3);
    if ( !v3 )
      goto LABEL_278;
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(v3 + 16) + 16LL))(*(_QWORD *)(v3 + 16), v64);
  }
  Converter = v4;
  if ( v4 < 0 )
    goto LABEL_57;
  v7 = (unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v64[0] + 40LL))(v64[0]);
  v8 = v7[8];
  v9 = (char *)CoTaskMemAlloc(v8 + 18);
  v10 = v9;
  if ( !v9 )
  {
    Converter = -2147024882;
    goto LABEL_57;
  }
  memcpy_0(v9, v7, v8 + 18);
  if ( *(_WORD *)v10 == 1 )
  {
    *(_WORD *)v10 = 3;
    goto LABEL_107;
  }
  if ( *(_WORD *)v10 == 0xFFFE )
  {
    v11 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v10 + 3);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v10 + 3) )
      v11 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v10 + 4);
    if ( !v11 && (v10[18] & 7) == 0 )
    {
      *(GUID *)(v10 + 24) = GUID_00000003_0000_0010_8000_00aa00389b71;
      *((_WORD *)v10 + 9) = 32;
LABEL_107:
      *((_WORD *)v10 + 7) = 32;
      v38 = (unsigned __int16)(4 * *((_WORD *)v10 + 1));
      *((_WORD *)v10 + 6) = v38;
      *((_DWORD *)v10 + 2) = v38 * *((_DWORD *)v10 + 1);
    }
  }
  Converter = CAudioMediaType::Create(
                (const struct tWAVEFORMATEX *)v10,
                (unsigned int)*((unsigned __int16 *)v10 + 8) + 18,
                v79,
                0.0,
                0);
  CoTaskMemFree(v10);
  if ( Converter < 0 )
    goto LABEL_57;
  v12 = *((_QWORD *)v1 + 2);
  v63 = v12;
  if ( !v12 )
LABEL_278:
    ATL::AtlThrowImpl(-2147467259);
  v13 = *(_QWORD **)v12;
  v63 = *(_QWORD *)v12;
  v14 = *(unsigned int **)(v12 + 16);
  v62 = v14;
  Converter = (*(__int64 (__fastcall **)(unsigned int *, struct IAudioMediaType **))(*(_QWORD *)v14 + 16LL))(v14, &v58);
  if ( Converter < 0 )
    goto LABEL_57;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids, v1);
  }
  while ( 1 )
  {
    if ( !v13 )
    {
      (*(void (__fastcall **)(unsigned int *, struct IAudioMediaType *))(*(_QWORD *)v14 + 32LL))(v14, v58);
      goto LABEL_56;
    }
    v59 = 0LL;
    v57 = 0LL;
    v67 = v13;
    v15 = (_QWORD *)v13[2];
    v13 = (_QWORD *)*v13;
    v63 = (__int64)v13;
    v74 = v15;
    v16 = 0;
    v60 = 0;
    if ( *((_DWORD *)v15 + 10) != 2 )
      break;
    v17 = v15[4];
    v79[1] = (struct IAudioMediaType *)v17;
    v18 = *(_DWORD *)(v17 + 4);
    LOBYTE(v16) = v18 != 0;
    v60 = v16;
    if ( !*(_QWORD *)(v17 + 40) )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 30) + 24LL))(
              *((_QWORD *)this + 30),
              v17 + 8,
              v18,
              *((_QWORD *)this + 24),
              v17 + 40);
      Converter = v19;
      if ( v19 < 0 )
      {
        if ( v19 == -2147024882 )
        {
          if ( v57 )
            ((void (__fastcall *)(struct IAudioMediaType *))v57->lpVtbl->Release)(v57);
          if ( v59 )
            ((void (__fastcall *)(struct IAudioMediaType *))v59->lpVtbl->Release)(v59);
          v1 = this;
          goto LABEL_56;
        }
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) == 0 )
        {
          v39 = (__int128 *)(v17 + 8);
        }
        else
        {
          v39 = (__int128 *)(v17 + 8);
          if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            WPP_SF__guid_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              29LL,
              &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids,
              v17 + 8);
        }
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)this + 16, v67);
        if ( v18 )
        {
          v55 = 1;
          v65 = *(_DWORD *)(v17 + 4);
          v85 = *v39;
        }
        v14 = v62;
        goto LABEL_29;
      }
      if ( !v18 )
        goto LABEL_21;
      v66 = 0LL;
      Converter = CoCreateInstance(
                    &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                    0LL,
                    0x17u,
                    &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                    &v78);
      if ( Converter < 0 )
      {
        if ( v66 )
          ((void (__fastcall *)(struct IMMDevice *))v66->lpVtbl->Release)(v66);
        if ( v57 )
          ((void (__fastcall *)(struct IAudioMediaType *))v57->lpVtbl->Release)(v57);
        if ( v59 )
          ((void (__fastcall *)(struct IAudioMediaType *))v59->lpVtbl->Release)(v59);
        v1 = this;
        goto LABEL_56;
      }
      Converter = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(*(_QWORD *)v78 + 40LL))(
                    v78,
                    *((_QWORD *)this + 24),
                    &v66);
      if ( Converter < 0 )
      {
        if ( v66 )
          ((void (__fastcall *)(struct IMMDevice *))v66->lpVtbl->Release)(v66);
        if ( v57 )
          ((void (__fastcall *)(struct IAudioMediaType *))v57->lpVtbl->Release)(v57);
        if ( v59 )
          ((void (__fastcall *)(struct IAudioMediaType *))v59->lpVtbl->Release)(v59);
        v1 = this;
        goto LABEL_56;
      }
      v80 = *(struct _GUID *)(v17 + 24);
      v32 = InitializeSystemEffectsInterface(
              v66,
              *(struct IAudioProcessingObject **)(v17 + 40),
              (struct _GUID *)(v17 + 8),
              &v80,
              ppv,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)this + 32));
      Converter = v32;
      if ( v32 < 0 )
      {
        if ( v32 == -2147024882 )
        {
          if ( v66 )
            ((void (__fastcall *)(struct IMMDevice *))v66->lpVtbl->Release)(v66);
          if ( v57 )
            ((void (__fastcall *)(struct IAudioMediaType *))v57->lpVtbl->Release)(v57);
          if ( v59 )
            ((void (__fastcall *)(struct IAudioMediaType *))v59->lpVtbl->Release)(v59);
          v1 = this;
          goto LABEL_56;
        }
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) == 0 )
        {
          v40 = (__int128 *)(v17 + 8);
        }
        else
        {
          v40 = (__int128 *)(v17 + 8);
          if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            WPP_SF__guid_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              30LL,
              &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids,
              v17 + 8);
        }
        v1 = this;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 30) + 32LL))(
               *((_QWORD *)this + 30),
               *(_QWORD *)(v17 + 40)) < 0 )
        {
          if ( v66 )
            ((void (__fastcall *)(struct IMMDevice *))v66->lpVtbl->Release)(v66);
          if ( v57 )
            ((void (__fastcall *)(struct IAudioMediaType *))v57->lpVtbl->Release)(v57);
          if ( v59 )
            ((void (__fastcall *)(struct IAudioMediaType *))v59->lpVtbl->Release)(v59);
          goto LABEL_56;
        }
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)this + 16, v67);
        v55 = 1;
        v65 = *(_DWORD *)(v17 + 4);
        v85 = *v40;
        if ( v66 )
          ((void (__fastcall *)(struct IMMDevice *))v66->lpVtbl->Release)(v66);
        v14 = v62;
        goto LABEL_29;
      }
      if ( v66 )
        ((void (__fastcall *)(struct IMMDevice *))v66->lpVtbl->Release)(v66);
    }
    if ( v18 && *(_DWORD *)(v17 + 4) && *(_DWORD *)(v17 + 48) )
    {
      Converter = (*(__int64 (__fastcall **)(_QWORD *, struct IAudioMediaType *, struct IAudioMediaType **, _QWORD))(*v15 + 40LL))(
                    v15,
                    v58,
                    &v57,
                    v64[0]);
      if ( Converter == -2005073917 )
      {
        if ( *((_DWORD *)v15 + 6) != 1 )
          goto LABEL_189;
        ATL::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>(
          &v72,
          *(_QWORD *)(v17 + 40));
        v71 = 0;
        if ( v72 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v72 + 24LL))(v72, &v71) >= 0 && (v71 & 1) != 0 )
        {
          v41 = 0LL;
          v61 = 0LL;
          v70 = 0LL;
          Converter = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IAudioMediaType *, __int64 *))(**(_QWORD **)(v17 + 40) + 56LL))(
                        *(_QWORD *)(v17 + 40),
                        0LL,
                        v58,
                        &v70);
          if ( Converter >= 0 )
          {
            v42 = *((_DWORD *)v15 + 6);
            v43 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 40LL))(v70);
            Converter = CProcessNode::CreateDummyProcessNode(v42, v43, &v61);
            if ( Converter >= 0 )
            {
              v81 = v61;
              v13 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                                (char *)this + 16,
                                v67,
                                &v81);
              v63 = (__int64)v13;
              v61 = 0LL;
              v44 = *((_DWORD *)v15 + 6);
              v45 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v64[0] + 40LL))(v64[0]);
              Converter = CProcessNode::CreateDummyProcessNode(v44, v45, &v61);
              if ( Converter >= 0 )
              {
                Converter = 0;
                v82 = v61;
                v63 = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                        (char *)this + 16,
                        v13,
                        &v82);
                v14 = v62;
                v61 = 0LL;
                *((_DWORD *)this + 34) |= 6u;
                *(_DWORD *)(v17 + 48) = 0;
                v13 = v67;
                v63 = (__int64)v67;
                if ( v70 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
                v61 = 0LL;
                if ( v72 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
                goto LABEL_29;
              }
            }
            v41 = v61;
          }
          if ( v70 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
          if ( v41 )
            (**v41)(v41, 1LL);
          v61 = 0LL;
        }
        if ( v72 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
      }
      if ( Converter < 0 )
      {
        if ( Converter == -2147024882 )
        {
          if ( v57 )
            ((void (__fastcall *)(struct IAudioMediaType *))v57->lpVtbl->Release)(v57);
          if ( v59 )
            ((void (__fastcall *)(struct IAudioMediaType *))v59->lpVtbl->Release)(v59);
          v1 = this;
          goto LABEL_56;
        }
LABEL_189:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF__guid_(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            31LL,
            &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids,
            v17 + 8);
        }
        v1 = this;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 30) + 32LL))(
               *((_QWORD *)this + 30),
               *(_QWORD *)(v17 + 40)) < 0 )
        {
          if ( v57 )
            ((void (__fastcall *)(struct IAudioMediaType *))v57->lpVtbl->Release)(v57);
          if ( v59 )
            ((void (__fastcall *)(struct IAudioMediaType *))v59->lpVtbl->Release)(v59);
          goto LABEL_56;
        }
        if ( Converter != -2005073917 )
        {
          v55 = 1;
          v65 = *(_DWORD *)(v17 + 4);
          v85 = *(_OWORD *)(v17 + 8);
        }
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)this + 16, v67);
        v14 = v62;
        goto LABEL_29;
      }
      goto LABEL_22;
    }
LABEL_21:
    Converter = (*(__int64 (__fastcall **)(_QWORD *, struct IAudioMediaType *, struct IAudioMediaType **, _QWORD))(*v15 + 40LL))(
                  v15,
                  v58,
                  &v57,
                  0LL);
    if ( Converter < 0 )
    {
      if ( v57 )
        ((void (__fastcall *)(struct IAudioMediaType *))v57->lpVtbl->Release)(v57);
      if ( v59 )
        ((void (__fastcall *)(struct IAudioMediaType *))v59->lpVtbl->Release)(v59);
      v1 = this;
      goto LABEL_56;
    }
LABEL_22:
    v60 = v16;
    v14 = v62;
LABEL_23:
    if ( Converter != 1 )
    {
      if ( Converter )
        goto LABEL_26;
      (*(void (__fastcall **)(_QWORD *, struct IAudioMediaType *))(*v15 + 24LL))(v15, v58);
      (*(void (__fastcall **)(unsigned int *, struct IAudioMediaType *))(*(_QWORD *)v14 + 32LL))(v14, v58);
      if ( !v16 )
        goto LABEL_26;
      v33 = v15[4];
      if ( !*(_DWORD *)(v33 + 4) || !*(_DWORD *)(v33 + 48) )
        goto LABEL_26;
      v20 = (__int64)v58;
      if ( v58 )
      {
        v58 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        v20 = (__int64)v58;
      }
      v34 = v64[0];
      if ( v20 != v64[0] )
      {
        if ( v64[0] )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v64[0] + 8LL))(v64[0]);
          v20 = (__int64)v58;
        }
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        v20 = v34;
        v58 = (struct IAudioMediaType *)v34;
      }
      goto LABEL_27;
    }
    v23 = (*(__int64 (__fastcall **)(unsigned int *, struct IAudioMediaType *, struct IAudioMediaType **, _QWORD))(*(_QWORD *)v14 + 48LL))(
            v14,
            v57,
            &v59,
            0LL);
    Converter = v23;
    if ( v23 < 0 )
    {
      if ( v57 )
        ((void (__fastcall *)(struct IAudioMediaType *))v57->lpVtbl->Release)(v57);
      if ( v59 )
        ((void (__fastcall *)(struct IAudioMediaType *))v59->lpVtbl->Release)(v59);
      v1 = this;
      goto LABEL_56;
    }
    if ( !v23 )
    {
      v35 = v58;
      if ( v58 )
      {
        v58 = 0LL;
        ((void (__fastcall *)(struct IAudioMediaType *))v35->lpVtbl->Release)(v35);
        v35 = v58;
      }
      v36 = v57;
      if ( v35 != v57 )
      {
        if ( v57 )
        {
          ((void (__fastcall *)(struct IAudioMediaType *))v57->lpVtbl->AddRef)(v57);
          v35 = v58;
        }
        if ( v35 )
          ((void (__fastcall *)(struct IAudioMediaType *))v35->lpVtbl->Release)(v35);
        v58 = v36;
      }
      (*(void (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
      (*(void (__fastcall **)(unsigned int *, struct IAudioMediaType *))(*(_QWORD *)v14 + 32LL))(v14, v58);
      if ( v16 )
      {
        v46 = v15[4];
        if ( *(_DWORD *)(v46 + 4) )
        {
          if ( *(_DWORD *)(v46 + 48) )
          {
            Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v58);
            ATL::CComPtr<IAudioMediaType>::operator=((__int64 *)&v58, v64);
          }
        }
      }
LABEL_26:
      v20 = (__int64)v58;
LABEL_27:
      if ( (*((_BYTE *)this + 136) & 8) != 0 )
      {
        v47 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v79[0]->lpVtbl->GetAudioFormat)(v79[0]);
        v48 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 40LL))(v20);
        if ( (unsigned int)CompareWaveFormat(v48, v47) )
        {
          v68 = 0LL;
          Converter = (*(__int64 (__fastcall **)(_QWORD *, struct IAudioMediaType **))(*v15 + 8LL))(v15, &v68);
          if ( Converter >= 0 )
          {
            v1 = this;
            Converter = CPipeInstance::FindConverter(this, v68, v68, &v76, &v84);
            if ( Converter >= 0 )
            {
              v80 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
              Converter = CAPOProcessNode::CreateAPOProcessNode(&v84, 0LL, v62[6], (unsigned int)v76, 0, &v80);
              if ( Converter >= 0 )
              {
                v83[0] = (__int64)v69;
                v63 = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                        (char *)this + 16,
                        v67,
                        v83);
                JUMPOUT(0x14002A856LL);
              }
              if ( v68 )
                ((void (__fastcall *)(struct IAudioMediaType *))v68->lpVtbl->Release)(v68);
              if ( v57 )
                ((void (__fastcall *)(struct IAudioMediaType *))v57->lpVtbl->Release)(v57);
              if ( v59 )
                ((void (__fastcall *)(struct IAudioMediaType *))v59->lpVtbl->Release)(v59);
            }
            else
            {
              if ( v68 )
                ((void (__fastcall *)(struct IAudioMediaType *))v68->lpVtbl->Release)(v68);
              if ( v57 )
                ((void (__fastcall *)(struct IAudioMediaType *))v57->lpVtbl->Release)(v57);
              if ( v59 )
                ((void (__fastcall *)(struct IAudioMediaType *))v59->lpVtbl->Release)(v59);
            }
          }
          else
          {
            if ( v68 )
              ((void (__fastcall *)(struct IAudioMediaType *))v68->lpVtbl->Release)(v68);
            if ( v57 )
              ((void (__fastcall *)(struct IAudioMediaType *))v57->lpVtbl->Release)(v57);
            if ( v59 )
              ((void (__fastcall *)(struct IAudioMediaType *))v59->lpVtbl->Release)(v59);
            v1 = this;
          }
          goto LABEL_56;
        }
      }
      v14 = (unsigned int *)v15;
      v62 = (unsigned int *)v15;
      goto LABEL_29;
    }
    if ( v23 != 1 )
      goto LABEL_26;
    v24 = v58;
    if ( v58 )
    {
      v58 = 0LL;
      ((void (__fastcall *)(struct IAudioMediaType *))v24->lpVtbl->Release)(v24);
      v24 = v58;
    }
    v25 = v59;
    if ( v24 != v59 )
    {
      if ( v59 )
      {
        ((void (__fastcall *)(struct IAudioMediaType *))v59->lpVtbl->AddRef)(v59);
        v24 = v58;
      }
      if ( v24 )
        ((void (__fastcall *)(struct IAudioMediaType *))v24->lpVtbl->Release)(v24);
      v24 = v25;
      v58 = v25;
    }
    v1 = this;
    Converter = CPipeInstance::FindConverter(this, v24, v57, &v75, &v84);
    if ( Converter < 0 )
    {
      if ( v57 )
        ((void (__fastcall *)(struct IAudioMediaType *))v57->lpVtbl->Release)(v57);
      if ( v59 )
        ((void (__fastcall *)(struct IAudioMediaType *))v59->lpVtbl->Release)(v59);
      goto LABEL_56;
    }
    v80 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    Converter = CAPOProcessNode::CreateAPOProcessNode(&v84, 0LL, v14[6], (unsigned int)v75, 0, &v80);
    if ( Converter < 0 )
    {
      if ( v57 )
        ((void (__fastcall *)(struct IAudioMediaType *))v57->lpVtbl->Release)(v57);
      if ( v59 )
        ((void (__fastcall *)(struct IAudioMediaType *))v59->lpVtbl->Release)(v59);
      goto LABEL_56;
    }
    Converter = 0;
    v26 = v69;
    v74 = v69;
    v74 = (_QWORD *)v67[1];
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((char *)this + 16);
    v13 = (_QWORD *)*((_QWORD *)this + 6);
    v27 = (_QWORD *)*v13;
    v13[2] = v26;
    *((_QWORD *)this + 6) = v27;
    v13[1] = v74;
    v28 = v67;
    *v13 = v67;
    ++*((_QWORD *)this + 4);
    v29 = (_QWORD *)v28[1];
    if ( v29 )
      *v29 = v13;
    else
      *((_QWORD *)this + 2) = v13;
    v28[1] = v13;
    v63 = (__int64)v13;
    v69 = 0LL;
LABEL_29:
    if ( Converter < 0 && v16 )
    {
      v49 = v14[6];
      v50 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v64[0] + 40LL))(v64[0]);
      v51 = CProcessNode::CreateDummyProcessNode(v49, v50, &v73);
      if ( v51 < 0 )
      {
        pExceptionObject = v51;
        throw (long *)&pExceptionObject;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v73 + 24LL))(v73, v64[0]);
      v63 = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
              (char *)this + 16,
              v13,
              &v73);
      JUMPOUT(0x14002A9B7LL);
    }
    v21 = v57;
    if ( v57 )
    {
      v57 = 0LL;
      ((void (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->Release)(v21);
    }
    v22 = v59;
    if ( v59 )
    {
      v59 = 0LL;
      ((void (__fastcall *)(struct IAudioMediaType *))v22->lpVtbl->Release)(v22);
    }
    if ( v57 )
      ((void (__fastcall *)(struct IAudioMediaType *))v57->lpVtbl->Release)(v57);
    if ( v59 )
      ((void (__fastcall *)(struct IAudioMediaType *))v59->lpVtbl->Release)(v59);
    v1 = this;
  }
  Converter = (*(__int64 (__fastcall **)(_QWORD *, struct IAudioMediaType *, struct IAudioMediaType **, _QWORD))(*v15 + 40LL))(
                v15,
                v58,
                &v57,
                0LL);
  if ( Converter >= 0 )
    goto LABEL_23;
  if ( v57 )
    ((void (__fastcall *)(struct IAudioMediaType *))v57->lpVtbl->Release)(v57);
  if ( v59 )
    ((void (__fastcall *)(struct IAudioMediaType *))v59->lpVtbl->Release)(v59);
  v1 = this;
LABEL_56:
  if ( !v55 || (v52 = TrackSystemEffectBehavior(*((_QWORD *)v1 + 24), v65, 0, 0), v52 >= 0) )
  {
LABEL_57:
    v30 = WPP_GLOBAL_Control;
    goto LABEL_58;
  }
  v30 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        32LL,
        &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids,
        (unsigned int)v52);
      goto LABEL_57;
    }
LABEL_58:
    if ( v30 != &WPP_GLOBAL_Control && (*((_DWORD *)v30 + 7) & 0x20000) != 0 && *((_BYTE *)v30 + 25) >= 4u )
    {
      v53 = "SUCCEEDED";
      if ( Converter < 0 )
        v53 = "FAILED";
      WPP_SF_qs(v30[2], 33, v5, (_DWORD)v1, (__int64)v53);
      v30 = WPP_GLOBAL_Control;
    }
  }
  if ( Converter < 0 )
  {
    if ( v30 != &WPP_GLOBAL_Control && (*((_DWORD *)v30 + 7) & 0x20000) != 0 && *((_BYTE *)v30 + 25) >= 2u )
      WPP_SF_D(v30[2], 34LL, &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids, (unsigned int)Converter);
    AudDGTraceLoggingErrorHelper("CPipeInstance::ResolveFormatConflictsLeftRight", 0x868u, Converter);
  }
  if ( v78 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v78 + 16LL))(v78);
  if ( v79[0] )
    ((void (__fastcall *)(struct IAudioMediaType *))v79[0]->lpVtbl->Release)(v79[0]);
  if ( v64[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v64[0] + 16LL))(v64[0]);
  if ( v58 )
    ((void (__fastcall *)(struct IAudioMediaType *))v58->lpVtbl->Release)(v58);
  return (unsigned int)Converter;
}
