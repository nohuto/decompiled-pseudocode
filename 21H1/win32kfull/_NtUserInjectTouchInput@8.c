/*
 * XREFs of _NtUserInjectTouchInput@8 @ 0x165800
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
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z @ 0xF0204 (--0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _WPP_RECORDER_SF_D@24 @ 0x147D5C (_WPP_RECORDER_SF_D@24.c)
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 *     _WPP_RECORDER_SF_dq@28 @ 0x16D6C8 (_WPP_RECORDER_SF_dq@28.c)
 *     ?TraceLoggingTouchInjection@@YGXHHHK@Z @ 0x187129 (-TraceLoggingTouchInjection@@YGXHHHK@Z.c)
 */

int __stdcall NtUserInjectTouchInput(int a1, volatile void *Address)
{
  unsigned int v2; // esi
  int v3; // edx
  int v4; // ecx
  unsigned int v5; // ebx
  void *v6; // eax
  int v7; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  char LastError; // al
  int v11; // edx
  int v12; // ecx
  int v14; // [esp-14h] [ebp-54h]
  int v15; // [esp-10h] [ebp-50h]
  int v16; // [esp-Ch] [ebp-4Ch]
  int v17; // [esp+0h] [ebp-40h]
  unsigned int v18; // [esp+4h] [ebp-3Ch]
  _DWORD v19[3]; // [esp+10h] [ebp-30h] BYREF
  void *v20; // [esp+24h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v2 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dq(v14, v15, v16, a1, (char)Address);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion((int **)&a1, "InjectTouchInput", 0);
  EnterCrit(0, 1);
  InputExtensibilityCalloutGuard();
  v5 = 0;
  v20 = 0;
  memset(v19, 0, sizeof(v19));
  if ( v2 && v2 <= 0x100 )
  {
    EtwTraceTouchInjectionStart();
    ms_exc.registration.TryLevel = 0;
    ProbeForRead(Address, 136 * v2, 1u);
    v6 = (void *)Win32AllocPoolWithQuota(136 * v2, 1953067861);
    v5 = (unsigned int)v6;
    v20 = v6;
    if ( !v6 )
      ExRaiseStatus(-1073741801);
    memcpy(v6, (const void *)Address, 136 * v2);
    ms_exc.registration.TryLevel = -2;
    PushW32ThreadLock(v5, v19, (int)Win32FreePool);
    v7 = xxxInjectTouchInput(v2, v5);
    if ( !v7 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(20, 18, &WPP_8d5a59efe0a33d1aba6a7f19e91869d8_Traceguids);
      v2 = -2;
    }
    TraceLoggingTouchInjection(v2, 0, v17, v18);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    *(_DWORD *)(ThreadWin32Thread + 8) = v19[0];
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_q(v4, v3, 0x14u, 16, (int)&WPP_8d5a59efe0a33d1aba6a7f19e91869d8_Traceguids, v2);
    }
    TraceLoggingTouchInjection(v2, 0, v17, v18);
    v7 = 0;
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  if ( v5 )
    Win32FreePool(v5);
  EtwTraceTouchInjectionStop();
  if ( !v7 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = (unsigned __int8)UserGetLastError();
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_D(v12, v11, 0x14u, 19, (int)&WPP_8d5a59efe0a33d1aba6a7f19e91869d8_Traceguids, LastError);
  }
  UserSessionSwitchLeaveCrit();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&a1);
  return v7;
}
