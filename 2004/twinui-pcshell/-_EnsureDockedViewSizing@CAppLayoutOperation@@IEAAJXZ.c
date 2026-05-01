/*
 * XREFs of ?_EnsureDockedViewSizing@CAppLayoutOperation@@IEAAJXZ @ 0x18047F8B0
 * Callers:
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1804804DC (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAppLayoutItemBuilder@@@?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutItemBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x18040A3AC (--$As@UIAppLayoutItemBuilder@@@-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180471908 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

__int64 __fastcall CAppLayoutOperation::_EnsureDockedViewSizing(CAppLayoutOperation *this)
{
  int v2; // r14d
  int v3; // r15d
  int v4; // r12d
  int v5; // ebx
  int v6; // edi
  const struct LAYOUT_ENVIRONMENT_DETAILS *v7; // rdx
  enum DEVICE_SCALE_FACTOR v8; // r8d
  int v9; // eax
  __int64 v10; // rbx
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  __int64 v17; // rbx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v22[2]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v23; // [rsp+38h] [rbp-71h] BYREF
  int v24[2]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v25; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v26[8]; // [rsp+50h] [rbp-59h] BYREF
  _DWORD v27[4]; // [rsp+90h] [rbp-19h] BYREF
  _DWORD v28[2]; // [rsp+A0h] [rbp-9h] BYREF
  int v29; // [rsp+A8h] [rbp-1h]
  int v30; // [rsp+ACh] [rbp+3h]
  __int128 v31; // [rsp+C8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 88LL))(*((_QWORD *)this + 4), 2LL);
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 80LL))(*((_QWORD *)this + 4), 4LL);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 80LL))(*((_QWORD *)this + 4), 1LL);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 88LL))(*((_QWORD *)this + 5), 2LL);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 80LL))(*((_QWORD *)this + 5), 5LL);
  if ( !v2 && v5 == 1 || v2 == 1 && !v3 && v4 == 1 && v5 == 1 && v6 == 2 )
  {
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), v28);
    v9 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v28, v7, v8);
    *(_QWORD *)v22 = 0LL;
    v10 = *((_QWORD *)this + 5);
    v11 = v29 - v9 * (v6 - 1) - v28[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v10 + 112LL))(
            v10,
            0LL,
            2LL,
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            v22);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E8,
        (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v12);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
      return v13;
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD))(**(_QWORD **)v22 + 80LL))(*(_QWORD *)v22, v28, v11);
    v25 = 0LL;
    v15 = v14;
    v16 = Microsoft::WRL::ComPtr<IAppLayoutItem>::As<IAppLayoutItemBuilder>(v22, &v25);
    v13 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1ED,
        (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v16);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      goto LABEL_21;
    }
    v27[2] = v29;
    v27[0] = v29 - v15;
    v27[1] = v28[1];
    v27[3] = v30;
    (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(*(_QWORD *)v25 + 104LL))(v25, 0LL, v27);
    (*(void (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v25 + 104LL))(v25, 1LL, v27);
    *(_QWORD *)v24 = 0LL;
    v17 = *((_QWORD *)this + 5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v17 + 136LL))(v17, 0LL, 1LL);
    v13 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F9,
        (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v18);
LABEL_19:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
      goto LABEL_20;
    }
    while ( 1 )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(**(_QWORD **)v24 + 24LL))(*(_QWORD *)v24, 5LL, v26);
      if ( v19 < 0 )
        break;
      if ( ((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v26[0] + 32LL))(v26[0]) & 2) == 0 )
      {
        v23 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        v20 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v26[0])(
                v26[0],
                &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
                &v23);
        v13 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x201,
            (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
            (const char *)(unsigned int)v20);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
          goto LABEL_19;
        }
        v31 = 0LL;
        (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v23 + 104LL))(v23, 0LL, &v31);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      }
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1FC,
      (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
      (const char *)(unsigned int)v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
  }
  return 0LL;
}
