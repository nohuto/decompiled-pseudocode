/*
 * XREFs of NtUserInjectMouseInput @ 0x1C0133FD0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00230E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00367FC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0036928 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0059700 (Win32AllocPoolWithQuota.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     WPP_RECORDER_SF_qd @ 0x1C01396B4 (WPP_RECORDER_SF_qd.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0166F18 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0168060 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C0169418 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     UserGetLastError @ 0x1C01CBF70 (UserGetLastError.c)
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
  __int64 v21; // r9
  int v22; // eax
  int v23; // r9d
  int v24; // eax
  NTSTATUS v25; // r13d
  char LastError; // al
  int v27; // edx
  char v29; // [rsp+30h] [rbp-68h]
  __int64 v30; // [rsp+50h] [rbp-48h]
  __int64 *v31[8]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v32; // [rsp+A8h] [rbp+10h]
  _DWORD *v33; // [rsp+B0h] [rbp+18h] BYREF
  __int64 CurrentProcessWin32Process; // [rsp+B8h] [rbp+20h]

  v32 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qd(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      21,
      19,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      (char)Src,
      v29);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v31, "InjectMouseInput", 0LL, a4);
  v5 = 1;
  EnterCrit(0, 1);
  v6 = 0LL;
  v7 = 0LL;
  v33 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  if ( v32 - 1 > 0xF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        21,
        20,
        (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
        v32);
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
  v12 = 32LL * v32;
  if ( v12 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v10) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v12] > MmUserProbeAddress || &Src[v12] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v13 = (void *)Win32AllocPoolWithQuota(v12, 0x6D697355u);
  v30 = (__int64)v13;
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
          (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
          v15);
      }
      v17 = 1359LL;
      goto LABEL_19;
    }
  }
  v22 = RawInputManagerDeviceObjectResolveHandle(*(char **)(v14 + 904), 3u, 1, (PVOID *)&v33);
  if ( v22 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v16,
        21,
        23,
        (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
        v22);
    }
    v5 = 0;
    UserSetLastError(6LL, v16);
    v7 = v33;
    goto LABEL_20;
  }
  v7 = v33;
  if ( (v33[68] & 0x2000) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_29:
      v17 = 87LL;
LABEL_19:
      v5 = 0;
      UserSetLastError(v17, v16);
LABEL_20:
      v6 = v30;
      goto LABEL_42;
    }
    v23 = 24;
LABEL_28:
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v16,
      21,
      v23,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids);
    goto LABEL_29;
  }
  if ( *((_BYTE *)v33 + 136) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v23 = 25;
    goto LABEL_28;
  }
  v6 = v30;
  v24 = RIMIDEInjectMouseFromMouseInputStruct(v33, v30, v32);
  v25 = v24;
  if ( v24 >= 0 )
    goto LABEL_42;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v18,
      21,
      26,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      v24);
  }
  v5 = 0;
  v11 = RtlNtStatusToDosError(v25);
LABEL_41:
  UserSetLastError(v11, v9);
LABEL_42:
  if ( v6 )
    Win32FreePool(v6);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( !v5 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    LOBYTE(v27) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v27,
      21,
      27,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      LastError);
  }
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v31);
  return v5;
}
