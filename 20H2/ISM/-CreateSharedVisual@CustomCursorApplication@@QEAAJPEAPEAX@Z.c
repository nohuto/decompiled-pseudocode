/*
 * XREFs of ?CreateSharedVisual@CustomCursorApplication@@QEAAJPEAPEAX@Z @ 0x18013F550
 * Callers:
 *     ?AttachApplication@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x18013B500 (-AttachApplication@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCust.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800313C4 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180088F40 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$As@UICompositorPartner@Composition@UI@Windows@@@?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositorPartner@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18013D6CC (--$As@UICompositorPartner@Composition@UI@Windows@@@-$ComPtr@UICompositor@Composition@UI@Windows@.c)
 *     ?lock@?$weak_ptr@VSystemCursorService@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService@@@2@XZ @ 0x180140AE0 (-lock@-$weak_ptr@VSystemCursorService@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService@@@2@XZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CustomCursorApplication::CreateSharedVisual(CustomCursorApplication *this, void **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v9; // eax
  __int64 (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64, HANDLE *); // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, __int64 *); // rbx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 (__fastcall ***v24)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v26; // [rsp+20h] [rbp-38h] BYREF
  __int64 v27; // [rsp+28h] [rbp-30h] BYREF
  __int64 v28; // [rsp+30h] [rbp-28h] BYREF
  __int64 v29; // [rsp+38h] [rbp-20h] BYREF
  std::_Ref_count_base *v30; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+30h]
  HANDLE hObject; // [rsp+90h] [rbp+38h] BYREF
  __int64 (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp+40h] BYREF
  __int64 v34; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v35; // [rsp+A8h] [rbp+50h] BYREF

  *a2 = (void *)-1LL;
  if ( *((_QWORD *)this + 12) )
  {
    v4 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x270,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)0x8000FFFFLL);
    return v4;
  }
  std::weak_ptr<SystemCursorService>::lock(this, &v29);
  v5 = v29;
  if ( !v29 )
  {
    v4 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x273,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_34;
  }
  v26 = 0LL;
  v6 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositor>::As<Windows::UI::Composition::ICompositorPartner>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v29 + 136),
         &v26);
  v4 = v6;
  if ( v6 >= 0 )
  {
    v33 = 0LL;
    v7 = v26;
    v8 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v26 + 32LL);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v33);
    v9 = v8(v7, &v33);
    v4 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)v9);
LABEL_32:
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v33);
      goto LABEL_33;
    }
    v35 = 0LL;
    hObject = 0LL;
    v10 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v33;
    v11 = **v33;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v35);
    v12 = v11(v10, &GUID_bcb4ad45_7609_4550_934f_16002a68fded, &v35);
    v4 = v12;
    if ( v12 < 0 )
    {
      v13 = 640LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)v12);
LABEL_29:
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v35);
      goto LABEL_32;
    }
    v14 = v26;
    v15 = *(__int64 (__fastcall **)(__int64, __int64, HANDLE *))(*(_QWORD *)v26 + 56LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v12 = v15(v14, v35, &hObject);
    v4 = v12;
    if ( v12 < 0 )
    {
      v13 = 643LL;
      goto LABEL_13;
    }
    v16 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 32LL) + 16LL);
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v18 = NtDCompositionDuplicateHandleToProcess(hObject, *(unsigned int *)(v17 + 32), a2);
    if ( v18 < 0 )
    {
      v4 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x28A,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\li"
                      "b\\systemcursorservice.cpp",
             (const char *)(unsigned int)v18);
      goto LABEL_29;
    }
    v27 = *(_QWORD *)(v5 + 144);
    v19 = v27;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v27);
    v34 = 0LL;
    v20 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 48LL);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v34);
    v21 = v20(v19, &v34);
    v4 = v21;
    if ( v21 >= 0 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v34 + 72LL))(
              v34,
              v33);
      v4 = v21;
      if ( v21 >= 0 )
      {
        v23 = *((_QWORD *)this + 12);
        v24 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v33;
        if ( (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v23 != v33 )
        {
          if ( v33 )
          {
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v33)[1])(v33);
            v23 = *((_QWORD *)this + 12);
          }
          v28 = v23;
          *((_QWORD *)this + 12) = v24;
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v28);
        }
        if ( (HANDLE *)((char *)this + 104) != &hObject )
        {
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
            (void **)this + 13,
            hObject);
          hObject = 0LL;
        }
        v4 = 0;
        goto LABEL_28;
      }
      v22 = 655LL;
    }
    else
    {
      v22 = 654LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v21);
LABEL_28:
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v34);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v27);
    goto LABEL_29;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x277,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice.cpp",
    (const char *)(unsigned int)v6);
LABEL_33:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v26);
LABEL_34:
  if ( v30 )
    std::_Ref_count_base::_Decref(v30);
  return v4;
}
