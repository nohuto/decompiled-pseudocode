/*
 * XREFs of sub_18001B7E4 @ 0x18001B7E4
 * Callers:
 *     sub_180006770 @ 0x180006770 (sub_180006770.c)
 *     PbmRegisterPlaybackManagerNotifications @ 0x1800233A0 (PbmRegisterPlaybackManagerNotifications.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180023460 (PbmUnregisterPlaybackManagerNotifications.c)
 *     PbmSetSmtcSubscriptionState @ 0x180023590 (PbmSetSmtcSubscriptionState.c)
 *     PbmGetSoundLevel @ 0x180023720 (PbmGetSoundLevel.c)
 *     PbmIsPlaying @ 0x180023860 (PbmIsPlaying.c)
 *     PbmRegisterAppManagerNotification @ 0x180023980 (PbmRegisterAppManagerNotification.c)
 *     PbmUnregisterAppManagerNotification @ 0x180023A20 (PbmUnregisterAppManagerNotification.c)
 *     PbmRegisterAppClosureNotification @ 0x180023AC0 (PbmRegisterAppClosureNotification.c)
 *     PbmUnregisterAppClosureNotification @ 0x180023B60 (PbmUnregisterAppClosureNotification.c)
 *     PbmPlayToStreamStateChanged @ 0x180023C40 (PbmPlayToStreamStateChanged.c)
 *     PbmCastingAppStateChanged @ 0x180023D90 (PbmCastingAppStateChanged.c)
 *     PbmSetScreenReaderState @ 0x1800240B0 (PbmSetScreenReaderState.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180003AE8 @ 0x180003AE8 (sub_180003AE8.c)
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_1800087B4 @ 0x1800087B4 (sub_1800087B4.c)
 *     sub_180008814 @ 0x180008814 (sub_180008814.c)
 *     sub_18000A4C0 @ 0x18000A4C0 (sub_18000A4C0.c)
 *     sub_18001391C @ 0x18001391C (sub_18001391C.c)
 *     sub_180017E30 @ 0x180017E30 (sub_180017E30.c)
 *     sub_18001A9E0 @ 0x18001A9E0 (sub_18001A9E0.c)
 *     sub_18001ACFC @ 0x18001ACFC (sub_18001ACFC.c)
 *     sub_18001B50C @ 0x18001B50C (sub_18001B50C.c)
 *     sub_18001B65C @ 0x18001B65C (sub_18001B65C.c)
 *     sub_18001D714 @ 0x18001D714 (sub_18001D714.c)
 *     sub_18001D878 @ 0x18001D878 (sub_18001D878.c)
 *     sub_18001D914 @ 0x18001D914 (sub_18001D914.c)
 *     sub_18001D9B4 @ 0x18001D9B4 (sub_18001D9B4.c)
 *     sub_18002154C @ 0x18002154C (sub_18002154C.c)
 *     sub_180021570 @ 0x180021570 (sub_180021570.c)
 *     sub_180021698 @ 0x180021698 (sub_180021698.c)
 *     sub_180037620 @ 0x180037620 (sub_180037620.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=192
__int64 __fastcall sub_18001B7E4(__int64 a1, void *a2, volatile signed __int32 **a3)
{
  __int64 v4; // rsi
  RPC_STATUS v5; // eax
  int v7; // eax
  unsigned int v8; // r14d
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rax
  struct _RTL_CRITICAL_SECTION *v11; // r14
  volatile signed __int32 *v12; // rbx
  int v13; // eax
  unsigned int v14; // esi
  volatile signed __int32 *v15; // rbx
  RPC_STATUS v16; // eax
  HANDLE CurrentThread; // rax
  __int64 v18; // r9
  int v19; // eax
  char *v20; // rbx
  int v21; // eax
  void *v22; // rsi
  DWORD v23; // edi
  __int64 v24; // r9
  volatile signed __int32 *v25; // rbx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  signed int v32; // r9d
  int v33; // eax
  void *v34; // rcx
  signed int v35; // r9d
  int v36; // eax
  int v37; // eax
  __int64 v38; // rcx
  unsigned int v39; // edi
  int v40; // eax
  HLOCAL v41; // rdi
  int v42; // eax
  int v43; // eax
  int v44; // r15d
  __int64 v45; // r9
  __int64 v46; // r9
  PSID *v47; // r15
  __int64 v48; // r9
  signed int LastError; // eax
  signed int v50; // edx
  signed int v51; // eax
  signed int v52; // edx
  BOOL v53; // r14d
  volatile signed __int32 **v54; // rax
  HLOCAL v55; // r14
  void *v56; // r15
  int v57; // eax
  int v58; // eax
  int v59; // [rsp+98h] [rbp-180h]
  HANDLE hObject; // [rsp+B8h] [rbp-160h] BYREF
  volatile signed __int32 *v61; // [rsp+C0h] [rbp-158h] BYREF
  _BYTE v62[8]; // [rsp+C8h] [rbp-150h] BYREF
  void *TokenHandle; // [rsp+D0h] [rbp-148h] BYREF
  HLOCAL hMem; // [rsp+D8h] [rbp-140h] BYREF
  LPVOID v65; // [rsp+E0h] [rbp-138h] BYREF
  int v66; // [rsp+E8h] [rbp-130h] BYREF
  HLOCAL v67; // [rsp+F0h] [rbp-128h] BYREF
  unsigned int Pid; // [rsp+F8h] [rbp-120h] BYREF
  DWORD TokenInformationLength; // [rsp+FCh] [rbp-11Ch] BYREF
  unsigned int v70; // [rsp+100h] [rbp-118h]
  int v71; // [rsp+104h] [rbp-114h] BYREF
  HANDLE v72; // [rsp+108h] [rbp-110h]
  __int64 v73; // [rsp+110h] [rbp-108h]
  LPVOID pv; // [rsp+118h] [rbp-100h] BYREF
  int TokenInformation; // [rsp+120h] [rbp-F8h] BYREF
  int v76; // [rsp+124h] [rbp-F4h] BYREF
  unsigned int v77; // [rsp+128h] [rbp-F0h]
  int v78; // [rsp+12Ch] [rbp-ECh] BYREF
  int v79; // [rsp+130h] [rbp-E8h] BYREF
  int v80; // [rsp+134h] [rbp-E4h] BYREF
  BOOL v81; // [rsp+138h] [rbp-E0h]
  int v82; // [rsp+13Ch] [rbp-DCh]
  BOOL v83; // [rsp+140h] [rbp-D8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+148h] [rbp-D0h]
  DWORD ReturnLength; // [rsp+150h] [rbp-C8h] BYREF
  unsigned int v86; // [rsp+154h] [rbp-C4h] BYREF
  PUCHAR SidSubAuthorityCount; // [rsp+158h] [rbp-C0h]
  int v88; // [rsp+160h] [rbp-B8h] BYREF
  int v89; // [rsp+164h] [rbp-B4h] BYREF
  HANDLE v90; // [rsp+168h] [rbp-B0h]
  __int64 v91; // [rsp+170h] [rbp-A8h] BYREF
  __int64 v92; // [rsp+178h] [rbp-A0h] BYREF
  volatile signed __int32 *v93; // [rsp+180h] [rbp-98h] BYREF
  HANDLE v94; // [rsp+188h] [rbp-90h]
  __int64 v95; // [rsp+190h] [rbp-88h]
  volatile signed __int32 **v96; // [rsp+198h] [rbp-80h]
  char v97; // [rsp+1A0h] [rbp-78h]
  __int64 v98; // [rsp+1A8h] [rbp-70h]
  _BYTE v99[8]; // [rsp+1B0h] [rbp-68h] BYREF
  _BYTE v100[8]; // [rsp+1B8h] [rbp-60h] BYREF
  char v101; // [rsp+1C0h] [rbp-58h] BYREF
  PSID *v102; // [rsp+1C8h] [rbp-50h]
  ATL::CAtlException *v103; // [rsp+1D0h] [rbp-48h] BYREF
  char v104; // [rsp+1D8h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+218h] [rbp+0h]
  unsigned __int8 v106; // [rsp+220h] [rbp+8h]
  unsigned int v107; // [rsp+220h] [rbp+8h]
  unsigned int v109; // [rsp+230h] [rbp+18h]
  unsigned int v110; // [rsp+230h] [rbp+18h]
  char v111; // [rsp+238h] [rbp+20h] BYREF

  v4 = qword_18004FE78;
  v73 = qword_18004FE78;
  *a3 = 0LL;
  v5 = I_RpcBindingInqLocalClientPID(a2, &Pid);
  if ( v5 )
    return sub_18000A4C0(
             retaddr,
             946,
             (int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
             v5);
  v61 = 0LL;
  v7 = sub_18001D9B4(v4, Pid, &v61);
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_180003AB0(
      retaddr,
      951,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      v7);
    v9 = v61;
    if ( v61 )
    {
      if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 32LL))(v9);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
      }
    }
    return v8;
  }
  v10 = v61;
  if ( v61 )
    goto LABEL_345;
  v11 = (struct _RTL_CRITICAL_SECTION *)(v4 + 32);
  lpCriticalSection = (LPCRITICAL_SECTION)(v4 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 32));
  v98 = v4 + 32;
  v12 = v61;
  v61 = 0LL;
  if ( v12 && _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 32LL))(v12);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v12 + 24LL))(v12, 1LL);
  }
  v13 = sub_18001D9B4(v4, Pid, &v61);
  v14 = v13;
  if ( v13 < 0 )
  {
    sub_180003AB0(
      retaddr,
      959,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      v13);
    if ( v11 )
      LeaveCriticalSection(v11);
LABEL_15:
    v15 = v61;
    if ( v61 && _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 32LL))(v15);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v15 + 24LL))(v15, 1LL);
    }
    return v14;
  }
  if ( v61 )
  {
LABEL_342:
    if ( v11 )
      LeaveCriticalSection(v11);
    v10 = v61;
LABEL_345:
    v61 = 0LL;
    *a3 = v10;
    v39 = 0;
    goto LABEL_346;
  }
  v16 = RpcImpersonateClient(a2);
  if ( v16 )
  {
    v14 = sub_18000A4C0(
            retaddr,
            963,
            (int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
            v16);
    if ( v11 )
      LeaveCriticalSection(v11);
    goto LABEL_15;
  }
  hObject = 0LL;
  CurrentThread = GetCurrentThread();
  if ( !OpenThreadToken(CurrentThread, 8u, 1, &hObject) )
  {
    v14 = sub_180003AE8(
            retaddr,
            967,
            (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
            v18);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    RpcRevertToSelf();
    if ( v11 )
      LeaveCriticalSection(v11);
    goto LABEL_15;
  }
  hMem = 0LL;
  v67 = 0LL;
  v19 = sub_18001A9E0(hObject, (LPWSTR *)&v67, &v71, (LPWSTR *)&hMem, &v86);
  if ( v19 )
  {
    v14 = sub_18000A4C0(
            retaddr,
            973,
            (int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
            v19);
    if ( hMem )
      LocalFree(hMem);
    if ( v67 )
      LocalFree(v67);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    RpcRevertToSelf();
    if ( v11 )
      LeaveCriticalSection(v11);
    goto LABEL_15;
  }
  v20 = (char *)OpenProcess(0x101000u, 0, Pid);
  v90 = v20;
  if ( !v20 && GetLastError() == 5 )
  {
    v20 = (char *)OpenProcess(0x100400u, 0, Pid);
    v90 = v20;
    if ( (unsigned __int64)(v20 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      sub_180021698(retaddr);
  }
  v83 = 0;
  TokenInformation = 0;
  ReturnLength = 0;
  if ( GetTokenInformation(hObject, TokenUIAccess, &TokenInformation, 4u, &ReturnLength) )
    v83 = TokenInformation != 0;
  v92 = -1LL;
  pv = 0LL;
  v65 = 0LL;
  v21 = sub_18001ACFC(v20, &v65, &pv);
  v14 = v21;
  if ( v21 < 0 )
  {
    sub_180003AB0(
      retaddr,
      1011,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      v21);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v65 )
      CoTaskMemFree(v65);
    if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v20);
    if ( hMem )
      LocalFree(hMem);
    if ( v67 )
      LocalFree(v67);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    RpcRevertToSelf();
    if ( v11 )
      LeaveCriticalSection(v11);
    goto LABEL_15;
  }
  TokenHandle = 0LL;
  if ( (int)sub_180021570(-6, 1, (unsigned int)&v88, (unsigned int)&v104, (__int64)v99) < 0
    || (v82 = 1, (unsigned int)(v88 - 65537) > 1) )
  {
    v82 = 0;
  }
  if ( (int)sub_180021570(-6, 14, (unsigned int)&v89, (unsigned int)&v101, (__int64)v100) < 0
    || (v106 = 1, v89 != 917505) )
  {
    v106 = 0;
  }
  v81 = 0;
  v66 = 0;
  v80 = 0;
  v79 = 0;
  v78 = 0;
  LOBYTE(v77) = 0;
  v22 = pv;
  if ( !*(_WORD *)pv )
  {
LABEL_106:
    if ( v106 && v71 )
    {
      v91 = 0LL;
      v29 = RtlQueryPackageClaims(-6LL, 0LL, 0LL, 0LL, 0LL, 0LL, &v91, 0LL);
      if ( v29 )
      {
        v109 = sub_18000A4C0(
                 retaddr,
                 1047,
                 (int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                 v29);
        if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(TokenHandle);
        CoTaskMemFree(v22);
        if ( v65 )
          CoTaskMemFree(v65);
        if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v20);
        if ( hMem )
          LocalFree(hMem);
        if ( v67 )
          LocalFree(v67);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        RpcRevertToSelf();
        if ( v11 )
          LeaveCriticalSection(v11);
        goto LABEL_86;
      }
      v30 = (unsigned int)v91 >> 4;
      LOBYTE(v30) = (v91 & 0x10) != 0;
      v77 = v30;
      v111 = 0;
      v31 = CapabilityCheck(-6LL, L"voipCall", &v111);
      v32 = (unsigned __int16)v31 | 0x80070000;
      if ( v31 <= 0 )
        v32 = v31;
      if ( v32 < 0
        && off_18004F000 != (_UNKNOWN *)&off_18004F000
        && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
        && *((_BYTE *)off_18004F000 + 25) >= 3u )
      {
        sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x18u, &stru_1800445C8, v32);
      }
      v81 = v111 != 0;
      v62[0] = 0;
      v33 = CapabilityCheck(-6LL, L"backgroundMediaPlayback", v62);
      v35 = (unsigned __int16)v33 | 0x80070000;
      if ( v33 <= 0 )
        v35 = v33;
      if ( v35 < 0 )
      {
        v34 = off_18004F000;
        if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
          && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
          && *((_BYTE *)off_18004F000 + 25) >= 3u )
        {
          sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x19u, &stru_1800445C8, v35);
        }
      }
      v36 = v66;
      if ( v62[0] )
        v36 = 1;
      v66 = v36;
      v37 = sub_18001D878(v34, -6LL, &v79);
      v39 = v37;
      if ( v37 < 0 )
      {
        sub_180003AB0(
          retaddr,
          1061,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          v37);
        if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(TokenHandle);
        CoTaskMemFree(v22);
        if ( v65 )
          CoTaskMemFree(v65);
        if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v20);
        if ( hMem )
          LocalFree(hMem);
        if ( v67 )
          LocalFree(v67);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        RpcRevertToSelf();
        if ( v11 )
          LeaveCriticalSection(v11);
        goto LABEL_346;
      }
      v40 = sub_18001D914(v38, -6LL, &v78);
      v39 = v40;
      if ( v40 < 0 )
      {
        sub_180003AB0(
          retaddr,
          1065,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          v40);
        if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(TokenHandle);
        CoTaskMemFree(v22);
        if ( v65 )
          CoTaskMemFree(v65);
        if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v20);
        if ( hMem )
          LocalFree(hMem);
        if ( v67 )
          LocalFree(v67);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        RpcRevertToSelf();
        if ( v11 )
          LeaveCriticalSection(v11);
        goto LABEL_346;
      }
    }
    RpcRevertToSelf();
    v41 = v67;
    v42 = sub_180037620(v67);
    LODWORD(v72) = v42 == 1;
    if ( !v106 || v66 )
    {
      v66 = 1;
    }
    else
    {
      v43 = sub_18001D714(v42 == 1, TokenHandle, &v66, &v80);
      v44 = v43;
      if ( v43 < 0 )
      {
        sub_180003AB0(
          retaddr,
          1085,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          v43);
        if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(TokenHandle);
        CoTaskMemFree(v22);
        if ( v65 )
          CoTaskMemFree(v65);
        if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v20);
        if ( hMem )
          LocalFree(hMem);
        if ( v41 )
          LocalFree(v41);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        if ( v11 )
          LeaveCriticalSection(v11);
LABEL_189:
        v39 = v44;
LABEL_346:
        sub_180008814(&v61);
        return v39;
      }
    }
    v76 = 0;
    if ( v71 && !(unsigned int)CheckTokenCapability(hObject, *(_QWORD *)(v73 + 16), &v76) )
    {
      v44 = sub_180003AE8(
              retaddr,
              1097,
              (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
              v45);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v22);
      if ( v65 )
        CoTaskMemFree(v65);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      if ( hMem )
        LocalFree(hMem);
      if ( v41 )
        LocalFree(v41);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v11 )
        LeaveCriticalSection(v11);
      goto LABEL_189;
    }
    TokenInformationLength = 0;
    GetTokenInformation(hObject, TokenIntegrityLevel, 0LL, 0, &TokenInformationLength);
    if ( GetLastError() != 122 )
    {
      v44 = sub_180003AE8(
              retaddr,
              1105,
              (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
              v46);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v22);
      if ( v65 )
        CoTaskMemFree(v65);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      if ( hMem )
        LocalFree(hMem);
      if ( v41 )
        LocalFree(v41);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v11 )
        LeaveCriticalSection(v11);
      goto LABEL_189;
    }
    v47 = (PSID *)LocalAlloc(0x40u, TokenInformationLength);
    v102 = v47;
    if ( !v47 )
    {
      v44 = -2147024882;
      sub_180003AB0(
        retaddr,
        1108,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        -2147024882);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v22);
      if ( v65 )
        CoTaskMemFree(v65);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      if ( hMem )
        LocalFree(hMem);
      if ( v41 )
        LocalFree(v41);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v11 )
        LeaveCriticalSection(v11);
      goto LABEL_189;
    }
    if ( !GetTokenInformation(hObject, TokenIntegrityLevel, v47, TokenInformationLength, &TokenInformationLength) )
    {
      v110 = sub_180003AE8(
               retaddr,
               1110,
               (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
               v48);
      LocalFree(v47);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v22);
      if ( v65 )
        CoTaskMemFree(v65);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      if ( hMem )
        LocalFree(hMem);
      if ( v41 )
        LocalFree(v41);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v11 )
        LeaveCriticalSection(v11);
      v39 = v110;
      goto LABEL_346;
    }
    SidSubAuthorityCount = GetSidSubAuthorityCount(*v47);
    LastError = GetLastError();
    v50 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v50 = LastError;
    v70 = v50;
    if ( v50 < 0 )
    {
      sub_180003AB0(
        retaddr,
        1115,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        v50);
      LocalFree(v47);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v22);
      if ( v65 )
        CoTaskMemFree(v65);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      if ( hMem )
        LocalFree(hMem);
      if ( v41 )
        LocalFree(v41);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v11 )
        LeaveCriticalSection(v11);
LABEL_273:
      v39 = v70;
      goto LABEL_346;
    }
    if ( !SidSubAuthorityCount || !*SidSubAuthorityCount )
    {
      sub_180003AB0(
        retaddr,
        1116,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        -2147418113);
      LocalFree(v47);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v22);
      if ( v65 )
        CoTaskMemFree(v65);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      if ( hMem )
        LocalFree(hMem);
      if ( v41 )
        LocalFree(v41);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v11 )
        LeaveCriticalSection(v11);
      v39 = -2147418113;
      goto LABEL_346;
    }
    LODWORD(SidSubAuthorityCount) = *GetSidSubAuthority(*v47, (unsigned __int8)(*SidSubAuthorityCount - 1));
    v51 = GetLastError();
    v52 = (unsigned __int16)v51 | 0x80070000;
    if ( v51 <= 0 )
      v52 = v51;
    v70 = v52;
    if ( v52 < 0 )
    {
      sub_180003AB0(
        retaddr,
        1121,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        v52);
      LocalFree(v47);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v22);
      if ( v65 )
        CoTaskMemFree(v65);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      if ( hMem )
        LocalFree(hMem);
      if ( v41 )
        LocalFree(v41);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v11 )
        LeaveCriticalSection(v11);
      goto LABEL_273;
    }
    v53 = (unsigned int)SidSubAuthorityCount < 0x2000;
    LocalFree(v47);
    v54 = sub_1800087B4(&v61);
    v59 = v53;
    v55 = hMem;
    v56 = v65;
    v57 = sub_18001391C(
            (__int64)v20,
            Pid,
            v86,
            (__int64)v65,
            (__int64)v22,
            v92,
            (__int64)v41,
            v71 != 0,
            (__int64)hMem,
            v82,
            v106,
            v81,
            v66,
            v80,
            v79,
            v78,
            (int)v72,
            v77,
            v76,
            v59,
            v54);
    v107 = v57;
    if ( v57 < 0 )
    {
      sub_180003AB0(
        retaddr,
        1147,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        v57);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v22);
      if ( v56 )
        CoTaskMemFree(v56);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      if ( v55 )
        LocalFree(v55);
      if ( v41 )
        LocalFree(v41);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
LABEL_309:
      v39 = v107;
      goto LABEL_346;
    }
    *((_DWORD *)v61 + 123) = v83;
    v58 = sub_18001B50C(v73, (__int64)v61);
    v107 = v58;
    if ( v58 < 0 )
    {
      sub_180003AB0(
        retaddr,
        1151,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        v58);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v22);
      if ( v56 )
        CoTaskMemFree(v56);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      if ( v55 )
        LocalFree(v55);
      if ( v41 )
        LocalFree(v41);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_309;
    }
    v95 = v73;
    v96 = &v61;
    v97 = 1;
    v72 = (HANDLE)(v73 + 120);
    AcquireSRWLockExclusive((PSRWLOCK)(v73 + 120));
    v94 = v72;
    try
    {
      v93 = v61;
      sub_180017E30((__int64 *)(v73 + 128), &v93);
    }
    catch ( ATL::CAtlException *v103 )
    {
      if ( *(_DWORD *)v103 == -1073741571 )
        o__resetstkoflw();
    }
    if ( v72 )
    {
      ReleaseSRWLockExclusive((PSRWLOCK)v72);
      v94 = 0LL;
    }
    _InterlockedIncrement(v61 + 2);
    v97 = 0;
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    CoTaskMemFree(pv);
    if ( v65 )
      CoTaskMemFree(v65);
    if ( (char *)v90 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(v90);
    if ( hMem )
      LocalFree(hMem);
    if ( v67 )
      LocalFree(v67);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    v11 = lpCriticalSection;
    goto LABEL_342;
  }
  v72 = TokenHandle;
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    v23 = GetLastError();
    CloseHandle(v72);
    SetLastError(v23);
  }
  TokenHandle = 0LL;
  if ( OpenProcessToken(v20, 8u, &TokenHandle) )
  {
    v26 = RtlQueryTokenHostIdAsUlong64(TokenHandle, &v92);
    if ( v26 < 0 )
    {
      v109 = sub_18002154C(retaddr, v27, v28, (unsigned int)v26);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v22);
      if ( v65 )
        CoTaskMemFree(v65);
      if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
      if ( hMem )
        LocalFree(hMem);
      if ( v67 )
        LocalFree(v67);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      RpcRevertToSelf();
      if ( v11 )
        LeaveCriticalSection(v11);
      goto LABEL_86;
    }
    goto LABEL_106;
  }
  v109 = sub_180003AE8(
           retaddr,
           1039,
           (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
           v24);
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(TokenHandle);
  CoTaskMemFree(v22);
  if ( v65 )
    CoTaskMemFree(v65);
  if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v20);
  if ( hMem )
    LocalFree(hMem);
  if ( v67 )
    LocalFree(v67);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  RpcRevertToSelf();
  if ( v11 )
    LeaveCriticalSection(v11);
LABEL_86:
  v25 = v61;
  if ( v61 && _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 32LL))(v25);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v25 + 24LL))(v25, 1LL);
  }
  return v109;
}
