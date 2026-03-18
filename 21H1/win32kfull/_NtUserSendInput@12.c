/*
 * XREFs of _NtUserSendInput@12 @ 0xAF922
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _UserGetLastError@0 @ 0xAC854 (_UserGetLastError@0.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ @ 0xAFB6A (--1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ.c)
 *     _xxxSendInput@8 @ 0xAFB7E (_xxxSendInput@8.c)
 *     _WPP_RECORDER_SF_dqd@32 @ 0xAFCB4 (_WPP_RECORDER_SF_dqd@32.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z @ 0xF0204 (--0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z.c)
 *     _WPP_RECORDER_SF_ddD@32 @ 0xF2C42 (_WPP_RECORDER_SF_ddD@32.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _WPP_RECORDER_SF_dd@28 @ 0x147DEC (_WPP_RECORDER_SF_dd@28.c)
 */

// bad sp value at call has been detected, the output may be wrong!
int __stdcall NtUserSendInput(unsigned int a1, volatile void *Address, int a3)
{
  int v3; // ebx
  int v4; // ecx
  void *v5; // eax
  int v6; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  char LastError; // al
  int v11; // [esp-18h] [ebp-5Ch]
  int v12; // [esp-14h] [ebp-58h]
  int v13; // [esp-10h] [ebp-54h]
  _DWORD v14[3]; // [esp+10h] [ebp-34h] BYREF
  _BYTE v15[4]; // [esp+1Ch] [ebp-28h] BYREF
  void *v16; // [esp+28h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqd(v11, v12, v13, a1, (char)Address, a3);
  v3 = 0;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v15,
    "SendInput",
    0);
  EnterCrit(0, 1);
  v16 = 0;
  memset(v14, 0, sizeof(v14));
  if ( a3 != 28 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(v4, 11, &WPP_8d5a59efe0a33d1aba6a7f19e91869d8_Traceguids, a3, 28);
LABEL_6:
    UserSetLastError((struct _NT_TIB *)0x57);
    goto LABEL_17;
  }
  if ( !a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(20, 12, &WPP_8d5a59efe0a33d1aba6a7f19e91869d8_Traceguids);
    goto LABEL_6;
  }
  ms_exc.registration.TryLevel = 0;
  if ( a1 > 0x9249249 )
    ExRaiseAccessViolation();
  ProbeForRead(Address, 28 * a1, 1u);
  v5 = (void *)Win32AllocPoolWithQuota(28 * a1, 1769173845);
  v6 = (int)v5;
  v16 = v5;
  if ( !v5 )
    ExRaiseStatus(-1073741801);
  memcpy(v5, (const void *)Address, 28 * a1);
  ms_exc.registration.TryLevel = -2;
  PushW32ThreadLock(v6, v14, (int)Win32FreePool);
  v3 = xxxSendInput(a1, v6);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  *(_DWORD *)(ThreadWin32Thread + 8) = v14[0];
  Win32FreePool(v6);
  if ( v3 != a1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = (unsigned __int8)UserGetLastError();
    WPP_RECORDER_SF_ddD(v11, v12, v13, v3, a1, LastError);
  }
LABEL_17:
  UserSessionSwitchLeaveCrit();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v15);
  return v3;
}
