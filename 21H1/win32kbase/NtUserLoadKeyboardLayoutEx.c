/*
 * XREFs of NtUserLoadKeyboardLayoutEx @ 0x1C013CBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00469AC (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C00578E0 (xxxSafeLoadKeyboardLayoutEx.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x1C006F338 (ApiSetEditionGetProcessWindowStation.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     SetLastNtError @ 0x1C00D1A9C (SetLastNtError.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HKL __fastcall NtUserLoadKeyboardLayoutEx(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        _OWORD *a4,
        HKL a5,
        ULONG64 a6,
        unsigned int a7,
        unsigned int a8)
{
  ULONG64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  HKL KeyboardLayout; // rbx
  struct tagWINDOWSTATION *ProcessWindowStation; // r15
  int v15; // eax
  char *v16; // rsi
  unsigned __int64 v17; // r14
  ULONG64 v18; // rdx
  _BYTE **v19; // rcx
  _OWORD *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  _OWORD *v23; // rcx
  _OWORD *v24; // rax
  int v26; // [rsp+50h] [rbp-6D8h]
  _BYTE v29[792]; // [rsp+98h] [rbp-690h] BYREF
  _BYTE v30[800]; // [rsp+3B0h] [rbp-378h] BYREF
  unsigned __int16 v31[12]; // [rsp+6D0h] [rbp-58h] BYREF

  v10 = a6;
  memset(v30, 0, 0x318uLL);
  EnterCrit(0LL, 1);
  if ( (a8 & 0x1F00FC60) != 0 )
  {
    UserSetLastError(1004LL, v11);
    KeyboardLayout = 0LL;
    goto LABEL_26;
  }
  ProcessWindowStation = (struct tagWINDOWSTATION *)ApiSetEditionGetProcessWindowStation();
  if ( a6 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v15 = *(_DWORD *)v10;
  v26 = *(_DWORD *)v10;
  v16 = *(char **)(v10 + 8);
  if ( ((unsigned __int8)v16 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = (unsigned __int16)v15;
  v18 = (ULONG64)&v16[(unsigned __int16)v15 + 2];
  v19 = (_BYTE **)MmUserProbeAddress;
  if ( v18 < MmUserProbeAddress && (unsigned __int16)v15 <= HIWORD(v26) )
  {
    if ( (v15 & 1) != 0 )
    {
LABEL_13:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress);
      v19 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_14;
    }
    if ( v18 > (unsigned __int64)v16 )
    {
      KeyboardLayout = 0LL;
      goto LABEL_15;
    }
  }
  if ( (v15 & 1) != 0 )
    goto LABEL_13;
LABEL_14:
  KeyboardLayout = 0LL;
  **v19 = 0;
LABEL_15:
  if ( (int)RtlStringCchCopyNW((char *)v31, 9LL, v16, v17 >> 1) >= 0 )
  {
    if ( a4 )
    {
      if ( (_OWORD *)((char *)a4 + 792) < a4 || (unsigned __int64)a4 + 792 > MmUserProbeAddress )
        a4 = (_OWORD *)MmUserProbeAddress;
      v20 = v29;
      v21 = 6LL;
      v22 = 6LL;
      do
      {
        *v20 = *a4;
        v20[1] = a4[1];
        v20[2] = a4[2];
        v20[3] = a4[3];
        v20[4] = a4[4];
        v20[5] = a4[5];
        v20[6] = a4[6];
        v20 += 8;
        *(v20 - 1) = a4[7];
        a4 += 8;
        --v22;
      }
      while ( v22 );
      *v20 = *a4;
      *((_QWORD *)v20 + 2) = *((_QWORD *)a4 + 2);
      v23 = v30;
      v24 = v29;
      do
      {
        *v23 = *v24;
        v23[1] = v24[1];
        v23[2] = v24[2];
        v23[3] = v24[3];
        v23[4] = v24[4];
        v23[5] = v24[5];
        v23[6] = v24[6];
        v23 += 8;
        *(v23 - 1) = v24[7];
        v24 += 8;
        --v21;
      }
      while ( v21 );
      *v23 = *v24;
      *((_QWORD *)v23 + 2) = *((_QWORD *)v24 + 2);
    }
    KeyboardLayout = xxxSafeLoadKeyboardLayoutEx(
                       ProcessWindowStation,
                       a1,
                       a5,
                       a2,
                       a3,
                       (struct tagKBDTABLE_MULT_INTERNAL *)v30,
                       v31,
                       a7,
                       a8);
  }
LABEL_26:
  UserSessionSwitchLeaveCrit(v12);
  return KeyboardLayout;
}
