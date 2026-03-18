/*
 * XREFs of _RegisterUserApiHook @ 0x1C0127C48
 * Callers:
 *     NtUserRegisterUserApiHook @ 0x1C0127BC0 (NtUserRegisterUserApiHook.c)
 * Callees:
 *     IsPrivileged @ 0x1C001A7F0 (IsPrivileged.c)
 *     RemoveHmodDependency @ 0x1C0074F5C (RemoveHmodDependency.c)
 *     AddHmodDependency @ 0x1C0074FE8 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C007502C (GetHmodTableIndex.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0094684 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RegisterUserApiHook(unsigned int *a1, __int64 a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int *v6; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  char *v13; // rbx
  ULONG64 v14; // rdx
  _BYTE **v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  char *v19; // rbx
  ULONG64 v20; // rdx
  _BYTE **v21; // rax
  int HmodTableIndex; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v31; // [rsp+20h] [rbp-38h]

  v6 = (unsigned int *)a2;
  if ( gihmodUserApiHook >= 0
    || (unsigned __int8)IsRestricted(KeGetCurrentThread())
    || (v9 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v8, a2, a3) + 780), (_DWORD)v9 != luidSystem[0])
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9, a2, a3),
        a2 = (unsigned int)luidSystem[1],
        *(_DWORD *)(CurrentProcessWin32Process + 784) != (_DWORD)a2)
    || !(unsigned int)IsPrivileged(psTcb) )
  {
    v23 = 5LL;
    goto LABEL_34;
  }
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (unsigned int *)MmUserProbeAddress;
  v12 = *v6;
  v31 = *v6;
  v13 = (char *)*((_QWORD *)v6 + 1);
  if ( ((unsigned __int8)v13 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (ULONG64)&v13[(unsigned __int16)v12 + 2];
  v15 = (_BYTE **)MmUserProbeAddress;
  if ( v14 < MmUserProbeAddress && (unsigned __int16)v12 <= HIWORD(v31) )
  {
    if ( (v12 & 1) != 0 )
    {
LABEL_15:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v14, a3, v11);
      v15 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_16;
    }
    if ( v14 > (unsigned __int64)v13 )
      goto LABEL_17;
  }
  if ( (v12 & 1) != 0 )
    goto LABEL_15;
LABEL_16:
  **v15 = 0;
LABEL_17:
  RtlStringCchCopyW((char *)gszFunctionUserApiHook, 260LL, v13);
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (unsigned int *)MmUserProbeAddress;
  v18 = *a4;
  v19 = (char *)*((_QWORD *)a4 + 1);
  if ( ((unsigned __int8)v19 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v20 = (ULONG64)&v19[(unsigned __int16)v18 + 2];
  v21 = (_BYTE **)MmUserProbeAddress;
  if ( v20 < MmUserProbeAddress && (unsigned __int16)v18 <= (unsigned __int16)HIWORD(*a4) )
  {
    if ( (v18 & 1) != 0 )
    {
LABEL_26:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v20, v16, v17);
      v21 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_27;
    }
    if ( v20 > (unsigned __int64)v19 )
      goto LABEL_28;
  }
  if ( (v18 & 1) != 0 )
    goto LABEL_26;
LABEL_27:
  **v21 = 0;
LABEL_28:
  RtlStringCchCopyW((char *)gszFunctionUserApiHookWOW, 260LL, v19);
  HmodTableIndex = GetHmodTableIndex(a1);
  gihmodUserApiHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v23 = 126LL;
LABEL_34:
    UserSetLastError(v23, a2, (__int64)a3);
    return 0LL;
  }
  AddHmodDependency(HmodTableIndex);
  v24 = GetHmodTableIndex(a3);
  gihmodUserApiHookWOW = v24;
  if ( v24 != -1 )
  {
    AddHmodDependency(v24);
    gppiUserApiHook = PsGetCurrentProcessWin32Process(v28, v27, v29);
    _InterlockedOr(gpsi, 0x10u);
    return 1LL;
  }
  UserSetLastError(126LL, v25, v26);
  RemoveHmodDependency(gihmodUserApiHook);
  gihmodUserApiHook = -1;
  return 0LL;
}
