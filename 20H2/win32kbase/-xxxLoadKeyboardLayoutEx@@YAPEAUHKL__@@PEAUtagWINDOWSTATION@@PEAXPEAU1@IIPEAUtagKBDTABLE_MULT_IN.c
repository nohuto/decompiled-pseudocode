/*
 * XREFs of ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0088548
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0088460 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C0044210 (ThreadUnlock1.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMAssignmentLock @ 0x1C00555C0 (HMAssignmentLock.c)
 *     HMAllocObject @ 0x1C0056580 (HMAllocObject.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C008832C (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C00889F8 (ApiSetEditionNotifyShellLanguageHook.c)
 *     SetGlobalKeyboardTableInfo @ 0x1C0088FA0 (SetGlobalKeyboardTableInfo.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0089370 (xxxInternalActivateKeyboardLayout.c)
 *     HKLtoPKL @ 0x1C0089F60 (HKLtoPKL.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C008A0C0 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ApiSetEditionFreeIMEKeyboardLayouts @ 0x1C008A32C (ApiSetEditionFreeIMEKeyboardLayouts.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C008A550 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C008A588 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     ApiSetEditionInitSystemCharsetInfoForLayout @ 0x1C008AF4C (ApiSetEditionInitSystemCharsetInfoForLayout.c)
 *     DestroyKF @ 0x1C00BCF68 (DestroyKF.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C01A5860 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HKL __fastcall xxxLoadKeyboardLayoutEx(
        struct tagWINDOWSTATION *a1,
        void *a2,
        __int64 a3,
        __int64 a4,
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
  __int64 v25; // rdx
  int v26; // eax
  int v27; // eax
  const unsigned __int16 *v28; // r9
  __int64 v29; // r8
  struct tagKBDFILE *KeyboardLayoutFile; // r15
  __int64 v31; // rax
  __int64 v32; // rdx
  const WCHAR **v33; // r12
  __int64 v34; // rax
  const WCHAR *v35; // rdx
  __int64 v36; // rdx
  const WCHAR *v37; // rax
  __int64 v38; // r15
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  void *v43; // rax
  unsigned int v44; // r15d
  unsigned int v45; // r12d
  struct tagKBDFILE *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r14
  __int64 v52; // r9
  unsigned int v53; // [rsp+44h] [rbp-BCh]
  int inited; // [rsp+4Ch] [rbp-B4h]
  __int64 v55; // [rsp+50h] [rbp-B0h] BYREF
  PCWSTR SourceString[2]; // [rsp+60h] [rbp-A0h] BYREF
  void *v57[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+80h] [rbp-80h]
  __int128 v59; // [rsp+88h] [rbp-78h] BYREF
  __int64 v60; // [rsp+98h] [rbp-68h]
  __int64 v61[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v63[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v64[3]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v65[16]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v66[16]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v67[16]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v68; // [rsp+118h] [rbp+18h] BYREF
  __int128 v69; // [rsp+128h] [rbp+28h]

  v9 = a3;
  SourceString[0] = a7;
  v11 = 0LL;
  v53 = a4;
  v58 = a3;
  v57[0] = a2;
  v60 = 0LL;
  v55 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v59 = 0LL;
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
      UserSetLastError(1004LL, v20);
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
      xxxInternalUnloadKeyboardLayout(a1, v24, 0x80000000LL, a4);
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
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
        (__int64)v65,
        v15,
        a3,
        a4);
      v17 = (char *)qword_1C0248D48 + dword_1C0248D50 * (unsigned int)(unsigned __int16)*(_DWORD *)v14;
      v17[25] &= ~1u;
      *(_DWORD *)(v14 + 32) &= ~0x20000000u;
    }
    else if ( (a9 & 0x40000000) == 0 )
    {
      v13 &= ~0x80u;
    }
LABEL_14:
    *(_QWORD *)&v59 = *((_QWORD *)v12 + 52);
    *((_QWORD *)v12 + 52) = &v59;
    *((_QWORD *)&v59 + 1) = v14;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
      (__int64)v66,
      v15,
      a3,
      a4);
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    if ( v58 )
    {
      v51 = HKLtoPKL(v12, v58);
      if ( v51 )
      {
        v64[0] = *((_QWORD *)v12 + 52);
        v64[2] = 0LL;
        *((_QWORD *)v12 + 52) = v64;
        v64[1] = v51;
        CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
          (__int64)v67,
          v48,
          v49,
          v50);
        _InterlockedIncrement((volatile signed __int32 *)(v51 + 8));
        xxxSetPKLinThreads((struct tagKL *)v14, (struct tagKL *)v51);
        xxxInternalUnloadKeyboardLayout(a1, (struct tagKL *)v51, 0x80000000LL, v52);
        ThreadUnlock1();
      }
    }
    if ( (v13 & 8) != 0 )
      ReorderKeyboardLayouts(a1, (struct tagKL *)v14);
    if ( qword_1C0250028 )
      qword_1C0250028(0x80000000LL, 0LL, 0LL, 0LL, 0);
    if ( (v13 & 0x80u) == 0 )
      ApiSetEditionNotifyShellLanguageHook(v12, 0LL, 0LL);
    if ( (v13 & 1) != 0 )
      xxxInternalActivateKeyboardLayout(a1, v14, v13, 0LL);
    if ( (v13 & 0x40000000) != 0 )
    {
      SetGlobalKeyboardTableInfo(v14);
      v63[1] = v14;
      v63[0] = &gspklBaseLayout;
      HMAssignmentLock((__int64)v63, v25);
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
  if ( qword_1C02512E8 )
    v26 = qword_1C02512E8(v11, v15);
  else
    v26 = -1073741637;
  if ( v26 < 0 || (!qword_1C02512F0 ? (v27 = 0) : (v27 = qword_1C02512F0((unsigned int)a8, v13, &v55)), v27) )
  {
    inited = ApiSetEditionInitSystemCharsetInfoForLayout(SourceString[0], &v68);
    KeyboardLayoutFile = LoadKeyboardLayoutFile(v57[0], v53, a5, v28, a6 + 290, 0, 0);
    if ( KeyboardLayoutFile )
    {
      LOBYTE(v29) = 13;
      v31 = HMAllocObject(0LL, 0LL, v29, 128LL);
      v14 = v31;
      if ( v31 )
      {
        v33 = (const WCHAR **)(v31 + 56);
        v57[1] = KeyboardLayoutFile;
        v57[0] = (void *)(v31 + 56);
        HMAssignmentLock((__int64)v57, v32);
        v34 = *(unsigned int *)a6;
        if ( (_DWORD)v34 )
        {
          v43 = Win32AllocPoolZInit(8 * v34, 0x746B7355u);
          *(_QWORD *)(v14 + 96) = v43;
          if ( v43 )
          {
            v44 = 0;
            v45 = 0;
            if ( *(_DWORD *)a6 )
            {
              do
              {
                if ( *(_QWORD *)&a6[8 * v44 + 324] )
                {
                  a6[36 * v44 + 33] = 0;
                  v46 = LoadKeyboardLayoutFile(
                          *(void **)&a6[8 * v44 + 324],
                          *(_DWORD *)&a6[8 * v44 + 328],
                          *(_DWORD *)&a6[8 * v44 + 330],
                          (const unsigned __int16 *)(2LL * v44),
                          &a6[36 * v44 + 2],
                          *(_DWORD *)&a6[36 * v44 + 34],
                          *(_DWORD *)&a6[36 * v44 + 36]);
                  if ( !v46 )
                    break;
                  v47 = *(_QWORD *)(v14 + 96);
                  v61[1] = (__int64)v46;
                  v61[0] = v47 + 8LL * v45;
                  HMAssignmentLock((__int64)v61, v61[0]);
                  ++v45;
                }
                ++v44;
              }
              while ( v44 < *(_DWORD *)a6 );
              v13 = a9;
            }
            *(_DWORD *)(v14 + 88) = v45;
            v33 = (const WCHAR **)(v14 + 56);
          }
        }
        v35 = SourceString[0];
        *(_DWORD *)(v14 + 32) = 0;
        *(_WORD *)(v14 + 74) = 0;
        *(_QWORD *)(v14 + 40) = a8;
        *(_QWORD *)(v14 + 16) = v14;
        *(_QWORD *)(v14 + 24) = v14;
        RtlInitUnicodeString(&DestinationString, v35);
        RtlUnicodeStringToInteger(&DestinationString, 0x10u, (PULONG)(v14 + 112));
        if ( (*((_DWORD *)a6 + 194) & 1) != 0 )
          *(_DWORD *)(v14 + 32) |= 0x80000000;
        v37 = *v33;
        v38 = v14 + 48;
        SourceString[0] = (PCWSTR)(v14 + 48);
        SourceString[1] = v37;
        HMAssignmentLock((__int64)SourceString, v36);
        v39 = *((_DWORD *)a6 + 195);
        if ( v39 )
        {
          v40 = *(_QWORD *)(v14 + 48);
        }
        else
        {
          v40 = *(_QWORD *)v38;
          v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38 + 32LL) + 96LL);
        }
        *(_DWORD *)(v14 + 104) = v39;
        v41 = *((_DWORD *)a6 + 196);
        if ( !v41 )
          v41 = *(_DWORD *)(*(_QWORD *)(v40 + 32) + 100LL);
        *(_DWORD *)(v14 + 108) = v41;
        *(_DWORD *)(v14 + 116) = *((_DWORD *)a6 + 195);
        *(_DWORD *)(v14 + 120) = *((_DWORD *)a6 + 196);
        *(_DWORD *)(*(_QWORD *)(v40 + 32) + 80LL) |= (v13 >> 15) & 7;
        *(_QWORD *)(v14 + 80) = v55;
        if ( inited )
        {
          *(_WORD *)(v14 + 72) = WORD2(v68);
          *(_DWORD *)(v14 + 64) = HIDWORD(v69);
          *(_DWORD *)(v14 + 68) = v68;
        }
        else
        {
          *(_WORD *)(v14 + 72) = 0;
          *(_QWORD *)(v14 + 64) = 1LL;
        }
        if ( a1 )
          v42 = *((_QWORD *)a1 + 9);
        else
          v42 = gspklWinstaLessSessionLayouts;
        if ( v42 )
        {
          *(_QWORD *)(v14 + 16) = v42;
          *(_QWORD *)(v14 + 24) = *(_QWORD *)(v42 + 24);
          *(_QWORD *)(*(_QWORD *)(v42 + 24) + 16LL) = v14;
          *(_QWORD *)(v42 + 24) = v14;
        }
        else
        {
          LockKbdLayoutListHead(a1, (struct tagKL *)v14);
        }
        goto LABEL_14;
      }
      DestroyKF(KeyboardLayoutFile);
    }
    if ( v55 )
      Win32FreePool(v55);
  }
  return 0LL;
}
