/*
 * XREFs of NtUserSendInput @ 0x1C003A7E0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032D80 (WPP_RECORDER_SF_d.c)
 *     xxxSendInput @ 0x1C003A9BC (xxxSendInput.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C003ABA4 (WPP_RECORDER_SF_dqd.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003DDA4 (WPP_RECORDER_SF_dd.c)
 *     UserGetLastError @ 0x1C00488A4 (UserGetLastError.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00B2DE4 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00B2E10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     WPP_RECORDER_SF_ddD @ 0x1C0207830 (WPP_RECORDER_SF_ddD.c)
 */

__int64 __fastcall NtUserSendInput(unsigned int a1, volatile void *a2, int a3, int a4)
{
  __int64 v6; // rdi
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 CurrentProcessWow64Process; // rax
  void *v11; // rax
  __int64 v12; // r15
  unsigned int v13; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  void *v23; // [rsp+50h] [rbp-48h]
  __int128 v24; // [rsp+60h] [rbp-38h] BYREF
  __int64 v25; // [rsp+70h] [rbp-28h]
  char v26; // [rsp+B8h] [rbp+20h] BYREF

  v6 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqd(a1, (_DWORD)a2, a3, a4);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v26,
    "SendInput",
    0LL);
  EnterCrit(0LL, 1LL);
  v24 = 0LL;
  v25 = 0LL;
  if ( a3 != 40 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_dd(v8, v7, v9, 11, (__int64)&WPP_8d5a59efe0a33d1aba6a7f19e91869d8_Traceguids, a3, 40);
    }
    goto LABEL_11;
  }
  if ( !(_DWORD)v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(v8, v7, 20, 12, (__int64)&WPP_8d5a59efe0a33d1aba6a7f19e91869d8_Traceguids);
    }
LABEL_11:
    v13 = 0;
    UserSetLastError(87LL);
    goto LABEL_8;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8);
  ProbeForRead(a2, 40 * v6, CurrentProcessWow64Process != 0 ? 1 : 4);
  v11 = (void *)Win32AllocPoolWithQuota(40 * v6, 1769173845LL);
  v12 = (__int64)v11;
  v23 = v11;
  if ( !v11 )
    ExRaiseStatus(-1073741801);
  memmove(v11, (const void *)a2, 40 * v6);
  PushW32ThreadLock(v12, &v24, (__int64)Win32FreePool);
  v13 = xxxSendInput((unsigned int)v6, v12);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)(ThreadWin32Thread + 16) = v24;
  Win32FreePool(v23);
  if ( v13 != (_DWORD)v6 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserGetLastError();
    WPP_RECORDER_SF_ddD(v20, v19, v21, v22);
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v16, v15, v17);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v26);
  return v13;
}
