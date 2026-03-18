/*
 * XREFs of NtUserInjectMouseInput @ 0x1C013BFC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C006546C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0065598 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     WPP_RECORDER_SF_qd @ 0x1C01416A4 (WPP_RECORDER_SF_qd.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C016F7C8 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0170910 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C0171CC8 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     UserGetLastError @ 0x1C01D4270 (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectMouseInput(char *Src, unsigned int a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rsi
  PVOID v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rsi
  void *v13; // rax
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  int v22; // r9d
  int v23; // eax
  NTSTATUS v24; // r13d
  char LastError; // al
  int v26; // edx
  char v28; // [rsp+30h] [rbp-68h]
  __int64 v29; // [rsp+50h] [rbp-48h]
  __int64 *v30[8]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v31; // [rsp+A8h] [rbp+10h]
  _DWORD *v32; // [rsp+B0h] [rbp+18h] BYREF
  __int64 CurrentProcessWin32Process; // [rsp+B8h] [rbp+20h]

  v31 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v28 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qd(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      21,
      19,
      (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
      (char)Src,
      v28);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v30, "InjectMouseInput", 0LL, a4);
  v5 = 1;
  EnterCrit(0LL, 1);
  v6 = 0LL;
  v7 = 0LL;
  v32 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  if ( v31 - 1 > 0xF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        21,
        20,
        (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
        v31);
    }
    v11 = 87LL;
    goto LABEL_40;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v11 = 5LL;
LABEL_40:
    v5 = 0;
    goto LABEL_41;
  }
  v12 = 32LL * v31;
  if ( v12 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v10) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v12] > MmUserProbeAddress || &Src[v12] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v13 = (void *)Win32AllocPoolWithQuota(v12, 0x6D697355u);
  v29 = (__int64)v13;
  if ( !v13 )
    ExRaiseStatus(-1073741801);
  memmove(v13, Src, v12);
  v14 = CurrentProcessWin32Process;
  if ( *(_QWORD *)(CurrentProcessWin32Process + 904) == -1LL )
  {
    v15 = RIMIDECreatePseudoMouseOrKeyboardDevice(0LL, CurrentProcessWin32Process + 904);
    if ( v15 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v16,
          21,
          22,
          (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
          v15);
      }
      v17 = 1359LL;
      goto LABEL_19;
    }
  }
  v21 = RawInputManagerDeviceObjectResolveHandle(*(char **)(v14 + 904), 3u, 1, (PVOID *)&v32);
  if ( v21 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v16,
        21,
        23,
        (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
        v21);
    }
    v5 = 0;
    UserSetLastError(6LL, v16);
    v7 = v32;
    goto LABEL_20;
  }
  v7 = v32;
  if ( (v32[68] & 0x2000) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_29:
      v17 = 87LL;
LABEL_19:
      v5 = 0;
      UserSetLastError(v17, v16);
LABEL_20:
      v6 = v29;
      goto LABEL_42;
    }
    v22 = 24;
LABEL_28:
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v16,
      21,
      v22,
      (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids);
    goto LABEL_29;
  }
  if ( *((_BYTE *)v32 + 136) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v22 = 25;
    goto LABEL_28;
  }
  v6 = v29;
  v23 = RIMIDEInjectMouseFromMouseInputStruct(v32, v29, v31);
  v24 = v23;
  if ( v23 >= 0 )
    goto LABEL_42;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v18,
      21,
      26,
      (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
      v23);
  }
  v5 = 0;
  v11 = RtlNtStatusToDosError(v24);
LABEL_41:
  UserSetLastError(v11, v9);
LABEL_42:
  if ( v6 )
    Win32FreePool(v6, v18, v20);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( !v5 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    LOBYTE(v26) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v26,
      21,
      27,
      (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
      LastError);
  }
  UserSessionSwitchLeaveCrit(v19);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v30);
  return v5;
}
