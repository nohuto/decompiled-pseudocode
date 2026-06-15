/*
 * XREFs of sub_18000609C @ 0x18000609C
 * Callers:
 *     ActivatePolicyManager @ 0x1800059F0 (ActivatePolicyManager.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180003AE8 @ 0x180003AE8 (sub_180003AE8.c)
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_1800089D0 @ 0x1800089D0 (sub_1800089D0.c)
 *     sub_18000A300 @ 0x18000A300 (sub_18000A300.c)
 *     sub_18000A4EC @ 0x18000A4EC (sub_18000A4EC.c)
 *     sub_18000A8FC @ 0x18000A8FC (sub_18000A8FC.c)
 *     sub_18001AF20 @ 0x18001AF20 (sub_18001AF20.c)
 *     sub_1800226D0 @ 0x1800226D0 (sub_1800226D0.c)
 *     sub_18002AF48 @ 0x18002AF48 (sub_18002AF48.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     sub_180039DDC @ 0x180039DDC (sub_180039DDC.c)
 *     memset @ 0x18003A7D8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_18000609C(__int64 a1)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v3; // rbx
  signed int v4; // esi
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int LastError; // eax
  __int64 v8; // r9
  int v9; // edx
  PSID *v10; // rbx
  HANDLE v11; // rax
  LPVOID v12; // rax
  PSID *v13; // r14
  int v14; // edi
  PSID v15; // r12
  DWORD v16; // edi
  __int64 v17; // r9
  int v18; // edx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rsi
  signed __int32 v27; // eax
  __int64 v28; // rax
  DWORD v29; // eax
  PSID *v30; // [rsp+38h] [rbp-69h]
  _QWORD Recipient[3]; // [rsp+60h] [rbp-41h] BYREF
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+78h] [rbp-29h] BYREF
  __int64 retaddr; // [rsp+100h] [rbp+5Fh]

  if ( qword_18004FEE0 )
    goto LABEL_25;
  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x60uLL);
  if ( v3 )
  {
    *v3 = &off_18003F768;
    v3[10] = 0LL;
    *((_DWORD *)v3 + 2) = 3;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
    v3[5] = 0LL;
    v3[6] = 0LL;
    v3[7] = 0LL;
    *((_DWORD *)v3 + 16) = 0;
    *((_DWORD *)v3 + 17) = 1;
    *((_DWORD *)v3 + 18) = 72;
  }
  else
  {
    v3 = 0LL;
  }
  if ( !v3 )
  {
    v4 = -2147024882;
LABEL_24:
    sub_180003AB0(
      retaddr,
      252,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      v4);
    return (unsigned int)v4;
  }
  v4 = 0;
  if ( RtlDllShutdownInProgress() )
  {
    v4 = -2147023781;
  }
  else
  {
    ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
    v3[10] = ThreadpoolCleanupGroup;
    if ( ThreadpoolCleanupGroup )
    {
      v3[3] = ThreadpoolCleanupGroup;
      v3[4] = 0LL;
    }
    else
    {
      LastError = GetLastError();
      v4 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v4 = LastError;
    }
    if ( v4 >= 0 )
    {
      qword_18004FEE0 = (__int64)v3;
      v3 = 0LL;
      goto LABEL_21;
    }
  }
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_BYTE *)off_18004F000 + 28) & 4) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 2u )
  {
    sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xAu, &stru_180045748, v4);
  }
LABEL_21:
  if ( v3 )
    (*(void (__fastcall **)(_QWORD *, __int64))*v3)(v3, 1LL);
  if ( v4 < 0 )
    goto LABEL_24;
LABEL_25:
  CompletionPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
  if ( !CompletionPort )
  {
    v9 = 255;
    return sub_180003AE8(
             retaddr,
             v9,
             (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             v8);
  }
  hObject = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)StartAddress, 0LL, 0, 0LL);
  if ( !hObject )
  {
    v9 = 258;
    return sub_180003AE8(
             retaddr,
             v9,
             (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             v8);
  }
  sub_18002AF48();
  v10 = 0LL;
  v30 = 0LL;
  if ( !qword_18004FE78 )
  {
    v11 = GetProcessHeap();
    v12 = HeapAlloc(v11, 0, 0xB0uLL);
    v13 = v12 ? (PSID *)sub_18001AF20(v12) : 0LL;
    if ( v13 )
    {
      v15 = v13[2];
      if ( v15 )
      {
        v16 = GetLastError();
        LocalFree(v15);
        SetLastError(v16);
      }
      v13[2] = 0LL;
      if ( ConvertStringSidToSidW(
             L"S-1-15-3-1024-1692970155-4054893335-185714091-3362601943-3526593181-1159816984-2199008581-497492991",
             v13 + 2) )
      {
        v14 = 0;
      }
      else
      {
        v14 = sub_180003AE8(
                retaddr,
                466,
                (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                v17);
      }
      if ( v14 >= 0 )
      {
        v10 = v13;
        v30 = v13;
        v13 = 0LL;
      }
    }
    else
    {
      v14 = -2147024882;
    }
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (*((void (__fastcall **)(PSID *))*v13 + 2))(v13);
        (*((void (__fastcall **)(PSID *, __int64))*v13 + 1))(v13, 1LL);
      }
      v10 = v30;
    }
    if ( v14 < 0 )
    {
      if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
        && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
        && *((_BYTE *)off_18004F000 + 25) >= 2u )
      {
        sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xBu, &stru_1800445C8, v14);
      }
      sub_180005724("CApplicationManager::CreateInstance", 402, v14);
      v18 = 263;
      goto LABEL_81;
    }
  }
  v19 = sub_180039DDC(16LL, &unk_18004FFC8);
  v20 = 0LL;
  if ( v19 )
  {
    *(_OWORD *)v19 = 0LL;
    *(_DWORD *)(v19 + 12) = 1;
    *(_QWORD *)v19 = off_18003E828;
    if ( qword_18004FE28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18004FE28 + 8LL))(qword_18004FE28);
    *(_QWORD *)v19 = off_18003E7F8;
    v20 = v19;
  }
  v21 = qword_18004FEE8;
  qword_18004FEE8 = v20;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( qword_18004FEE8 )
  {
    v22 = sub_1800226D0(a1 + 32);
    v14 = v22;
    if ( v22 < 0 )
    {
      v23 = v22;
      v18 = 268;
LABEL_82:
      sub_180003AB0(
        retaddr,
        v18,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        v23);
      goto LABEL_89;
    }
    v24 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 40) = 0LL;
    if ( v24 )
      ((void (*)(void))sub_18000A300)();
    *(_QWORD *)(a1 + 40) = 0LL;
    v25 = sub_180039DDC(496LL, &unk_18004FFC8);
    if ( v25 )
    {
      Recipient[2] = v25;
      v26 = sub_1800089D0(v25);
      v14 = sub_18000A8FC(v26);
      if ( v14 >= 0 )
      {
        if ( v26 )
        {
          do
            v27 = *(_DWORD *)(v26 + 20);
          while ( v27 != 0x7FFFFFFF
               && v27 != _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 20), v27 + 1, v27) );
          v10 = v30;
        }
        *(_QWORD *)(a1 + 40) = v26;
        if ( v26 )
          sub_18000A300(v26);
        v14 = 0;
      }
      else if ( v26 )
      {
        sub_18000A300(v26);
      }
      if ( v14 >= 0 )
      {
        qword_18004FE80 = *(_QWORD *)(a1 + 40);
        v28 = (__int64)v10;
        v10 = 0LL;
        v30 = 0LL;
        qword_18004FE78 = v28;
        qword_18004FE70 = *(_QWORD *)(a1 + 32);
        memset(&spc, 0, sizeof(spc));
        if ( GetPwrCapabilities(&spc) && spc.spare2[2] )
        {
          dword_18004FE64 = 1;
          Recipient[0] = sub_180005CA0;
          Recipient[1] = 0LL;
          v29 = PowerSettingRegisterNotification(&SettingGuid, 2u, Recipient, &RegistrationHandle);
          if ( v29 )
            sub_18000A4EC(
              retaddr,
              287LL,
              "multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
              v29);
        }
        else
        {
          dword_18004FE64 = 0;
        }
        v14 = 0;
        goto LABEL_89;
      }
    }
    else
    {
      v14 = -2147024882;
    }
    v18 = 270;
LABEL_81:
    v23 = v14;
    goto LABEL_82;
  }
  sub_180003AB0(
    retaddr,
    266,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    -2147024882);
  v14 = -2147024882;
LABEL_89:
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (*((void (__fastcall **)(PSID *))*v30 + 2))(v30);
      (*((void (__fastcall **)(PSID *, __int64))*v30 + 1))(v30, 1LL);
    }
  }
  return (unsigned int)v14;
}
