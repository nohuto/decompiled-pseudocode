/*
 * XREFs of xxxLoadHmodIndex @ 0x1C0046334
 * Callers:
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C00428B0 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     xxxLoadUserApiHook @ 0x1C00456D0 (xxxLoadUserApiHook.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C009A2E0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C0042694 (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     ClientFreeLibrary @ 0x1C00426E8 (ClientFreeLibrary.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C0046620 (--0-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     ClientLoadLibrary @ 0x1C0046A58 (ClientLoadLibrary.c)
 *     UserGetLastError @ 0x1C00488A4 (UserGetLastError.c)
 *     UserGetLastStatus @ 0x1C00488F0 (UserGetLastStatus.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??1?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C0243F84 (--1-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
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
  _BYTE v11[8]; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v12; // [rsp+28h] [rbp-D8h] BYREF
  tagDomLock *v13; // [rsp+38h] [rbp-C8h] BYREF
  tagDomLock *v14; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[8]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v16[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING String1; // [rsp+68h] [rbp-98h] BYREF
  WCHAR SourceString[264]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR v20[264]; // [rsp+290h] [rbp+190h] BYREF

  v1 = a1;
  DestinationString = 0LL;
  v12 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v3 = 1;
  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v11);
  if ( (int)v1 < 0 || (int)v1 >= catomSysTableEntries )
  {
    UserSetLastError(87LL);
  }
  else if ( *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 8 * v1 + 408) != -1LL )
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
        RtlInitUnicodeString(&v12, 0LL);
        v3 = 0;
LABEL_10:
        CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::~CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v11);
        v5 = ClientLoadLibrary(&DestinationString, &v12);
        if ( !v5 )
        {
          if ( (unsigned int)UserGetLastStatus() != -1073740284
            && (unsigned int)UserGetLastStatus() != -1073740760
            && (unsigned int)UserGetLastError() != 1655
            && (unsigned int)UserGetLastError() != 577 )
          {
            return v5;
          }
          CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v16);
          v9 = v16;
          *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 8 * v1 + 408) = -1LL;
LABEL_25:
          CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::~CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v9);
          return v5;
        }
        CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v15);
        String1 = 0LL;
        if ( v3
          && ((AtomNameFromAtomTable = UserGetAtomNameFromAtomTable(
                                         UserLibmgmtAtomTableHandle,
                                         *((unsigned __int16 *)&aatomSysLoaded + v1),
                                         v20,
                                         260LL),
               RtlInitUnicodeString(&String1, v20),
               !AtomNameFromAtomTable)
           || RtlCompareUnicodeString(&String1, &DestinationString, 0)) )
        {
          CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v13);
          ClientFreeLibrary(v5);
          v7 = v13;
          v5 = 0LL;
        }
        else
        {
          v8 = *(_QWORD *)(ThreadWin32Thread + 416);
          if ( ((1 << v1) & *(_DWORD *)(v8 + 404)) == 0 )
          {
            ++*((_DWORD *)&acatomSysUse + v1);
            *(_QWORD *)(v8 + 8 * v1 + 408) = v5;
            *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 404LL) |= 1 << v1;
LABEL_19:
            v9 = v15;
            goto LABEL_25;
          }
          CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v14);
          ClientFreeLibrary(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 8 * v1 + 408));
          v7 = v14;
        }
        tagDomLock::LockExclusive(v7);
        goto LABEL_19;
      }
      v4 = &gszFunctionUserApiHookWOW;
    }
    RtlInitUnicodeString(&v12, v4);
    goto LABEL_10;
  }
  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::~CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v11);
  return 0LL;
}
