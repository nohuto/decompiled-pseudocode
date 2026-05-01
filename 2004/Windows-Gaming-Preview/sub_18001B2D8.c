/*
 * XREFs of sub_18001B2D8 @ 0x18001B2D8
 * Callers:
 *     sub_18001AE70 @ 0x18001AE70 (sub_18001AE70.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180011F90 @ 0x180011F90 (sub_180011F90.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_18001B7CC @ 0x18001B7CC (sub_18001B7CC.c)
 *     sub_18001E51C @ 0x18001E51C (sub_18001E51C.c)
 *     sub_18002005C @ 0x18002005C (sub_18002005C.c)
 *     sub_18003C760 @ 0x18003C760 (sub_18003C760.c)
 *     sub_18003D630 @ 0x18003D630 (sub_18003D630.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18001B2D8(__int64 a1)
{
  unsigned int v2; // esi
  HRESULT v3; // eax
  int ActivationFactory; // eax
  int v5; // ebx
  int v6; // eax
  HRESULT v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // r9d
  int v12; // edx
  HRESULT v13; // eax
  HSTRING v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // r14
  int v21; // r9d
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v29; // [rsp+38h] [rbp-39h] BYREF
  __int64 v30; // [rsp+40h] [rbp-31h] BYREF
  __int64 v31; // [rsp+48h] [rbp-29h] BYREF
  __int64 v32; // [rsp+50h] [rbp-21h] BYREF
  __int64 v33; // [rsp+58h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-9h] BYREF
  HSTRING string; // [rsp+80h] [rbp+Fh] BYREF
  HSTRING_HEADER v36; // [rsp+88h] [rbp+17h] BYREF
  HSTRING v37; // [rsp+A0h] [rbp+2Fh] BYREF
  __int64 retaddr; // [rsp+D0h] [rbp+5Fh]

  sub_18003C760();
  sub_18003D630();
  v2 = 1;
  RtlGetDeviceFamilyInfoEnum(0LL, &hstringHeader, 0LL);
  if ( LODWORD(hstringHeader.Reserved.Reserved1) == 3 || LODWORD(hstringHeader.Reserved.Reserved1) == 9 )
    v2 = 3;
  v31 = 0LL;
  string = 0LL;
  v3 = WindowsCreateStringReference(
         L"WindowsInternal.Shell.CDSProperties.CDSTilePropertiesBatched",
         0x3Cu,
         &hstringHeader,
         &string);
  if ( v3 < 0 )
    goto LABEL_52;
  ActivationFactory = RoGetActivationFactory(string, &unk_180050C58, &v31);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    sub_180003268(
      retaddr,
      182,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      ActivationFactory);
    goto LABEL_48;
  }
  v33 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v31 + 48LL))(v31, 0LL, 7LL, &v33);
  v5 = v6;
  if ( v6 >= 0 )
  {
    v29 = 0LL;
    v37 = 0LL;
    v7 = WindowsCreateStringReference(L"WindowsInternal.Shell.UnifiedTile.UnifiedTileManagerOptions", 0x3Bu, &v36, &v37);
    if ( v7 < 0 )
    {
LABEL_53:
      sub_180011F90(v7);
      JUMPOUT(0x18001B7C4LL);
    }
    v29 = 0LL;
    v5 = RoActivateInstance(v37, &hstringHeader);
    if ( v5 < 0
      || (v5 = (**(__int64 (__fastcall ***)(PVOID, __int64 *, __int64 *))hstringHeader.Reserved.Reserved1)(
                 hstringHeader.Reserved.Reserved1,
                 &qword_180050AC8,
                 &v29),
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)hstringHeader.Reserved.Reserved1 + 16LL))(hstringHeader.Reserved.Reserved1),
          v5 < 0) )
    {
      v11 = v5;
      v12 = 191;
      goto LABEL_43;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 160LL))(v29, 1LL);
    if ( v8 < 0 )
      sub_180012300(retaddr, 192, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v8);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v29 + 176LL))(v29, 0LL);
    if ( v9 < 0 )
      sub_180012300(retaddr, 193, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v9);
    *(_OWORD *)&hstringHeader.Reserved.Reserved1 = xmmword_180050C78;
    v10 = (*(__int64 (__fastcall **)(__int64, HSTRING_HEADER *, __int64))(*(_QWORD *)v29 + 48LL))(
            v29,
            &hstringHeader,
            v33);
    v5 = v10;
    if ( v10 < 0 )
    {
      v11 = v10;
      v12 = 195;
LABEL_43:
      sub_180003268(retaddr, v12, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v11);
LABEL_44:
      v25 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      goto LABEL_46;
    }
    v30 = 0LL;
    v37 = 0LL;
    v13 = WindowsCreateStringReference(L"WindowsInternal.Shell.UnifiedTile.UnifiedTileManager", 0x34u, &v36, &v37);
    if ( v13 >= 0 )
    {
      v14 = v37;
      v15 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v16 = RoGetActivationFactory(v14, &unk_180050C68, &v30);
      v5 = v16;
      if ( v16 < 0 )
      {
        sub_180003268(retaddr, 198, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v16);
LABEL_40:
        v24 = v30;
        if ( v30 )
        {
          v30 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        }
        goto LABEL_44;
      }
      v32 = 0LL;
      v17 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v30 + 56LL))(
              v30,
              55LL,
              v2,
              v29,
              &v32);
      v5 = v17;
      if ( v17 >= 0 )
      {
        v19 = *(_QWORD *)(a1 + 56);
        if ( v19 )
        {
          *(_QWORD *)(a1 + 56) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        v20 = v32;
        v5 = sub_18002005C(v32);
        if ( v5 >= 0 )
          v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 64LL))(v20, a1 + 56);
        if ( v5 < 0 )
        {
          v21 = v5;
          v18 = 207;
LABEL_34:
          sub_180003268(retaddr, v18, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v21);
LABEL_38:
          v23 = v32;
          if ( v32 )
          {
            v32 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
          }
          goto LABEL_40;
        }
        v17 = sub_18001E51C(a1 + 128);
        v5 = v17;
        if ( v17 >= 0 )
        {
          v22 = sub_18001B7CC(a1);
          if ( v22 < 0 )
            sub_180012300(retaddr, 211, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v22);
          v5 = 0;
          goto LABEL_38;
        }
        v18 = 209;
      }
      else
      {
        v18 = 205;
      }
      v21 = v17;
      goto LABEL_34;
    }
    sub_180011F90(v13);
LABEL_52:
    sub_180011F90(v3);
    goto LABEL_53;
  }
  sub_180003268(retaddr, 185, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v6);
LABEL_46:
  v26 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
LABEL_48:
  v27 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  return (unsigned int)v5;
}
