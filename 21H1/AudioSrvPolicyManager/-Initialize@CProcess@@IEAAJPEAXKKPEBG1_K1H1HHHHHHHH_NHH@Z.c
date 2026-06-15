/*
 * XREFs of ?Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x1800197A4
 * Callers:
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHHHH_NHHPEAPEAV1@@Z @ 0x18001927C (-CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHHHH_NHHPEAPEAV1@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001090 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003F90 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A1AC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x18001BC70 (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x18001DE80 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18001E1A4 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::Initialize(
        _DWORD *pv,
        void *a2,
        int a3,
        int a4,
        const unsigned __int16 *a5,
        const unsigned __int16 *a6,
        unsigned __int64 a7,
        const unsigned __int16 *a8,
        int a9,
        const unsigned __int16 *a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        bool a19,
        int a20,
        int a21)
{
  HANDLE *v22; // rdi
  char *v23; // rsi
  DWORD LastError; // ebx
  HANDLE CurrentProcess; // rbx
  HANDLE v26; // rax
  const char *v28; // r9
  unsigned int v29; // ebx
  __int64 result; // rax
  void *v31; // rdi
  DWORD v32; // ebx
  __int64 v33; // rdi
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // ebx
  const char *v38; // r9
  void *v39; // r15
  DWORD v40; // ebx
  __int64 v41; // r9
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned int v45; // ebx
  void *v46; // r15
  DWORD v47; // ebx
  __int64 v48; // r9
  int v49; // eax
  unsigned int v50; // ebx
  const unsigned __int16 *v51; // rax
  void *v52; // r15
  DWORD v53; // ebx
  int v54; // eax
  unsigned int v55; // ebx
  int v56; // eax
  unsigned int v57; // ebx
  DWORD v58; // esi
  unsigned int v59; // r15d
  DWORD v60; // ebx
  void *v61; // rdi
  HANDLE v62; // rbx
  HANDLE v63; // rax
  DWORD *v64; // rdx
  char *v65; // rbx
  _DWORD *v66; // rax
  _DWORD *i; // rcx
  _DWORD *v68; // rcx
  HANDLE v69; // r13
  DWORD v70; // edi
  HANDLE hObject; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE hSourceHandle; // [rsp+48h] [rbp-C0h] BYREF
  const unsigned __int16 *v73; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE ProcessInformation[40]; // [rsp+58h] [rbp-B0h] BYREF
  DWORD dwProcessId[4]; // [rsp+80h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+90h] [rbp-78h] BYREF
  const unsigned __int16 **v77; // [rsp+B0h] [rbp-58h]
  __int64 v78; // [rsp+B8h] [rbp-50h]
  HANDLE *p_hSourceHandle; // [rsp+C0h] [rbp-48h]
  __int64 v80; // [rsp+C8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  hSourceHandle = a2;
  v73 = a10;
  pv[48] = a3;
  pv[49] = a4;
  pv[56] = a9;
  pv[113] = a11;
  pv[114] = a12;
  pv[115] = a13;
  pv[116] = a14;
  pv[118] = a16;
  pv[119] = a17;
  pv[124] = a18;
  pv[117] = a15;
  *((_QWORD *)pv + 30) = a7;
  *((_BYTE *)pv + 818) = a19;
  pv[125] = a20;
  pv[126] = a21;
  hObject = 0LL;
  if ( a2 )
  {
    v22 = (HANDLE *)(pv + 46);
    v23 = (char *)*((_QWORD *)pv + 23);
    if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      CloseHandle(v23);
      SetLastError(LastError);
    }
    *v22 = 0LL;
    CurrentProcess = GetCurrentProcess();
    v26 = GetCurrentProcess();
    if ( !DuplicateHandle(v26, hSourceHandle, CurrentProcess, v22, 0x101000u, 0, 0) )
    {
      v29 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0xAD8,
              (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
              v28);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      return v29;
    }
  }
  v31 = (void *)*((_QWORD *)pv + 25);
  if ( v31 )
  {
    v32 = GetLastError();
    CoTaskMemFree(v31);
    SetLastError(v32);
  }
  *((_QWORD *)pv + 25) = 0LL;
  v33 = -1LL;
  v34 = -1LL;
  do
    ++v34;
  while ( a5[v34] );
  try
  {
    v37 = _AllocStringWorker<CTCoAllocPolicy>(pv, a2, a5);
    if ( v37 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xADE,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v37);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      return (unsigned int)v37;
    }
    v39 = (void *)*((_QWORD *)pv + 27);
    if ( v39 )
    {
      v40 = GetLastError();
      CoTaskMemFree(v39);
      SetLastError(v40);
    }
    *((_QWORD *)pv + 27) = 0LL;
    v41 = -1LL;
    do
      ++v41;
    while ( a8[v41] );
    v42 = _AllocStringWorker<CTCoAllocPolicy>(v36, v35, a8);
    v45 = v42;
    if ( v42 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAE0,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v42);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      return v45;
    }
    if ( a6 )
    {
      v46 = (void *)*((_QWORD *)pv + 26);
      if ( v46 )
      {
        v47 = GetLastError();
        CoTaskMemFree(v46);
        SetLastError(v47);
      }
      *((_QWORD *)pv + 26) = 0LL;
      v48 = -1LL;
      do
        ++v48;
      while ( a6[v48] );
      v49 = _AllocStringWorker<CTCoAllocPolicy>(v44, v43, a6);
      v50 = v49;
      if ( v49 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAE7,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v49);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        return v50;
      }
    }
    v51 = v73;
    if ( v73 )
    {
      v52 = (void *)*((_QWORD *)pv + 29);
      if ( v52 )
      {
        v53 = GetLastError();
        CoTaskMemFree(v52);
        SetLastError(v53);
        v51 = v73;
      }
      *((_QWORD *)pv + 29) = 0LL;
      do
        ++v33;
      while ( v51[v33] );
      v54 = _AllocStringWorker<CTCoAllocPolicy>(v44, v43, v51);
      v55 = v54;
      if ( v54 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAEB,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v54);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        return v55;
      }
    }
    if ( hSourceHandle )
    {
      v56 = CProcess::SetupProcessTerminationWatcher(pv);
      v57 = v56;
      if ( v56 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAF4,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v56);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        return v57;
      }
    }
    v58 = pv[48];
    LODWORD(hSourceHandle) = v58;
    v59 = 0;
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      v60 = GetLastError();
      CloseHandle(hObject);
      SetLastError(v60);
    }
    hObject = 0LL;
    v61 = (void *)*((_QWORD *)pv + 23);
    v62 = GetCurrentProcess();
    v63 = GetCurrentProcess();
    if ( !DuplicateHandle(v63, v61, v62, &hObject, 0x1000u, 0, 0) )
      goto LABEL_63;
    while ( 1 )
    {
      v64 = (DWORD *)*((_QWORD *)pv + 16);
      if ( *((DWORD **)pv + 17) == v64 )
      {
        std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>(pv + 30, v64, &hSourceHandle);
      }
      else
      {
        *v64 = v58;
        *((_QWORD *)pv + 16) += 4LL;
      }
      v58 = 0;
      LODWORD(hSourceHandle) = 0;
      v65 = (char *)hObject;
      if ( hObject )
      {
        if ( NtQueryInformationProcess(hObject, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL) < 0 )
        {
          v65 = (char *)hObject;
        }
        else
        {
          v58 = dwProcessId[0];
          LODWORD(hSourceHandle) = dwProcessId[0];
          v66 = (_DWORD *)*((_QWORD *)pv + 16);
          for ( i = (_DWORD *)*((_QWORD *)pv + 15); i != v66 && *i != dwProcessId[0]; ++i )
            ;
          if ( i != v66 )
          {
            v68 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
            if ( *v68 > 4u )
            {
              LODWORD(hSourceHandle) = pv[48];
              LODWORD(v73) = v58;
              p_hSourceHandle = &hSourceHandle;
              v80 = 4LL;
              v77 = &v73;
              v78 = 4LL;
              tlgWriteTransfer_EventWriteTransfer((__int64)v68, (unsigned __int8 *)dword_18004B7D6, 0LL, 0LL, 4u, &v76);
            }
LABEL_63:
            v65 = (char *)hObject;
LABEL_64:
            if ( (unsigned __int64)(v65 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              CloseHandle(v65);
            return 0LL;
          }
          v65 = (char *)OpenProcess(0x1000u, 0, dwProcessId[0]);
          v69 = hObject;
          if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          {
            v70 = GetLastError();
            CloseHandle(v69);
            SetLastError(v70);
          }
          hObject = v65;
        }
      }
      ++v59;
      if ( !v58 || v59 >= 0xA )
        goto LABEL_64;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB20,
                           (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                           v38);
  }
  return result;
}
