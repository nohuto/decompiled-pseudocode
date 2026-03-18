/*
 * XREFs of NtUserInjectDeviceInput @ 0x1C013AF60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C005A2F4 (WPP_RECORDER_SF_qqd.c)
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
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C016F7C8 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEInjectDeviceInput @ 0x1C017106C (RIMIDEInjectDeviceInput.c)
 *     UserGetLastError @ 0x1C01D4270 (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectDeviceInput(char *a1, char *a2, unsigned int a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  PVOID v7; // r15
  __int64 v8; // r12
  int v9; // r9d
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  size_t v17; // r12
  void *v18; // rax
  int v19; // eax
  NTSTATUS v20; // r13d
  char LastError; // al
  int v22; // edx
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  void *v25; // [rsp+58h] [rbp-60h]
  size_t Size; // [rsp+60h] [rbp-58h]
  __int64 *v27[10]; // [rsp+68h] [rbp-50h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqd(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      0x15u,
      0x33u,
      (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
      a1,
      a2,
      a3);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v27, "InjectDeviceInput", 0LL, a4);
  v5 = 1;
  EnterCrit(0LL, 1);
  v7 = 0LL;
  Object = 0LL;
  v8 = 0LL;
  v25 = 0LL;
  if ( !a3 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_39:
      v10 = 87LL;
      goto LABEL_40;
    }
    v9 = 52;
LABEL_6:
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v6,
      21,
      v9,
      (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids);
    goto LABEL_39;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v10 = 5LL;
LABEL_40:
    v5 = 0;
LABEL_41:
    UserSetLastError(v10, v6);
    goto LABEL_42;
  }
  v6 = a3;
  Size = 12LL * a3;
  if ( Size > 0xFFFFFFFF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v6,
        21,
        53,
        (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
        a3);
    }
    goto LABEL_39;
  }
  v11 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v11 >= 0 )
  {
    v7 = Object;
    v6 = 0x2000LL;
    if ( (*((_DWORD *)Object + 68) & 0x2000) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_39;
      v9 = 55;
      goto LABEL_6;
    }
    if ( *((_BYTE *)Object + 136) != 2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_39;
      v9 = 56;
      goto LABEL_6;
    }
    if ( (*((_DWORD *)Object + 72) & 0x80u) != 0 )
    {
      v13 = *(unsigned int *)(*((_QWORD *)Object + 71) + 312LL);
      if ( (v13 & 8) != 0 && (v13 & 0x2000) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_39;
        v9 = 57;
        goto LABEL_6;
      }
    }
    v17 = Size;
    if ( Size )
    {
      if ( ((PsGetCurrentProcessWow64Process(v13) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v17] > MmUserProbeAddress || &a2[v17] < a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    Size = (unsigned int)v17;
    v18 = (void *)Win32AllocPoolWithQuota((unsigned int)v17, 0x74697355u);
    v8 = (__int64)v18;
    v25 = v18;
    if ( !v18 )
      ExRaiseStatus(-1073741801);
    memmove(v18, a2, Size);
    v19 = RIMIDEInjectDeviceInput(v7, v8, a3, 4LL);
    v20 = v19;
    if ( v19 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v14,
          21,
          59,
          (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
          v19);
      }
      v5 = 0;
      v10 = RtlNtStatusToDosError(v20);
      goto LABEL_41;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v12,
        21,
        54,
        (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
        v11);
    }
    v5 = 0;
    UserSetLastError(6LL, v12);
    v7 = Object;
  }
LABEL_42:
  if ( v8 )
    Win32FreePool(v8, v14, v16);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( !v5 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    LOBYTE(v22) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v22,
      21,
      60,
      (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
      LastError);
  }
  UserSessionSwitchLeaveCrit(v15);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v27);
  return v5;
}
