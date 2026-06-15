/*
 * XREFs of ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x180005580
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18000597C (--$_Emplace_reallocate@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vector@.c)
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180005AC0 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006A00 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001B520 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002BB40 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180044A14 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B5588 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CA550 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=21 #try_helpers=1
__int64 __fastcall CAudioSession::FinishConstruction(
        CAudioSession *this,
        struct IAudioProcess *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        struct _GUID *a7)
{
  unsigned int v7; // r15d
  struct IAudioProcess *v9; // rsi
  CAudioSession *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rbx
  int v14; // eax
  WCHAR **v15; // r13
  int cchWideChar; // r12d
  WCHAR *v17; // rdx
  int *v18; // rcx
  __int64 v19; // rbx
  int v20; // ebx
  WCHAR **v21; // r13
  int v22; // r12d
  WCHAR *v23; // rcx
  ATL::CStringData *v24; // rcx
  __int64 v25; // r12
  UUID *v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // eax
  unsigned int v29; // eax
  HRESULT v30; // eax
  unsigned int v31; // ebx
  int v32; // eax
  unsigned int v33; // ebx
  int v34; // eax
  unsigned int v35; // ebx
  __int64 v36; // rax
  const char *v37; // r9
  __int64 v38; // rax
  const char *v39; // r9
  ATL::CAtlException *v41; // rbx
  ATL::CAtlException *v42; // rbx
  struct IAudioProcess **v43; // rdx
  struct IAudioProcess *v44; // rax
  unsigned int lpWideCharStr; // [rsp+20h] [rbp-88h]
  int v46; // [rsp+30h] [rbp-78h]
  int v47; // [rsp+30h] [rbp-78h]
  struct IAudioProcess *v49; // [rsp+40h] [rbp-68h] BYREF
  struct IAudioProcess *v50; // [rsp+48h] [rbp-60h] BYREF
  __int64 v51; // [rsp+50h] [rbp-58h]
  CAudioSession *v52; // [rsp+58h] [rbp-50h]
  ATL::CAtlException *v53; // [rsp+60h] [rbp-48h] BYREF
  ATL::CAtlException *v54; // [rsp+68h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v7 = a4;
  v9 = a2;
  v10 = this;
  v52 = this;
  v51 = (__int64)this;
  v49 = a2;
  v50 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( *((_QWORD *)v10 + 99) == *((_QWORD *)v10 + 98) )
  {
    std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
      (char *)v10 + 776,
      *((_QWORD *)v10 + 98),
      &v50);
  }
  else
  {
    v43 = (struct IAudioProcess **)*((_QWORD *)v10 + 98);
    v44 = v50;
    v50 = 0LL;
    *v43 = v44;
    *((_QWORD *)v10 + 98) += 8LL;
  }
  if ( v50 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v50 + 16LL))(v50);
  *((_BYTE *)v10 + 800) = (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 96LL))(v9) != 0;
  v11 = CAudioSessionInstanceId::Copy((CAudioSession *)((char *)v10 + 656), a3);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F7,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v11,
      lpWideCharStr);
    return v12;
  }
  v13 = *((_QWORD *)v10 + 91);
  v14 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 40LL))(v9);
  *((_QWORD *)v10 + 117) = v13;
  *((_DWORD *)v10 + 236) = v14;
  *((_BYTE *)v10 + 303) = (v7 & 1) != 0;
  if ( (v7 & 1) != 0 )
    *((_DWORD *)v10 + 78) = 2000;
  if ( (v7 & 4) != 0 )
  {
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(
        (char *)v10 + 320,
        L"@%SystemRoot%\\System32\\AudioSrv.Dll,-202",
        40LL);
    }
    catch ( ATL::CAtlException *v53 )
    {
      v41 = v53;
      if ( *(_DWORD *)v53 == -1073741571 )
        _o__resetstkoflw();
      v46 = *(_DWORD *)v41;
      if ( v46 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x80E,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)v46,
          lpWideCharStr);
        return (unsigned int)v46;
      }
      v10 = v52;
      v9 = v49;
      v7 = a4;
    }
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(
        (char *)v10 + 328,
        L"@%SystemRoot%\\System32\\AudioSrv.Dll,-203",
        40LL);
    }
    catch ( ATL::CAtlException *v54 )
    {
      v42 = v54;
      if ( *(_DWORD *)v54 == -1073741571 )
        _o__resetstkoflw();
      v47 = *(_DWORD *)v42;
      if ( v47 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x811,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)v47,
          lpWideCharStr);
        return (unsigned int)v47;
      }
      v10 = v52;
      v9 = v49;
      v7 = a4;
    }
    *((_BYTE *)v10 + 302) = 1;
    *((_DWORD *)v10 + 78) = 5000;
    v20 = 1;
  }
  else
  {
    v15 = (WCHAR **)((char *)v10 + 320);
    cchWideChar = MultiByteToWideChar(3u, 0, MultiByteStr, -1, 0LL, 0) - 1;
    v17 = (WCHAR *)*((_QWORD *)v10 + 40);
    if ( cchWideChar > 0 )
    {
      v20 = 1;
      if ( ((1 - *((_DWORD *)v17 - 2)) | (*((_DWORD *)v17 - 3) - cchWideChar)) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((char *)v10 + 320, (unsigned int)cchWideChar);
        v17 = *v15;
      }
      MultiByteToWideChar(3u, 0, MultiByteStr, -1, v17, cchWideChar);
      ATL::CSimpleStringT<unsigned short,0>::SetLength((char *)v10 + 320, (unsigned int)cchWideChar);
    }
    else
    {
      v18 = (int *)(v17 - 12);
      v19 = *((_QWORD *)v17 - 3);
      if ( *((_DWORD *)v17 - 4) )
      {
        if ( v18[4] >= 0 )
        {
          ATL::CStringData::Release((ATL::CStringData *)v18);
          *v15 = (WCHAR *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19) + 24);
        }
        else
        {
          ATL::CSimpleStringT<unsigned short,0>::SetLength((char *)v10 + 320, 0LL);
        }
      }
      v20 = 1;
    }
    v21 = (WCHAR **)((char *)v10 + 328);
    v22 = MultiByteToWideChar(3u, 0, MultiByteStr, -1, 0LL, 0) - 1;
    v23 = (WCHAR *)*((_QWORD *)v10 + 41);
    if ( v22 > 0 )
    {
      if ( ((1 - *((_DWORD *)v23 - 2)) | (*((_DWORD *)v23 - 3) - v22)) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((char *)v10 + 328, (unsigned int)v22);
        v23 = *v21;
      }
      MultiByteToWideChar(3u, 0, MultiByteStr, -1, v23, v22);
      ATL::CSimpleStringT<unsigned short,0>::SetLength((char *)v10 + 328, (unsigned int)v22);
    }
    else
    {
      v24 = (ATL::CStringData *)(v23 - 12);
      v25 = *(_QWORD *)v24;
      if ( *((_DWORD *)v24 + 2) )
      {
        if ( *((int *)v24 + 4) >= 0 )
        {
          ATL::CStringData::Release(v24);
          *v21 = (WCHAR *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 24LL))(v25) + 24);
        }
        else
        {
          ATL::CSimpleStringT<unsigned short,0>::SetLength((char *)v10 + 328, 0LL);
        }
      }
    }
  }
  if ( (v7 & 0x20) == 0 )
    v20 = 0;
  *((_DWORD *)v10 + 120) = v20;
  *((_DWORD *)v10 + 76) = a5;
  *((_DWORD *)v10 + 77) = v7;
  *((_DWORD *)v10 + 69) = a6;
  v26 = (UUID *)(v51 + 284);
  v27 = *(_QWORD *)&a7->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&a7->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v27 = *(_QWORD *)a7->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v27 )
  {
    *v26 = *a7;
    *((_BYTE *)v10 + 300) = 1;
  }
  else
  {
    v28 = UuidCreate(v26);
    if ( v28 )
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x827,
               (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
               (const char *)v28,
               lpWideCharStr);
  }
  v29 = UuidCreate((UUID *)v10 + 21);
  if ( v29 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x830,
             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
             (const char *)v29,
             lpWideCharStr);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 808));
  v51 = (__int64)v10 + 808;
  *((_DWORD *)v10 + 212) = 1065353216;
  if ( v10 != (CAudioSession *)-808LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 808));
  v30 = PSCreateMemoryPropertyStore(&IID_IPropertyStore, (void **)v10 + 61);
  v31 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x837,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v30,
      lpWideCharStr);
    return v31;
  }
  else
  {
    v32 = (*(__int64 (__fastcall **)(CAudioSession *, _QWORD))(*(_QWORD *)v10 + 248LL))(v10, v7);
    v33 = v32;
    if ( v32 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x839,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v32,
        lpWideCharStr);
      return v33;
    }
    else
    {
      v34 = (*(__int64 (__fastcall **)(struct IAudioProcess *, CAudioSession *))(*(_QWORD *)v9 + 24LL))(v9, v10);
      v35 = v34;
      if ( v34 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83C,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)v34,
          lpWideCharStr);
        return v35;
      }
      else
      {
        v36 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), CAudioSession *))(*(_QWORD *)ThreadPool + 8LL))(
                ThreadPool,
                CAudioSession::InactiveTimerCallback,
                v10);
        *((_QWORD *)v10 + 75) = v36;
        if ( v36 )
        {
          v38 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), CAudioSession *))(*(_QWORD *)ThreadPool + 56LL))(
                  ThreadPool,
                  CAudioSession::StateCheckExpiredCallback,
                  v10);
          *((_QWORD *)v10 + 76) = v38;
          if ( v38 )
          {
            v51 = -10000LL * *((unsigned int *)v10 + 78);
            v49 = (struct IAudioProcess *)v51;
            (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, struct IAudioProcess **, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
              ThreadPool,
              *((_QWORD *)v10 + 75),
              &v49,
              0LL,
              100);
            return 0LL;
          }
          else
          {
            return wil::details::in1diag3::Return_GetLastError(
                     retaddr,
                     (void *)0x843,
                     (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                     v39);
          }
        }
        else
        {
          return wil::details::in1diag3::Return_GetLastError(
                   retaddr,
                   (void *)0x840,
                   (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                   v37);
        }
      }
    }
  }
}
