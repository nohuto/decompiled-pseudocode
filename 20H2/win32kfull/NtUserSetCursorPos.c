/*
 * XREFs of NtUserSetCursorPos @ 0x1C002E040
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C002E0F8 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002F594 (WPP_RECORDER_SF_dd.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00D7374 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00D73A0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     UserGetLastError @ 0x1C012378C (UserGetLastError.c)
 *     WPP_RECORDER_SF_D @ 0x1C01D9440 (WPP_RECORDER_SF_D.c)
 */

_BOOL8 __fastcall NtUserSetCursorPos(int a1, int a2, int a3)
{
  int v3; // ebx
  bool v5; // al
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _BOOL8 v9; // rbx
  char LastError; // al
  int v12; // edx
  int v13; // ecx
  char v14; // [rsp+30h] [rbp-18h]
  char v15; // [rsp+60h] [rbp+18h] BYREF

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_dd(a1, a2, a3, 25, (__int64)&WPP_10e75cd9acd136c1ea4dcb54365ca699_Traceguids, a1, v14);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v15,
    "SetCursorPos",
    0LL);
  EnterCrit(0LL, 1LL);
  v5 = zzzSetCursorPos(a1, v3);
  v9 = v5;
  if ( !v5 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError(v7, v6, v8);
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_D(v13, v12, 20, 26, (__int64)&WPP_10e75cd9acd136c1ea4dcb54365ca699_Traceguids, LastError);
  }
  UserSessionSwitchLeaveCrit(v7);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v15);
  return v9;
}
