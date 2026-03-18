/*
 * XREFs of NtUserInjectPointerInput @ 0x1C013C3E0
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
 *     WPP_RECORDER_SF_Dd @ 0x1C014157C (WPP_RECORDER_SF_Dd.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C016F7C8 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C01713E0 (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     UserGetLastError @ 0x1C01D4270 (UserGetLastError.c)
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
  int *v32; // [rsp+50h] [rbp-48h]
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  __int64 *v34[2]; // [rsp+60h] [rbp-38h] BYREF
  int v36; // [rsp+B8h] [rbp+20h]

  v4 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqd(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      0x15u,
      0x25u,
      (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
      a1,
      a2,
      a3);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v34, "InjectPointerInput", 0LL, a4);
  v6 = 1;
  EnterCrit(0LL, 1);
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
          (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids);
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
          (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
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
    v16 = *((_QWORD *)Object + 71);
    v17 = *(unsigned int *)(v16 + 312);
    if ( (v17 & 8) == 0 || (v17 & 0x2000) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 42;
        goto LABEL_54;
      }
      goto LABEL_55;
    }
    v36 = *(_DWORD *)(v16 + 24);
    v18 = 152 * v4;
    if ( 152 * v4 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v17) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v18] > MmUserProbeAddress || &a2[v18] < a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v19 = (int *)Win32AllocPoolWithQuota(152 * v4, 0x74697355u);
    v32 = v19;
    if ( !v19 )
      ExRaiseStatus(-1073741801);
    memmove(v19, a2, 152 * v4);
    v21 = (__int64)v32;
    v22 = *v32;
    if ( *v32 == 3 )
    {
      LOBYTE(v22) = v36;
      if ( v36 != 5 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_34:
          v6 = 0;
          v24 = 87LL;
          goto LABEL_35;
        }
        v23 = 44;
        goto LABEL_32;
      }
      if ( (_DWORD)v4 != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_34;
        v23 = 45;
        v31 = v4;
        goto LABEL_33;
      }
LABEL_44:
      v26 = RIMIDEInjectHIDReportFromPointerInfo(v7, v32, (unsigned int)v4);
      v27 = v26;
      if ( v26 >= 0 )
        goto LABEL_58;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v13,
          21,
          49,
          (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
          v26);
      }
      v6 = 0;
      v24 = RtlNtStatusToDosError(v27);
LABEL_35:
      UserSetLastError(v24, v20);
      goto LABEL_58;
    }
    if ( v22 == 2 )
    {
      LOBYTE(v22) = v36;
      if ( v36 == 3 )
      {
        v25 = *(_DWORD *)(v7[71] + 720LL);
        if ( (unsigned int)v4 > v25 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v20) = 2;
            WPP_RECORDER_SF_Dd(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v20,
              21,
              47,
              (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
              v4,
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
      (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
      v31);
    goto LABEL_34;
  }
  v9 = 5LL;
LABEL_56:
  v6 = 0;
  UserSetLastError(v9, v8);
LABEL_57:
  v21 = 0LL;
LABEL_58:
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v21 )
    Win32FreePool(v21, v13, v15);
  if ( !v6 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    LOBYTE(v29) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v29,
      21,
      50,
      (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
      LastError);
  }
  UserSessionSwitchLeaveCrit(v14);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v34);
  return v6;
}
