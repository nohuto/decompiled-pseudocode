/*
 * XREFs of ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C018D5D0
 * Callers:
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C018D524 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B74 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??1?$AutoBuffer@I@DMM@@UEAA@XZ @ 0x1C0008954 (--1-$AutoBuffer@I@DMM@@UEAA@XZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A4B0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A4FC (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C001A9F4 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IIW4_POOL_TYPE@@I@Z @ 0x1C0022680 (--0DXGDIAGNOSTICS@@QEAA@IIW4_POOL_TYPE@@I@Z.c)
 *     ??0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0022774 (--0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTSOURCESET@@@@QEAAXPEAVDMMVIDEOPRESENTSOURCESET@@@Z @ 0x1C0022840 (-reset@-$auto_rc@VDMMVIDEOPRESENTSOURCESET@@@@QEAAXPEAVDMMVIDEOPRESENTSOURCESET@@@Z.c)
 *     ??0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0022874 (--0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C01799CC (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     DpiReadPnpRegistryValue @ 0x1C0179D94 (DpiReadPnpRegistryValue.c)
 *     DpiOpenPnpRegistryKey @ 0x1C0179EE0 (DpiOpenPnpRegistryKey.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C018BA04 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x1C018DD18 (-_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV-$AutoBuffer@I@DMM@@@Z.c)
 *     ?_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z0PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x1C018DDC4 (-_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN.c)
 *     ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C018DE98 (-_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C018E3FC (-_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C018E744 (-_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ??0Lockable@@QEAA@XZ @ 0x1C018E814 (--0Lockable@@QEAA@XZ.c)
 */

