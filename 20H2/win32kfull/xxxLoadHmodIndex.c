/*
 * XREFs of xxxLoadHmodIndex @ 0x1C00751F4
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0055FC0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxLoadUserApiHook @ 0x1C0074590 (xxxLoadUserApiHook.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C00FEAF4 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00754E0 (--0-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     ClientLoadLibrary @ 0x1C0075918 (ClientLoadLibrary.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ClientFreeLibrary @ 0x1C0114840 (ClientFreeLibrary.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C0114928 (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     UserGetLastError @ 0x1C012378C (UserGetLastError.c)
 *     UserGetLastStatus @ 0x1C01237D8 (UserGetLastStatus.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ??1?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C0242CE4 (--1-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 */

__int64 __fastcall xxxLoadHmodIndex(int a1)
{
  __int64 v1; // r14
  __int64 ThreadWin32Thread; // r15
  int v3; // ebx
  const WCHAR *v4; // rdx
  __int64 v5; // rsi
  int AtomNameFromAtomTable; // ebx
  tagDomLock *v7; // rcx
  __int64 v8; // r8
  _BYTE *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _BYTE v17[8]; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v18; // [rsp+28h] [rbp-D8h] BYREF
  tagDomLock *v19; // [rsp+38h] [rbp-C8h] BYREF
  tagDomLock *v20; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v21[8]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v22[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING String1; // [rsp+68h] [rbp-98h] BYREF
  WCHAR SourceString[264]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR v26[264]; // [rsp+290h] [rbp+190h] BYREF

  v1 = a1;
  DestinationString = 0LL;
  v18 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v3 = 1;
  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v17);
  if ( (int)v1 < 0 || (int)v1 >= catomSysTableEntries )
  {
    UserSetLastError(87LL);
  }
  else if ( *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 8 * v1 + 408) != -1LL )
  {
    UserGetAtomNameFromAtomTable(
      UserLibmgmtAtomTableHandle,
      *((unsigned __int16 *)&aatomSysLoaded + v1),
      SourceString,
      260LL);
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (_DWORD)v1 == gihmodUserApiHook )
    {
      v4 = &gszFunctionUserApiHook;
    }
    else
    {
      if ( (_DWORD)v1 != gihmodUserApiHookWOW )
      {
        RtlInitUnicodeString(&v18, 0LL);
        v3 = 0;
LABEL_10:
        CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::~CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v17);
        v5 = ClientLoadLibrary(&DestinationString, &v18);
        if ( !v5 )
        {
          if ( (unsigned int)UserGetLastStatus() != -1073740284
            && (unsigned int)UserGetLastStatus() != -1073740760
            && (unsigned int)UserGetLastError(v11, v10, v12) != 1655
            && (unsigned int)UserGetLastError(v14, v13, v15) != 577 )
          {
            return v5;
          }
          CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v22);
          v9 = v22;
          *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 8 * v1 + 408) = -1LL;
LABEL_25:
          CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::~CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v9);
          return v5;
        }
        CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v21);
        String1 = 0LL;
        if ( v3
          && ((AtomNameFromAtomTable = UserGetAtomNameFromAtomTable(
                                         UserLibmgmtAtomTableHandle,
                                         *((unsigned __int16 *)&aatomSysLoaded + v1),
                                         v26,
                                         260LL),
               RtlInitUnicodeString(&String1, v26),
               !AtomNameFromAtomTable)
           || RtlCompareUnicodeString(&String1, &DestinationString, 0)) )
        {
          CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v19);
          ClientFreeLibrary(v5);
          v7 = v19;
          v5 = 0LL;
        }
        else
        {
          v8 = *(_QWORD *)(ThreadWin32Thread + 424);
          if ( ((1 << v1) & *(_DWORD *)(v8 + 404)) == 0 )
          {
            ++*((_DWORD *)&acatomSysUse + v1);
            *(_QWORD *)(v8 + 8 * v1 + 408) = v5;
            *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 404LL) |= 1 << v1;
LABEL_19:
            v9 = v21;
            goto LABEL_25;
          }
          CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v20);
          ClientFreeLibrary(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 8 * v1 + 408));
          v7 = v20;
        }
        tagDomLock::LockExclusive(v7);
        goto LABEL_19;
      }
      v4 = &gszFunctionUserApiHookWOW;
    }
    RtlInitUnicodeString(&v18, v4);
    goto LABEL_10;
  }
  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::~CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v17);
  return 0LL;
}
