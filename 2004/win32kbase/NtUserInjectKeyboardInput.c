/*
 * XREFs of NtUserInjectKeyboardInput @ 0x1C0135F00
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
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C016B62C (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     UserGetLastError @ 0x1C01CE2F0 (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectKeyboardInput(char *Src, unsigned int a2)
{
  int v3; // ebx
  __int64 v4; // r13
  PVOID v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r13
  void *v11; // rax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r9d
  int v19; // eax
  NTSTATUS v20; // r12d
  char LastError; // al
  int v22; // edx
  char v24; // [rsp+30h] [rbp-68h]
  __int64 CurrentProcessWin32Process; // [rsp+58h] [rbp-40h]
  __int64 *v26[7]; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+A8h] [rbp+10h]
  PVOID Object; // [rsp+B0h] [rbp+18h] BYREF
  size_t Size; // [rsp+B8h] [rbp+20h]

  v27 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qd(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      21,
      28,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      (char)Src,
      v24);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v26, "InjectKeyboardInput", 0LL);
  v3 = 1;
  EnterCrit(0LL, 1);
  v4 = 0LL;
  v5 = 0LL;
  Object = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( v27 - 1 > 0xF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v7,
        21,
        29,
        (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
        v27);
    }
    goto LABEL_36;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v9 = 5LL;
LABEL_37:
    v3 = 0;
LABEL_38:
    UserSetLastError(v9, v7);
    goto LABEL_39;
  }
  v10 = 24LL * v27;
  Size = v10;
  if ( v10 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v8) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v10] > MmUserProbeAddress || &Src[v10] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v11 = (void *)Win32AllocPoolWithQuota(v10, 0x6B697355u);
  v4 = (__int64)v11;
  if ( !v11 )
    ExRaiseStatus(-1073741801);
  memmove(v11, Src, Size);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 912) == -1LL )
  {
    v12 = RIMIDECreatePseudoMouseOrKeyboardDevice(1LL, CurrentProcessWin32Process + 912);
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v7,
          21,
          31,
          (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
          v12);
      }
      v9 = 1359LL;
      goto LABEL_37;
    }
  }
  v13 = RawInputManagerDeviceObjectResolveHandle(*(char **)(CurrentProcessWin32Process + 912), 3u, 1, &Object);
  if ( v13 >= 0 )
  {
    v5 = Object;
    if ( (*((_DWORD *)Object + 68) & 0x2000) != 0 )
    {
      if ( *((_BYTE *)Object + 136) == 1 )
      {
        v19 = RIMIDEInjectKeyboardFromKeybdInputStruct(Object, v4, v27);
        v20 = v19;
        if ( v19 >= 0 )
          goto LABEL_39;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 2;
          WPP_RECORDER_SF_d(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v14,
            21,
            35,
            (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
            v19);
        }
        v3 = 0;
        v9 = RtlNtStatusToDosError(v20);
        goto LABEL_38;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_36;
      v18 = 34;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_36:
        v9 = 87LL;
        goto LABEL_37;
      }
      v18 = 33;
    }
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v7,
      21,
      v18,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids);
    goto LABEL_36;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v7,
      21,
      32,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      v13);
  }
  v3 = 0;
  UserSetLastError(6LL, v7);
  v5 = Object;
LABEL_39:
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v4 )
    Win32FreePool(v4);
  if ( !v3 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    LOBYTE(v22) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v22,
      21,
      36,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      LastError);
  }
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v26);
  return v3;
}