VIDPN_MGR *__fastcall VIDPN_MGR::VIDPN_MGR(VIDPN_MGR *this, struct ADAPTER_DISPLAY *const a2)
{
  DXGDIAGNOSTICS *v2; // rsi
  VIDPN_MGR *v3; // rdi
  __int64 v5; // rdx
  void **v6; // rcx
  char *v7; // r12
  char *v8; // r15
  DMMVIDEOPRESENTSOURCESET *v9; // rax
  DMMVIDEOPRESENTSOURCESET *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  DMMVIDEOPRESENTTARGETSET *v15; // rax
  DMMVIDEOPRESENTTARGETSET *v16; // rax
  int (__high *v17)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *); // rdx
  __int64 v18; // rcx
  __int64 v19; // r14
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r13d
  __int64 v25; // rdx
  __int64 v26; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r15
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r14
  void *v56; // r8
  __int64 v57; // rbx
  _QWORD *v58; // r14
  MONITOR_MGR *v59; // rcx
  int inserted; // ebx
  DXGDIAGNOSTICS *v61; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r14
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rax
  HANDLE v83; // rcx
  void ***v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r14
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r14
  _QWORD *v96; // rbx
  __int64 v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  unsigned __int64 v105; // r15
  __int64 v106; // rax
  unsigned __int64 v107; // r15
  unsigned int v108; // r12d
  __int64 v109; // rdi
  __int64 v110; // r14
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  struct DMMVIDEOPRESENTTARGET *v116; // r13
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  _QWORD *v120; // r14
  unsigned int *i; // r14
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r14
  unsigned __int64 v127; // r15
  __int64 v128; // rax
  unsigned __int64 v129; // r15
  unsigned int v130; // r12d
  __int64 v131; // rdi
  __int64 v132; // r14
  struct DMMVIDEOPRESENTTARGET *v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  struct DMMVIDEOPRESENTTARGET *v138; // r13
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r14
  __int64 v146; // rax
  HANDLE v147; // rcx
  __int64 v148; // rax
  __int64 v149; // r14
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rcx
  __int64 v155; // r15
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r15
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r14
  __int64 v170; // rax
  __int64 v171; // rax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v173; // [rsp+48h] [rbp-B8h] BYREF
  VIDPN_MGR *v174; // [rsp+50h] [rbp-B0h]
  _QWORD v175[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v176[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD InputBuffer[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v178[2]; // [rsp+88h] [rbp-78h] BYREF
  void **v179; // [rsp+98h] [rbp-68h] BYREF
  __int128 v180; // [rsp+A0h] [rbp-60h]
  void **v181; // [rsp+B0h] [rbp-50h]
  __int64 v182; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v183; // [rsp+C0h] [rbp-40h]
  int v184; // [rsp+C8h] [rbp-38h]
  void **v185; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v186; // [rsp+D8h] [rbp-28h]
  void **v187; // [rsp+E8h] [rbp-18h]
  __int64 v188; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v189; // [rsp+F8h] [rbp-8h]
  int v190; // [rsp+100h] [rbp+0h]
  _OWORD v191[2]; // [rsp+108h] [rbp+8h] BYREF
  int v192; // [rsp+128h] [rbp+28h]
  wchar_t v193; // [rsp+12Ch] [rbp+2Ch]
  _OWORD v194[3]; // [rsp+130h] [rbp+30h] BYREF

  v174 = this;
  v2 = 0LL;
  *(_QWORD *)this = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  v3 = this;
  Lockable::Lockable((VIDPN_MGR *)((char *)this + 16));
  *((_DWORD *)v3 + 14) = 0;
  *((_QWORD *)v3 + 11) = 0LL;
  *(_QWORD *)v3 = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  v6 = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)v3 + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  v7 = (char *)v3 + 72;
  *((_QWORD *)v3 + 9) = 0LL;
  *((_QWORD *)v3 + 6) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  v8 = (char *)v3 + 80;
  *((_QWORD *)v3 + 10) = 0LL;
  *((_QWORD *)v3 + 12) = &Set<DMMVIDPN>::`vftable';
  *((_QWORD *)v3 + 16) = (char *)v3 + 120;
  *((_QWORD *)v3 + 15) = (char *)v3 + 120;
  *((_DWORD *)v3 + 28) = 0;
  *((_QWORD *)v3 + 13) = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)v3 + 17) = 0LL;
  *((_DWORD *)v3 + 36) = 2;
  *((_QWORD *)v3 + 19) = &Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_QWORD *)v3 + 20) = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  *((_QWORD *)v3 + 23) = (char *)v3 + 176;
  *((_QWORD *)v3 + 22) = (char *)v3 + 176;
  *((_DWORD *)v3 + 42) = 0;
  *((_QWORD *)v3 + 24) = 0LL;
  *((_DWORD *)v3 + 50) = 2;
  *((_QWORD *)v3 + 26) = 30LL;
  *((_QWORD *)v3 + 27) = &Set<DMMVIDPN>::`vftable';
  *((_QWORD *)v3 + 31) = (char *)v3 + 240;
  *((_QWORD *)v3 + 30) = (char *)v3 + 240;
  *((_DWORD *)v3 + 58) = 0;
  *((_QWORD *)v3 + 28) = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)v3 + 32) = 0LL;
  *((_DWORD *)v3 + 66) = 2;
  *((_QWORD *)v3 + 34) = 5LL;
  *((_QWORD *)v3 + 35) = 0LL;
  *((_QWORD *)v3 + 36) = &Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_QWORD *)v3 + 37) = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  *((_QWORD *)v3 + 40) = (char *)v3 + 312;
  *((_QWORD *)v3 + 39) = (char *)v3 + 312;
  *((_DWORD *)v3 + 76) = 0;
  *((_QWORD *)v3 + 41) = 0LL;
  *((_DWORD *)v3 + 84) = 2;
  *((_QWORD *)v3 + 43) = 40LL;
  *((_QWORD *)v3 + 44) = 0LL;
  *((_QWORD *)v3 + 45) = 0LL;
  *((_QWORD *)v3 + 46) = 0LL;
  *((_QWORD *)v3 + 47) = 0LL;
  *((_QWORD *)v3 + 48) = 0LL;
  *((_QWORD *)v3 + 49) = 0LL;
  *((_QWORD *)v3 + 50) = 0LL;
  *((_QWORD *)v3 + 51) = 0LL;
  *((_QWORD *)v3 + 52) = 0LL;
  *((_QWORD *)v3 + 53) = 0LL;
  *((_QWORD *)v3 + 54) = 0LL;
  *((_QWORD *)v3 + 55) = 0LL;
  *((_QWORD *)v3 + 56) = 0LL;
  *((_QWORD *)v3 + 57) = 0LL;
  *((_QWORD *)v3 + 59) = 0LL;
  *((_BYTE *)v3 + 464) = 0;
  *((_DWORD *)v3 + 120) = 0;
  *((_DWORD *)v3 + 123) = -1;
  *((_DWORD *)v3 + 124) = -1;
  *((_QWORD *)v3 + 63) = 0LL;
  if ( !a2 )
  {
    v63 = WdLogNewEntry5_WdAssertion(
            &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable',
            v5);
    WdLogEvent5_WdAssertion(v63);
  }
  *((_DWORD *)v3 + 16) = 1;
  if ( a2 )
  {
    if ( *((_QWORD *)v3 + 1) )
    {
      v65 = WdLogNewEntry5_WdAssertion(v6, v5);
      WdLogEvent5_WdAssertion(v65);
    }
    *((_QWORD *)v3 + 1) = a2;
  }
  else
  {
    v64 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v64 + 24) = v3;
    *(_QWORD *)(v64 + 32) = *((_QWORD *)v3 + 1);
    WdLogEvent5_WdError(v64);
  }
  if ( *((_DWORD *)v3 + 8) != 2 )
  {
    v66 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v66 + 24) = v3;
    WdLogEvent5_WdError(v66);
    *((_DWORD *)v3 + 14) = *((_DWORD *)v3 + 6);
    return v3;
  }
  v9 = (DMMVIDEOPRESENTSOURCESET *)operator new[](0x70uLL, 0x4E506456u, PagedPool);
  if ( v9 )
    v10 = DMMVIDEOPRESENTSOURCESET::DMMVIDEOPRESENTSOURCESET(v9, v3);
  else
    v10 = 0LL;
  auto_rc<DMMVIDEOPRESENTSOURCESET>::reset((__int64 *)v3 + 9, (__int64)v10);
  if ( !*(_QWORD *)v7
    || ((v15 = (DMMVIDEOPRESENTTARGETSET *)operator new[](0x80uLL, 0x4E506456u, PagedPool)) == 0LL
      ? (v16 = 0LL)
      : (v16 = DMMVIDEOPRESENTTARGETSET::DMMVIDEOPRESENTTARGETSET(v15, v3)),
        auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)v3 + 10, (__int64)v16),
        !*(_QWORD *)v8) )
  {
    v67 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
    WdLogEvent5_WdLowResource(v67);
    *((_DWORD *)v3 + 14) = -1073741801;
    return v3;
  }
  LODWORD(v19) = VIDPN_MGR::_ReadConfiguration((unsigned __int64)v3, v11);
  if ( (int)v19 < 0
    || (LODWORD(v19) = VIDPN_MGR::_InitializeDxgPortDmmInterfaces(v3), (int)v19 < 0)
    || (LODWORD(v19) = VIDPN_MGR::_InitializeVidPnMiniportInterfaces(v3), (int)v19 < 0) )
  {
LABEL_68:
    v68 = WdLogNewEntry5_WdError(v18, v17);
    v70 = *((_QWORD *)v3 + 1);
    v71 = v68;
    if ( !v70 )
    {
      v72 = WdLogNewEntry5_WdAssertion(0LL, v69);
      WdLogEvent5_WdAssertion(v72);
      v70 = *((_QWORD *)v3 + 1);
    }
    v73 = *(_QWORD *)(v70 + 16);
LABEL_72:
    *(_QWORD *)(v71 + 24) = v73;
    WdLogEvent5_WdError(v71);
    *((_DWORD *)v3 + 14) = v19;
    return v3;
  }
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v7 + 72LL), 1u);
  v20 = *(_QWORD **)v7;
  if ( *(_QWORD *)v7 == -112LL )
    InputBuffer[0] = 0LL;
  else
    InputBuffer[0] = *(_QWORD *)v7;
  v21 = *((_QWORD *)v3 + 1);
  InputBuffer[1] = *((_QWORD *)v3 + 44);
  if ( !v21 )
  {
    v75 = WdLogNewEntry5_WdAssertion(0LL, v17);
    WdLogEvent5_WdAssertion(v75);
    v21 = *((_QWORD *)v3 + 1);
  }
  v24 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(v21 + 16) + 216LL),
          2302031LL,
          InputBuffer,
          0x10u,
          0LL,
          0,
          1u,
          0LL);
  if ( v24 < 0 )
    goto LABEL_74;
  if ( !v20[5] )
  {
    v86 = WdLogNewEntry5_WdError(v23, v22);
    v88 = *((_QWORD *)v3 + 1);
    v89 = v86;
    if ( !v88 )
    {
      v90 = WdLogNewEntry5_WdAssertion(0LL, v87);
      WdLogEvent5_WdAssertion(v90);
      v88 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v89 + 24) = *(_QWORD *)(v88 + 16);
    WdLogEvent5_WdError(v89);
    *((_DWORD *)v3 + 14) = -1071774936;
    goto LABEL_82;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v20 + 8), v22);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v8 + 72LL));
  v20 = *(_QWORD **)v8;
  if ( *(_QWORD *)v8 == -112LL )
    v178[0] = 0LL;
  else
    v178[0] = *(_QWORD *)v8;
  v26 = *((_QWORD *)v3 + 1);
  v178[1] = *((_QWORD *)v3 + 45);
  if ( !v26 )
  {
    v91 = WdLogNewEntry5_WdAssertion(0LL, v25);
    WdLogEvent5_WdAssertion(v91);
    v26 = *((_QWORD *)v3 + 1);
  }
  v24 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(v26 + 16) + 216LL),
          2302035LL,
          v178,
          0x10u,
          0LL,
          0,
          1u,
          0LL);
  if ( v24 < 0 )
  {
LABEL_74:
    v76 = WdLogNewEntry5_WdError(v23, v22);
    v78 = *((_QWORD *)v3 + 1);
    v79 = v76;
    if ( !v78 )
    {
      v80 = WdLogNewEntry5_WdAssertion(0LL, v77);
      WdLogEvent5_WdAssertion(v80);
      v78 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v79 + 24) = *(_QWORD *)(v78 + 16);
    WdLogEvent5_WdError(v79);
    *((_DWORD *)v3 + 14) = v24;
LABEL_79:
    if ( !v20 )
      return v3;
LABEL_82:
    ReferenceCounted::Release((ReferenceCounted *)(v20 + 8), v81);
    return v3;
  }
  if ( !v20[5] )
  {
    v92 = WdLogNewEntry5_WdError(v23, v22);
    v94 = *((_QWORD *)v3 + 1);
    v95 = v92;
    if ( !v94 )
    {
      v85 = WdLogNewEntry5_WdAssertion(0LL, v93);
      WdLogEvent5_WdAssertion(v85);
      v94 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v95 + 24) = *(_QWORD *)(v94 + 16);
    WdLogEvent5_WdError(v95);
    *((_DWORD *)v3 + 14) = -1071774935;
    goto LABEL_82;
  }
  NextTarget = (const struct DMMVIDEOPRESENTTARGET *)v20[3];
  if ( NextTarget == (const struct DMMVIDEOPRESENTTARGET *)(v20 + 3) )
    goto LABEL_34;
  NextTarget = (const struct DMMVIDEOPRESENTTARGET *)((char *)NextTarget - 8);
  if ( !NextTarget )
    goto LABEL_34;
  do
  {
    if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20)) )
      break;
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v20, NextTarget);
  }
  while ( NextTarget );
  if ( NextTarget )
    v28 = *((_DWORD *)NextTarget + 6);
  else
