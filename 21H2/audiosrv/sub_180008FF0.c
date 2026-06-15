/*
 * XREFs of sub_180008FF0 @ 0x180008FF0
 * Callers:
 *     sub_1800086D8 @ 0x1800086D8 (sub_1800086D8.c)
 * Callees:
 *     sub_180009DE0 @ 0x180009DE0 (sub_180009DE0.c)
 *     ??$?8$$CBU_EXCEPTION_RECORD@@$$CBU0@@std@@YA_NAEBV?$shared_ptr@$$CBU_EXCEPTION_RECORD@@@0@0@Z @ 0x180009E04 (--$-8$$CBU_EXCEPTION_RECORD@@$$CBU0@@std@@YA_NAEBV-$shared_ptr@$$CBU_EXCEPTION_RECORD@@@0@0@Z.c)
 *     unknown_libname_206 @ 0x180009E18 (unknown_libname_206.c)
 *     sub_180023370 @ 0x180023370 (sub_180023370.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005F1A8 @ 0x18005F1A8 (sub_18005F1A8.c)
 *     unknown_libname_209 @ 0x18005FE68 (unknown_libname_209.c)
 *     sub_180060060 @ 0x180060060 (sub_180060060.c)
 *     sub_1800601FC @ 0x1800601FC (sub_1800601FC.c)
 *     sub_18006022C @ 0x18006022C (sub_18006022C.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006FC08 @ 0x18006FC08 (sub_18006FC08.c)
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     sub_180072798 @ 0x180072798 (sub_180072798.c)
 *     sub_1800727BC @ 0x1800727BC (sub_1800727BC.c)
 *     sub_1800727E0 @ 0x1800727E0 (sub_1800727E0.c)
 *     sub_180072E88 @ 0x180072E88 (sub_180072E88.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180105B78 @ 0x180105B78 (sub_180105B78.c)
 *     sub_180133608 @ 0x180133608 (sub_180133608.c)
 *     sub_1801336B8 @ 0x1801336B8 (sub_1801336B8.c)
 *     sub_180133710 @ 0x180133710 (sub_180133710.c)
 *     sub_1801344F0 @ 0x1801344F0 (sub_1801344F0.c)
 *     sub_1801368BC @ 0x1801368BC (sub_1801368BC.c)
 *     sub_1801374C0 @ 0x1801374C0 (sub_1801374C0.c)
 *     sub_1801380CC @ 0x1801380CC (sub_1801380CC.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall sub_180008FF0(__int64 a1, _BYTE *a2)
{
  HRESULT ActivationFactory; // esi
  unsigned int v5; // ebx
  int *v6; // rbx
  char v7; // r15
  const WCHAR *v8; // r8
  int v9; // ecx
  int *v10; // rax
  __int64 v11; // rdx
  HSTRING v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rcx
  unsigned int v16; // edi
  unsigned int v17; // r12d
  _QWORD *v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rdi
  _QWORD *v27; // rax
  __int64 v28; // rdi
  int (__fastcall ***v29)(_QWORD, void *, _QWORD *); // rcx
  _QWORD *v30; // rax
  unsigned int v31; // r15d
  __int64 v32; // rdi
  _QWORD *v33; // rax
  UINT32 v34; // edi
  const WCHAR *v35; // rax
  int v36; // eax
  int v37; // r8d
  UINT32 v38; // edi
  const WCHAR *v39; // rax
  int v40; // eax
  UINT32 v41; // edi
  const WCHAR *v42; // rax
  int v43; // eax
  _BYTE *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rdi
  _QWORD *v49; // rax
  UINT32 StringLen; // edi
  const WCHAR *StringRawBuffer; // rax
  int v52; // eax
  int v53; // r8d
  UINT32 v54; // edi
  const WCHAR *v55; // rax
  int v56; // eax
  UINT32 v57; // edi
  const WCHAR *v58; // rax
  HSTRING v59; // rcx
  __int64 v60; // rdx
  _DWORD *v61; // rcx
  _DWORD *v62; // rbx
  int v63; // eax
  int *v65; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v66; // [rsp+48h] [rbp-B8h] BYREF
  int (__fastcall ***v67)(_QWORD, void *, __int64 *); // [rsp+50h] [rbp-B0h] BYREF
  __int64 v68; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v70; // [rsp+68h] [rbp-98h] BYREF
  char v71; // [rsp+70h] [rbp-90h]
  __int64 v72; // [rsp+78h] [rbp-88h] BYREF
  __int64 v73; // [rsp+80h] [rbp-80h] BYREF
  __int64 v74; // [rsp+88h] [rbp-78h] BYREF
  __int64 (__fastcall ***v75)(_QWORD, void *, __int64 *); // [rsp+90h] [rbp-70h] BYREF
  __int64 v76; // [rsp+98h] [rbp-68h] BYREF
  __int64 (__fastcall ***v77)(_QWORD, void *, __int64 *); // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v78; // [rsp+A8h] [rbp-58h] BYREF
  HSTRING v79; // [rsp+B0h] [rbp-50h] BYREF
  HSTRING v80; // [rsp+B8h] [rbp-48h] BYREF
  HSTRING v81; // [rsp+C0h] [rbp-40h] BYREF
  int pvData; // [rsp+C8h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v84; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v85; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v86; // [rsp+E8h] [rbp-18h] BYREF
  int v87; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v88; // [rsp+F4h] [rbp-Ch] BYREF
  __int64 v89; // [rsp+F8h] [rbp-8h] BYREF
  DWORD pcbData; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v91[4]; // [rsp+108h] [rbp+8h] BYREF
  char v92; // [rsp+128h] [rbp+28h]
  int v93; // [rsp+130h] [rbp+30h] BYREF
  HSTRING v94; // [rsp+138h] [rbp+38h] BYREF
  __int64 v95; // [rsp+140h] [rbp+40h] BYREF
  char v96[8]; // [rsp+148h] [rbp+48h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+150h] [rbp+50h] BYREF
  char v98[120]; // [rsp+160h] [rbp+60h] BYREF
  char v99[120]; // [rsp+1D8h] [rbp+D8h] BYREF
  char v100[120]; // [rsp+250h] [rbp+150h] BYREF
  char v101[120]; // [rsp+2C8h] [rbp+1C8h] BYREF
  char v102[120]; // [rsp+340h] [rbp+240h] BYREF
  char v103[120]; // [rsp+3B8h] [rbp+2B8h] BYREF
  HSTRING_HEADER v104; // [rsp+430h] [rbp+330h] BYREF
  HSTRING string; // [rsp+448h] [rbp+348h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+450h] [rbp+350h] BYREF
  _BYTE v107[32]; // [rsp+468h] [rbp+368h] BYREF
  HSTRING v108; // [rsp+488h] [rbp+388h] BYREF
  HSTRING v109; // [rsp+4A8h] [rbp+3A8h] BYREF
  HSTRING v110; // [rsp+4C8h] [rbp+3C8h] BYREF
  HSTRING v111; // [rsp+4E8h] [rbp+3E8h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+508h] [rbp+408h] BYREF
  void *v113; // [rsp+518h] [rbp+418h]
  int v114; // [rsp+520h] [rbp+420h]
  int v115; // [rsp+524h] [rbp+424h]
  const char *v116; // [rsp+528h] [rbp+428h]
  __int64 v117; // [rsp+530h] [rbp+430h]
  void *retaddr; // [rsp+578h] [rbp+478h]

  v94 = 0LL;
  memset(&v104, 0, sizeof(v104));
  v89 = 0LL;
  v85 = 0LL;
  pv = 0LL;
  v81 = 0LL;
  v78 = 0;
  *a2 = 0;
  ActivationFactory = 0;
  v91[0] = &v94;
  v91[1] = &v81;
  v91[2] = &pv;
  v91[3] = &v78;
  v92 = 1;
  sub_18006022C(&v65);
  if ( (unsigned __int8)unknown_libname_209(&v65) )
  {
    v5 = -2147024882;
    sub_18004BD84(retaddr, 1048LL, "avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", 2147942414LL);
LABEL_100:
    sub_1801344F0(&v65);
    sub_180072E88(v91);
    goto LABEL_103;
  }
  v6 = v65;
  sub_1800601FC(v65);
  sub_1800601FC(v6);
  v7 = sub_180009DE0(a1);
  v71 = v7;
  pcbData = 4;
  pvData = 0;
  v8 = L"AudioSrvLicenseResult";
  if ( !*(_BYTE *)(a1 + 100) )
    v8 = L"AudioDGLicenseResult";
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Spatial\\AtmosLicenseDebug",
    v8,
    0x10u,
    0LL,
    &pvData,
    &pcbData);
  v9 = pvData;
  if ( pvData < 0 )
  {
    v10 = v6 + 1;
    v11 = 4LL;
    while ( 1 )
    {
      *v10 = v9;
      v10 += 6;
      if ( !--v11 )
        break;
      v9 = pvData;
    }
LABEL_69:
    v44 = (char *)v6 + 1;
    v45 = 6LL;
    do
    {
      *v44 = 1;
      v44 += 24;
      --v45;
    }
    while ( v45 );
    sub_180023370(a1 + 56, v96);
    sub_180060060(v107, L"LegacyDefaultEndpointKey");
    sub_1801380CC(a1 + 464, &v95, v107);
    unknown_libname_206(v107);
    v84 = *(_QWORD *)(a1 + 472);
    if ( (unsigned __int8)std::operator==<_EXCEPTION_RECORD const,_EXCEPTION_RECORD const>(&v95, &v84) )
    {
      v5 = -2147418113;
      v46 = 2147549183LL;
      v47 = 1254LL;
    }
    else
    {
      v60 = 0LL;
      v61 = (_DWORD *)(*(_QWORD *)(v95 + 48) + 4LL);
      v62 = v6 + 1;
      while ( *v61 == *v62 )
      {
        ++v60;
        v62 += 6;
        v61 += 6;
        if ( v60 >= 6 )
          goto LABEL_97;
      }
      *a2 = 1;
LABEL_97:
      v63 = sub_1801374C0(a1, L"LegacyDefaultEndpointKey", &v65);
      v5 = v63;
      if ( v63 >= 0 )
      {
        sub_180105B78(v96);
        goto LABEL_102;
      }
      v46 = (unsigned int)v63;
      v47 = 1269LL;
    }
    sub_18004BD84(retaddr, v47, "avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v46);
    sub_180105B78(v96);
    goto LABEL_100;
  }
  if ( WindowsCreateStringReference(
         L"Windows.Internal.StateRepository.ApplicationExtension",
         0x35u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v12 = string;
  v13 = v89;
  if ( v89 )
  {
    v89 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  ActivationFactory = RoGetActivationFactory(v12, &unk_18015F188, &v89);
  if ( ActivationFactory < 0 )
    goto LABEL_102;
  ActivationFactory = WindowsCreateStringReference(L"windows.mediaPlayback", 0x15u, &v104, &v94);
  if ( ActivationFactory < 0 )
    goto LABEL_102;
  v14 = v89;
  v15 = v85;
  if ( v85 )
  {
    v85 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v14 + 144LL))(v14, v94, &v85);
  v16 = 0;
  if ( ActivationFactory < 0 )
    goto LABEL_102;
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v85 + 56LL))(v85, &v88);
  if ( ActivationFactory < 0 )
    goto LABEL_102;
  if ( (unsigned int)dword_18019C4F0 > 5 )
  {
    v116 = "Retrieved media app list";
    v117 = 25LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = (ULONGLONG)off_18019C4F8;
    UserData.Size = *(unsigned __int16 *)off_18019C4F8;
    UserData.Reserved = 2;
    v113 = &unk_18016CB55;
    v114 = 23;
    v115 = 1;
    pcbData = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  v17 = 0;
  if ( !v88 )
  {
LABEL_66:
    v43 = v6[7];
    if ( v43 < 0 && v6[13] >= 0 )
      v6[13] = v43;
    goto LABEL_69;
  }
  while ( 1 )
  {
    v70 = 0LL;
    v72 = 0LL;
    v69 = 0LL;
    v67 = 0LL;
    v68 = 0LL;
    v66 = 0LL;
    v87 = 0;
    v18 = pv;
    if ( pv )
    {
      v19 = v78;
      if ( v78 )
      {
        do
        {
          v20 = v18[v16];
          if ( v20 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20 + 16LL))(v18[v16]);
            *((_QWORD *)pv + v16) = 0LL;
            v18 = pv;
            v19 = v78;
          }
          ++v16;
        }
        while ( v16 < v19 );
      }
      CoTaskMemFree(v18);
      pv = 0LL;
    }
    v78 = 0;
    v21 = v85;
    sub_1800461B8(&v70);
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v21 + 48LL))(v21, v17, &v70);
    if ( ActivationFactory < 0 )
      goto LABEL_89;
    v22 = v70;
    sub_1800461B8(&v72);
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 96LL))(v22, &v72);
    if ( ActivationFactory < 0 )
      goto LABEL_89;
    v23 = v72;
    sub_1800461B8(&v69);
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 96LL))(v23, &v69);
    v16 = 0;
    if ( ActivationFactory < 0 )
      goto LABEL_89;
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v69 + 176LL))(v69, &v81);
    if ( ActivationFactory < 0 )
      goto LABEL_89;
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v69 + 992LL))(v69, &v87);
    if ( ActivationFactory < 0 )
      goto LABEL_89;
    if ( v87 == 3 || v7 )
      break;
LABEL_62:
    WindowsDeleteString(v81);
    v81 = 0LL;
    if ( v6[1] >= 0 && v6[7] >= 0 && v6[13] >= 0 )
    {
      sub_18006FC08(&v66);
      sub_18006FC08(&v68);
      sub_180071C14(&v67);
      sub_18006FC08(&v69);
      sub_18006FC08(&v72);
      sub_18006FC08(&v70);
      goto LABEL_66;
    }
    sub_18006FC08(&v66);
    sub_18006FC08(&v68);
    sub_180071C14(&v67);
    sub_18006FC08(&v69);
    sub_18006FC08(&v72);
    sub_18006FC08(&v70);
    if ( ++v17 >= v88 )
      goto LABEL_66;
  }
  v77 = 0LL;
  v76 = 0LL;
  v75 = 0LL;
  v74 = 0LL;
  v73 = 0LL;
  sub_18005F1A8(v24, "Checking capabilities", 0LL);
  v25 = v70;
  sub_1800461B8(&v77);
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)v25 + 640LL))(
                        v25,
                        &v77);
  if ( ActivationFactory < 0 )
    goto LABEL_88;
  sub_1800461B8(&v76);
  ActivationFactory = (**v77)(v77, &unk_18015F1A8, &v76);
  if ( ActivationFactory < 0 )
    goto LABEL_88;
  v26 = v76;
  sub_1800461B8(&v75);
  v27 = (_QWORD *)sub_1801336B8(&v108);
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v26 + 48LL))(v26, *v27, &v75);
  if ( ActivationFactory < 0 )
    goto LABEL_88;
  sub_1800461B8(&v74);
  ActivationFactory = (**v75)(v75, &unk_18015F1A8, &v74);
  if ( ActivationFactory < 0 )
    goto LABEL_88;
  v28 = v74;
  v29 = v67;
  if ( v67 )
  {
    v67 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v29)[2])(v29);
  }
  v30 = (_QWORD *)sub_180133608(&v111, L"Codec");
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v28 + 48LL))(v28, *v30, &v67);
  v16 = 0;
  if ( ActivationFactory < 0 )
    goto LABEL_88;
  sub_1800461B8(&v73);
  if ( (**v67)(v67, &unk_18015DC88, &v73) < 0 )
  {
    v79 = 0LL;
    ActivationFactory = sub_180133710(&v67, &v68);
    if ( ActivationFactory < 0
      || (v48 = v68,
          sub_1800461B8(&v66),
          v49 = (_QWORD *)sub_180133608(&v110, L"@Name"),
          ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v48 + 48LL))(
                                v48,
                                *v49,
                                &v66),
          ActivationFactory < 0)
      || (ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v66 + 152LL))(v66, &v79),
          ActivationFactory < 0) )
    {
      v59 = v79;
      goto LABEL_86;
    }
    StringLen = WindowsGetStringLen(v79);
    StringRawBuffer = WindowsGetStringRawBuffer(v79, 0LL);
    if ( CompareStringOrdinal(StringRawBuffer, StringLen, L"atmosDolbyDigitalPlusDecoder", -1, 1) == 2 )
    {
      v52 = sub_1800727BC(v102, a1);
      v53 = 0;
    }
    else
    {
      v54 = WindowsGetStringLen(v79);
      v55 = WindowsGetStringRawBuffer(v79, 0LL);
      if ( CompareStringOrdinal(v55, v54, L"atmosMatEncoder", -1, 1) == 2 )
      {
        v56 = sub_1800727E0(v103, a1);
        sub_1801368BC(a1, (_DWORD)v81, 1, v56, (__int64)v6);
        *(_BYTE *)(a1 + 304) = 1;
        *(_BYTE *)(a1 + 272) = 1;
        *(_BYTE *)(a1 + 336) = 1;
        *(_BYTE *)(a1 + 368) = 1;
        goto LABEL_83;
      }
      v57 = WindowsGetStringLen(v79);
      v58 = WindowsGetStringRawBuffer(v79, 0LL);
      if ( CompareStringOrdinal(v58, v57, L"atmosHeadphonesEncoder", -1, 1) != 2 )
      {
LABEL_83:
        v16 = 0;
        if ( v79 )
          WindowsDeleteString(v79);
        goto LABEL_61;
      }
      v52 = sub_180072798(v99, a1);
      v53 = 2;
    }
    sub_1801368BC(a1, (_DWORD)v81, v53, v52, (__int64)v6);
    goto LABEL_83;
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v73 + 48LL))(v73, &v93);
  if ( ActivationFactory < 0 )
    goto LABEL_88;
  if ( v93 != 1037 )
    goto LABEL_61;
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, unsigned int *, LPVOID *))(*(_QWORD *)v73 + 304LL))(
                        v73,
                        &v78,
                        &pv);
  if ( ActivationFactory < 0 )
    goto LABEL_88;
  v31 = 0;
  if ( !v78 )
  {
LABEL_60:
    v7 = v71;
LABEL_61:
    sub_18006FC08(&v73);
    sub_18006FC08(&v74);
    sub_18006FC08(&v75);
    sub_18006FC08(&v76);
    sub_1800461B8(&v77);
    goto LABEL_62;
  }
  while ( 1 )
  {
    v80 = 0LL;
    v86 = *((_QWORD *)pv + v31);
    sub_180047458(&v86);
    sub_1800461B8(&v68);
    ActivationFactory = sub_180133710(&v86, &v68);
    if ( ActivationFactory < 0 )
      break;
    v32 = v68;
    sub_1800461B8(&v66);
    v33 = (_QWORD *)sub_180133608(&v109, L"@Name");
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v32 + 48LL))(v32, *v33, &v66);
    if ( ActivationFactory < 0 )
      break;
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v66 + 152LL))(v66, &v80);
    if ( ActivationFactory < 0 )
      break;
    v34 = WindowsGetStringLen(v80);
    v35 = WindowsGetStringRawBuffer(v80, 0LL);
    if ( CompareStringOrdinal(v35, v34, L"atmosDolbyDigitalPlusDecoder", -1, 1) == 2 )
    {
      v36 = sub_1800727BC(v98, a1);
      v37 = 0;
LABEL_56:
      sub_1801368BC(a1, (_DWORD)v81, v37, v36, (__int64)v6);
      goto LABEL_57;
    }
    v38 = WindowsGetStringLen(v80);
    v39 = WindowsGetStringRawBuffer(v80, 0LL);
    if ( CompareStringOrdinal(v39, v38, L"atmosMatEncoder", -1, 1) == 2 )
    {
      v40 = sub_1800727E0(v100, a1);
      sub_1801368BC(a1, (_DWORD)v81, 1, v40, (__int64)v6);
      *(_BYTE *)(a1 + 304) = 1;
      *(_BYTE *)(a1 + 272) = 1;
      *(_BYTE *)(a1 + 336) = 1;
      *(_BYTE *)(a1 + 368) = 1;
    }
    else
    {
      v41 = WindowsGetStringLen(v80);
      v42 = WindowsGetStringRawBuffer(v80, 0LL);
      if ( CompareStringOrdinal(v42, v41, L"atmosHeadphonesEncoder", -1, 1) == 2 )
      {
        v36 = sub_180072798(v101, a1);
        v37 = 2;
        goto LABEL_56;
      }
    }
LABEL_57:
    sub_180071C14(&v86);
    v16 = 0;
    if ( v80 )
      WindowsDeleteString(v80);
    if ( ++v31 >= v78 )
      goto LABEL_60;
  }
  sub_180071C14(&v86);
  v59 = v80;
LABEL_86:
  if ( v59 )
    WindowsDeleteString(v59);
LABEL_88:
  sub_18006FC08(&v73);
  sub_18006FC08(&v74);
  sub_18006FC08(&v75);
  sub_18006FC08(&v76);
  sub_1800461B8(&v77);
LABEL_89:
  sub_18006FC08(&v66);
  sub_18006FC08(&v68);
  sub_180071C14(&v67);
  sub_18006FC08(&v69);
  sub_18006FC08(&v72);
  sub_18006FC08(&v70);
LABEL_102:
  sub_1801344F0(&v65);
  sub_180072E88(v91);
  v5 = ActivationFactory;
LABEL_103:
  sub_18006FC08(&v85);
  sub_18006FC08(&v89);
  return v5;
}
