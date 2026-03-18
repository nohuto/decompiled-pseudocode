/*
 * XREFs of NtUserInjectPointerInput @ 0x1C0136740
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
 *     WPP_RECORDER_SF_Dd @ 0x1C013B8DC (WPP_RECORDER_SF_Dd.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0169478 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C016B090 (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     UserGetLastError @ 0x1C01CE2F0 (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectPointerInput(char *a1, char *a2, unsigned int a3)
{
  __int64 v3; // r15
  int v5; // ebx
  _QWORD *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r9d
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r12
  int *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r12
  int v22; // ecx
  int v23; // r9d
  __int64 v24; // rcx
  unsigned int v25; // ecx
  int v26; // eax
  NTSTATUS v27; // r15d
  char LastError; // al
  int v29; // edx
  char v31; // [rsp+28h] [rbp-70h]
  char v32; // [rsp+30h] [rbp-68h]
  int *v33; // [rsp+50h] [rbp-48h]
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  __int64 *v35[2]; // [rsp+60h] [rbp-38h] BYREF
  char *Src; // [rsp+A8h] [rbp+10h]
  int v37; // [rsp+B8h] [rbp+20h]

  Src = a2;
  v3 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v32 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqd(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      21,
      37,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      (char)a1,
      v32,
      a3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v35, "InjectPointerInput", 0LL);
  v5 = 1;
  EnterCrit(0LL, 1);
  v6 = 0LL;
  Object = 0LL;
  if ( (unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    if ( !(_DWORD)v3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 38;
LABEL_54:
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v7,
          21,
          v9,
          (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids);
        goto LABEL_55;
      }
      goto LABEL_55;
    }
    v10 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
    if ( v10 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v11,
          21,
          39,
          (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
          v10);
      }
      v5 = 0;
      UserSetLastError(6LL, v11);
      v6 = Object;
      goto LABEL_57;
    }
    v6 = Object;
    v7 = 0x2000LL;
    if ( (*((_DWORD *)Object + 68) & 0x2000) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 40;
        goto LABEL_54;
      }
LABEL_55:
      v8 = 87LL;
      goto LABEL_56;
    }
    if ( (*((_DWORD *)Object + 72) & 0x80u) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 41;
        goto LABEL_54;
      }
      goto LABEL_55;
    }
    v16 = *((_QWORD *)Object + 71);
    v17 = *(unsigned int *)(v16 + 312);
    if ( (v17 & 8) == 0 || (v17 & 0x2000) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 42;
        goto LABEL_54;
      }
      goto LABEL_55;
    }
    v37 = *(_DWORD *)(v16 + 24);
    v18 = 152 * v3;
    if ( 152 * v3 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v17) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v18] > MmUserProbeAddress || &Src[v18] < Src )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v19 = (int *)Win32AllocPoolWithQuota(152 * v3, 0x74697355u);
    v33 = v19;
    if ( !v19 )
      ExRaiseStatus(-1073741801);
    memmove(v19, Src, 152 * v3);
    v21 = (__int64)v33;
    v22 = *v33;
    if ( *v33 == 3 )
    {
      LOBYTE(v22) = v37;
      if ( v37 != 5 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_34:
          v5 = 0;
          v24 = 87LL;
          goto LABEL_35;
        }
        v23 = 44;
        goto LABEL_32;
      }
      if ( (_DWORD)v3 != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_34;
        v23 = 45;
        v31 = v3;
        goto LABEL_33;
      }
LABEL_44:
      v26 = RIMIDEInjectHIDReportFromPointerInfo(v6, v33, (unsigned int)v3);
      v27 = v26;
      if ( v26 >= 0 )
        goto LABEL_58;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v12,
          21,
          49,
          (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
          v26);
      }
      v5 = 0;
      v24 = RtlNtStatusToDosError(v27);
LABEL_35:
      UserSetLastError(v24, v20);
      goto LABEL_58;
    }
    if ( v22 == 2 )
    {
      LOBYTE(v22) = v37;
      if ( v37 == 3 )
      {
        v25 = *(_DWORD *)(v6[71] + 720LL);
        if ( (unsigned int)v3 > v25 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v20) = 2;
            WPP_RECORDER_SF_Dd(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v20,
              21,
              47,
              (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
              v3,
              v25);
          }
          goto LABEL_34;
        }
        goto LABEL_44;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_34;
      v23 = 46;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_34;
      v23 = 48;
    }
LABEL_32:
    v31 = v22;
LABEL_33:
    LOBYTE(v20) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v20,
      21,
      v23,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      v31);
    goto LABEL_34;
  }
  v8 = 5LL;
LABEL_56:
  v5 = 0;
  UserSetLastError(v8, v7);
LABEL_57:
  v21 = 0LL;
LABEL_58:
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( v21 )
    Win32FreePool(v21);
  if ( !v5 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    LOBYTE(v29) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v29,
      21,
      50,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      LastError);
  }
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v35);
  return v5;
}