LABEL_34:
    v28 = -1;
  *((_DWORD *)v3 + 124) = v28;
  ReferenceCounted::Release((ReferenceCounted *)(v20 + 8), (__int64)NextTarget);
  v30 = *(_QWORD *)v8;
  if ( *(_QWORD *)(*(_QWORD *)v8 + 40LL) >= *(_QWORD *)(*(_QWORD *)v7 + 40LL) )
  {
    v31 = *((_QWORD *)v3 + 1);
    Handle = 0LL;
    if ( !v31 )
    {
      v101 = WdLogNewEntry5_WdAssertion(v30, v29);
      WdLogEvent5_WdAssertion(v101);
      v31 = *((_QWORD *)v3 + 1);
    }
    v32 = DpiOpenPnpRegistryKey(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 216LL), 1u, 0x20019u, &Handle);
    v19 = v32;
    if ( v32 < 0 )
    {
      v102 = WdLogNewEntry5_WdError(v34, v33);
      v104 = *((_QWORD *)v3 + 1);
      v71 = v102;
      if ( !v104 )
      {
        v74 = WdLogNewEntry5_WdAssertion(0LL, v103);
        WdLogEvent5_WdAssertion(v74);
        v104 = *((_QWORD *)v3 + 1);
      }
      v73 = *(_QWORD *)(v104 + 16);
      *(_QWORD *)(v71 + 32) = v19;
      goto LABEL_72;
    }
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v8 + 72LL), 1u);
    v20 = *(_QWORD **)v8;
    v192 = *(_DWORD *)L"st";
    v193 = aTargetpriority[18];
    v175[1] = v191;
    v179 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
    v191[0] = *(_OWORD *)L"TargetPriorityList";
    v181 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
    v175[0] = 2490404LL;
    v191[1] = *(_OWORD *)L"iorityList";
    v182 = 0LL;
    v180 = 0LL;
    v183 = 0LL;
    v184 = 3;
    v35 = VIDPN_MGR::_ReadTargetPriorityList(v34, Handle, v175, &v179);
    v39 = v35;
    if ( v35 >= 0 )
    {
      v105 = v183;
      if ( !v183 )
      {
        v106 = WdLogNewEntry5_WdAssertion(v37, v36);
        WdLogEvent5_WdAssertion(v106);
      }
      v107 = v105 >> 2;
      v108 = 0;
      if ( v107 )
      {
        v109 = v182;
        v110 = 0LL;
        do
        {
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                         (DMMVIDEOPRESENTTARGETSET *)v20,
                         *(unsigned int *)(v109 + 4 * v110));
          v116 = TargetById;
          if ( TargetById )
          {
            if ( *((_DWORD *)TargetById + 31) == -1 )
            {
              *((_DWORD *)TargetById + 31) = v108;
              v119 = WdLogNewEntry5_WdTrace(v113, v112, v114, v115);
              *(_QWORD *)(v119 + 24) = v110;
              v37 = *((unsigned int *)v116 + 6);
              *(_QWORD *)(v119 + 32) = v37;
            }
            else
            {
              v118 = WdLogNewEntry5_WdError(v113, v112);
              *(_QWORD *)(v118 + 24) = *((unsigned int *)v116 + 6);
              WdLogEvent5_WdError(v118);
            }
          }
          else
          {
            v117 = WdLogNewEntry5_WdWarning(v113, v112, v114);
            *(_QWORD *)(v117 + 24) = *(unsigned int *)(v109 + 4 * v110);
            *(_QWORD *)(v117 + 32) = v110;
            WdLogEvent5_WdWarning(v117);
          }
          v110 = ++v108;
        }
        while ( v108 < v107 );
        v3 = v174;
      }
      v120 = (_QWORD *)v20[3];
      if ( v120 != v20 + 3 )
      {
        for ( i = (unsigned int *)(v120 - 1);
              i;
              i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                    (DMMVIDEOPRESENTTARGETSET *)v20,
                                    (const struct DMMVIDEOPRESENTTARGET *const)i) )
        {
          if ( i[31] == -1 )
          {
            v122 = WdLogNewEntry5_WdWarning(v37, v36, v38);
            *(_QWORD *)(v122 + 24) = i[6];
            WdLogEvent5_WdWarning(v122);
          }
        }
      }
    }
    else if ( v35 != -1073741275 )
    {
      v123 = WdLogNewEntry5_WdError(v37, v36);
      v125 = *((_QWORD *)v3 + 1);
      v126 = v123;
      if ( !v125 )
      {
        v82 = WdLogNewEntry5_WdAssertion(0LL, v124);
        WdLogEvent5_WdAssertion(v82);
        v125 = *((_QWORD *)v3 + 1);
      }
      *(_QWORD *)(v126 + 24) = *(_QWORD *)(v125 + 16);
      *(_QWORD *)(v126 + 32) = v39;
      WdLogEvent5_WdError(v126);
      v83 = Handle;
      *((_DWORD *)v3 + 14) = v39;
      ZwClose(v83);
      v84 = &v179;
LABEL_78:
      DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(v84);
      goto LABEL_79;
    }
    DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(&v179);
    v176[1] = v194;
    v194[0] = *(_OWORD *)L"TargetForcePriorityList";
    v185 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
    v176[0] = 3145774LL;
    v187 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
    v194[2] = *(_OWORD *)L"ityList";
    v188 = 0LL;
    v189 = 0LL;
    v186 = 0LL;
    v190 = 3;
    v194[1] = *(_OWORD *)L"rcePriorityList";
    v41 = VIDPN_MGR::_ReadTargetPriorityList(v40, Handle, v176, &v185);
    v44 = v41;
    if ( v41 >= 0 )
    {
      v127 = v189;
      if ( !v189 )
      {
        v128 = WdLogNewEntry5_WdAssertion(v43, v42);
        WdLogEvent5_WdAssertion(v128);
      }
      v129 = v127 >> 2;
      v130 = 0;
      if ( v129 )
      {
        v131 = v188;
        v132 = 0LL;
        do
        {
          v133 = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                   (DMMVIDEOPRESENTTARGETSET *)v20,
                   *(unsigned int *)(v131 + 4 * v132));
          v138 = v133;
          if ( v133 )
          {
            if ( *((_DWORD *)v133 + 32) == -1 )
            {
              *((_DWORD *)v133 + 32) = v130;
              v141 = WdLogNewEntry5_WdTrace(v135, v134, v136, v137);
              *(_QWORD *)(v141 + 24) = v132;
              *(_QWORD *)(v141 + 32) = *((unsigned int *)v138 + 6);
            }
            else
            {
              v140 = WdLogNewEntry5_WdError(v135, v134);
              *(_QWORD *)(v140 + 24) = *((unsigned int *)v138 + 6);
              WdLogEvent5_WdError(v140);
            }
          }
          else
          {
            v139 = WdLogNewEntry5_WdWarning(v135, v134, v136);
            *(_QWORD *)(v139 + 24) = *(unsigned int *)(v131 + 4 * v132);
            *(_QWORD *)(v139 + 32) = v132;
            WdLogEvent5_WdWarning(v139);
          }
          v132 = ++v130;
        }
        while ( v130 < v129 );
        v3 = v174;
      }
