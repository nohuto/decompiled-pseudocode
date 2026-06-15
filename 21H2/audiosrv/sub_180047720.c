/*
 * XREFs of sub_180047720 @ 0x180047720
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180029DDC @ 0x180029DDC (sub_180029DDC.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_1800D8E60 @ 0x1800D8E60 (sub_1800D8E60.c)
 *     sub_1801051F8 @ 0x1801051F8 (sub_1801051F8.c)
 *     sub_1801060DC @ 0x1801060DC (sub_1801060DC.c)
 *     sub_1801065E8 @ 0x1801065E8 (sub_1801065E8.c)
 *     sub_18010743C @ 0x18010743C (sub_18010743C.c)
 *     sub_1801077B0 @ 0x1801077B0 (sub_1801077B0.c)
 *     sub_180108408 @ 0x180108408 (sub_180108408.c)
 *     sub_180108B84 @ 0x180108B84 (sub_180108B84.c)
 *     sub_180109610 @ 0x180109610 (sub_180109610.c)
 */

__int64 __fastcall sub_180047720(
        __int64 a1,
        void (__fastcall ***a2)(__int64, void *, __int64 *),
        int a3,
        __int64 a4,
        _OWORD *a5)
{
  __int64 v5; // rax
  void (__fastcall **v9)(__int64, void *, __int64 *); // rax
  __int64 v10; // rbx
  __int64 v11; // r9
  char v12; // bl
  HRESULT v13; // eax
  int ActivationFactory; // eax
  int v15; // eax
  __int64 v16; // rcx
  void (__fastcall **v17)(__int64, void *, __int64 *); // rax
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  int v21; // r12d
  bool v22; // bl
  char v23; // r14
  HRESULT v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  unsigned int v31; // edi
  __int64 v32; // r9
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  int v36; // eax
  int v37; // eax
  __int64 v38; // r14
  int v39; // eax
  __int64 v40; // rax
  int v41; // eax
  unsigned int v42; // ebx
  __int64 v43; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD *v47; // [rsp+58h] [rbp-A8h]
  int v48; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v49; // [rsp+64h] [rbp-9Ch] BYREF
  BOOL v50; // [rsp+68h] [rbp-98h] BYREF
  BOOL v51; // [rsp+6Ch] [rbp-94h] BYREF
  int v52; // [rsp+70h] [rbp-90h] BYREF
  int v53; // [rsp+74h] [rbp-8Ch]
  __int64 v54; // [rsp+78h] [rbp-88h] BYREF
  __int64 v55; // [rsp+80h] [rbp-80h] BYREF
  __int64 v56; // [rsp+88h] [rbp-78h] BYREF
  __int64 v57; // [rsp+90h] [rbp-70h] BYREF
  __int64 v58; // [rsp+98h] [rbp-68h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-58h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DESCRIPTOR v62; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR v63; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR v64; // [rsp+E0h] [rbp-20h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+F0h] [rbp-10h] BYREF
  HSTRING string; // [rsp+108h] [rbp+8h] BYREF
  HSTRING_HEADER v67; // [rsp+110h] [rbp+10h] BYREF
  HSTRING v68; // [rsp+128h] [rbp+28h] BYREF
  _OWORD v69[3]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v70; // [rsp+160h] [rbp+60h]
  CLSID pClsid; // [rsp+168h] [rbp+68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+178h] [rbp+78h] BYREF
  void *v73; // [rsp+188h] [rbp+88h]
  int v74; // [rsp+190h] [rbp+90h]
  int v75; // [rsp+194h] [rbp+94h]
  BOOL *v76; // [rsp+198h] [rbp+98h]
  __int64 v77; // [rsp+1A0h] [rbp+A0h]
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+1A8h] [rbp+A8h] BYREF
  void *v79; // [rsp+1B8h] [rbp+B8h]
  int v80; // [rsp+1C0h] [rbp+C0h]
  int v81; // [rsp+1C4h] [rbp+C4h]
  BOOL *v82; // [rsp+1C8h] [rbp+C8h]
  __int64 v83; // [rsp+1D0h] [rbp+D0h]
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+1D8h] [rbp+D8h] BYREF
  void *v85; // [rsp+1E8h] [rbp+E8h]
  int v86; // [rsp+1F0h] [rbp+F0h]
  int v87; // [rsp+1F4h] [rbp+F4h]
  BOOL *v88; // [rsp+1F8h] [rbp+F8h]
  __int64 v89; // [rsp+200h] [rbp+100h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+210h] [rbp+110h] BYREF
  void *v91; // [rsp+220h] [rbp+120h]
  int v92; // [rsp+228h] [rbp+128h]
  int v93; // [rsp+22Ch] [rbp+12Ch]
  const char *v94; // [rsp+230h] [rbp+130h]
  __int64 v95; // [rsp+238h] [rbp+138h]
  int *v96; // [rsp+240h] [rbp+140h]
  __int64 v97; // [rsp+248h] [rbp+148h]
  void *retaddr; // [rsp+298h] [rbp+198h]

  v5 = (__int64)a5;
  v60 = a4;
  v53 = a3;
  v47 = a5;
  if ( (unsigned int)CallbackContext > 5 )
  {
    v48 = 299;
    v96 = &v48;
    v97 = 4LL;
    v94 = "Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice";
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_18019C358;
    v95 = 64LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_18019C358;
    v91 = &unk_18016926D;
    v93 = 1;
    UserData.Reserved = 2;
    v92 = 21;
    EventWriteTransfer(qword_18019C370, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    v5 = (__int64)v47;
    a4 = v60;
  }
  v70 = 0LL;
  memset(v69, 0, sizeof(v69));
  if ( !a2 )
  {
    sub_1800D8E60(
      retaddr,
      303LL,
      "avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp");
    __debugbreak();
  }
  if ( !a4 )
  {
    sub_1800D8E60(
      retaddr,
      304LL,
      "avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp");
    __debugbreak();
  }
  if ( !v5 )
  {
    sub_1800D8E60(
      retaddr,
      305LL,
      "avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp");
    __debugbreak();
  }
  v9 = *a2;
  v10 = 0LL;
  v58 = 0LL;
  (*v9)((__int64)a2, &unk_18015C150, &v58);
  if ( v58 )
  {
    v11 = *(_QWORD *)(a1 + 232);
    if ( v11 )
    {
      v28 = *(_QWORD *)(v11 + 8LL * ((unsigned int)v58 % *(_DWORD *)(a1 + 248)));
      if ( v28 )
      {
        while ( *(_DWORD *)(v28 + 112) != (_DWORD)v58 || *(_QWORD *)v28 != v58 )
        {
          v28 = *(_QWORD *)(v28 + 104);
          if ( !v28 )
            goto LABEL_8;
        }
        v10 = v28 + 8;
      }
    }
LABEL_8:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
    if ( v10 )
      return 0LL;
  }
  if ( *(_QWORD *)(a1 + 576) )
  {
LABEL_20:
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
    v17 = *a2;
    v46 = 0LL;
    v18 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, void *, __int64 *), __int64 *))v17[15])(a2, &v46);
    v19 = v18;
    if ( v18 < 0 )
    {
      sub_18004BD84(
        retaddr,
        333LL,
        "avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (unsigned int)v18);
    }
    else
    {
      if ( v46 )
      {
        v43 = 0LL;
        v20 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v46 + 192LL))(v46, &v43);
        v19 = v20;
        if ( v20 < 0 )
        {
          v32 = (unsigned int)v20;
          v33 = 337LL;
LABEL_103:
          sub_18004BD84(
            retaddr,
            v33,
            "avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
            v32);
LABEL_40:
          if ( v43 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
          goto LABEL_42;
        }
        if ( !v43 )
        {
          v19 = -2005139197;
          v33 = 338LL;
LABEL_102:
          v32 = (unsigned int)v19;
          goto LABEL_103;
        }
        v21 = a3 & 0x800000;
        if ( (a3 & 0x800000) != 0 )
          goto LABEL_92;
        v22 = 0;
        v23 = 0;
        if ( !*(_BYTE *)(a1 + 145) )
        {
LABEL_32:
          if ( (unsigned int)CallbackContext > 4 )
          {
            v83 = 4LL;
            v63.Keyword = 0LL;
            *(_DWORD *)&v63.Id = 184549376;
            v50 = v23 != 0;
            v82 = &v50;
            *(_DWORD *)&v63.Level = 4;
            v78.Ptr = (ULONGLONG)off_18019C358;
            v78.Size = *(unsigned __int16 *)off_18019C358;
            v79 = &unk_180168FDE;
            v81 = 1;
            v78.Reserved = 2;
            v80 = 38;
            EventWriteTransfer(qword_18019C370, &v63, 0LL, 0LL, 3u, &v78);
          }
          if ( v23 )
            v22 = CoGetPSClsid(&stru_18015E080, &pClsid) >= 0;
          if ( (unsigned int)CallbackContext > 4 )
          {
            v89 = 4LL;
            *(_DWORD *)&v64.Id = 184549376;
            v64.Keyword = 0LL;
            v51 = v22;
            v88 = &v51;
            *(_DWORD *)&v64.Level = 4;
            v84.Ptr = (ULONGLONG)off_18019C358;
            v84.Size = *(unsigned __int16 *)off_18019C358;
            v85 = &unk_180168FB5;
            v87 = 1;
            v84.Reserved = 2;
            v86 = 29;
            EventWriteTransfer(qword_18019C370, &v64, 0LL, 0LL, 3u, &v84);
          }
          if ( !v22 )
          {
            v19 = 0;
            goto LABEL_40;
          }
          v44 = 0LL;
          sub_1800CB144(&v44);
          v34 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, void *, __int64 *), __int64 *))(*a2)[3])(
                  a2,
                  &v44);
          v19 = v34;
          if ( v34 < 0 )
          {
            sub_18004BD84(
              retaddr,
              345LL,
              "avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (unsigned int)v34);
LABEL_90:
            sub_18000F708(&v44);
            goto LABEL_40;
          }
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v44 + 368LL))(v44) )
          {
            v19 = 0;
            goto LABEL_90;
          }
          v45 = 0LL;
          v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 24LL))(v43);
          v36 = sub_180029DDC(v35, 0LL, &v45);
          v19 = v36;
          if ( v36 < 0 )
          {
            sub_18004BD84(
              retaddr,
              352LL,
              "avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (unsigned int)v36);
LABEL_89:
            sub_18000F708(&v45);
            goto LABEL_90;
          }
          v37 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v45 + 112LL))(v45, &v52);
          v19 = v37;
          if ( v37 < 0 )
          {
            sub_18004BD84(
              retaddr,
              355LL,
              "avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (unsigned int)v37);
            goto LABEL_89;
          }
          if ( !v52 )
          {
            v19 = 0;
            goto LABEL_89;
          }
          *((_QWORD *)&v69[0] + 1) = 0x100000001LL;
          v47 = v69;
          sub_18000F708(&v45);
          sub_18000F708(&v44);
LABEL_92:
          v59 = sub_1801065E8(a1 + 152, v43);
          v38 = v59;
          if ( !v59 )
          {
            v39 = sub_180108B84(a1, v43, &v59);
            v19 = v39;
            if ( v39 < 0 )
            {
              v32 = (unsigned int)v39;
              v33 = 374LL;
              goto LABEL_103;
            }
            v38 = v59;
            if ( !v59 )
            {
              sub_1800D8E60(
                retaddr,
                375LL,
                "avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp");
              __debugbreak();
            }
          }
          v19 = sub_1801060DC(a1, (_DWORD)a2, v53, v60, (__int64)v47, v38);
          if ( v19 < 0 )
          {
            if ( !*(_DWORD *)(v38 + 12) && *(_QWORD *)v38 )
              sub_180108408(a1 + 152);
            v33 = 385LL;
            goto LABEL_102;
          }
          sub_18000F708(&v43);
          sub_18000F708(&v46);
          if ( a1 != -64 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
          if ( !v21 )
          {
            v40 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, void *, __int64 *)))(*a2)[10])(a2);
            v41 = sub_1801077B0(a1, v40, *((unsigned int *)v47 + 2), *((unsigned int *)v47 + 3));
            v42 = v41;
            if ( v41 < 0 )
            {
              sub_18004BD84(
                retaddr,
                395LL,
                "avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                (unsigned int)v41);
              return v42;
            }
          }
          return 0LL;
        }
        v57 = 0LL;
        v68 = 0LL;
        v24 = WindowsCreateStringReference(L"Windows.Graphics.Holographic.HolographicDisplay", 0x2Fu, &v67, &v68);
        if ( v24 < 0 )
        {
          RaiseException(v24, 1u, 0, 0LL);
          __debugbreak();
        }
        else
        {
          if ( (int)RoGetActivationFactory(v68, &unk_18015C0E0, &v57) < 0 )
          {
            v68 = 0LL;
LABEL_30:
            if ( v57 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
            goto LABEL_32;
          }
          v68 = 0LL;
          v56 = 0LL;
          v25 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v57 + 64LL))(v57, &v56);
          v26 = v56;
          if ( v25 < 0 )
          {
LABEL_76:
            if ( v26 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
            goto LABEL_30;
          }
          if ( !v56 )
            goto LABEL_30;
        }
        v23 = 1;
        goto LABEL_76;
      }
      v19 = -2005139190;
      sub_18004BD84(
        retaddr,
        334LL,
        "avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        2289828106LL);
    }
