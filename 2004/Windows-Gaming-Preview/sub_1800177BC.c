/*
 * XREFs of sub_1800177BC @ 0x1800177BC
 * Callers:
 *     sub_18003D03C @ 0x18003D03C (sub_18003D03C.c)
 *     sub_18003DA50 @ 0x18003DA50 (sub_18003DA50.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180011F90 @ 0x180011F90 (sub_180011F90.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall sub_1800177BC(
        int a1,
        HSTRING a2,
        int a3,
        char a4,
        char a5,
        char a6,
        UINT32 length,
        PCNZWCH sourceString,
        __int64 a9)
{
  HRESULT v13; // eax
  int v14; // ebx
  int v15; // eax
  HRESULT v16; // eax
  int ActivationFactory; // eax
  __int64 v18; // rdx
  int v19; // eax
  int v20; // edx
  __int64 v21; // rbx
  HRESULT v22; // eax
  _QWORD *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rbx
  HRESULT v26; // eax
  _QWORD *v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rbx
  HRESULT v30; // eax
  _QWORD *v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rbx
  HRESULT v34; // eax
  _QWORD *v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rbx
  HRESULT v38; // eax
  _QWORD *v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rbx
  HRESULT v42; // eax
  _QWORD *v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // rbx
  HRESULT v46; // eax
  _QWORD *v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // rbx
  HRESULT v50; // eax
  HRESULT v51; // eax
  int v52; // edx
  _QWORD *v53; // rbx
  __int64 v54; // rcx
  __int64 v55; // rbx
  HRESULT v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  _QWORD *v60; // rcx
  __int64 v61; // rcx
  __int64 (__fastcall ***v62)(_QWORD, void *, _QWORD *); // rcx
  _BYTE v64[8]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v65; // [rsp+38h] [rbp-51h] BYREF
  _QWORD *v66; // [rsp+40h] [rbp-49h] BYREF
  __int64 v67; // [rsp+48h] [rbp-41h] BYREF
  __int64 (__fastcall ***v68)(_QWORD, void *, __int64 *); // [rsp+50h] [rbp-39h] BYREF
  HSTRING v69[2]; // [rsp+58h] [rbp-31h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-21h] BYREF
  HSTRING string; // [rsp+80h] [rbp-9h] BYREF
  __int64 retaddr; // [rsp+C8h] [rbp+3Fh]

  v69[1] = a2;
  v68 = 0LL;
  string = 0LL;
  v13 = WindowsCreateStringReference(L"Windows.Data.Json.JsonObject", 0x1Cu, &hstringHeader, &string);
  if ( v13 < 0 )
    goto LABEL_102;
  v68 = 0LL;
  v14 = RoActivateInstance(string, v69);
  if ( v14 < 0
    || (v14 = (**(__int64 (__fastcall ***)(HSTRING, __int64 *, _QWORD))v69[0])(v69[0], &qword_180050DC8, &v68),
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v69[0] + 16LL))(v69[0]),
        v14 < 0) )
  {
    sub_180003268(retaddr, 600, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v14);
    goto LABEL_98;
  }
  v67 = 0LL;
  v15 = (**v68)(v68, &unk_180051A00, &v67);
  v14 = v15;
  if ( v15 >= 0 )
  {
    v66 = 0LL;
    string = 0LL;
    v16 = WindowsCreateStringReference(L"Windows.Data.Json.JsonValue", 0x1Bu, &hstringHeader, &string);
    if ( v16 < 0 )
    {
LABEL_103:
      sub_180011F90(v16);
      goto LABEL_104;
    }
    ActivationFactory = RoGetActivationFactory(string, &unk_180051050, &v66);
    v14 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      sub_180003268(
        retaddr,
        607,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        ActivationFactory);
LABEL_93:
      v60 = v66;
      if ( v66 )
      {
        v66 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v60 + 16LL))(v60);
      }
      goto LABEL_95;
    }
    v65 = 0LL;
    v64[0] = 0;
    if ( a3 )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v66 + 72LL))(v66, *v66, &v65);
      v14 = v19;
      if ( v19 < 0 )
      {
        v20 = 614;
        goto LABEL_89;
      }
      v21 = v67;
      string = 0LL;
      v22 = WindowsCreateStringReference(L"MaxCpuCount", 0xBu, &hstringHeader, &string);
      if ( v22 < 0 )
      {
LABEL_104:
        sub_180011F90(v22);
        __debugbreak();
      }
      v19 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v21 + 80LL))(
              v21,
              string,
              v65,
              v64);
      v14 = v19;
      if ( v19 < 0 )
      {
        v20 = 615;
        goto LABEL_89;
      }
    }
    if ( a4 )
    {
      v23 = v66;
      v24 = v65;
      if ( v65 )
      {
        v65 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      LOBYTE(v18) = a5 ^ 1;
      v19 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*v23 + 64LL))(v23, v18, &v65);
      v14 = v19;
      if ( v19 < 0 )
      {
        v20 = 620;
        goto LABEL_89;
      }
      v25 = v67;
      string = 0LL;
      v26 = WindowsCreateStringReference(L"AffinitizeToExclusiveCpus", 0x19u, &hstringHeader, &string);
      if ( v26 < 0 )
      {
        sub_180011F90(v26);
        __debugbreak();
      }
      v19 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v25 + 80LL))(
              v25,
              string,
              v65,
              v64);
      v14 = v19;
      if ( v19 < 0 )
      {
        v20 = 621;
        goto LABEL_89;
      }
    }
    if ( a6 )
    {
      v27 = v66;
      v28 = v65;
      if ( v65 )
      {
        v65 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      LOBYTE(v18) = a6;
      v19 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*v27 + 64LL))(v27, v18, &v65);
      v14 = v19;
      if ( v19 < 0 )
      {
        v20 = 626;
        goto LABEL_89;
      }
      v29 = v67;
      string = 0LL;
      v30 = WindowsCreateStringReference(L"AutoGameModeEnabled", 0x13u, &hstringHeader, &string);
      if ( v30 < 0 )
      {
        sub_180011F90(v30);
        __debugbreak();
      }
      v19 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v29 + 80LL))(
              v29,
              string,
              v65,
              v64);
      v14 = v19;
      if ( v19 < 0 )
      {
        v20 = 627;
        goto LABEL_89;
      }
    }
    if ( a1 )
    {
      v31 = v66;
      v32 = v65;
      if ( v65 )
      {
        v65 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      v19 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v31 + 72LL))(v31, *v31, &v65);
      v14 = v19;
      if ( v19 < 0 )
      {
        v20 = 632;
        goto LABEL_89;
      }
      v33 = v67;
      string = 0LL;
      v34 = WindowsCreateStringReference(L"PercentGpuTimeAllocatedToGame", 0x1Du, &hstringHeader, &string);
      if ( v34 < 0 )
      {
        sub_180011F90(v34);
        __debugbreak();
      }
      v19 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v33 + 80LL))(
              v33,
              string,
              v65,
              v64);
      v14 = v19;
      if ( v19 < 0 )
      {
        v20 = 633;
        goto LABEL_89;
      }
      v35 = v66;
      v36 = v65;
      if ( v65 )
      {
        v65 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      }
      v19 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v35 + 72LL))(v35, *v35, &v65);
      v14 = v19;
      if ( v19 < 0 )
      {
        v20 = 635;
        goto LABEL_89;
      }
      v37 = v67;
      string = 0LL;
      v38 = WindowsCreateStringReference(L"PercentGpuMemoryAllocatedToGame", 0x1Fu, &hstringHeader, &string);
      if ( v38 < 0 )
      {
        sub_180011F90(v38);
        __debugbreak();
      }
      v19 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v37 + 80LL))(
              v37,
              string,
              v65,
              v64);
      v14 = v19;
      if ( v19 < 0 )
      {
        v20 = 636;
        goto LABEL_89;
      }
      v39 = v66;
      v40 = v65;
      if ( v65 )
      {
        v65 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      }
      v19 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v39 + 72LL))(v39, *v39, &v65);
      v14 = v19;
      if ( v19 < 0 )
      {
        v20 = 638;
        goto LABEL_89;
      }
      v41 = v67;
      string = 0LL;
      v42 = WindowsCreateStringReference(L"PercentGpuMemoryAllocatedToSystemCompositor", 0x2Bu, &hstringHeader, &string);
      if ( v42 < 0 )
      {
        sub_180011F90(v42);
        __debugbreak();
      }
      v19 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v41 + 80LL))(
              v41,
              string,
              v65,
              v64);
      v14 = v19;
      if ( v19 < 0 )
      {
        v20 = 639;
        goto LABEL_89;
      }
    }
    if ( a2 )
    {
      v43 = v66;
      v44 = v65;
      if ( v65 )
      {
        v65 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
      }
      v19 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v43 + 72LL))(v43, *v43, &v65);
      v14 = v19;
      if ( v19 < 0 )
      {
        v20 = 647;
        goto LABEL_89;
      }
      v45 = v67;
      string = 0LL;
      v46 = WindowsCreateStringReference(L"CpuExclusivityMaskLow", 0x15u, &hstringHeader, &string);
      if ( v46 < 0 )
      {
        sub_180011F90(v46);
        __debugbreak();
      }
      v19 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v45 + 80LL))(
              v45,
              string,
              v65,
              v64);
      v14 = v19;
      if ( v19 < 0 )
      {
        v20 = 648;
        goto LABEL_89;
      }
      v47 = v66;
      v48 = v65;
      if ( v65 )
      {
        v65 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
      }
      v19 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v47 + 72LL))(v47, *v47, &v65);
      v14 = v19;
      if ( v19 < 0 )
      {
        v20 = 650;
        goto LABEL_89;
      }
      v49 = v67;
      string = 0LL;
      v50 = WindowsCreateStringReference(L"CpuExclusivityMaskHigh", 0x16u, &hstringHeader, &string);
      if ( v50 < 0 )
      {
        sub_180011F90(v50);
        JUMPOUT(0x1800181C7LL);
      }
      v19 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v49 + 80LL))(
              v49,
              string,
              v65,
              v64);
      v14 = v19;
      if ( v19 < 0 )
      {
        v20 = 651;
        goto LABEL_89;
      }
    }
    if ( !sourceString || !length )
      goto LABEL_81;
    v69[0] = 0LL;
    WindowsDeleteString(0LL);
    v69[0] = 0LL;
    v51 = WindowsCreateString(sourceString, length, v69);
    v14 = v51;
    if ( v51 < 0 )
    {
      v52 = 657;
LABEL_79:
      sub_180003268(retaddr, v52, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v51);
      WindowsDeleteString(v69[0]);
      goto LABEL_91;
    }
    v53 = v66;
    v54 = v65;
    if ( v65 )
    {
      v65 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    }
    v51 = (*(__int64 (__fastcall **)(_QWORD *, HSTRING, __int64 *))(*v53 + 80LL))(v53, v69[0], &v65);
    v14 = v51;
    if ( v51 < 0 )
    {
      v52 = 659;
      goto LABEL_79;
    }
    v55 = v67;
    string = 0LL;
    v56 = WindowsCreateStringReference(L"RelatedProcessNames", 0x13u, &hstringHeader, &string);
    if ( v56 >= 0 )
    {
      v51 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v55 + 80LL))(
              v55,
              string,
              v65,
              v64);
      v14 = v51;
      if ( v51 < 0 )
      {
        v52 = 660;
        goto LABEL_79;
      }
      WindowsDeleteString(v69[0]);
LABEL_81:
      v57 = v65;
      if ( v65 )
      {
        v65 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
      }
      v58 = v65;
      if ( v65 )
      {
        v65 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
      }
      v19 = (**v68)(v68, &unk_180050A88, &v65);
      v14 = v19;
      if ( v19 >= 0 )
      {
        v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v65 + 56LL))(v65, a9);
        v14 = v19;
        if ( v19 >= 0 )
        {
          v14 = 0;
LABEL_91:
          v59 = v65;
          if ( v65 )
          {
            v65 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
          }
          goto LABEL_93;
        }
        v20 = 666;
      }
      else
      {
        v20 = 665;
      }
LABEL_89:
      sub_180003268(retaddr, v20, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v19);
      goto LABEL_91;
    }
    sub_180011F90(v56);
LABEL_102:
    sub_180011F90(v13);
    goto LABEL_103;
  }
  sub_180003268(retaddr, 603, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v15);
LABEL_95:
  v61 = v67;
  if ( v67 )
  {
    v67 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
  }
LABEL_98:
  v62 = v68;
  if ( v68 )
  {
    v68 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v62)[2])(v62);
  }
  return (unsigned int)v14;
}
