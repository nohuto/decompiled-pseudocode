/*
 * XREFs of ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00579C8
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C00578E0 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     DestroyKF @ 0x1C004EDC8 (DestroyKF.c)
 *     ApiSetEditionInitSystemCharsetInfoForLayout @ 0x1C0055AA8 (ApiSetEditionInitSystemCharsetInfoForLayout.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0055B68 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C005652C (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     ApiSetEditionFreeIMEKeyboardLayouts @ 0x1C00575BC (ApiSetEditionFreeIMEKeyboardLayouts.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C0057668 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0057E78 (ApiSetEditionNotifyShellLanguageHook.c)
 *     SetGlobalKeyboardTableInfo @ 0x1C0058420 (SetGlobalKeyboardTableInfo.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C00587F0 (xxxInternalActivateKeyboardLayout.c)
 *     HKLtoPKL @ 0x1C00593E0 (HKLtoPKL.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0059540 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     HMAllocObject @ 0x1C0070A30 (HMAllocObject.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMAssignmentLock @ 0x1C0071980 (HMAssignmentLock.c)
 *     ThreadUnlock1 @ 0x1C00828E0 (ThreadUnlock1.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C01AD940 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v20; // rcx
  struct tagKL *v21; // rax
  int v22; // eax
  int v23; // eax
  const unsigned __int16 *v24; // r9
  __int64 v25; // r8
  struct tagKBDFILE *KeyboardLayoutFile; // r15
  __int64 v27; // rax
  const WCHAR **v28; // r12
  __int64 v29; // rax
  const WCHAR *v30; // rdx
  const WCHAR *v31; // rax
  __int64 v32; // r15
  int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned int v38; // r15d
  unsigned int v39; // r12d
  struct tagKBDFILE *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r14
  int inited; // [rsp+4Ch] [rbp-B4h]
  __int64 v45; // [rsp+50h] [rbp-B0h] BYREF
  PCWSTR SourceString[2]; // [rsp+60h] [rbp-A0h] BYREF
  void *v47[2]; // [rsp+70h] [rbp-90h] BYREF
  HKL v48; // [rsp+80h] [rbp-80h]
  __int128 v49; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+98h] [rbp-68h]
  _QWORD v51[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v53[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v54[3]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v55[16]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v56[16]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v57[16]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v58; // [rsp+118h] [rbp+18h] BYREF
  __int128 v59; // [rsp+128h] [rbp+28h]

  v9 = (int)a3;
  SourceString[0] = a7;
  v11 = 0LL;
  v48 = a3;
  v47[0] = a2;
  v50 = 0LL;
  v45 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v49 = 0LL;
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
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
    ApiSetEditionFreeIMEKeyboardLayouts((__int64)a1);
    while ( 1 )
    {
      v21 = (struct tagKL *)HKLtoPKL(gptiCurrent, 1LL);
      if ( !v21 )
        break;
      xxxInternalUnloadKeyboardLayout(a1, v21, 0x80000000);
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
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v55);
      v17 = (char *)qword_1C0250D48 + dword_1C0250D50 * (unsigned int)(unsigned __int16)*(_DWORD *)v14;
      v17[25] &= ~1u;
      *(_DWORD *)(v14 + 32) &= ~0x20000000u;
    }
    else if ( (a9 & 0x40000000) == 0 )
    {
      v13 &= ~0x80u;
    }
LABEL_14:
    *(_QWORD *)&v49 = *((_QWORD *)v12 + 51);
    *((_QWORD *)v12 + 51) = &v49;
    *((_QWORD *)&v49 + 1) = v14;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v56);
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    if ( v48 )
    {
      v42 = HKLtoPKL(v12, v48);
      if ( v42 )
      {
        v54[0] = *((_QWORD *)v12 + 51);
        v54[2] = 0LL;
        *((_QWORD *)v12 + 51) = v54;
        v54[1] = v42;
        CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v57);
        _InterlockedIncrement((volatile signed __int32 *)(v42 + 8));
        xxxSetPKLinThreads((struct tagKL *)v14, (struct tagKL *)v42);
        xxxInternalUnloadKeyboardLayout(a1, (struct tagKL *)v42, 0x80000000);
        ThreadUnlock1();
      }
    }
    if ( (v13 & 8) != 0 )
      ReorderKeyboardLayouts(a1, (struct tagKL *)v14);
    if ( qword_1C0257FE8 )
      qword_1C0257FE8(0x80000000LL, 0LL, 0LL, 0LL, 0);
    if ( (v13 & 0x80u) == 0 )
      ApiSetEditionNotifyShellLanguageHook(v12, 0LL, 0LL);
    if ( (v13 & 1) != 0 )
      xxxInternalActivateKeyboardLayout(a1, v14, v13, 0LL);
    if ( (v13 & 0x40000000) != 0 )
    {
      SetGlobalKeyboardTableInfo(v14);
      v53[1] = v14;
      v53[0] = &gspklBaseLayout;
      HMAssignmentLock(v53);
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
  if ( qword_1C02592A8 )
    v22 = qword_1C02592A8(v11, v15);
  else
    v22 = -1073741637;
  if ( v22 < 0 || (!qword_1C02592B0 ? (v23 = 0) : (v23 = qword_1C02592B0((unsigned int)a8, v13, &v45)), v23) )
  {
    inited = ApiSetEditionInitSystemCharsetInfoForLayout((__int64)SourceString[0], (__int64)&v58);
    KeyboardLayoutFile = LoadKeyboardLayoutFile(v47[0], a4, a5, v24, a6 + 290, 0, 0);
    if ( KeyboardLayoutFile )
    {
      LOBYTE(v25) = 13;
      v27 = HMAllocObject(0LL, 0LL, v25, 128LL);
      v14 = v27;
      if ( v27 )
      {
        v28 = (const WCHAR **)(v27 + 56);
        v47[1] = KeyboardLayoutFile;
        v47[0] = (void *)(v27 + 56);
        HMAssignmentLock(v47);
        v29 = *(unsigned int *)a6;
        if ( (_DWORD)v29 )
        {
          v37 = Win32AllocPoolZInit(8 * v29);
          *(_QWORD *)(v14 + 96) = v37;
          if ( v37 )
          {
            v38 = 0;
            v39 = 0;
            if ( *(_DWORD *)a6 )
            {
              do
              {
                if ( *(_QWORD *)&a6[8 * v38 + 324] )
                {
                  a6[36 * v38 + 33] = 0;
                  v40 = LoadKeyboardLayoutFile(
                          *(void **)&a6[8 * v38 + 324],
                          *(_DWORD *)&a6[8 * v38 + 328],
                          *(unsigned int *)&a6[8 * v38 + 330],
                          (const unsigned __int16 *)(2LL * v38),
                          &a6[36 * v38 + 2],
                          *(_DWORD *)&a6[36 * v38 + 34],
                          *(_DWORD *)&a6[36 * v38 + 36]);
                  if ( !v40 )
                    break;
                  v41 = *(_QWORD *)(v14 + 96);
                  v51[1] = v40;
                  v51[0] = v41 + 8LL * v39;
                  HMAssignmentLock(v51);
                  ++v39;
                }
                ++v38;
              }
              while ( v38 < *(_DWORD *)a6 );
              v13 = a9;
            }
            *(_DWORD *)(v14 + 88) = v39;
            v28 = (const WCHAR **)(v14 + 56);
          }
        }
        v30 = SourceString[0];
        *(_DWORD *)(v14 + 32) = 0;
        *(_WORD *)(v14 + 74) = 0;
        *(_QWORD *)(v14 + 40) = a8;
        *(_QWORD *)(v14 + 16) = v14;
        *(_QWORD *)(v14 + 24) = v14;
        RtlInitUnicodeString(&DestinationString, v30);
        RtlUnicodeStringToInteger(&DestinationString, 0x10u, (PULONG)(v14 + 112));
        if ( (*((_DWORD *)a6 + 194) & 1) != 0 )
          *(_DWORD *)(v14 + 32) |= 0x80000000;
        v31 = *v28;
        v32 = v14 + 48;
        SourceString[0] = (PCWSTR)(v14 + 48);
        SourceString[1] = v31;
        HMAssignmentLock(SourceString);
        v33 = *((_DWORD *)a6 + 195);
        if ( v33 )
        {
          v34 = *(_QWORD *)(v14 + 48);
        }
        else
        {
          v34 = *(_QWORD *)v32;
          v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v32 + 32LL) + 96LL);
        }
        *(_DWORD *)(v14 + 104) = v33;
        v35 = *((_DWORD *)a6 + 196);
        if ( !v35 )
          v35 = *(_DWORD *)(*(_QWORD *)(v34 + 32) + 100LL);
        *(_DWORD *)(v14 + 108) = v35;
        *(_DWORD *)(v14 + 116) = *((_DWORD *)a6 + 195);
        *(_DWORD *)(v14 + 120) = *((_DWORD *)a6 + 196);
        *(_DWORD *)(*(_QWORD *)(v34 + 32) + 80LL) |= (v13 >> 15) & 7;
        *(_QWORD *)(v14 + 80) = v45;
        if ( inited )
        {
          *(_WORD *)(v14 + 72) = WORD2(v58);
          *(_DWORD *)(v14 + 64) = HIDWORD(v59);
          *(_DWORD *)(v14 + 68) = v58;
        }
        else
        {
          *(_WORD *)(v14 + 72) = 0;
          *(_QWORD *)(v14 + 64) = 1LL;
        }
        if ( a1 )
          v36 = *((_QWORD *)a1 + 9);
        else
          v36 = gspklWinstaLessSessionLayouts;
        if ( v36 )
        {
          *(_QWORD *)(v14 + 16) = v36;
          *(_QWORD *)(v14 + 24) = *(_QWORD *)(v36 + 24);
          *(_QWORD *)(*(_QWORD *)(v36 + 24) + 16LL) = v14;
          *(_QWORD *)(v36 + 24) = v14;
        }
        else
        {
          LockKbdLayoutListHead(a1, (struct tagKL *)v14);
        }
        goto LABEL_14;
      }
      DestroyKF(KeyboardLayoutFile);
    }
    if ( v45 )
      Win32FreePool(v45);
  }
  return 0LL;
}
