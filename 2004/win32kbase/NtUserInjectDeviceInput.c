/*
 * XREFs of NtUserInjectDeviceInput @ 0x1C01352C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C00167E0 (WPP_RECORDER_SF_qqd.c)
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
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0169478 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEInjectDeviceInput @ 0x1C016AD1C (RIMIDEInjectDeviceInput.c)
 *     UserGetLastError @ 0x1C01CE2F0 (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectDeviceInput(char *a1, char *a2, unsigned int a3)
{
  char *v3; // r13
  int v4; // ebx
  __int64 v5; // rdx
  PVOID v6; // r15
  __int64 v7; // r12
  int v8; // r9d
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  size_t v17; // r12
  void *v18; // rax
  int v19; // eax
  NTSTATUS v20; // r13d
  char LastError; // al
  int v22; // edx
  char v24; // [rsp+30h] [rbp-88h]
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  void *v26; // [rsp+58h] [rbp-60h]
  size_t Size; // [rsp+60h] [rbp-58h]
  __int64 *v28[10]; // [rsp+68h] [rbp-50h] BYREF

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqd(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      21,
      51,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      (char)a1,
      v24,
      a3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v28, "InjectDeviceInput", 0LL);
  v4 = 1;
  EnterCrit(0LL, 1);
  v6 = 0LL;
  Object = 0LL;
  v7 = 0LL;
  v26 = 0LL;
  if ( !a3 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_39:
      v9 = 87LL;
      goto LABEL_40;
    }
    v8 = 52;
LABEL_6:
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v5,
      21,
      v8,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids);
    goto LABEL_39;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v9 = 5LL;
LABEL_40:
    v4 = 0;
LABEL_41:
    UserSetLastError(v9, v5);
    goto LABEL_42;
  }
  v5 = a3;
  Size = 12LL * a3;
  if ( Size > 0xFFFFFFFF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v5,
        21,
        53,
        (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
        a3);
    }
    goto LABEL_39;
  }
  v10 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v10 >= 0 )
  {
    v6 = Object;
    v5 = 0x2000LL;
    if ( (*((_DWORD *)Object + 68) & 0x2000) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_39;
      v8 = 55;
      goto LABEL_6;
    }
    if ( *((_BYTE *)Object + 136) != 2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_39;
      v8 = 56;
      goto LABEL_6;
    }
    if ( (*((_DWORD *)Object + 72) & 0x80u) != 0 )
    {
      v12 = *(unsigned int *)(*((_QWORD *)Object + 71) + 312LL);
      if ( (v12 & 8) != 0 && (v12 & 0x2000) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_39;
        v8 = 57;
        goto LABEL_6;
      }
    }
    v17 = Size;
    if ( Size )
    {
      if ( ((PsGetCurrentProcessWow64Process(v12) == 0 ? 3 : 0) & (unsigned __int8)v3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&v3[v17] > MmUserProbeAddress || &v3[v17] < v3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    Size = (unsigned int)v17;
    v18 = (void *)Win32AllocPoolWithQuota((unsigned int)v17, 0x74697355u);
    v7 = (__int64)v18;
    v26 = v18;
    if ( !v18 )
      ExRaiseStatus(-1073741801);
    memmove(v18, v3, Size);
    v19 = RIMIDEInjectDeviceInput(v6, v7, a3, 4LL);
    v20 = v19;
    if ( v19 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v13,
          21,
          59,
          (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
          v19);
      }
      v4 = 0;
      v9 = RtlNtStatusToDosError(v20);
      goto LABEL_41;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v11,
        21,
        54,
        (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
        v10);
    }
    v4 = 0;
    UserSetLastError(6LL, v11);
    v6 = Object;
  }
LABEL_42:
  if ( v7 )
    Win32FreePool(v7);
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( !v4 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    LOBYTE(v22) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v22,
      21,
      60,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      LastError);
  }
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v28);
  return v4;
}
