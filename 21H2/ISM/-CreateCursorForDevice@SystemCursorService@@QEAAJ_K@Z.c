/*
 * XREFs of ?CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z @ 0x18013F04C
 * Callers:
 *     ?CreateCursorForDevice@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x18013BD60 (-CreateCursorForDevice@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B060 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?shared_from_this@?$enable_shared_from_this@VSystemCursorService@@@std@@QEAA?AV?$shared_ptr@VSystemCursorService@@@2@XZ @ 0x1800491D8 (-shared_from_this@-$enable_shared_from_this@VSystemCursorService@@@std@@QEAA-AV-$shared_ptr@VSys.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800694A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800893A0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$unordered_map@_KV?$shared_ptr@VSystemCursor@@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x18013B1E8 (--$_Try_emplace@AEB_K$$V@-$unordered_map@_KV-$shared_ptr@VSystemCursor@@@std@@U-$hash@_K@2@U-$eq.c)
 *     ?CursorExists@SystemCursorService@@QEAA_N_K@Z @ 0x18013C468 (-CursorExists@SystemCursorService@@QEAA_N_K@Z.c)
 *     ?SendAttachCustomCursorVisual@SystemCursorController@@QEAAJ_KPEAX@Z @ 0x18013D058 (-SendAttachCustomCursorVisual@SystemCursorController@@QEAAJ_KPEAX@Z.c)
 *     ?lock@?$weak_ptr@VSystemCursor@@@std@@QEBA?AV?$shared_ptr@VSystemCursor@@@2@XZ @ 0x18013D944 (-lock@-$weak_ptr@VSystemCursor@@@std@@QEBA-AV-$shared_ptr@VSystemCursor@@@2@XZ.c)
 *     ??$make_shared@VSystemCursor@@V?$shared_ptr@VSystemCursorService@@@std@@AEA_K@std@@YA?AV?$shared_ptr@VSystemCursor@@@0@$$QEAV?$shared_ptr@VSystemCursorService@@@0@AEA_K@Z @ 0x18013E360 (--$make_shared@VSystemCursor@@V-$shared_ptr@VSystemCursorService@@@std@@AEA_K@std@@YA-AV-$shared.c)
 *     ?AddShape@SystemCursor@@QEAAJV?$shared_ptr@VSystemCursorShape@@@std@@@Z @ 0x18013EC48 (-AddShape@SystemCursor@@QEAAJV-$shared_ptr@VSystemCursorShape@@@std@@@Z.c)
 *     ?CreateCursorForDevice@Cursor@InputTraceLogging@@SAX_KPEBX@Z @ 0x18013EFD4 (-CreateCursorForDevice@Cursor@InputTraceLogging@@SAX_KPEBX@Z.c)
 *     ?CreateCustomCursorSharedTarget@SystemCursor@@QEAAJPEAUIContainerVisual@Composition@UI@Windows@@PEAPEAX@Z @ 0x18013F6AC (-CreateCustomCursorSharedTarget@SystemCursor@@QEAAJPEAUIContainerVisual@Composition@UI@Windows@@.c)
 *     ?RefreshShapeVisibilityData@SystemCursor@@QEAAXXZ @ 0x18014062C (-RefreshShapeVisibilityData@SystemCursor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemCursorService::CreateCursorForDevice(SystemCursorService *this, unsigned __int64 a2)
{
  char v3; // r15
  _QWORD *i; // rax
  _QWORD *v5; // rax
  __int64 v6; // rax
  std::_Ref_count_base *v7; // rbx
  SystemCursor *v8; // r14
  std::_Ref_count_base *v9; // rcx
  bool v10; // di
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rdx
  int v14; // eax
  _QWORD *v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  std::_Ref_count_base *v19; // rcx
  __int128 v21; // [rsp+20h] [rbp-39h] BYREF
  SystemCursor *v22; // [rsp+30h] [rbp-29h] BYREF
  std::_Ref_count_base *v23; // [rsp+38h] [rbp-21h]
  __int64 v24; // [rsp+40h] [rbp-19h] BYREF
  std::_Ref_count_base *v25; // [rsp+48h] [rbp-11h]
  __int64 v26; // [rsp+50h] [rbp-9h] BYREF
  __int128 v27; // [rsp+60h] [rbp+7h]
  __int64 v28; // [rsp+70h] [rbp+17h] BYREF
  std::_Ref_count_base *v29; // [rsp+78h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  _QWORD *v31; // [rsp+C0h] [rbp+67h] BYREF
  unsigned __int64 v32; // [rsp+C8h] [rbp+6Fh] BYREF
  void *v33; // [rsp+D0h] [rbp+77h] BYREF
  void *v34; // [rsp+D8h] [rbp+7Fh] BYREF

  v32 = a2;
  v3 = 0;
  LODWORD(v31) = 0;
  for ( i = (_QWORD *)*((_QWORD *)this + 13); i != *((_QWORD **)this + 14) && *i != a2; i += 2 )
    ;
  if ( i == *((_QWORD **)this + 14) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  v27 = *(_OWORD *)i;
  if ( SystemCursorService::CursorExists(this, a2) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      70LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  v5 = (_QWORD *)std::enable_shared_from_this<SystemCursorService>::shared_from_this((__int64)this + 8, &v24);
  std::make_shared<SystemCursor,std::shared_ptr<SystemCursorService>,unsigned __int64 &>(&v22, v5, (__int64 *)&v32);
  if ( v25 )
    std::_Ref_count_base::_Decref(v25);
  std::unordered_map<unsigned __int64,std::shared_ptr<SystemCursor>>::_Try_emplace<unsigned __int64 const &,>(
    (__int64)this + 40,
    (__int64)&v26,
    (const unsigned __int8 *)&v32);
  v6 = v26;
  v7 = v23;
  if ( v23 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v23 + 2);
    v7 = v23;
  }
  v8 = v22;
  *(_QWORD *)(v6 + 24) = v22;
  v9 = *(std::_Ref_count_base **)(v6 + 32);
  *(_QWORD *)(v6 + 32) = v7;
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  InputTraceLogging::Cursor::CreateCursorForDevice(v32, v8);
  v10 = 0;
  if ( !DWORD2(v27) )
  {
    v3 = 1;
    if ( !*std::weak_ptr<SystemCursor>::lock((__int64)this + 168, &v28) )
      v10 = 1;
  }
  if ( (v3 & 1) != 0 && v29 )
    std::_Ref_count_base::_Decref(v29);
  if ( !v10 )
    goto LABEL_40;
  v11 = SystemCursor::CreateCustomCursorSharedTarget(
          v8,
          *((struct Windows::UI::Composition::IContainerVisual **)this + 18),
          &v33);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 93LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_41;
  }
  v14 = NtDCompositionDuplicateHandleToProcess(v33, *((unsigned int *)this + 32), &v34);
  if ( v14 >= 0 )
  {
    v11 = SystemCursorController::SendAttachCustomCursorVisual(*((SystemCursorController **)this + 4), v32, v34);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 106LL;
      goto LABEL_28;
    }
    v15 = (_QWORD *)*((_QWORD *)this + 19);
    v16 = (_QWORD *)*v15;
    v31 = (_QWORD *)*v15;
    while ( v16 != v15 )
    {
      v21 = 0LL;
      v17 = v16[6];
      if ( v17 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
        v17 = v16[6];
        v8 = v22;
      }
      *(_QWORD *)&v21 = v16[5];
      *((_QWORD *)&v21 + 1) = v17;
      v18 = SystemCursor::AddShape((__int64 *)v8, (unsigned __int64 **)&v21);
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          112LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorservice.cpp",
          (const char *)(unsigned int)v18);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v31);
      v16 = v31;
    }
    SystemCursor::RefreshShapeVisibilityData(v8);
    v7 = v23;
    if ( v23 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v23 + 3);
      v7 = v23;
      v8 = v22;
    }
    *((_QWORD *)this + 21) = v8;
    v19 = (std::_Ref_count_base *)*((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = v7;
    if ( v19 )
      std::_Ref_count_base::_Decwref(v19);
LABEL_40:
    v12 = 0;
    goto LABEL_41;
  }
  v12 = wil::details::in1diag3::Return_NtStatus(
          retaddr,
          (void *)0x66,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorservice.cpp",
          (const char *)(unsigned int)v14);
LABEL_41:
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return v12;
}