LABEL_42:
    if ( v46 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    if ( a1 != -64 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
    return (unsigned int)v19;
  }
  v12 = 0;
  if ( *(_BYTE *)(a1 + 145) )
  {
    v55 = 0LL;
    string = 0LL;
    v13 = WindowsCreateStringReference(
            L"Windows.Graphics.Holographic.HolographicDisplay",
            0x2Fu,
            &hstringHeader,
            &string);
    if ( v13 < 0 )
    {
      RaiseException(v13, 1u, 0, 0LL);
      __debugbreak();
    }
    else
    {
      ActivationFactory = RoGetActivationFactory(string, &unk_18015C0E0, &v55);
      string = 0LL;
      if ( ActivationFactory < 0 )
        goto LABEL_15;
      v54 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v55 + 64LL))(v55, &v54);
      v16 = v54;
      if ( v15 < 0 )
      {
LABEL_60:
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        goto LABEL_15;
      }
      if ( !v54 )
      {
LABEL_15:
        if ( v55 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
        goto LABEL_17;
      }
    }
    v12 = 1;
    goto LABEL_60;
  }
LABEL_17:
  if ( (unsigned int)CallbackContext > 4 )
  {
    v77 = 4LL;
    *(_DWORD *)&v62.Id = 184549376;
    v62.Keyword = 0LL;
    v49 = v12 != 0;
    v76 = &v49;
    *(_DWORD *)&v62.Level = 4;
    v72.Ptr = (ULONGLONG)off_18019C358;
    v72.Size = *(unsigned __int16 *)off_18019C358;
    v75 = 1;
    v73 = &unk_180168FDE;
    v72.Reserved = 2;
    v74 = 38;
    EventWriteTransfer(qword_18019C370, &v62, 0LL, 0LL, 3u, &v72);
  }
  if ( !v12 )
    goto LABEL_20;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 104));
  sub_18010743C(v29, *(unsigned __int8 *)(a1 + 145));
  if ( !*(_BYTE *)(a1 + 145)
    || *(_QWORD *)(a1 + 576)
    || (sub_180109610(a1 + 576), v30 = sub_1801051F8(a1 + 576), v31 = v30, v30 >= 0) )
  {
    if ( a1 != -104 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 104));
    goto LABEL_20;
  }
  sub_18004BD84(
    retaddr,
    323LL,
    "avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
    (unsigned int)v30);
  if ( a1 != -104 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 104));
  return v31;
}
