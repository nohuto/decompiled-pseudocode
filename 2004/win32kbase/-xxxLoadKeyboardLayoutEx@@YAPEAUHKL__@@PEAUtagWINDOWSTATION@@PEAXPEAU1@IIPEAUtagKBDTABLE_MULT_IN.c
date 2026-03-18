/*
 * XREFs of ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0017D48
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0017C60 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0017B30 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C00181F8 (ApiSetEditionNotifyShellLanguageHook.c)
 *     SetGlobalKeyboardTableInfo @ 0x1C00187A0 (SetGlobalKeyboardTableInfo.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0018B70 (xxxInternalActivateKeyboardLayout.c)
 *     HKLtoPKL @ 0x1C0019760 (HKLtoPKL.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C00198C0 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ApiSetEditionFreeIMEKeyboardLayouts @ 0x1C0019B2C (ApiSetEditionFreeIMEKeyboardLayouts.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0041D24 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     DestroyKF @ 0x1C005C9D8 (DestroyKF.c)
 *     ApiSetEditionInitSystemCharsetInfoForLayout @ 0x1C005E010 (ApiSetEditionInitSystemCharsetInfoForLayout.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C005F564 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     HMAssignmentLock @ 0x1C00748C0 (HMAssignmentLock.c)
 *     ThreadUnlock1 @ 0x1C00899B0 (ThreadUnlock1.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     HMAllocObject @ 0x1C0094E60 (HMAllocObject.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C01A7BE0 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HKL __fastcall xxxLoadKeyboardLayoutEx(
        struct tagWINDOWSTATION *a1,
        void *a2,
        HKL a3,
        unsigned int a4,
        unsigned int a5,
        wchar_t *a6,
        const unsigned __int16 *a7,
        signed int a8,
        unsigned int a9)
{
  int v9; // ebx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // r13
  unsigned int v13; // esi
  __int64 v14; // rbx
  __int64 v15; // rdx
  int v16; // eax
  char *v17; // rax
  __int64 v18; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct tagKL *v24; // rax
  int v25; // eax
  int v26; // eax
  const unsigned __int16 *v27; // r9
  __int64 v28; // r8
  struct tagKBDFILE *KeyboardLayoutFile; // r15
  __int64 v30; // rax
  const WCHAR **v31; // r12
  __int64 v32; // rax
  const WCHAR *v33; // rdx
  const WCHAR *v34; // rax
  __int64 v35; // r15
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  void *v40; // rax
  unsigned int v41; // r15d
  unsigned int v42; // r12d
  struct tagKBDFILE *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r14
  int inited; // [rsp+4Ch] [rbp-B4h]
  __int64 v48; // [rsp+50h] [rbp-B0h] BYREF
  PCWSTR SourceString[2]; // [rsp+60h] [rbp-A0h] BYREF
  void *v50[2]; // [rsp+70h] [rbp-90h] BYREF
  HKL v51; // [rsp+80h] [rbp-80h]
  __int128 v52; // [rsp+88h] [rbp-78h] BYREF
  __int64 v53; // [rsp+98h] [rbp-68h]
  _QWORD v54[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v56[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v57[3]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v58[16]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v59[16]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v60[16]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v61; // [rsp+118h] [rbp+18h] BYREF
  __int128 v62; // [rsp+128h] [rbp+28h]

  v9 = (int)a3;
  SourceString[0] = a7;
  v11 = 0LL;
  v51 = a3;
  v50[0] = a2;
  v53 = 0LL;
  v48 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v52 = 0LL;
  DestinationString = 0LL;
  if ( !a8 || a1 && (*((_DWORD *)a1 + 16) & 4) != 0 )
    return 0LL;
  v12 = gptiCurrent;
  if ( a3 )
  {
    v11 = HKLtoPKL(gptiCurrent, a3);
    if ( !v11 )
      return 0LL;
  }
  if ( a8 == v9 )
    return *(HKL *)(v11 + 40);
  v13 = a9;
  if ( (a9 & 0x40000000) != 0 )
  {
    if ( PsGetThreadProcessId(*(PETHREAD *)v12) != (HANDLE)gpidLogon )
    {
      UserSetLastError(1004LL);
      return 0LL;
    }
    if ( !a1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22, v23);
    ApiSetEditionFreeIMEKeyboardLayouts(a1);
    while ( 1 )
    {
      v24 = (struct tagKL *)HKLtoPKL(gptiCurrent, 1LL);
      if ( !v24 )
        break;
      xxxInternalUnloadKeyboardLayout(a1, v24, 0x80000000);
    }
    v13 = a9;
  }
  if ( a1 )
    v14 = *((_QWORD *)a1 + 9);
  else
    v14 = gspklWinstaLessSessionLayouts;
  v15 = v14;
  if ( v14 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v14 + 40) == a8 )
      {
        v16 = *(_DWORD *)(v14 + 32);
        if ( v16 >= 0 )
          break;
      }
      v14 = *(_QWORD *)(v14 + 16);
      if ( v14 == v15 )
        goto LABEL_37;
    }
    if ( (v16 & 0x20000000) != 0 )
    {
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v58);
      v17 = (char *)qword_1C024AD48 + dword_1C024AD50 * (unsigned int)(unsigned __int16)*(_DWORD *)v14;
      v17[25] &= ~1u;
      *(_DWORD *)(v14 + 32) &= ~0x20000000u;
    }
    else if ( (a9 & 0x40000000) == 0 )
    {
      v13 &= ~0x80u;
    }
LABEL_14:
    *(_QWORD *)&v52 = *((_QWORD *)v12 + 51);
    *((_QWORD *)v12 + 51) = &v52;
    *((_QWORD *)&v52 + 1) = v14;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v59);
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    if ( v51 )
    {
      v45 = HKLtoPKL(v12, v51);
      if ( v45 )
      {
        v57[0] = *((_QWORD *)v12 + 51);
        v57[2] = 0LL;
        *((_QWORD *)v12 + 51) = v57;
        v57[1] = v45;
        CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v60);
        _InterlockedIncrement((volatile signed __int32 *)(v45 + 8));
        xxxSetPKLinThreads((struct tagKL *)v14, (struct tagKL *)v45);
        xxxInternalUnloadKeyboardLayout(a1, (struct tagKL *)v45, 0x80000000);
        ThreadUnlock1();
      }
    }
    if ( (v13 & 8) != 0 )
      ReorderKeyboardLayouts(a1, (struct tagKL *)v14);
    if ( qword_1C0252028 )
      qword_1C0252028(0x80000000LL, 0LL, 0LL, 0LL, 0);
    if ( (v13 & 0x80u) == 0 )
      ApiSetEditionNotifyShellLanguageHook(v12, 0LL, 0LL);
    if ( (v13 & 1) != 0 )
      xxxInternalActivateKeyboardLayout(a1, v14, v13, 0LL);
    if ( (v13 & 0x40000000) != 0 )
    {
      SetGlobalKeyboardTableInfo(v14);
      v56[1] = v14;
      v56[0] = &gspklBaseLayout;
      HMAssignmentLock(v56);
      xxxSetPKLinThreads((struct tagKL *)v14, 0LL);
    }
    if ( (v13 & 0x80000000) != 0 && !gspklBaseLayout )
      SetGlobalKeyboardTableInfo(v14);
    v18 = ThreadUnlock1();
    if ( v18 )
      return *(HKL *)(v18 + 40);
    return 0LL;
  }
LABEL_37:
  if ( qword_1C02532E8 )
    v25 = qword_1C02532E8(v11, v15);
  else
    v25 = -1073741637;
  if ( v25 < 0 || (!qword_1C02532F0 ? (v26 = 0) : (v26 = qword_1C02532F0((unsigned int)a8, v13, &v48)), v26) )
  {
    inited = ApiSetEditionInitSystemCharsetInfoForLayout(SourceString[0], &v61);
    KeyboardLayoutFile = LoadKeyboardLayoutFile(v50[0], a4, a5, v27, a6 + 290, 0, 0);
    if ( KeyboardLayoutFile )
    {
      LOBYTE(v28) = 13;
      v30 = HMAllocObject(0LL, 0LL, v28, 128LL);
      v14 = v30;
      if ( v30 )
      {
        v31 = (const WCHAR **)(v30 + 56);
        v50[1] = KeyboardLayoutFile;
        v50[0] = (void *)(v30 + 56);
        HMAssignmentLock(v50);
        v32 = *(unsigned int *)a6;
        if ( (_DWORD)v32 )
        {
          v40 = Win32AllocPoolZInit(8 * v32, 1953198933LL);
          *(_QWORD *)(v14 + 96) = v40;
          if ( v40 )
          {
            v41 = 0;
            v42 = 0;
            if ( *(_DWORD *)a6 )
            {
              do
              {
                if ( *(_QWORD *)&a6[8 * v41 + 324] )
                {
                  a6[36 * v41 + 33] = 0;
                  v43 = LoadKeyboardLayoutFile(
                          *(void **)&a6[8 * v41 + 324],
                          *(_DWORD *)&a6[8 * v41 + 328],
                          *(_DWORD *)&a6[8 * v41 + 330],
                          (const unsigned __int16 *)(2LL * v41),
                          &a6[36 * v41 + 2],
                          *(_DWORD *)&a6[36 * v41 + 34],
                          *(_DWORD *)&a6[36 * v41 + 36]);
                  if ( !v43 )
                    break;
                  v44 = *(_QWORD *)(v14 + 96);
                  v54[1] = v43;
                  v54[0] = v44 + 8LL * v42;
                  HMAssignmentLock(v54);
                  ++v42;
                }
                ++v41;
              }
              while ( v41 < *(_DWORD *)a6 );
              v13 = a9;
            }
            *(_DWORD *)(v14 + 88) = v42;
            v31 = (const WCHAR **)(v14 + 56);
          }
        }
        v33 = SourceString[0];
        *(_DWORD *)(v14 + 32) = 0;
        *(_WORD *)(v14 + 74) = 0;
        *(_QWORD *)(v14 + 40) = a8;
        *(_QWORD *)(v14 + 16) = v14;
        *(_QWORD *)(v14 + 24) = v14;
        RtlInitUnicodeString(&DestinationString, v33);
        RtlUnicodeStringToInteger(&DestinationString, 0x10u, (PULONG)(v14 + 112));
        if ( (*((_DWORD *)a6 + 194) & 1) != 0 )
          *(_DWORD *)(v14 + 32) |= 0x80000000;
        v34 = *v31;
        v35 = v14 + 48;
        SourceString[0] = (PCWSTR)(v14 + 48);
        SourceString[1] = v34;
        HMAssignmentLock(SourceString);
        v36 = *((_DWORD *)a6 + 195);
        if ( v36 )
        {
          v37 = *(_QWORD *)(v14 + 48);
        }
        else
        {
          v37 = *(_QWORD *)v35;
          v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v35 + 32LL) + 96LL);
        }
        *(_DWORD *)(v14 + 104) = v36;
        v38 = *((_DWORD *)a6 + 196);
        if ( !v38 )
          v38 = *(_DWORD *)(*(_QWORD *)(v37 + 32) + 100LL);
        *(_DWORD *)(v14 + 108) = v38;
        *(_DWORD *)(v14 + 116) = *((_DWORD *)a6 + 195);
        *(_DWORD *)(v14 + 120) = *((_DWORD *)a6 + 196);
        *(_DWORD *)(*(_QWORD *)(v37 + 32) + 80LL) |= (v13 >> 15) & 7;
        *(_QWORD *)(v14 + 80) = v48;
        if ( inited )
        {
          *(_WORD *)(v14 + 72) = WORD2(v61);
          *(_DWORD *)(v14 + 64) = HIDWORD(v62);
          *(_DWORD *)(v14 + 68) = v61;
        }
        else
        {
          *(_WORD *)(v14 + 72) = 0;
          *(_QWORD *)(v14 + 64) = 1LL;
        }
        if ( a1 )
          v39 = *((_QWORD *)a1 + 9);
        else
          v39 = gspklWinstaLessSessionLayouts;
        if ( v39 )
        {
          *(_QWORD *)(v14 + 16) = v39;
          *(_QWORD *)(v14 + 24) = *(_QWORD *)(v39 + 24);
          *(_QWORD *)(*(_QWORD *)(v39 + 24) + 16LL) = v14;
          *(_QWORD *)(v39 + 24) = v14;
        }
        else
        {
          LockKbdLayoutListHead(a1, (struct tagKL *)v14);
        }
        goto LABEL_14;
      }
      DestroyKF(KeyboardLayoutFile);
    }
    if ( v48 )
      Win32FreePool(v48);
  }
  return 0LL;
}
