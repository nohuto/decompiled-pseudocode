/*
 * XREFs of NtUserSendInput @ 0x1C00BA360
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C002F594 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     xxxSendInput @ 0x1C00BA53C (xxxSendInput.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C00BA724 (WPP_RECORDER_SF_dqd.c)
 *     WPP_RECORDER_SF_d @ 0x1C00BCF04 (WPP_RECORDER_SF_d.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00D7374 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00D73A0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     UserGetLastError @ 0x1C012378C (UserGetLastError.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     WPP_RECORDER_SF_ddD @ 0x1C02069C0 (WPP_RECORDER_SF_ddD.c)
 */

__int64 __fastcall NtUserSendInput(unsigned int a1, volatile void *a2, int a3, int a4)
{
  __int64 v6; // rdi
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // r8
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
  __int64 v23; // [rsp+30h] [rbp-68h]
  void *v24; // [rsp+50h] [rbp-48h]
  __int128 v25; // [rsp+60h] [rbp-38h] BYREF
  __int64 v26; // [rsp+70h] [rbp-28h]
  char v27; // [rsp+B8h] [rbp+20h] BYREF

  v6 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v23) = HIDWORD(a2);
    WPP_RECORDER_SF_dqd(a1, (_DWORD)a2, a3, a4);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v27,
    "SendInput",
    0LL);
  EnterCrit(0LL, 1LL);
  v25 = 0LL;
  v26 = 0LL;
  if ( a3 != 40 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v23) = 40;
      WPP_RECORDER_SF_dd(v8, 2u, v9, 0xBu, (__int64)&WPP_10e75cd9acd136c1ea4dcb54365ca699_Traceguids, a3, v23);
    }
    goto LABEL_11;
  }
  if ( !(_DWORD)v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(v8, v7, 20, 12, (__int64)&WPP_10e75cd9acd136c1ea4dcb54365ca699_Traceguids);
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
  v24 = v11;
  if ( !v11 )
    ExRaiseStatus(-1073741801);
  memmove(v11, (const void *)a2, 40 * v6);
  PushW32ThreadLock(v12, &v25, (__int64)Win32FreePool);
  v13 = xxxSendInput((unsigned int)v6, v12);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(ThreadWin32Thread + 16) = v25;
  Win32FreePool(v24);
  if ( v13 != (_DWORD)v6 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserGetLastError(v16, v15, v17);
    WPP_RECORDER_SF_ddD(v20, v19, v21, v22);
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v16);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v27);
  return v13;
}
