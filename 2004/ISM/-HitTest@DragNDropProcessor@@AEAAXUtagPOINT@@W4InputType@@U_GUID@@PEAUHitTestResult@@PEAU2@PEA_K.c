/*
 * XREFs of ?HitTest@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@U_GUID@@PEAUHitTestResult@@PEAU2@PEA_KPEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@9@Z @ 0x1800F9720
 * Callers:
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1800F86A4 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800FA030 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@@Z @ 0x1800FAA3C (-SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x1800FB0FC (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoDragAreaClientProxy@@@Z @ 0x1800FB488 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoDragAreaClientProxy@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E60 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180011654 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180011D2C (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F1178 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ??$As@UIDragAreaClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDragAreaClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F1B14 (--$As@UIDragAreaClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     ??$As@UIDropTargetClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDropTargetClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F1C04 (--$As@UIDropTargetClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x1800F6140 (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ??$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@XZ @ 0x1800F61D4 (--$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ??4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z @ 0x1800F858C (--4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x180144F80 (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x180148F3C (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall DragNDropProcessor::HitTest(
        __int64 a1,
        struct tagPOINT a2,
        unsigned int a3,
        _QWORD *a4,
        char *a5,
        struct tagPOINT *a6,
        __int64 *a7,
        _QWORD *a8,
        __int64 a9,
        _QWORD *a10,
        __int64 *a11,
        __int64 *a12)
{
  char *v13; // r15
  struct tagPOINT *v14; // r12
  __int64 *v15; // rsi
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // r10
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 *v26; // rsi
  __int64 v27; // r12
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // r14
  __int64 v33; // rbx
  __int64 (__fastcall ***v34)(_QWORD); // rbx
  __int64 (__fastcall ***v35)(_QWORD); // r14
  __int64 v36; // rax
  __int64 (__fastcall ***v37)(_QWORD); // rbx
  __int64 (__fastcall ***v38)(_QWORD); // r14
  _QWORD *v39; // rax
  __int64 v40; // rcx
  __int64 (__fastcall ***v41)(_QWORD); // rbx
  _QWORD *v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rbx
  struct InputSite **v45; // rbx
  struct InputSite **v46; // r15
  struct InputSite *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rsi
  __int64 v50; // r14
  _QWORD *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  _QWORD *v55; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v56)(_QWORD); // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v57; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall ***v58)(_QWORD); // [rsp+48h] [rbp-B8h] BYREF
  __int64 v59; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v60)(_QWORD); // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v61; // [rsp+60h] [rbp-A0h]
  _QWORD *v62; // [rsp+68h] [rbp-98h]
  struct tagPOINT *v63; // [rsp+70h] [rbp-90h]
  __int64 *v64; // [rsp+78h] [rbp-88h]
  __int64 *v65; // [rsp+80h] [rbp-80h]
  _QWORD *v66; // [rsp+88h] [rbp-78h]
  _QWORD *v67; // [rsp+90h] [rbp-70h]
  GUID v68; // [rsp+98h] [rbp-68h]
  char v69[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v70; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v71; // [rsp+C0h] [rbp-40h]
  __int64 v72; // [rsp+D0h] [rbp-30h]
  char v73[8]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v74[3]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v75; // [rsp+150h] [rbp+50h]

  v67 = a4;
  v13 = a5;
  v14 = a6;
  v63 = a6;
  v15 = a7;
  v57 = a7;
  v66 = a8;
  v16 = (_QWORD *)a9;
  v55 = (_QWORD *)a9;
  v62 = a10;
  v61 = a11;
  v65 = a12;
  v19 = (unsigned int)HitTestHelper::ConvertInputTypeToPointerType(a3, a1);
  v69[0] = 0;
  v70 = 0LL;
  v71 = 0LL;
  v21 = 0LL;
  v72 = 0LL;
  if ( !a5 )
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD, char *, struct tagPOINT, __int64))(**(_QWORD **)(v17 + 24) + 32LL))(
            *(_QWORD *)(v17 + 24),
            v73,
            a2,
            v19);
    HitTestResult::operator=((__int64)v69, v22, v23);
    if ( (unsigned __int64)(v75 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      NtCloseCompositionInputSink(v75);
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(v74, v24, v25);
    v13 = v69;
    v21 = v72;
    v20 = v62;
  }
  if ( !a9 || !v20 )
    goto LABEL_52;
  v26 = (__int64 *)*((_QWORD *)v13 + 1);
  v64 = (__int64 *)*((_QWORD *)v13 + 2);
  if ( v26 == v64 )
    goto LABEL_51;
  v68 = GUID_NULL;
  v27 = *(_QWORD *)GUID_NULL.Data4;
  v28 = *(_QWORD *)&GUID_NULL.Data1;
  while ( 1 )
  {
    v29 = v28 - *(_QWORD *)&GUID_NULL.Data1;
    if ( v28 == *(_QWORD *)&GUID_NULL.Data1 )
      v29 = v27 - *(_QWORD *)GUID_NULL.Data4;
    if ( !v29 )
    {
      v30 = *v26;
      v59 = 0LL;
      v31 = *(_QWORD *)(v30 + 400);
      v32 = *(_QWORD *)(v30 + 408);
      if ( v31 != v32 )
      {
        do
        {
          if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IDragAreaClientProxy>(
                      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v31 + 8),
                      &v59) >= 0 )
            break;
          v31 += 16LL;
        }
        while ( v31 != v32 );
        v29 = v59;
      }
      v33 = (v29 - 8) & -(__int64)(v29 != 0);
      if ( v33
        && (!(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)(v33 + 8) + 48LL))(
               v33 + 8,
               v17,
               v18,
               v19)
         || *(_BYTE *)(v33 + 72)) )
      {
        v68 = *(GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v33 + 8) + 40LL))(v33 + 8);
        v27 = *(_QWORD *)v68.Data4;
      }
      else
      {
        InputSite::GetAttachedObject<IDragSourceClientProxy,BamoDragSourceClientProxy>(*v26, (__int64 *)&v58);
        v34 = v58;
        if ( v58 )
        {
          v35 = v58 + 1;
          if ( !(unsigned int)v58[1][5](v58 + 1) || (unsigned int)(*v35)[5](v34 + 1) == 2 )
          {
            Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v58);
            *v55 = v34;
            v68 = *(GUID *)(*v35)[3](v34 + 1);
            wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v26);
            *v61 = *v26;
            v27 = *(_QWORD *)v68.Data4;
          }
        }
        if ( v34 )
        {
          v58 = 0LL;
          (*v34)[1](v34);
        }
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v59);
      v28 = *(_QWORD *)&v68.Data1;
      v16 = v55;
    }
    v36 = v28 - *(_QWORD *)&GUID_NULL.Data1;
    if ( v28 == *(_QWORD *)&GUID_NULL.Data1 )
      v36 = v27 - *(_QWORD *)GUID_NULL.Data4;
    if ( !v36 )
      goto LABEL_47;
    if ( !*v16 )
    {
      InputSite::GetAttachedObject<IDragSourceClientProxy,BamoDragSourceClientProxy>(*v26, (__int64 *)&v60);
      v37 = v60;
      if ( v60 )
      {
        v38 = v60 + 1;
        if ( (unsigned int)v60[1][5](v60 + 1) == 1 || (unsigned int)(*v38)[5](v37 + 1) == 2 )
        {
          v39 = (_QWORD *)(*v38)[3](v37 + 1);
          v28 = *(_QWORD *)&v68.Data1;
          v40 = *v39 - *(_QWORD *)&v68.Data1;
          if ( *v39 == *(_QWORD *)&v68.Data1 )
            v40 = v39[1] - v27;
          if ( !v40 )
          {
            Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v60);
            *v55 = v37;
            wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v26);
            *v61 = *v26;
          }
        }
        else
        {
          v28 = *(_QWORD *)&v68.Data1;
        }
      }
      if ( v37 )
      {
        v60 = 0LL;
        (*v37)[1](v37);
      }
      v16 = v55;
      if ( !*v55 )
        goto LABEL_47;
    }
    InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(*v26, (__int64 *)&v56);
    v41 = v56;
    if ( v56 )
    {
      v42 = (_QWORD *)v56[1][9](v56 + 1);
      v43 = *v42 - v28;
      if ( *v42 == v28 )
        v43 = v42[1] - v27;
      if ( !v43 )
        break;
    }
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)&v56);
    v16 = v55;
LABEL_47:
    if ( ++v26 == v64 )
      goto LABEL_50;
  }
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v56);
  *v62 = v41;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v26);
  *v65 = *v26;
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)&v56);
LABEL_50:
  v14 = v63;
LABEL_51:
  v15 = v57;
LABEL_52:
  v44 = v66;
  if ( v66 )
  {
    *v44 = (unsigned int)InputSiteManager::GetViewInstanceIdFromInputSiteList((__int64 **)v13 + 1);
    v21 = v72;
  }
  if ( v14 || v15 )
  {
    v45 = (struct InputSite **)*((_QWORD *)v13 + 1);
    v46 = (struct InputSite **)*((_QWORD *)v13 + 2);
    while ( v45 != v46 )
    {
      v47 = *v45;
      v48 = 0LL;
      v55 = 0LL;
      v49 = *((_QWORD *)v47 + 50);
      v50 = *((_QWORD *)v47 + 51);
      if ( v49 != v50 )
      {
        do
        {
          if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IDropTargetClientProxy>(
                      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v49 + 8),
                      (__int64 *)&v55) >= 0 )
            break;
          v49 += 16LL;
        }
        while ( v49 != v50 );
        v48 = (__int64)v55;
      }
      if ( v48 )
      {
        v51 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 32LL))(v48);
        v52 = *v51 - *v67;
        if ( *v51 == *v67 )
          v52 = v51[1] - v67[1];
        if ( !v52 )
        {
          v53 = (*(__int64 (__fastcall **)(_QWORD *))(*v55 + 24LL))(v55);
          *v57 = v53;
          *v14 = PointerManipulationHelper::GetPositionRelativeToSite(*v45, a2);
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v55);
          break;
        }
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v55);
      ++v45;
    }
  }
  if ( (unsigned __int64)(v21 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v21);
  return std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(&v70, v17, v18);
}
