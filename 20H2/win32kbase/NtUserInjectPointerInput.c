/*
 * XREFs of NtUserInjectPointerInput @ 0x1C01343F0
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
 *     WPP_RECORDER_SF_Dd @ 0x1C013958C (WPP_RECORDER_SF_Dd.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0166F18 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C0168B30 (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     UserGetLastError @ 0x1C01CBF70 (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectPointerInput(char *a1, char *a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r15
  int v6; // ebx
  _QWORD *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r9d
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r12
  int *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r12
  int v23; // ecx
  int v24; // r9d
  __int64 v25; // rcx
  unsigned int v26; // ecx
  int v27; // eax
  NTSTATUS v28; // r15d
  char LastError; // al
  int v30; // edx
  char v32; // [rsp+28h] [rbp-70h]
  char v33; // [rsp+30h] [rbp-68h]
  int *v34; // [rsp+50h] [rbp-48h]
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  __int64 *v36[2]; // [rsp+60h] [rbp-38h] BYREF
  char *Src; // [rsp+A8h] [rbp+10h]
  int v38; // [rsp+B8h] [rbp+20h]

  Src = a2;
  v4 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v33 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqd(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      21,
      37,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      (char)a1,
      v33,
      a3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v36, "InjectPointerInput", 0LL, a4);
  v6 = 1;
  EnterCrit(0, 1);
  v7 = 0LL;
  Object = 0LL;
  if ( (unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    if ( !(_DWORD)v4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 38;
LABEL_54:
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v8,
          21,
          v10,
          (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids);
        goto LABEL_55;
      }
      goto LABEL_55;
    }
    v11 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v12,
          21,
          39,
          (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
          v11);
      }
      v6 = 0;
      UserSetLastError(6LL, v12);
      v7 = Object;
      goto LABEL_57;
    }
    v7 = Object;
    v8 = 0x2000LL;
    if ( (*((_DWORD *)Object + 68) & 0x2000) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 40;
        goto LABEL_54;
      }
LABEL_55:
      v9 = 87LL;
      goto LABEL_56;
    }
    if ( (*((_DWORD *)Object + 72) & 0x80u) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 41;
        goto LABEL_54;
      }
      goto LABEL_55;
    }
    v17 = *((_QWORD *)Object + 71);
    v18 = *(unsigned int *)(v17 + 312);
    if ( (v18 & 8) == 0 || (v18 & 0x2000) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 42;
        goto LABEL_54;
      }
      goto LABEL_55;
    }
    v38 = *(_DWORD *)(v17 + 24);
    v19 = 152 * v4;
    if ( 152 * v4 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v18) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v19] > MmUserProbeAddress || &Src[v19] < Src )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v20 = (int *)Win32AllocPoolWithQuota(152 * v4, 0x74697355u);
    v34 = v20;
    if ( !v20 )
      ExRaiseStatus(-1073741801);
    memmove(v20, Src, 152 * v4);
    v22 = (__int64)v34;
    v23 = *v34;
    if ( *v34 == 3 )
    {
      LOBYTE(v23) = v38;
      if ( v38 != 5 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_34:
          v6 = 0;
          v25 = 87LL;
          goto LABEL_35;
        }
        v24 = 44;
        goto LABEL_32;
      }
      if ( (_DWORD)v4 != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_34;
        v24 = 45;
        v32 = v4;
        goto LABEL_33;
      }
LABEL_44:
      v27 = RIMIDEInjectHIDReportFromPointerInfo(v7, v34, (unsigned int)v4);
      v28 = v27;
      if ( v27 >= 0 )
        goto LABEL_58;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v13,
          21,
          49,
          (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
          v27);
      }
      v6 = 0;
      v25 = RtlNtStatusToDosError(v28);
LABEL_35:
      UserSetLastError(v25, v21);
      goto LABEL_58;
    }
    if ( v23 == 2 )
    {
      LOBYTE(v23) = v38;
      if ( v38 == 3 )
      {
        v26 = *(_DWORD *)(v7[71] + 720LL);
        if ( (unsigned int)v4 > v26 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v21) = 2;
            WPP_RECORDER_SF_Dd(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v21,
              21,
              47,
              (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
              v4,
              v26);
          }
          goto LABEL_34;
        }
        goto LABEL_44;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_34;
      v24 = 46;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_34;
      v24 = 48;
    }
LABEL_32:
    v32 = v23;
LABEL_33:
    LOBYTE(v21) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v21,
      21,
      v24,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      v32);
    goto LABEL_34;
  }
  v9 = 5LL;
LABEL_56:
  v6 = 0;
  UserSetLastError(v9, v8);
LABEL_57:
  v22 = 0LL;
LABEL_58:
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v22 )
    Win32FreePool(v22);
  if ( !v6 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    LOBYTE(v30) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v30,
      21,
      50,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      LastError);
  }
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v36);
  return v6;
}
