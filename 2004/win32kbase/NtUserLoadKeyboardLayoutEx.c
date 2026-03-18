/*
 * XREFs of NtUserLoadKeyboardLayoutEx @ 0x1C0136F40
 * Callers:
 *     <none>
 * Callees:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0017C60 (xxxSafeLoadKeyboardLayoutEx.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00545EC (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x1C0077098 (ApiSetEditionGetProcessWindowStation.c)
 *     EnterCrit @ 0x1C008B340 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     SetLastNtError @ 0x1C00D242C (SetLastNtError.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  HKL KeyboardLayout; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  struct tagWINDOWSTATION *ProcessWindowStation; // r15
  int v20; // eax
  char *v21; // rsi
  unsigned __int64 v22; // r14
  ULONG64 v23; // rdx
  _BYTE **v24; // rcx
  _OWORD *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  _OWORD *v28; // rcx
  _OWORD *v29; // rax
  int v31; // [rsp+50h] [rbp-6D8h]
  _BYTE v34[792]; // [rsp+98h] [rbp-690h] BYREF
  _BYTE v35[800]; // [rsp+3B0h] [rbp-378h] BYREF
  unsigned __int16 v36[12]; // [rsp+6D0h] [rbp-58h] BYREF

  v10 = a6;
  memset(v35, 0, 0x318uLL);
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
  v20 = *(_DWORD *)v10;
  v31 = *(_DWORD *)v10;
  v21 = *(char **)(v10 + 8);
  if ( ((unsigned __int8)v21 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v22 = (unsigned __int16)v20;
  v23 = (ULONG64)&v21[(unsigned __int16)v20 + 2];
  v24 = (_BYTE **)MmUserProbeAddress;
  if ( v23 < MmUserProbeAddress && (unsigned __int16)v20 <= HIWORD(v31) )
  {
    if ( (v20 & 1) != 0 )
    {
LABEL_13:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v23, v17, v18);
      v24 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_14;
    }
    if ( v23 > (unsigned __int64)v21 )
    {
      KeyboardLayout = 0LL;
      goto LABEL_15;
    }
  }
  if ( (v20 & 1) != 0 )
    goto LABEL_13;
LABEL_14:
  KeyboardLayout = 0LL;
  **v24 = 0;
LABEL_15:
  if ( (int)RtlStringCchCopyNW((char *)v36, 9LL, v21, v22 >> 1) >= 0 )
  {
    if ( a4 )
    {
      if ( (_OWORD *)((char *)a4 + 792) < a4 || (unsigned __int64)a4 + 792 > MmUserProbeAddress )
        a4 = (_OWORD *)MmUserProbeAddress;
      v25 = v34;
      v26 = 6LL;
      v27 = 6LL;
      do
      {
        *v25 = *a4;
        v25[1] = a4[1];
        v25[2] = a4[2];
        v25[3] = a4[3];
        v25[4] = a4[4];
        v25[5] = a4[5];
        v25[6] = a4[6];
        v25 += 8;
        *(v25 - 1) = a4[7];
        a4 += 8;
        --v27;
      }
      while ( v27 );
      *v25 = *a4;
      *((_QWORD *)v25 + 2) = *((_QWORD *)a4 + 2);
      v28 = v35;
      v29 = v34;
      do
      {
        *v28 = *v29;
        v28[1] = v29[1];
        v28[2] = v29[2];
        v28[3] = v29[3];
        v28[4] = v29[4];
        v28[5] = v29[5];
        v28[6] = v29[6];
        v28 += 8;
        *(v28 - 1) = v29[7];
        v29 += 8;
        --v26;
      }
      while ( v26 );
      *v28 = *v29;
      *((_QWORD *)v28 + 2) = *((_QWORD *)v29 + 2);
    }
    KeyboardLayout = xxxSafeLoadKeyboardLayoutEx(
                       ProcessWindowStation,
                       a1,
                       a5,
                       a2,
                       a3,
                       (struct tagKBDTABLE_MULT_INTERNAL *)v35,
                       v36,
                       a7,
                       a8);
  }
LABEL_26:
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return KeyboardLayout;
}
