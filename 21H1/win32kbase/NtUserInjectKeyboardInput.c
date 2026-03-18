/*
 * XREFs of NtUserInjectKeyboardInput @ 0x1C013BBA0
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
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C017197C (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     UserGetLastError @ 0x1C01D4270 (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectKeyboardInput(char *Src, unsigned int a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // r13
  PVOID v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r13
  void *v13; // rax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  int v20; // eax
  NTSTATUS v21; // r12d
  char LastError; // al
  int v23; // edx
  char v25; // [rsp+30h] [rbp-68h]
  __int64 CurrentProcessWin32Process; // [rsp+58h] [rbp-40h]
  __int64 *v27[7]; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+A8h] [rbp+10h]
  PVOID Object; // [rsp+B0h] [rbp+18h] BYREF
  size_t Size; // [rsp+B8h] [rbp+20h]

  v28 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v25 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qd(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      21,
      28,
      (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
      (char)Src,
      v25);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v27, "InjectKeyboardInput", 0LL, a4);
  v5 = 1;
  EnterCrit(0LL, 1);
  v6 = 0LL;
  v7 = 0LL;
  Object = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  if ( v28 - 1 > 0xF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        21,
        29,
        (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
        v28);
    }
    goto LABEL_36;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v11 = 5LL;
LABEL_37:
    v5 = 0;
LABEL_38:
    UserSetLastError(v11, v9);
    goto LABEL_39;
  }
  v12 = 24LL * v28;
  Size = v12;
  if ( v12 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v10) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v12] > MmUserProbeAddress || &Src[v12] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v13 = (void *)Win32AllocPoolWithQuota(v12, 0x6B697355u);
  v6 = (__int64)v13;
  if ( !v13 )
    ExRaiseStatus(-1073741801);
  memmove(v13, Src, Size);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 912) == -1LL )
  {
    v14 = RIMIDECreatePseudoMouseOrKeyboardDevice(1LL, CurrentProcessWin32Process + 912);
    if ( v14 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v9,
          21,
          31,
          (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
          v14);
      }
      v11 = 1359LL;
      goto LABEL_37;
    }
  }
  v15 = RawInputManagerDeviceObjectResolveHandle(*(char **)(CurrentProcessWin32Process + 912), 3u, 1, &Object);
  if ( v15 >= 0 )
  {
    v7 = Object;
    if ( (*((_DWORD *)Object + 68) & 0x2000) != 0 )
    {
      if ( *((_BYTE *)Object + 136) == 1 )
      {
        v20 = RIMIDEInjectKeyboardFromKeybdInputStruct(Object, v6, v28);
        v21 = v20;
        if ( v20 >= 0 )
          goto LABEL_39;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_d(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v16,
            21,
            35,
            (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
            v20);
        }
        v5 = 0;
        v11 = RtlNtStatusToDosError(v21);
        goto LABEL_38;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_36;
      v19 = 34;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_36:
        v11 = 87LL;
        goto LABEL_37;
      }
      v19 = 33;
    }
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v9,
      21,
      v19,
      (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids);
    goto LABEL_36;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v9,
      21,
      32,
      (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
      v15);
  }
  v5 = 0;
  UserSetLastError(6LL, v9);
  v7 = Object;
LABEL_39:
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v6 )
    Win32FreePool(v6, v16, v18);
  if ( !v5 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    LOBYTE(v23) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v23,
      21,
      36,
      (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
      LastError);
  }
  UserSessionSwitchLeaveCrit(v17);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v27);
  return v5;
}
