/*
 * XREFs of ?UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x180015620
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEB_K$$V@?$unordered_map@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x180004274 (--$_Try_emplace@AEB_K$$V@-$unordered_map@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@U.c)
 *     ??0LegacyInputSinkData@@QEAA@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x180004B68 (--0LegacyInputSinkData@@QEAA@$$QEAV-$unique_any_t@V-$unique_storage@U-$handle_null_resource_poli.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800098D0 (-lower_bound@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V-$_U.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@PEAVInputSite@@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAAPEAPEAVInputSite@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x180012960 (--$_Emplace_reallocate@PEAVInputSite@@@-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?RemoveInputSinkFromParentList@InputSiteHierarchyManager@@AEAAX_K0@Z @ 0x180013C20 (-RemoveInputSinkFromParentList@InputSiteHierarchyManager@@AEAAX_K0@Z.c)
 *     ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@QEAAPEA_KQEA_KAEB_K@Z @ 0x180014D10 (--$_Emplace_reallocate@AEB_K@-$vector@_KV-$allocator@_K@std@@@std@@QEAAPEA_KQEA_KAEB_K@Z.c)
 *     ??0LegacyInputSinkData@@QEAA@$$QEAV0@@Z @ 0x180014E58 (--0LegacyInputSinkData@@QEAA@$$QEAV0@@Z.c)
 *     ??$_Insert_unverified@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@1@@Z @ 0x180014FA0 (--$_Insert_unverified@U-$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@V-.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800166E8 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??0InputSinkTreeCache@@QEAA@XZ @ 0x18002AEFC (--0InputSinkTreeCache@@QEAA@XZ.c)
 *     atexit @ 0x18003BEFC (atexit.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _Init_thread_footer @ 0x18003C868 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18003C8D0 (_Init_thread_header.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA18 (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003CBA6 (_CxxThrowException_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D280 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$variant@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x1800442A4 (--1-$variant@PEAXV-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-N.c)
 *     ?GetProcessId@InputSite@@QEBAKXZ @ 0x1800442B0 (-GetProcessId@InputSite@@QEBAKXZ.c)
 *     ?_Destroy@?$_Variant_base@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAXXZ @ 0x1800442F0 (-_Destroy@-$_Variant_base@PEAXV-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P.c)
 *     ??$?0V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@$0A@@?$variant@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x180044318 (--$-0V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompos.c)
 *     ?CreateOwningRefOfInputSink@LegacyInputSinkData@@QEAAXXZ @ 0x180044528 (-CreateOwningRefOfInputSink@LegacyInputSinkData@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180068368 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??0bad_optional_access@std@@QEAA@XZ @ 0x18006E20C (--0bad_optional_access@std@@QEAA@XZ.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800C6288 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800F136C (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 *     ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$list@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800F1954 (--$_Insert@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$list@U-$pair@$$CB_K.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall InputSiteHierarchyManager::UpdateHierarchyFromInputSinkTreeCache(InputSiteHierarchyManager *this)
{
  InputSiteHierarchyManager *v1; // r13
  unsigned int v2; // r15d
  _QWORD *v3; // r14
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  _QWORD *v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rbx
  void **v9; // rbx
  _QWORD *v10; // r14
  _QWORD *i; // rdi
  unsigned __int64 v12; // rdx
  void **v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  __int64 v16; // rcx
  _BYTE *v17; // rdx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdi
  _BYTE *v22; // rdi
  __int64 v23; // rsi
  char *v24; // r14
  __int64 v25; // rbx
  __int64 v26; // rcx
  struct InputSystemServerConnection *v27; // rax
  _QWORD *v28; // rsi
  void *WeakInputSinkHandle; // rax
  char v30; // dl
  __int64 *v31; // r9
  const void **v32; // r14
  __int64 *v33; // rcx
  __int64 v34; // r13
  __int64 v35; // rax
  unsigned int v36; // r15d
  __m128i *p_si128; // r14
  unsigned __int32 v38; // esi
  _OWORD *v39; // rbx
  char v40; // dl
  bool v41; // cl
  void *v42; // rax
  char v43; // dl
  __int128 v44; // xmm1
  int v45; // r13d
  __int64 v46; // r12
  InputSite **v47; // rax
  InputSite **v48; // rbx
  InputSite **v49; // rdi
  InputSite *v50; // rax
  __int64 v51; // rsi
  int v52; // r14d
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // ecx
  bool v56; // al
  InputSite *v57; // rbx
  __int64 v58; // rcx
  void *v59; // rax
  __m128i *v60; // rbx
  int v61; // r15d
  _BYTE *v62; // rdx
  _QWORD *v63; // rbx
  _QWORD *v64; // rax
  __int64 v65; // rbx
  _QWORD *v66; // rsi
  _QWORD *v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rsi
  __int64 v70; // r8
  _QWORD *v71; // rdx
  _QWORD *v72; // rax
  const void **v73; // rbx
  const void **v74; // rax
  const void *v75; // rbx
  _QWORD *v76; // rsi
  _QWORD *v77; // rax
  _BYTE *v78; // rdx
  _QWORD *m; // rbx
  __int64 v80; // rcx
  const struct std::nothrow_t *v81; // rdi
  InputSinkTreeCache *v82; // rcx
  const char *v83; // [rsp+20h] [rbp-E0h]
  __int64 v84; // [rsp+38h] [rbp-C8h] BYREF
  char v85; // [rsp+40h] [rbp-C0h]
  char v86; // [rsp+41h] [rbp-BFh]
  char v87; // [rsp+42h] [rbp-BEh]
  __int64 v88; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v89; // [rsp+50h] [rbp-B0h] BYREF
  InputSite *v90; // [rsp+58h] [rbp-A8h] BYREF
  __m128i *v91; // [rsp+60h] [rbp-A0h]
  _BYTE *v92; // [rsp+68h] [rbp-98h] BYREF
  __int64 v93; // [rsp+70h] [rbp-90h] BYREF
  __int64 v94; // [rsp+78h] [rbp-88h]
  _QWORD *v95; // [rsp+80h] [rbp-80h]
  __int64 v96; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v97; // [rsp+90h] [rbp-70h]
  __int64 v98; // [rsp+98h] [rbp-68h]
  _BYTE *v99; // [rsp+A0h] [rbp-60h]
  __int64 v100; // [rsp+A8h] [rbp-58h]
  InputSiteHierarchyManager *v101; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v102; // [rsp+B8h] [rbp-48h] BYREF
  void *v103; // [rsp+C0h] [rbp-40h] BYREF
  void *v104; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v105; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v106; // [rsp+D8h] [rbp-28h]
  __int64 v107; // [rsp+E0h] [rbp-20h]
  __int64 v108; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD *v109; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v110; // [rsp+F8h] [rbp-8h]
  _QWORD *v111; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v112; // [rsp+108h] [rbp+8h] BYREF
  const void **v113; // [rsp+110h] [rbp+10h] BYREF
  __int128 v114; // [rsp+118h] [rbp+18h]
  _QWORD *v115; // [rsp+128h] [rbp+28h]
  _QWORD *v116; // [rsp+130h] [rbp+30h] BYREF
  char v117; // [rsp+138h] [rbp+38h]
  _QWORD *v118; // [rsp+140h] [rbp+40h] BYREF
  char v119; // [rsp+148h] [rbp+48h]
  const void **v120; // [rsp+150h] [rbp+50h] BYREF
  char v121; // [rsp+158h] [rbp+58h]
  char *v122; // [rsp+160h] [rbp+60h]
  __int64 v123; // [rsp+168h] [rbp+68h]
  char *v124; // [rsp+170h] [rbp+70h]
  __int64 v125; // [rsp+178h] [rbp+78h]
  _BYTE v126[16]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v127; // [rsp+190h] [rbp+90h]
  __int16 v128; // [rsp+198h] [rbp+98h]
  __int64 v129; // [rsp+19Ch] [rbp+9Ch]
  int v130; // [rsp+1A4h] [rbp+A4h]
  _OWORD v131[3]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int128 v132; // [rsp+1D8h] [rbp+D8h]
  _OWORD v133[3]; // [rsp+1E8h] [rbp+E8h] BYREF
  __int128 v134; // [rsp+218h] [rbp+118h]
  _OWORD v135[3]; // [rsp+228h] [rbp+128h] BYREF
  __int128 v136; // [rsp+258h] [rbp+158h]
  _OWORD v137[3]; // [rsp+268h] [rbp+168h] BYREF
  __int128 v138; // [rsp+298h] [rbp+198h]
  _OWORD v139[3]; // [rsp+2A8h] [rbp+1A8h] BYREF
  __int128 v140; // [rsp+2D8h] [rbp+1D8h]
  __int128 v141; // [rsp+2E8h] [rbp+1E8h] BYREF
  __int64 v142; // [rsp+2F8h] [rbp+1F8h]
  __int64 *v143; // [rsp+330h] [rbp+230h]
  __int64 *k; // [rsp+338h] [rbp+238h]
  __int64 *v145; // [rsp+340h] [rbp+240h]
  InputSite **v146; // [rsp+348h] [rbp+248h]
  InputSite **v147; // [rsp+350h] [rbp+250h]
  InputSite **v148; // [rsp+358h] [rbp+258h]
  __int64 v149; // [rsp+360h] [rbp+260h]
  _QWORD *v150; // [rsp+368h] [rbp+268h]
  __int64 *v151; // [rsp+370h] [rbp+270h]
  __int64 v152; // [rsp+378h] [rbp+278h]
  _QWORD *v153; // [rsp+380h] [rbp+280h]
  __int64 *v154; // [rsp+388h] [rbp+288h]
  unsigned __int8 *v155; // [rsp+390h] [rbp+290h]
  unsigned __int8 *v156; // [rsp+398h] [rbp+298h]
  _QWORD *v157; // [rsp+3A0h] [rbp+2A0h]
  unsigned __int8 *v158; // [rsp+3A8h] [rbp+2A8h]
  unsigned __int8 *v159; // [rsp+3B0h] [rbp+2B0h]
  const void **v160; // [rsp+3B8h] [rbp+2B8h]
  __int64 *v161; // [rsp+3C0h] [rbp+2C0h]
  const void *v162; // [rsp+3C8h] [rbp+2C8h]
  _QWORD *v163; // [rsp+3D0h] [rbp+2D0h]
  __int64 *v164; // [rsp+3D8h] [rbp+2D8h]
  unsigned __int8 *v165; // [rsp+3E0h] [rbp+2E0h]
  unsigned __int8 *v166; // [rsp+3E8h] [rbp+2E8h]
  RTL_SRWLOCK *v167; // [rsp+3F0h] [rbp+2F0h]
  void (__stdcall *v168)(PSRWLOCK); // [rsp+3F8h] [rbp+2F8h]
  void *v169; // [rsp+400h] [rbp+300h]
  __int64 v170; // [rsp+408h] [rbp+308h]
  void **v171; // [rsp+410h] [rbp+310h]
  __int64 v172; // [rsp+418h] [rbp+318h] BYREF
  __int64 v173; // [rsp+428h] [rbp+328h] BYREF
  __int64 v174; // [rsp+438h] [rbp+338h] BYREF
  __int64 v175; // [rsp+448h] [rbp+348h] BYREF
  __int64 v176; // [rsp+458h] [rbp+358h]
  __int64 v177; // [rsp+460h] [rbp+360h]
  __int64 j; // [rsp+468h] [rbp+368h]
  void *v179; // [rsp+470h] [rbp+370h]
  __int128 v180; // [rsp+478h] [rbp+378h]
  __int64 v181; // [rsp+488h] [rbp+388h]
  _BYTE v182[360]; // [rsp+490h] [rbp+390h] BYREF
  __int128 v183; // [rsp+5F8h] [rbp+4F8h] BYREF
  __int128 v184; // [rsp+608h] [rbp+508h]
  __int128 v185; // [rsp+618h] [rbp+518h]
  __int64 v186; // [rsp+628h] [rbp+528h]
  _OWORD v187[4]; // [rsp+630h] [rbp+530h] BYREF
  __m128i si128; // [rsp+670h] [rbp+570h] BYREF
  __int64 v189; // [rsp+680h] [rbp+580h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+6B8h] [rbp+5B8h]

  v1 = this;
  v101 = this;
  v2 = 0;
  if ( dword_1802097D0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1802097D0);
    if ( dword_1802097D0 == -1 )
    {
      InputSinkTreeCache::InputSinkTreeCache(v82);
      atexit(InputSinkTreeCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__);
      Init_thread_footer(&dword_1802097D0);
    }
  }
  AcquireSRWLockExclusive(&SRWLock);
  v3 = qword_1802095A8;
  v115 = qword_1802095A8;
  v179 = qword_1802095A8;
  v4 = (_QWORD *)xmmword_1802095B0;
  v114 = xmmword_1802095B0;
  v5 = *((_QWORD *)&xmmword_1802095B0 + 1);
  v180 = xmmword_1802095B0;
  qword_1802095A8 = 0LL;
  xmmword_1802095B0 = 0uLL;
  v167 = &SRWLock;
  v168 = ReleaseSRWLockExclusive;
  ReleaseSRWLockExclusive(&SRWLock);
  v6 = v3;
  v97 = v3;
  if ( v3 != v4 )
  {
    while ( 1 )
    {
      v7 = v6[1];
      v84 = v7;
      v8 = v6[3];
      v88 = v8;
      if ( *(_DWORD *)v6 )
      {
        if ( *(_DWORD *)v6 == 1 )
        {
          std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::lower_bound(
            (_QWORD *)v1 + 2,
            &v105,
            (unsigned __int8 *)&v84);
          v176 = *((_QWORD *)v1 + 3);
          if ( v105 != v176 )
          {
            InputSiteHierarchyManager::RemoveInputSinkFromParentList(v1, v7, *(_QWORD *)(v105 + 32));
            v8 = v88;
          }
          std::unordered_map<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry>::_Try_emplace<unsigned __int64 const &,>(
            (__int64)v1 + 16,
            (__int64)&v173,
            &v84);
          *(_QWORD *)(v173 + 32) = v8;
          std::unordered_map<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry>::_Try_emplace<unsigned __int64 const &,>(
            (__int64)v1 + 16,
            (__int64)&v174,
            &v88);
          v16 = v174 + 40;
          v17 = *(_BYTE **)(v174 + 48);
          if ( *(_BYTE **)(v174 + 56) == v17 )
          {
            std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>((const void **)v16, v17, &v84);
          }
          else
          {
            *(_QWORD *)v17 = v84;
            *(_QWORD *)(v16 + 8) += 8LL;
          }
        }
        else if ( *(_DWORD *)v6 == 2 )
        {
          std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::lower_bound(
            (_QWORD *)v1 + 2,
            &v104,
            (unsigned __int8 *)&v84);
          v169 = (void *)*((_QWORD *)v1 + 3);
          v9 = (void **)v104;
          if ( v104 == v169 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x67,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsitehie"
                            "rarchymanager.cpp",
              (const char *)0x8000FFFFLL,
              (int)v83);
LABEL_154:
            wil::details::in1diag3::FailFast_UnexpectedMsg(
              retaddr,
              (void *)0x7F,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\legacyinputsinkdata.cpp",
              "Invalid input type provided.",
              v83);
            __debugbreak();
          }
          InputSiteHierarchyManager::RemoveInputSinkFromParentList(v1, v7, *((_QWORD *)v104 + 4));
          v10 = v9[6];
          for ( i = v9[5]; i != v10; ++i )
          {
            std::unordered_map<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry>::_Try_emplace<unsigned __int64 const &,>(
              (__int64)v1 + 16,
              (__int64)&v172,
              i);
            *(_QWORD *)(v172 + 32) = 0LL;
          }
          v12 = 16
              * ((0x100000001B3LL
                * (*((unsigned __int8 *)v9 + 23) ^ (0x100000001B3LL
                                                  * (*((unsigned __int8 *)v9 + 22) ^ (0x100000001B3LL
                                                                                    * (*((unsigned __int8 *)v9 + 21) ^ (0x100000001B3LL * (*((unsigned __int8 *)v9 + 20) ^ (0x100000001B3LL * (*((unsigned __int8 *)v9 + 19) ^ (0x100000001B3LL * (*((unsigned __int8 *)v9 + 18) ^ (0x100000001B3LL * (*((unsigned __int8 *)v9 + 17) ^ (0x100000001B3LL * (*((unsigned __int8 *)v9 + 16) ^ 0xCBF29CE484222325uLL)))))))))))))))) & *((_QWORD *)v1 + 8));
          v13 = (void **)(v12 + *((_QWORD *)v1 + 5));
          if ( v13[1] == v9 )
          {
            if ( *v13 == v9 )
            {
              *v13 = (void *)*((_QWORD *)v1 + 3);
              *(_QWORD *)(v12 + *((_QWORD *)v1 + 5) + 8) = *((_QWORD *)v1 + 3);
            }
            else
            {
              v13[1] = v9[1];
            }
          }
          else if ( *v13 == v9 )
          {
            *v13 = *v9;
          }
          *(_QWORD *)v9[1] = *v9;
          *((_QWORD *)*v9 + 1) = v9[1];
          --*((_QWORD *)v1 + 4);
          v14 = v9[5];
          if ( v14 )
          {
            std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)(8 * (((_BYTE *)v9[7] - (_BYTE *)v14) >> 3)));
            v9[5] = 0LL;
            v9[6] = 0LL;
            v9[7] = 0LL;
          }
          v15 = v9[3];
          if ( v15 )
          {
            v9[3] = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
          }
          v170 = 64LL;
          v171 = v9;
          operator delete(v9, (const struct std::nothrow_t *)0x40);
        }
        goto LABEL_138;
      }
      BamoServerConnection = ISMStatics::GetBamoServerConnection();
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 23) + 8LL) + 136LL))(*((_QWORD *)BamoServerConnection + 23) + 8LL);
      v20 = *(_QWORD *)(v19 + 64);
      v177 = v20;
      v21 = *(_QWORD *)(v19 + 56);
      for ( j = v21; v21 != v20; v21 += 8LL )
      {
        if ( !*(_DWORD *)(*(_QWORD *)v21 + 16LL) && *(_QWORD *)(*(_QWORD *)v21 + 24LL) == v84 )
          break;
      }
      v181 = v20;
      if ( v21 == v20 )
      {
        v22 = 0LL;
        v99 = 0LL;
        v106 = 0LL;
      }
      else
      {
        v22 = *(_BYTE **)v21;
        v99 = v22;
        v106 = v22;
        if ( v22 )
          (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v22 + 8LL))(v22, v84);
      }
      v2 |= 1u;
      if ( v22 )
      {
        if ( !v22[392] )
        {
          v23 = LegacyInputSinkData::LegacyInputSinkData((__int64)v182, v6 + 2);
          if ( v22[392] )
          {
            std::_Variant_base<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::_Destroy(v22 + 32);
            v22[392] = 0;
          }
          LegacyInputSinkData::LegacyInputSinkData((__int64)(v22 + 32), v23);
          v22[392] = 1;
          std::variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::~variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>(v182);
        }
        v24 = (char *)v1 + 16;
        std::unordered_map<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry>::_Try_emplace<unsigned __int64 const &,>(
          (__int64)v1 + 16,
          (__int64)&v175,
          &v84);
        v25 = v175;
        if ( *(_BYTE **)(v175 + 24) != v22 )
        {
          v92 = v22;
          wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v92);
          v92 = *(_BYTE **)(v25 + 24);
          v26 = (__int64)v92;
          *(_QWORD *)(v25 + 24) = v22;
          if ( v26 )
          {
            v92 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          }
        }
        goto LABEL_125;
      }
      v27 = ISMStatics::GetBamoServerConnection();
      v28 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v27 + 23) + 8LL) + 136LL))(*((_QWORD *)v27 + 23) + 8LL);
      v95 = v28;
      std::variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>(
        v126,
        v6 + 2);
      v127 = 0LL;
      v128 = 0;
      v129 = 0LL;
      v130 = 0;
      memset(v131, 0, sizeof(v131));
      v132 = 0LL;
      LOBYTE(v131[0]) = 0;
      BYTE8(v132) = 0;
      memset(v133, 0, sizeof(v133));
      v134 = 0LL;
      LOBYTE(v133[0]) = 0;
      BYTE8(v134) = 0;
      memset(v135, 0, sizeof(v135));
      v136 = 0LL;
      LOBYTE(v135[0]) = 0;
      BYTE8(v136) = 0;
      memset(v137, 0, sizeof(v137));
      v138 = 0LL;
      LOBYTE(v137[0]) = 0;
      BYTE8(v138) = 0;
      memset(v139, 0, sizeof(v139));
      v140 = 0LL;
      LOBYTE(v139[0]) = 0;
      BYTE8(v140) = 0;
      v93 = 0LL;
      WeakInputSinkHandle = LegacyInputSinkData::GetWeakInputSinkHandle((LegacyInputSinkData *)v126);
      NtQueryCompositionInputSinkLuid(WeakInputSinkHandle, &v93);
      v30 = v130;
      v129 = v93;
      if ( !(_BYTE)v130 )
      {
        v30 = 1;
        LOBYTE(v130) = 1;
      }
      v98 = v129;
      v31 = (__int64 *)v28[8];
      v143 = v31;
      v32 = (const void **)(v28 + 7);
      v33 = (__int64 *)v28[7];
      for ( k = v33; v33 != v31; ++v33 )
      {
        if ( !*(_DWORD *)(*v33 + 16) && *(_QWORD *)(*v33 + 24) == v98 )
          break;
      }
      v145 = v31;
      if ( v33 == v31 )
      {
        v34 = 0LL;
        v94 = 0LL;
        v89 = 0LL;
        v35 = 0LL;
      }
      else
      {
        v34 = *v33;
        v94 = v34;
        v89 = v34;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v89);
        v35 = v34;
        v30 = v130;
      }
      v36 = v2 | 0xC;
      if ( v35 )
      {
LABEL_96:
        if ( !v34 )
        {
          if ( !v30 )
          {
            v96 = 0LL;
            v59 = LegacyInputSinkData::GetWeakInputSinkHandle((LegacyInputSinkData *)v126);
            NtQueryCompositionInputSinkLuid(v59, &v96);
            v129 = v96;
            if ( !(_BYTE)v130 )
              LOBYTE(v130) = 1;
          }
          v100 = v129;
          v34 = 0LL;
          v91 = 0LL;
          v60 = (__m128i *)operator new(0x1B0uLL, (const struct std::nothrow_t *)&std::nothrow);
          if ( v60 )
          {
            if ( v28 )
              (*(void (__fastcall **)(_QWORD *))*v28)(v28);
            v61 = v36 | 0x40;
            v60->m128i_i32[3] = 1;
            v60->m128i_i64[0] = (__int64)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
            v60->m128i_i64[0] = (__int64)&InputSite::`vftable';
            v60[1].m128i_i32[0] = 0;
            v60[1].m128i_i64[1] = v100;
            memset_0(&v60[2].m128i_i8[1], 0, 0x16FuLL);
            v60[2].m128i_i8[0] = 0;
            v60[24].m128i_i8[8] = 0;
            v60[25].m128i_i64[0] = 0LL;
            v60[25].m128i_i64[1] = 0LL;
            v60[26].m128i_i64[0] = 0LL;
            v60[26].m128i_i64[1] = (__int64)v28;
            if ( v28 )
              (*(void (__fastcall **)(_QWORD *))*v28)(v28);
            v36 = v61 & 0xFFFFFFBF;
            if ( v28 )
              (*(void (__fastcall **)(_QWORD *))(*v28 + 8LL))(v28);
            v34 = (__int64)v60;
            v91 = v60;
          }
          v108 = v34;
          v62 = v32[1];
          if ( v32[2] == v62 )
          {
            std::vector<InputSite *>::_Emplace_reallocate<InputSite *>(v32, v62, &v108);
          }
          else
          {
            *(_QWORD *)v62 = v34;
            v32[1] = (char *)v32[1] + 8;
          }
          v149 = 0LL;
          v89 = v34;
          v36 &= ~0x20u;
        }
        goto LABEL_114;
      }
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      p_si128 = &si128;
      v91 = &si128;
LABEL_52:
      v38 = p_si128->m128i_i32[0];
      switch ( p_si128->m128i_i32[0] )
      {
        case 1:
          v39 = v131;
          break;
        case 2:
          v39 = v133;
          break;
        case 3:
          v39 = v135;
          break;
        case 4:
          v39 = v137;
          break;
        case 5:
          v39 = v139;
          break;
        default:
          goto LABEL_154;
      }
      v40 = *((_BYTE *)v39 + 56);
      v41 = v40 == 0;
      if ( v38 == 5 )
        v41 = 1;
      if ( !v41 )
        goto LABEL_67;
      v183 = 0LL;
      v184 = 0LL;
      v185 = 0LL;
      v186 = 0LL;
      memset(v187, 0, sizeof(v187));
      v42 = LegacyInputSinkData::GetWeakInputSinkHandle((LegacyInputSinkData *)v126);
      NtQueryCompositionInputQueueAndTransform(v42, v38, &v183, v187);
      v43 = *((_BYTE *)v39 + 56);
      v44 = v184;
      *v39 = v183;
      v39[1] = v44;
      *(_QWORD *)&v44 = v186;
      v39[2] = v185;
      *((_QWORD *)v39 + 6) = v44;
      if ( !v43 )
        break;
LABEL_68:
      v28 = v95;
      if ( (unsigned int)(*(_DWORD *)v39 - 2) > 1 )
        goto LABEL_94;
      v45 = *((_DWORD *)v39 + 4);
      v46 = *((unsigned int *)v39 + 2);
      v47 = (InputSite **)v95[8];
      v146 = v47;
      v48 = (InputSite **)v95[7];
      v147 = v48;
      if ( v48 == v47 )
        goto LABEL_88;
      v49 = v47;
      while ( 1 )
      {
        v50 = *v48;
        v51 = *((_QWORD *)*v48 + 3);
        v52 = *((_DWORD *)*v48 + 4);
        if ( v51 )
          break;
        if ( v52 == 1 && !v46 )
          goto LABEL_87;
LABEL_86:
        if ( ++v48 == v49 )
          goto LABEL_87;
      }
      v53 = *((_QWORD *)v50 + 50);
      if ( v53 == *((_QWORD *)v50 + 51) )
      {
        v55 = 0;
      }
      else
      {
        v54 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v53 + 32LL) + 16LL);
        v55 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 8LL))(v54) + 32);
      }
      v56 = v55 == v45 || !v45 || !InputSite::GetProcessId(*v48);
      if ( v52 != 1 || v51 != v46 || !v56 )
        goto LABEL_86;
LABEL_87:
      v22 = v99;
      p_si128 = v91;
      v28 = v95;
LABEL_88:
      v148 = (InputSite **)v28[8];
      v36 |= 0x10u;
      if ( v48 == v148 )
      {
        v57 = 0LL;
      }
      else
      {
        v57 = *v48;
        v90 = v57;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v90);
      }
      v90 = 0LL;
      v58 = v94;
      v107 = v94;
      v34 = (__int64)v57;
      v94 = (__int64)v57;
      v89 = (__int64)v57;
      if ( v107 )
      {
        v107 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
      }
      if ( !v57 )
      {
LABEL_94:
        p_si128 = (__m128i *)((char *)p_si128 + 4);
        v91 = p_si128;
        if ( p_si128 == (__m128i *)&v189 )
        {
          v30 = v130;
          v32 = (const void **)(v28 + 7);
          goto LABEL_96;
        }
        goto LABEL_52;
      }
LABEL_114:
      if ( !*(_BYTE *)(v34 + 392) )
      {
        LegacyInputSinkData::CreateOwningRefOfInputSink((LegacyInputSinkData *)v126);
        if ( *(_BYTE *)(v34 + 392) )
        {
          std::variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::~variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>(v34 + 32);
          *(_BYTE *)(v34 + 392) = 0;
        }
        LegacyInputSinkData::LegacyInputSinkData(v34 + 32, (__int64)v126);
        *(_BYTE *)(v34 + 392) = 1;
      }
      v2 = v36 & 0xFFFFFFF9 | 2;
      std::variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::~variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>(v126);
      v24 = (char *)v101 + 16;
      std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::lower_bound(
        (_QWORD *)v101 + 2,
        &v109,
        (unsigned __int8 *)&v84);
      v63 = (_QWORD *)*((_QWORD *)v24 + 1);
      v150 = v63;
      v64 = v109;
      if ( v109 == v63 )
      {
        v151 = &v84;
        v65 = *v63;
        if ( *((_QWORD *)v24 + 2) == 0x3FFFFFFFFFFFFFFLL )
          std::_Xlength_error("list<T> too long");
        v152 = v65;
        v153 = *(_QWORD **)(v65 + 8);
        v66 = v153;
        v122 = v24 + 8;
        v123 = 0LL;
        v67 = operator new(0x40uLL);
        v154 = &v84;
        v67[2] = v84;
        v67[4] = 0LL;
        v67[3] = 0LL;
        v67[5] = 0LL;
        v67[6] = 0LL;
        v67[7] = 0LL;
        *v67 = v65;
        v67[1] = v66;
        ++*((_QWORD *)v24 + 2);
        *(_QWORD *)(v65 + 8) = v67;
        *v66 = v67;
        v123 = 0LL;
        v155 = (unsigned __int8 *)**((_QWORD **)v24 + 1);
        v156 = v155;
        std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Insert_unverified<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>>>>(
          (float *)v24,
          (__int64)&v116,
          v155 + 16,
          (__int64 *)v155);
        v64 = v116;
      }
      else
      {
        v85 = 0;
        v116 = v109;
        v117 = 0;
      }
      v89 = 0LL;
      v110 = v64[3];
      v68 = v110;
      v64[3] = v34;
      if ( v68 )
      {
        v110 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
      }
      v1 = v101;
LABEL_125:
      v69 = v88;
      std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::lower_bound(
        v24,
        &v111,
        (unsigned __int8 *)&v84);
      v71 = (_QWORD *)*((_QWORD *)v24 + 1);
      v157 = v71;
      v72 = v111;
      if ( v111 == v71 )
      {
        v112 = &v84;
        std::list<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>::_Insert<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
          v24 + 8,
          *v71,
          v70,
          &v112);
        v158 = (unsigned __int8 *)**((_QWORD **)v24 + 1);
        v159 = v158;
        std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Insert_unverified<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>>>>(
          (float *)v24,
          (__int64)&v118,
          v158 + 16,
          (__int64 *)v158);
        v72 = v118;
      }
      else
      {
        v86 = 0;
        v118 = v111;
        v119 = 0;
      }
      v72[4] = v69;
      std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::lower_bound(
        v24,
        &v113,
        (unsigned __int8 *)&v88);
      v73 = (const void **)*((_QWORD *)v24 + 1);
      v160 = v73;
      v74 = v113;
      if ( v113 == v73 )
      {
        v161 = &v88;
        v75 = *v73;
        if ( *((_QWORD *)v24 + 2) == 0x3FFFFFFFFFFFFFFLL )
          std::_Xlength_error("list<T> too long");
        v162 = v75;
        v163 = (_QWORD *)*((_QWORD *)v75 + 1);
        v76 = v163;
        v124 = v24 + 8;
        v125 = 0LL;
        v77 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
        v164 = &v88;
        v77[2] = v88;
        v77[4] = 0LL;
        v77[3] = 0LL;
        v77[5] = 0LL;
        v77[6] = 0LL;
        v77[7] = 0LL;
        *v77 = v75;
        v77[1] = v76;
        ++*((_QWORD *)v24 + 2);
        *((_QWORD *)v75 + 1) = v77;
        *v76 = v77;
        v125 = 0LL;
        v165 = (unsigned __int8 *)**((_QWORD **)v24 + 1);
        v166 = v165;
        std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Insert_unverified<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>>>>(
          (float *)v24,
          (__int64)&v120,
          v165 + 16,
          (__int64 *)v165);
        v74 = v120;
      }
      else
      {
        v87 = 0;
        v120 = v113;
        v121 = 0;
      }
      v78 = v74[6];
      if ( v74[7] == v78 )
      {
        std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>(v74 + 5, v78, &v84);
      }
      else
      {
        *(_QWORD *)v78 = v84;
        v74[6] = (char *)v74[6] + 8;
      }
      if ( v22 )
        (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v22 + 16LL))(v22);
      v6 = v97;
LABEL_138:
      v6 += 4;
      v97 = v6;
      v4 = (_QWORD *)v114;
      if ( v6 == (_QWORD *)v114 )
      {
        v5 = *((_QWORD *)&v114 + 1);
        v3 = v115;
        goto LABEL_140;
      }
    }
    *((_BYTE *)v39 + 56) = 1;
    v40 = 1;
LABEL_67:
    if ( !v40 )
    {
      v141 = 0LL;
      v142 = 0LL;
      std::bad_optional_access::bad_optional_access((std::bad_optional_access *)&v141);
      throw (std::bad_optional_access *)&v141;
    }
    goto LABEL_68;
  }
LABEL_140:
  if ( v3 )
  {
    for ( m = v3; m != v4; m += 4 )
    {
      v80 = m[2];
      if ( (unsigned __int64)(v80 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        NtCloseCompositionInputSink(v80);
    }
    v81 = (const struct std::nothrow_t *)((v5 - (_QWORD)v3) & 0xFFFFFFFFFFFFFFE0uLL);
    v102 = (unsigned __int64)v81;
    v103 = v3;
    if ( (unsigned __int64)v81 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v103, &v102);
      v81 = (const struct std::nothrow_t *)v102;
      v3 = v103;
    }
    operator delete(v3, v81);
  }
}
