/*
 * XREFs of ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800164D0
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180016460 (-HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x180016E7C (--1HitTestResult@@QEAA@XZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001B304 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ??$MakeAndInitialize@VInputSiteHierarchyManager@@UIInputSiteHierarchyManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInputSiteHierarchyManager@@@Z @ 0x18001ECA8 (--$MakeAndInitialize@VInputSiteHierarchyManager@@UIInputSiteHierarchyManager@@$$V@Details@WRL@Mi.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180027E10 (-IsEdition@@YA_N_K@Z.c)
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180030DF8 (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x1800334A8 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180044FF0 (-GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA-AV-$ComPtr@VInputSite@@@WRL@M.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@@Z @ 0x180049454 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180068408 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??0bad_optional_access@std@@QEAA@XZ @ 0x18006DFAC (--0bad_optional_access@std@@QEAA@XZ.c)
 *     ?IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BD3F0 (-IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800F127C (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180149834 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall DWMInputRouter::HitTest(
        DWMInputRouter *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3,
        struct InputContext *a4,
        struct IInputBuffer *a5,
        struct IInputTarget **a6)
{
  unsigned int v9; // esi
  struct InputSystemServerConnection *v11; // rax
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  struct InputSystemServerConnection **v14; // rax
  struct InputSystemServerConnection *v15; // rcx
  Microsoft::Bamo::BaseBamoConnection *v16; // rcx
  __int64 v17; // rax
  struct IInputSiteHierarchyManager *v18; // rcx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  struct std::nothrow_t *v21; // rcx
  char *v22; // rbx
  void *WeakInputSinkHandle; // rax
  int v24; // r13d
  int v25; // edi
  __int64 *v26; // r12
  int v27; // eax
  __int64 *v28; // r14
  __int64 v29; // rax
  struct std::nothrow_t *v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // r15
  int (__fastcall ***v33)(_QWORD, GUID *, struct std::nothrow_t **); // rdi
  int (__fastcall *v34)(_QWORD, GUID *, struct std::nothrow_t **); // r14
  int v35; // ebx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned int v37; // edi
  struct _InputHitTestResult *v38; // r15
  Microsoft::Bamo::BaseBamoConnection *v39; // rax
  char v40; // r13
  int v41; // ebx
  __int64 *v42; // r13
  __int64 v43; // rax
  struct std::nothrow_t *v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // r12
  int (__fastcall ***v47)(_QWORD, GUID *, struct std::nothrow_t **); // r14
  int (__fastcall *v48)(_QWORD, GUID *, struct std::nothrow_t **); // r15
  struct _InputHitTestRequest *v49; // r14
  __int64 v50; // rax
  __int64 v51; // rdi
  const char *v52; // r9
  int v53; // ecx
  int v54; // eax
  struct InputContext *v55; // rcx
  char *v56; // rbx
  char v57; // r12
  _QWORD **v58; // rax
  _QWORD *v59; // rdi
  __int64 v60; // rcx
  __int64 *v61; // r14
  __int64 *v62; // r15
  __int64 *v63; // rbx
  __int64 v64; // rcx
  struct std::nothrow_t *v65; // rdx
  int v66; // eax
  int v67; // ebx
  int v68; // eax
  int v69; // [rsp+20h] [rbp-E0h]
  struct std::nothrow_t *v70; // [rsp+30h] [rbp-D0h] BYREF
  char v71; // [rsp+38h] [rbp-C8h]
  Microsoft::Bamo::BaseBamoConnection *v72; // [rsp+40h] [rbp-C0h] BYREF
  void *v73; // [rsp+48h] [rbp-B8h] BYREF
  struct _InputHitTestResult *v74; // [rsp+50h] [rbp-B0h]
  struct InputContext *v75; // [rsp+58h] [rbp-A8h]
  struct _InputHitTestRequest *v76; // [rsp+60h] [rbp-A0h]
  struct IInputTarget **v77; // [rsp+68h] [rbp-98h]
  struct IInputBuffer *v78; // [rsp+70h] [rbp-90h]
  DWMInputRouter *v79; // [rsp+78h] [rbp-88h]
  __int128 pExceptionObject; // [rsp+80h] [rbp-80h] BYREF
  __int64 v81; // [rsp+90h] [rbp-70h]
  __int128 v82; // [rsp+98h] [rbp-68h] BYREF
  __int64 v83; // [rsp+A8h] [rbp-58h]
  int v84; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v85; // [rsp+B4h] [rbp-4Ch]
  __int128 v86; // [rsp+BCh] [rbp-44h]
  __int128 v87; // [rsp+CCh] [rbp-34h]
  __int128 v88; // [rsp+DCh] [rbp-24h]
  __int128 v89; // [rsp+ECh] [rbp-14h]
  __int128 v90; // [rsp+FCh] [rbp-4h]
  __int128 v91; // [rsp+10Ch] [rbp+Ch]
  __int64 v92; // [rsp+11Ch] [rbp+1Ch]
  int v93; // [rsp+124h] [rbp+24h]
  int v94; // [rsp+128h] [rbp+28h]
  __int64 v95; // [rsp+12Ch] [rbp+2Ch]
  int v96; // [rsp+134h] [rbp+34h]
  char v97[8]; // [rsp+140h] [rbp+40h] BYREF
  __int64 *v98; // [rsp+148h] [rbp+48h] BYREF
  __int128 v99; // [rsp+150h] [rbp+50h]
  __int64 v100; // [rsp+160h] [rbp+60h]
  __int128 v101; // [rsp+168h] [rbp+68h]
  __int128 v102; // [rsp+178h] [rbp+78h]
  __int128 v103; // [rsp+188h] [rbp+88h]
  __int128 v104; // [rsp+198h] [rbp+98h]
  __int64 v105; // [rsp+1A8h] [rbp+A8h]
  char v106; // [rsp+1B0h] [rbp+B0h]
  int v107; // [rsp+1B4h] [rbp+B4h]
  _DWORD v108[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v109; // [rsp+1D0h] [rbp+D0h]
  int v110; // [rsp+1D8h] [rbp+D8h]
  int v111; // [rsp+1DCh] [rbp+DCh]
  int v112; // [rsp+1E0h] [rbp+E0h]
  __int16 v113; // [rsp+1E4h] [rbp+E4h]
  __int16 v114; // [rsp+1E6h] [rbp+E6h]
  int v115; // [rsp+1E8h] [rbp+E8h]
  __int64 v116; // [rsp+1ECh] [rbp+ECh]
  int v117; // [rsp+1F4h] [rbp+F4h]
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  v75 = a4;
  v74 = a3;
  v76 = a2;
  v79 = this;
  v78 = a5;
  v77 = a6;
  v9 = 0;
  LODWORD(v72) = 0;
  if ( !a6 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80070057LL,
      v69);
    return 2147942487LL;
  }
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v96 = 0;
  v84 = *(_DWORD *)a2;
  v85 = *(_QWORD *)((char *)a2 + 20);
  v93 = *((_DWORD *)a2 + 32);
  v94 = *((_DWORD *)a2 + 33);
  v95 = *((_QWORD *)a2 + 17);
  v11 = ISMStatics::s_inputSystemBamoConnection;
  if ( !ISMStatics::s_inputSystemBamoConnection )
  {
    v70 = 0LL;
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v70);
    v12 = CoreUICreate(&v70);
    v13 = retaddr;
    if ( v12 < 0 )
    {
LABEL_120:
      wil::details::in1diag3::FailFast_Hr(
        v13,
        (void *)0x3B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
        (const char *)(unsigned int)v12,
        v69);
      goto LABEL_121;
    }
    v14 = (struct InputSystemServerConnection **)InputSystemServerConnection::Create((unsigned int)&v72);
    v15 = *v14;
    *v14 = 0LL;
    ISMStatics::s_inputSystemBamoConnection = v15;
    v16 = v72;
    if ( v72 )
    {
      v72 = 0LL;
      Microsoft::Bamo::BaseBamoConnection::Release(v16);
    }
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v70);
    v11 = ISMStatics::s_inputSystemBamoConnection;
  }
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v11 + 23) + 8LL) + 136LL))(*((_QWORD *)v11 + 23) + 8LL);
  HitTestHelper::HitTestRequestWithRetry(v97, &v84, *((_QWORD *)this + 23), v17);
  v18 = ISMStatics::s_inputSiteHierarchyManager;
  if ( !ISMStatics::s_inputSiteHierarchyManager )
  {
    v70 = 0LL;
    LODWORD(v72) = 2;
    v19 = Microsoft::WRL::Details::MakeAndInitialize<InputSiteHierarchyManager,IInputSiteHierarchyManager,>(&v70);
    v20 = retaddr;
    if ( v19 < 0 )
    {
LABEL_121:
      wil::details::in1diag3::FailFast_Hr(
        v20,
        (void *)0xE,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsitehierarchymanager.cpp",
        (const char *)(unsigned int)v19,
        v69);
LABEL_122:
      pExceptionObject = 0LL;
      v81 = 0LL;
      std::bad_optional_access::bad_optional_access((std::bad_optional_access *)&pExceptionObject);
      throw (std::bad_optional_access *)&pExceptionObject;
    }
    v18 = v70;
    v70 = 0LL;
    ISMStatics::s_inputSiteHierarchyManager = v18;
  }
  (*(void (__fastcall **)(struct IInputSiteHierarchyManager *))(*(_QWORD *)v18 + 40LL))(v18);
  if ( !v97[0] )
  {
    v9 = -2147467259;
    goto LABEL_118;
  }
  *(_QWORD *)a3 = *(_QWORD *)((char *)a2 + 20);
  *((_QWORD *)a3 + 1) = v105;
  *(_OWORD *)((char *)a3 + 24) = v101;
  *(_OWORD *)((char *)a3 + 40) = v102;
  *(_OWORD *)((char *)a3 + 56) = v103;
  *(_OWORD *)((char *)a3 + 72) = v104;
  *((_DWORD *)a3 + 22) = v107;
  LODWORD(v73) = 0;
  InputSiteManager::GetInputSiteForLeafmostViewFromInputSiteList(&v70, &v98);
  v21 = v70;
  if ( v70 )
  {
    v22 = (char *)v70 + 32;
    if ( !*((_BYTE *)v70 + 392) )
      goto LABEL_122;
    if ( !*((_BYTE *)v70 + 52) )
    {
      LODWORD(v73) = 0;
      WeakInputSinkHandle = LegacyInputSinkData::GetWeakInputSinkHandle((struct std::nothrow_t *)((char *)v70 + 32));
      NtQueryCompositionInputSinkViewId(WeakInputSinkHandle, &v73);
      LODWORD(v72) = (_DWORD)v73;
      BYTE4(v72) = 1;
      *((_QWORD *)v22 + 2) = v72;
      v21 = v70;
      if ( !v22[20] )
      {
        v82 = 0LL;
        v83 = 0LL;
        std::bad_optional_access::bad_optional_access((std::bad_optional_access *)&v82);
        throw (std::bad_optional_access *)&v82;
      }
    }
    LODWORD(v73) = *((_DWORD *)v22 + 4);
  }
  if ( v21 )
  {
    v70 = 0LL;
    (*(void (__fastcall **)(struct std::nothrow_t *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v24 = 0;
  v25 = 0;
  LODWORD(v72) = 0;
  v26 = v98;
  v27 = 1;
  v28 = (__int64 *)v99;
  if ( v98 == (__int64 *)v99 )
    goto LABEL_40;
  while ( 1 )
  {
    v29 = *v26;
    v30 = 0LL;
    v70 = 0LL;
    v31 = *(_QWORD *)(v29 + 400);
    v32 = *(_QWORD *)(v29 + 408);
    if ( v31 != v32 )
    {
      while ( 1 )
      {
        v33 = *(int (__fastcall ****)(_QWORD, GUID *, struct std::nothrow_t **))(v31 + 8);
        v34 = **v33;
        if ( v30 )
        {
          v70 = 0LL;
          (*(void (__fastcall **)(struct std::nothrow_t *))(*(_QWORD *)v30 + 16LL))(v30);
        }
        if ( v34(v33, &GUID_4753c172_9138_4064_8603_1556e98a010f, &v70) >= 0 )
          break;
        v31 += 16LL;
        if ( v31 == v32 )
          break;
        v30 = v70;
      }
      v30 = v70;
      v25 = (int)v72;
      v28 = (__int64 *)v99;
    }
    if ( v30 )
    {
      if ( !v24 )
      {
        v24 = (*(__int64 (__fastcall **)(struct std::nothrow_t *))(*(_QWORD *)v30 + 24LL))(v30);
        v30 = v70;
      }
      if ( !v25 )
      {
        v25 = (*(__int64 (__fastcall **)(struct std::nothrow_t *))(*(_QWORD *)v30 + 32LL))(v30);
        LODWORD(v72) = v25;
        v30 = v70;
      }
      if ( v24 && v25 )
        break;
    }
    if ( v30 )
    {
      v70 = 0LL;
      (*(void (__fastcall **)(struct std::nothrow_t *))(*(_QWORD *)v30 + 16LL))(v30);
    }
    if ( ++v26 == v28 )
      goto LABEL_39;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v70);
LABEL_39:
  v27 = 1;
  if ( !v24 )
LABEL_40:
    v24 = 1;
  if ( !v25 )
    v25 = 2;
  if ( v24 != 2 )
  {
    v27 = 0;
    if ( v24 == 3 )
      v27 = 2;
  }
  v35 = v27 | 4;
  if ( v25 != 1 )
    v35 = v27;
  if ( IsEdition(0x1C000uLL) && (v35 & 2) != 0 )
  {
    v35 &= ~2u;
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    v37 = (unsigned int)v73;
    if ( ViewHelper::IsViewPartOfForegroundApplication(ViewHierarchy, (unsigned int)v73) )
      v35 |= 1u;
  }
  else
  {
    v37 = (unsigned int)v73;
  }
  v38 = v74;
  *((_QWORD *)v74 + 12) = v37;
  *((_DWORD *)v38 + 26) = v35;
  v39 = (struct _InputHitTestResult *)((char *)v38 + 112);
  v72 = (struct _InputHitTestResult *)((char *)v38 + 112);
  if ( v38 == (struct _InputHitTestResult *)-112LL )
  {
    v40 = 0;
  }
  else
  {
    v41 = 0;
    v71 = 0;
    v42 = v98;
    if ( v98 != v28 )
    {
      do
      {
        v43 = *v42;
        v44 = 0LL;
        v70 = 0LL;
        v45 = *(_QWORD *)(v43 + 400);
        v46 = *(_QWORD *)(v43 + 408);
        if ( v45 != v46 )
        {
          while ( 1 )
          {
            v47 = *(int (__fastcall ****)(_QWORD, GUID *, struct std::nothrow_t **))(v45 + 8);
            v48 = **v47;
            if ( v44 )
            {
              v70 = 0LL;
              (*(void (__fastcall **)(struct std::nothrow_t *))(*(_QWORD *)v44 + 16LL))(v44);
            }
            if ( v48(v47, &GUID_8ddffe9c_458e_6d51_c227_1374408f672c, &v70) >= 0 )
              break;
            v45 += 16LL;
            if ( v45 == v46 )
              break;
            v44 = v70;
          }
          v44 = v70;
          v28 = (__int64 *)v99;
        }
        if ( v44 )
        {
          v41 = *(_DWORD *)(*(__int64 (__fastcall **)(struct std::nothrow_t *))(*(_QWORD *)v44 + 32LL))(v44);
          v71 = 1;
          v44 = v70;
        }
        if ( v44 )
        {
          v70 = 0LL;
          (*(void (__fastcall **)(struct std::nothrow_t *))(*(_QWORD *)v44 + 16LL))(v44);
        }
        ++v42;
      }
      while ( v42 != v28 );
      v39 = v72;
      v38 = v74;
    }
    *(_DWORD *)v39 = v41;
    v40 = v71;
  }
  v49 = v76;
  if ( *(_DWORD *)v76 == 2 || *(_DWORD *)v76 == 3 || (unsigned int)(*(_DWORD *)v76 - 4) < 2 )
  {
    LODWORD(v72) = 0;
    v51 = v100;
    if ( (unsigned __int64)(v100 - 1) > 0xFFFFFFFFFFFFFFFDuLL || (int)NtDuplicateCompositionInputSink(v100) >= 0 )
    {
      v108[3] = 0;
      v114 = 0;
      v117 = 0;
      v111 = *(_DWORD *)v49;
      switch ( v111 )
      {
        case 2:
          v53 = 8;
          break;
        case 3:
          v53 = 16;
          break;
        case 4:
          v53 = 2;
          break;
        case 5:
          v53 = 0x2000000;
          if ( !*((_DWORD *)v49 + 4) )
            v53 = 32;
          break;
        default:
          v53 = 0;
          break;
      }
      v108[0] = v53;
      v108[1] = *((_DWORD *)v49 + 8);
      v108[2] = *((_DWORD *)v49 + 10);
      v109 = *((_QWORD *)v49 + 6);
      v110 = *((_DWORD *)v49 + 33);
      v116 = *(_QWORD *)((char *)v49 + 20);
      v112 = *((_DWORD *)v49 + 1);
      v113 = *((_WORD *)v49 + 4);
      v54 = *((_DWORD *)v49 + 3);
      if ( v53 == 2 )
        v54 = 1;
      v115 = v54;
      v55 = v75;
      *((_DWORD *)v75 + 24) = *((_DWORD *)v38 + 26);
      *((_QWORD *)v55 + 11) = *((_QWORD *)v38 + 12);
      v56 = (char *)operator new(0x78uLL);
      *v56 = v97[0];
      *((_QWORD *)v56 + 1) = v98;
      *((_OWORD *)v56 + 1) = v99;
      v98 = 0LL;
      v99 = 0LL;
      *((_QWORD *)v56 + 4) = v51;
      v100 = 0LL;
      *(_OWORD *)(v56 + 40) = v101;
      *(_OWORD *)(v56 + 56) = v102;
      *(_OWORD *)(v56 + 72) = v103;
      *(_OWORD *)(v56 + 88) = v104;
      *((_QWORD *)v56 + 13) = v105;
      v57 = v106;
      v56[112] = v106;
      *((_DWORD *)v56 + 29) = v107;
      v58 = (_QWORD **)((char *)v75 + 176);
      if ( (struct std::nothrow_t **)((char *)v75 + 176) == &v70 )
      {
        HitTestResult::~HitTestResult((HitTestResult *)v56);
        operator delete(v56, (const struct std::nothrow_t *)0x78);
      }
      else
      {
        v59 = *v58;
        *v58 = v56;
        if ( v59 )
        {
          v60 = v59[4];
          if ( (unsigned __int64)(v60 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            NtCloseCompositionInputSink(v60);
          v61 = (__int64 *)v59[1];
          if ( v61 )
          {
            v62 = (__int64 *)v59[2];
            v63 = (__int64 *)v59[1];
            if ( v61 != v62 )
            {
              do
              {
                v64 = *v63;
                if ( *v63 )
                {
                  *v63 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
                }
                ++v63;
              }
              while ( v63 != v62 );
            }
            v65 = (struct std::nothrow_t *)(8 * ((__int64)(v59[3] - (_QWORD)v61) >> 3));
            v70 = v65;
            v73 = v61;
            if ( (unsigned __int64)v65 >= 0x1000 )
            {
              std::_Adjust_manually_vector_aligned(&v73, (unsigned __int64 *)&v70);
              v65 = v70;
              v61 = (__int64 *)v73;
            }
            operator delete(v61, v65);
            v59[1] = 0LL;
            v59[2] = 0LL;
            v59[3] = 0LL;
            v38 = v74;
          }
          operator delete(v59, (const struct std::nothrow_t *)0x78);
          v49 = v76;
        }
      }
      v66 = ContextualProcessorManager::OnHitTest(
              *((ContextualProcessorManager **)v79 + 32),
              (struct HitTestInfo *)v108,
              v75,
              v78,
              v77,
              (enum ContextualProcessorState *)&v72);
      v67 = (int)v72;
      if ( v66 < 0 )
        v67 = 0;
      if ( v57 && (*(_DWORD *)v49 != 4 || (*((_BYTE *)v49 + 128) & 1) != 0) )
      {
        *((_DWORD *)v38 + 27) = 3;
      }
      else
      {
        if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
          __fastfail(7u);
        if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 || *(_DWORD *)v49 != 4 )
        {
          v68 = 0;
          if ( v67 )
          {
            LOBYTE(v68) = v67 != 3;
            ++v68;
          }
          *((_DWORD *)v38 + 27) = v68;
        }
        else
        {
          *((_DWORD *)v38 + 27) = 2 - (v40 != 0);
        }
      }
      goto LABEL_118;
    }
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5D2,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      v52);
    goto LABEL_120;
  }
  v50 = v100;
  v100 = 0LL;
  *((_QWORD *)v38 + 2) = v50;
LABEL_118:
  HitTestResult::~HitTestResult((HitTestResult *)v97);
  return v9;
}
