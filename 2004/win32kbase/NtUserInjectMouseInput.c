/*
 * XREFs of NtUserInjectMouseInput @ 0x1C0136320
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0070E3C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0070F68 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     EnterCrit @ 0x1C008B340 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0098C10 (Win32AllocPoolWithQuota.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00AB3A0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     WPP_RECORDER_SF_qd @ 0x1C013BA04 (WPP_RECORDER_SF_qd.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0169478 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C016A5C0 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C016B978 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     UserGetLastError @ 0x1C01CE2F0 (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectMouseInput(char *Src, unsigned int a2)
{
  int v3; // ebx
  __int64 v4; // rsi
  PVOID v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rsi
  void *v11; // rax
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  int v21; // r9d
  int v22; // eax
  NTSTATUS v23; // r13d
  char LastError; // al
  int v25; // edx
  char v27; // [rsp+30h] [rbp-68h]
  __int64 v28; // [rsp+50h] [rbp-48h]
  __int64 *v29[8]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v30; // [rsp+A8h] [rbp+10h]
  _DWORD *v31; // [rsp+B0h] [rbp+18h] BYREF
  __int64 CurrentProcessWin32Process; // [rsp+B8h] [rbp+20h]

  v30 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qd(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      21,
      19,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      (char)Src,
      v27);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v29, "InjectMouseInput", 0LL);
  v3 = 1;
  EnterCrit(0LL, 1);
  v4 = 0LL;
  v5 = 0LL;
  v31 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( v30 - 1 > 0xF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v7,
        21,
        20,
        (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
        v30);
    }
    v9 = 87LL;
    goto LABEL_40;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v9 = 5LL;
LABEL_40:
    v3 = 0;
    goto LABEL_41;
  }
  v10 = 32LL * v30;
  if ( v10 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v8) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v10] > MmUserProbeAddress || &Src[v10] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v11 = (void *)Win32AllocPoolWithQuota(v10, 0x6D697355u);
  v28 = (__int64)v11;
  if ( !v11 )
    ExRaiseStatus(-1073741801);
  memmove(v11, Src, v10);
  v12 = CurrentProcessWin32Process;
  if ( *(_QWORD *)(CurrentProcessWin32Process + 904) == -1LL )
  {
    v13 = RIMIDECreatePseudoMouseOrKeyboardDevice(0LL, CurrentProcessWin32Process + 904);
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v14,
          21,
          22,
          (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
          v13);
      }
      v15 = 1359LL;
      goto LABEL_19;
    }
  }
  v20 = RawInputManagerDeviceObjectResolveHandle(*(char **)(v12 + 904), 3u, 1, (PVOID *)&v31);
  if ( v20 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v14,
        21,
        23,
        (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
        v20);
    }
    v3 = 0;
    UserSetLastError(6LL, v14);
    v5 = v31;
    goto LABEL_20;
  }
  v5 = v31;
  if ( (v31[68] & 0x2000) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_29:
      v15 = 87LL;
LABEL_19:
      v3 = 0;
      UserSetLastError(v15, v14);
LABEL_20:
      v4 = v28;
      goto LABEL_42;
    }
    v21 = 24;
LABEL_28:
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v14,
      21,
      v21,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids);
    goto LABEL_29;
  }
  if ( *((_BYTE *)v31 + 136) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v21 = 25;
    goto LABEL_28;
  }
  v4 = v28;
  v22 = RIMIDEInjectMouseFromMouseInputStruct(v31, v28, v30);
  v23 = v22;
  if ( v22 >= 0 )
    goto LABEL_42;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v16,
      21,
      26,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      v22);
  }
  v3 = 0;
  v9 = RtlNtStatusToDosError(v23);
LABEL_41:
  UserSetLastError(v9, v7);
LABEL_42:
  if ( v4 )
    Win32FreePool(v4);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( !v3 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    LOBYTE(v25) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v25,
      21,
      27,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      LastError);
  }
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v29);
  return v3;
}
