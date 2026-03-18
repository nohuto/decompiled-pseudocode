/*
 * XREFs of NtUserInjectDeviceInput @ 0x1C0132F70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C0022B30 (WPP_RECORDER_SF_qqd.c)
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
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0166F18 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEInjectDeviceInput @ 0x1C01687BC (RIMIDEInjectDeviceInput.c)
 *     UserGetLastError @ 0x1C01CBF70 (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectDeviceInput(char *a1, char *a2, unsigned int a3, __int64 a4)
{
  char *v4; // r13
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
  __int64 v17; // r9
  size_t v18; // r12
  void *v19; // rax
  int v20; // eax
  NTSTATUS v21; // r13d
  char LastError; // al
  int v23; // edx
  char v25; // [rsp+30h] [rbp-88h]
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  void *v27; // [rsp+58h] [rbp-60h]
  size_t Size; // [rsp+60h] [rbp-58h]
  __int64 *v29[10]; // [rsp+68h] [rbp-50h] BYREF

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v25 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqd(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      21,
      51,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      (char)a1,
      v25,
      a3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v29, "InjectDeviceInput", 0LL, a4);
  v5 = 1;
  EnterCrit(0, 1);
  v7 = 0LL;
  Object = 0LL;
  v8 = 0LL;
  v27 = 0LL;
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
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids);
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
        (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
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
    v18 = Size;
    if ( Size )
    {
      if ( ((PsGetCurrentProcessWow64Process(v13) == 0 ? 3 : 0) & (unsigned __int8)v4) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&v4[v18] > MmUserProbeAddress || &v4[v18] < v4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    Size = (unsigned int)v18;
    v19 = (void *)Win32AllocPoolWithQuota((unsigned int)v18, 0x74697355u);
    v8 = (__int64)v19;
    v27 = v19;
    if ( !v19 )
      ExRaiseStatus(-1073741801);
    memmove(v19, v4, Size);
    v20 = RIMIDEInjectDeviceInput(v7, v8, a3, 4LL);
    v21 = v20;
    if ( v20 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v14,
          21,
          59,
          (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
          v20);
      }
      v5 = 0;
      v10 = RtlNtStatusToDosError(v21);
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
        (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
        v11);
    }
    v5 = 0;
    UserSetLastError(6LL, v12);
    v7 = Object;
  }
LABEL_42:
  if ( v8 )
    Win32FreePool(v8);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( !v5 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    LOBYTE(v23) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v23,
      21,
      60,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      LastError);
  }
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v29);
  return v5;
}