LABEL_43:
      DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(&v185);
      ZwClose(Handle);
      v47 = *((_QWORD *)v3 + 1);
      v173 = -1;
      if ( !v47 )
      {
        v148 = WdLogNewEntry5_WdAssertion(v46, v45);
        WdLogEvent5_WdAssertion(v148);
        v47 = *((_QWORD *)v3 + 1);
      }
      if ( (int)DpiReadPnpRegistryValue(
                  *(_QWORD *)(*(_QWORD *)(v47 + 16) + 216LL),
                  L"DefaultSimulatedTarget",
                  (char *)&v173,
                  4u,
                  1u) < 0
        || (v149 = v173, v173 == -1) )
      {
        v52 = WdLogNewEntry5_WdTrace(v49, v48, v50, v51);
        v54 = *((_QWORD *)v3 + 1);
        v55 = v52;
        if ( !v54 )
        {
          v163 = WdLogNewEntry5_WdAssertion(0LL, v53);
          WdLogEvent5_WdAssertion(v163);
          v54 = *((_QWORD *)v3 + 1);
        }
        *(_QWORD *)(v55 + 24) = *(_QWORD *)(v54 + 16);
      }
      else if ( DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v20, v173) )
      {
        v155 = WdLogNewEntry5_WdTrace(v151, v150, v152, v153);
        *(_QWORD *)(v155 + 24) = v149;
        v156 = *((_QWORD *)v3 + 1);
        if ( !v156 )
        {
          v157 = WdLogNewEntry5_WdAssertion(v154, v53);
          WdLogEvent5_WdAssertion(v157);
          v156 = *((_QWORD *)v3 + 1);
        }
        *(_QWORD *)(v155 + 32) = *(_QWORD *)(v156 + 16);
        *((_DWORD *)v3 + 123) = v149;
      }
      else
      {
        v160 = WdLogNewEntry5_WdError(v151, v150);
        *(_QWORD *)(v160 + 24) = v149;
        v161 = *((_QWORD *)v3 + 1);
        if ( !v161 )
        {
          v162 = WdLogNewEntry5_WdAssertion(v159, v158);
          WdLogEvent5_WdAssertion(v162);
          v161 = *((_QWORD *)v3 + 1);
        }
        *(_QWORD *)(v160 + 32) = *(_QWORD *)(v161 + 16);
        WdLogEvent5_WdError(v160);
      }
      if ( v20 )
        ReferenceCounted::Release((ReferenceCounted *)(v20 + 8), v53);
      LODWORD(v19) = VIDPN_MGR::_InitializeDmmClientInterfaces(v3);
      if ( (int)v19 >= 0 )
      {
        v57 = *((_QWORD *)v3 + 1);
        if ( v57
          || (v164 = WdLogNewEntry5_WdAssertion(v18, v17),
              WdLogEvent5_WdAssertion(v164),
              (v57 = *((_QWORD *)v3 + 1)) != 0) )
        {
          v58 = (_QWORD *)((char *)v3 + 472);
          if ( v3 != (VIDPN_MGR *)-472LL )
          {
            *v58 = 0LL;
            v59 = *(MONITOR_MGR **)(v57 + 96);
            if ( !v59 )
            {
              v165 = WdLogNewEntry5_WdError(0LL, v17);
              *(_QWORD *)(v165 + 24) = *(_QWORD *)(v57 + 16);
              WdLogEvent5_WdError(v165);
              inserted = -1073741811;
LABEL_140:
              v166 = WdLogNewEntry5_WdError(v18, v17);
              v168 = *((_QWORD *)v3 + 1);
              v169 = v166;
              if ( !v168 )
              {
                v170 = WdLogNewEntry5_WdAssertion(0LL, v167);
                WdLogEvent5_WdAssertion(v170);
                v168 = *((_QWORD *)v3 + 1);
              }
              *(_QWORD *)(v169 + 24) = *(_QWORD *)(v168 + 16);
              WdLogEvent5_WdError(v169);
              *((_DWORD *)v3 + 14) = inserted;
              return v3;
            }
            inserted = MONITOR_MGR::_CreateAndInsertMonitorEventHandler(
                         v59,
                         v17,
                         v56,
                         (struct HDXGMONITOREVENT__ **)v3 + 59);
LABEL_56:
            if ( inserted >= 0 )
            {
              if ( !*v58 )
              {
                v171 = WdLogNewEntry5_WdAssertion(v18, v17);
                WdLogEvent5_WdAssertion(v171);
              }
              v61 = (DXGDIAGNOSTICS *)operator new[](0x40uLL, 0x4E506456u, PagedPool);
              if ( v61 )
                v2 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v61, 0x8000u, 1, PagedPool, 0x12Cu);
              *((_QWORD *)v3 + 63) = v2;
              *((_DWORD *)v3 + 16) = 2;
              return v3;
            }
            goto LABEL_140;
          }
        }
        else
        {
          v58 = (_QWORD *)((char *)v3 + 472);
        }
        inserted = -1073741811;
        goto LABEL_56;
      }
      goto LABEL_68;
    }
    if ( v41 == -1073741275 )
      goto LABEL_43;
    v142 = WdLogNewEntry5_WdError(v43, v42);
    v144 = *((_QWORD *)v3 + 1);
    v145 = v142;
    if ( !v144 )
    {
      v146 = WdLogNewEntry5_WdAssertion(0LL, v143);
      WdLogEvent5_WdAssertion(v146);
      v144 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v145 + 24) = *(_QWORD *)(v144 + 16);
    *(_QWORD *)(v145 + 32) = v44;
    WdLogEvent5_WdError(v145);
    v147 = Handle;
    *((_DWORD *)v3 + 14) = v44;
    ZwClose(v147);
    v84 = &v185;
    goto LABEL_78;
  }
  v96 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
  v96[3] = *(_QWORD *)(*(_QWORD *)v8 + 40LL);
  v97 = *(_QWORD *)v7;
  v98 = *(_QWORD *)(*(_QWORD *)v7 + 40LL);
  v96[4] = v98;
  v99 = *((_QWORD *)v3 + 1);
  if ( !v99 )
  {
    v100 = WdLogNewEntry5_WdAssertion(v97, v98);
    WdLogEvent5_WdAssertion(v100);
    v99 = *((_QWORD *)v3 + 1);
  }
  v96[5] = *(_QWORD *)(v99 + 16);
  WdLogEvent5_WdError(v96);
  *((_DWORD *)v3 + 14) = -1071774938;
  return v3;
}
